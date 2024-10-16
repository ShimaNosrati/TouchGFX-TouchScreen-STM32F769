/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDHEAPBASE_HPP
#define FRONTENDHEAPBASE_HPP

#include <common/Meta.hpp>
#include <common/Partition.hpp>
#include <mvp/MVPHeap.hpp>

#include <touchgfx/transitions/NoTransition.hpp>
#include <touchgfx/transitions/CoverTransition.hpp>
#include <touchgfx/transitions/SlideTransition.hpp>

#include <gui/common/FrontendApplication.hpp>
#include <gui/model/Model.hpp>

#include <gui/logo_screen_screen/Logo_ScreenView.hpp>
#include <gui/logo_screen_screen/Logo_ScreenPresenter.hpp>
#include <gui/motordata_screen/MotorDataView.hpp>
#include <gui/motordata_screen/MotorDataPresenter.hpp>
#include <gui/blank_screen/BlankView.hpp>
#include <gui/blank_screen/BlankPresenter.hpp>


/**
 * This class provides the memory that shall be used for memory allocations
 * in the frontend. A single instance of the FrontendHeap is allocated once (in heap
 * memory), and all other frontend objects such as views, presenters and data model are
 * allocated within the scope of this FrontendHeap. As such, the RAM usage of the entire
 * user interface is sizeof(FrontendHeap).
 *
 * @note The FrontendHeap reserves memory for the most memory-consuming presenter and
 * view only. The largest of these classes are determined at compile-time using template
 * magic. As such, it is important to add all presenters, views and transitions to the
 * type lists in this class.
 *
 */
class FrontendHeapBase : public touchgfx::MVPHeap
{
public:
    /**
     * A list of all view types. Must end with meta::Nil.
     * @note All view types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< Logo_ScreenView,
            touchgfx::meta::TypeList< MotorDataView,
            touchgfx::meta::TypeList< BlankView,
            touchgfx::meta::Nil > >
            > GeneratedViewTypes;

    /**
     * Determine (compile time) the View type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedViewTypes >::type MaxGeneratedViewType;

    /**
     * A list of all presenter types. Must end with meta::Nil.
     * @note All presenter types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< Logo_ScreenPresenter,
            touchgfx::meta::TypeList< MotorDataPresenter,
            touchgfx::meta::TypeList< BlankPresenter,
            touchgfx::meta::Nil > >
            > GeneratedPresenterTypes;

    /**
     * Determine (compile time) the Presenter type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedPresenterTypes >::type MaxGeneratedPresenterType;

    /**
     * A list of all transition types. Must end with meta::Nil.
     * @note All transition types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< touchgfx::NoTransition,
            touchgfx::meta::TypeList< CoverTransition<EAST>,
            touchgfx::meta::TypeList< SlideTransition<EAST>,
            touchgfx::meta::TypeList< SlideTransition<WEST>,
            touchgfx::meta::Nil > > >
            > GeneratedTransitionTypes;

    /**
     * Determine (compile time) the Transition type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedTransitionTypes >::type MaxGeneratedTransitionType;

    virtual void gotoStartScreen(FrontendApplication& app)
    {
        app.gotoLogo_ScreenScreenNoTransition();
    }
protected:
    FrontendHeapBase(touchgfx::AbstractPartition& presenters, touchgfx::AbstractPartition& views, touchgfx::AbstractPartition& transitions, FrontendApplication& app)
        : MVPHeap(presenters, views, transitions, app)
    {

    }

};

#endif // FRONTENDHEAPBASE_HPP
