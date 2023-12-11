#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/EventBasedScheduler.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *EventBasedScheduler::class$ = NULL;
          jmethodID *EventBasedScheduler::mids$ = NULL;
          bool EventBasedScheduler::live$ = false;

          jclass EventBasedScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/EventBasedScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_816bd7dfa01bdc9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;Lorg/orekit/propagation/Propagator;Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/estimation/measurements/generation/SignSemantic;)V");
              mids$[mid_measurementIsFeasible_981023bfa4a8a093] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventBasedScheduler::EventBasedScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1, const ::org::orekit::propagation::Propagator & a2, const ::org::orekit::propagation::events::EventDetector & a3, const ::org::orekit::estimation::measurements::generation::SignSemantic & a4) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_816bd7dfa01bdc9d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          jboolean EventBasedScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_981023bfa4a8a093], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args);
          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg);
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data);
          static PyGetSetDef t_EventBasedScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_EventBasedScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventBasedScheduler__methods_[] = {
            DECLARE_METHOD(t_EventBasedScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_EventBasedScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventBasedScheduler)[] = {
            { Py_tp_methods, t_EventBasedScheduler__methods_ },
            { Py_tp_init, (void *) t_EventBasedScheduler_init_ },
            { Py_tp_getset, t_EventBasedScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventBasedScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(EventBasedScheduler, t_EventBasedScheduler, EventBasedScheduler);
          PyObject *t_EventBasedScheduler::wrap_Object(const EventBasedScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_EventBasedScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_EventBasedScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventBasedScheduler), &PY_TYPE_DEF(EventBasedScheduler), module, "EventBasedScheduler", 0);
          }

          void t_EventBasedScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "class_", make_descriptor(EventBasedScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "wrapfn_", make_descriptor(t_EventBasedScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventBasedScheduler::initializeClass, 1)))
              return NULL;
            return t_EventBasedScheduler::wrap_Object(EventBasedScheduler(((t_EventBasedScheduler *) arg)->object.this$));
          }
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventBasedScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ::org::orekit::propagation::Propagator a2((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a3((jobject) NULL);
            ::org::orekit::estimation::measurements::generation::SignSemantic a4((jobject) NULL);
            PyTypeObject **p4;
            EventBasedScheduler object((jobject) NULL);

            if (!parseArgs(args, "KkkkK", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::estimation::measurements::generation::SignSemantic::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::estimation::measurements::generation::t_SignSemantic::parameters_))
            {
              INT_CALL(object = EventBasedScheduler(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/util/List.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *NumericalPropagator::class$ = NULL;
        jmethodID *NumericalPropagator::mids$ = NULL;
        bool NumericalPropagator::live$ = false;

        jclass NumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/NumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb1ae62b5d826baa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
            mids$[mid_init$_f44f1f23922eb43b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_e37f41a34246ae45] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_0d9551367f7ecdef] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_0640e6acf969ed28] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_ed2afdb8506b9742] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_8655761ebf04b503] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setMu_10f281d777284cea] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setOrbitType_6ccfc646a24c9722] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_44c283653315b1a7] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_c9e850ea52a2bc82] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/utils/AbsolutePVCoordinates;)[[D");
            mids$[mid_tolerances_bdf312e7fcba78d5] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_fe3b8e7f346d7253] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_createMapper_31b084497c320ed2] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_beforeIntegration_0472264ad6f40bc2] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getMainStateEquations_4a2f137b7a0c1747] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpStmAndJacobianGenerators_0640e6acf969ed28] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_bb1ae62b5d826baa, a0.this$)) {}

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f44f1f23922eb43b, a0.this$, a1.this$)) {}

        void NumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_e37f41a34246ae45], a0.this$);
        }

        ::java::util::List NumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_0d9551367f7ecdef]));
        }

        ::org::orekit::orbits::OrbitType NumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates NumericalPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType NumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        void NumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_0640e6acf969ed28]);
        }

        void NumericalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
        }

        void NumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_ed2afdb8506b9742], a0);
        }

        void NumericalPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_8655761ebf04b503], a0.this$);
        }

        void NumericalPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_10f281d777284cea], a0);
        }

        void NumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_6ccfc646a24c9722], a0.this$);
        }

        void NumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_44c283653315b1a7], a0.this$);
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::utils::AbsolutePVCoordinates & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_c9e850ea52a2bc82], a0, a1.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_bdf312e7fcba78d5], a0, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_fe3b8e7f346d7253], a0, a1, a2.this$, a3.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_NumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_NumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_NumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, positionAngleType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagator)[] = {
          { Py_tp_methods, t_NumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagator_init_ },
          { Py_tp_getset, t_NumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(NumericalPropagator, t_NumericalPropagator, NumericalPropagator);

        void t_NumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagator), &PY_TYPE_DEF(NumericalPropagator), module, "NumericalPropagator", 0);
        }

        void t_NumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "class_", make_descriptor(NumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "wrapfn_", make_descriptor(t_NumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagator::wrap_Object(NumericalPropagator(((t_NumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
              {
                INT_CALL(object = NumericalPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NumericalPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args)
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::utils::AbsolutePVCoordinates a1((jobject) NULL);
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::Orbit a2((jobject) NULL);
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/ConvergenceCheckerOrMultiplexer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerOrMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerOrMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerOrMultiplexer::live$ = false;

      jclass ConvergenceCheckerOrMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerOrMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_a643aa1e5ed43cf0] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerOrMultiplexer::ConvergenceCheckerOrMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

      jboolean ConvergenceCheckerOrMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_a643aa1e5ed43cf0], a0, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerOrMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerOrMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerOrMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerOrMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerOrMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerOrMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerOrMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerOrMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerOrMultiplexer, t_ConvergenceCheckerOrMultiplexer, ConvergenceCheckerOrMultiplexer);
      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_Object(const ConvergenceCheckerOrMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerOrMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerOrMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerOrMultiplexer), module, "ConvergenceCheckerOrMultiplexer", 0);
      }

      void t_ConvergenceCheckerOrMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "class_", make_descriptor(ConvergenceCheckerOrMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerOrMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerOrMultiplexer::wrap_Object(ConvergenceCheckerOrMultiplexer(((t_ConvergenceCheckerOrMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerOrMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerOrMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/MillerUpdatingRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MillerUpdatingRegression::class$ = NULL;
        jmethodID *MillerUpdatingRegression::mids$ = NULL;
        bool MillerUpdatingRegression::live$ = false;

        jclass MillerUpdatingRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MillerUpdatingRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_746492bb94848925] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_init$_6aa5604f729b68b3] = env->getMethodID(cls, "<init>", "(IZD)V");
            mids$[mid_addObservation_3682f2e0c8382fe5] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_122207bd161e9ddc] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDiagonalOfHatMatrix_86c4a0582e0747ce] = env->getMethodID(cls, "getDiagonalOfHatMatrix", "([D)D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getOrderOfRegressors_1b41cf9ebf653611] = env->getMethodID(cls, "getOrderOfRegressors", "()[I");
            mids$[mid_getPartialCorrelations_1da5c9e77f24f269] = env->getMethodID(cls, "getPartialCorrelations", "(I)[D");
            mids$[mid_hasIntercept_89b302893bdbe1f1] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_2f78c8eefa6215e0] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_bfd11e26913ff479] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_422f9ba585c59080] = env->getMethodID(cls, "regress", "(I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_746492bb94848925, a0, a1)) {}

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6aa5604f729b68b3, a0, a1, a2)) {}

        void MillerUpdatingRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_3682f2e0c8382fe5], a0.this$, a1);
        }

        void MillerUpdatingRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_122207bd161e9ddc], a0.this$, a1.this$);
        }

        void MillerUpdatingRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        jdouble MillerUpdatingRegression::getDiagonalOfHatMatrix(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDiagonalOfHatMatrix_86c4a0582e0747ce], a0.this$);
        }

        jlong MillerUpdatingRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        JArray< jint > MillerUpdatingRegression::getOrderOfRegressors() const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getOrderOfRegressors_1b41cf9ebf653611]));
        }

        JArray< jdouble > MillerUpdatingRegression::getPartialCorrelations(jint a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPartialCorrelations_1da5c9e77f24f269], a0));
        }

        jboolean MillerUpdatingRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_89b302893bdbe1f1]);
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_2f78c8eefa6215e0]));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_bfd11e26913ff479], a0.this$));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(jint a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_422f9ba585c59080], a0));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data);
        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data);
        static PyGetSetDef t_MillerUpdatingRegression__fields_[] = {
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, n),
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, orderOfRegressors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MillerUpdatingRegression__methods_[] = {
          DECLARE_METHOD(t_MillerUpdatingRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getDiagonalOfHatMatrix, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getOrderOfRegressors, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getPartialCorrelations, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MillerUpdatingRegression)[] = {
          { Py_tp_methods, t_MillerUpdatingRegression__methods_ },
          { Py_tp_init, (void *) t_MillerUpdatingRegression_init_ },
          { Py_tp_getset, t_MillerUpdatingRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MillerUpdatingRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MillerUpdatingRegression, t_MillerUpdatingRegression, MillerUpdatingRegression);

        void t_MillerUpdatingRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MillerUpdatingRegression), &PY_TYPE_DEF(MillerUpdatingRegression), module, "MillerUpdatingRegression", 0);
        }

        void t_MillerUpdatingRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "class_", make_descriptor(MillerUpdatingRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "wrapfn_", make_descriptor(t_MillerUpdatingRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MillerUpdatingRegression::initializeClass, 1)))
            return NULL;
          return t_MillerUpdatingRegression::wrap_Object(MillerUpdatingRegression(((t_MillerUpdatingRegression *) arg)->object.this$));
        }
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MillerUpdatingRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jboolean a1;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jdouble a2;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZD", &a0, &a1, &a2))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.getDiagonalOfHatMatrix(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDiagonalOfHatMatrix", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self)
        {
          JArray< jint > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrderOfRegressors());
          return result.wrap();
        }

        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          jint a0;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialCorrelations(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialCorrelations", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data)
        {
          JArray< jint > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrderOfRegressors());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmParser::class$ = NULL;
              jmethodID *OpmParser::mids$ = NULL;
              bool OpmParser::live$ = false;

              jclass OpmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_8424812d0f5a0a71] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/opm/Opm;");
                  mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_d7722dc369ae0874] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Opm OpmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Opm(env->callObjectMethod(this$, mids$[mid_build_8424812d0f5a0a71]));
              }

              jboolean OpmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
              }

              jboolean OpmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
              }

              jboolean OpmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OpmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_d7722dc369ae0874]));
              }

              ::java::util::Map OpmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
              }

              jboolean OpmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
              }

              jboolean OpmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
              }

              jboolean OpmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
              }

              jboolean OpmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
              }

              jboolean OpmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
              }

              jboolean OpmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
              }

              void OpmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {
              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args);
              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data);
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data);
              static PyGetSetDef t_OpmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OpmParser, header),
                DECLARE_GET_FIELD(t_OpmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OpmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmParser__methods_[] = {
                DECLARE_METHOD(t_OpmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OpmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmParser)[] = {
                { Py_tp_methods, t_OpmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OpmParser, t_OpmParser, OpmParser);
              PyObject *t_OpmParser::wrap_Object(const OpmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OpmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OpmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmParser *self = (t_OpmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OpmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmParser), &PY_TYPE_DEF(OpmParser), module, "OpmParser", 0);
              }

              void t_OpmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "class_", make_descriptor(OpmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "wrapfn_", make_descriptor(t_OpmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmParser::initializeClass, 1)))
                  return NULL;
                return t_OpmParser::wrap_Object(OpmParser(((t_OpmParser *) arg)->object.this$));
              }
              static PyObject *t_OpmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmParser_of_(t_OpmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpmParser_build(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::Opm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Opm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OpmParser_finalizeData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OpmParser_finalizeHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OpmParser_finalizeMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OpmParser_getHeader(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OpmParser_getSpecialXmlElementsBuilders(t_OpmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OpmParser_inData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OpmParser_inHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OpmParser_inMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OpmParser_prepareData(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OpmParser_prepareHeader(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OpmParser_prepareMetadata(t_OpmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OpmParser_reset(t_OpmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OpmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OpmParser_get__parameters_(t_OpmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OpmParser_get__header(t_OpmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OpmParser_get__specialXmlElementsBuilders(t_OpmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsBashforthIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthIntegratorBuilder::live$ = false;

        jclass AdamsBashforthIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c4eb928bd0dae600] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegratorBuilder::AdamsBashforthIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c4eb928bd0dae600, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsBashforthIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsBashforthIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegratorBuilder, t_AdamsBashforthIntegratorBuilder, AdamsBashforthIntegratorBuilder);

        void t_AdamsBashforthIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthIntegratorBuilder), module, "AdamsBashforthIntegratorBuilder", 0);
        }

        void t_AdamsBashforthIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "class_", make_descriptor(AdamsBashforthIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegratorBuilder::wrap_Object(AdamsBashforthIntegratorBuilder(((t_AdamsBashforthIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmData::class$ = NULL;
              jmethodID *OcmData::mids$ = NULL;
              bool OcmData::live$ = false;

              jclass OcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d65fd2f8f187f068] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getCovarianceBlocks_0d9551367f7ecdef] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_0d9551367f7ecdef] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getOrbitDeterminationBlock_eae1a48f5b9fc8a6] = env->getMethodID(cls, "getOrbitDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;");
                  mids$[mid_getPerturbationsBlock_b70855f0d03f1c18] = env->getMethodID(cls, "getPerturbationsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;");
                  mids$[mid_getPhysicBlock_4c83fa949f959ff3] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;");
                  mids$[mid_getTrajectoryBlocks_0d9551367f7ecdef] = env->getMethodID(cls, "getTrajectoryBlocks", "()Ljava/util/List;");
                  mids$[mid_getUserDefinedBlock_e8dd2483e310f990] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmData::OcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a4, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a5, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d65fd2f8f187f068, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              ::java::util::List OcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_0d9551367f7ecdef]));
              }

              ::java::util::List OcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination OcmData::getOrbitDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination(env->callObjectMethod(this$, mids$[mid_getOrbitDeterminationBlock_eae1a48f5b9fc8a6]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations OcmData::getPerturbationsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations(env->callObjectMethod(this$, mids$[mid_getPerturbationsBlock_b70855f0d03f1c18]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties OcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_4c83fa949f959ff3]));
              }

              ::java::util::List OcmData::getTrajectoryBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryBlocks_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_e8dd2483e310f990]));
              }

              void OcmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self);
              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self);
              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg);
              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data);
              static PyGetSetDef t_OcmData__fields_[] = {
                DECLARE_GET_FIELD(t_OcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_OcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_OcmData, orbitDeterminationBlock),
                DECLARE_GET_FIELD(t_OcmData, perturbationsBlock),
                DECLARE_GET_FIELD(t_OcmData, physicBlock),
                DECLARE_GET_FIELD(t_OcmData, trajectoryBlocks),
                DECLARE_GET_FIELD(t_OcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmData__methods_[] = {
                DECLARE_METHOD(t_OcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getOrbitDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPerturbationsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getTrajectoryBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmData)[] = {
                { Py_tp_methods, t_OcmData__methods_ },
                { Py_tp_init, (void *) t_OcmData_init_ },
                { Py_tp_getset, t_OcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmData, t_OcmData, OcmData);

              void t_OcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmData), &PY_TYPE_DEF(OcmData), module, "OcmData", 0);
              }

              void t_OcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "class_", make_descriptor(OcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "wrapfn_", make_descriptor(t_OcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmData::initializeClass, 1)))
                  return NULL;
                return t_OcmData::wrap_Object(OcmData(((t_OcmData *) arg)->object.this$));
              }
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a6((jobject) NULL);
                OcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = OcmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovarianceHistory));
              }

              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuverHistory));
              }

              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations result((jobject) NULL);
                OBJ_CALL(result = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations value((jobject) NULL);
                OBJ_CALL(value = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeFieldIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeFieldIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeFieldIntegrator::live$ = false;

        jclass AdaptiveStepsizeFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_933dc389e2279ff5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_0850a45e18def3bf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_557b8123390d8d0c] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_557b8123390d8d0c] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_a77925025a7153e8] = env->getMethodID(cls, "initializeStep", "(ZI[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)D");
            mids$[mid_setInitialStepSize_10f281d777284cea] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_c13e969c0f339014] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_bc3712e794ac7a81] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_getStepSizeHelper_3d29ab6ec5ee2607] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_sanityChecks_ee2fc63f2a26c007] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetInternalState_0640e6acf969ed28] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_933dc389e2279ff5, a0.this$, a1.this$, a2, a3, a4.this$, a5.this$)) {}

        AdaptiveStepsizeFieldIntegrator::AdaptiveStepsizeFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::AbstractFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0850a45e18def3bf, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        jdouble AdaptiveStepsizeFieldIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_557b8123390d8d0c]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_557b8123390d8d0c]);
        }

        jdouble AdaptiveStepsizeFieldIntegrator::initializeStep(jboolean a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a3, const ::org::hipparchus::ode::FieldEquationsMapper & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_a77925025a7153e8], a0, a1, a2.this$, a3.this$, a4.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_10f281d777284cea], a0);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_c13e969c0f339014], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeFieldIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_bc3712e794ac7a81], a0, a1, a2, a3);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeFieldIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeFieldIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, minStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeFieldIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeFieldIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeFieldIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeFieldIntegrator, t_AdaptiveStepsizeFieldIntegrator, AdaptiveStepsizeFieldIntegrator);
        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_Object(const AdaptiveStepsizeFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdaptiveStepsizeFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdaptiveStepsizeFieldIntegrator *self = (t_AdaptiveStepsizeFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdaptiveStepsizeFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeFieldIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeFieldIntegrator), module, "AdaptiveStepsizeFieldIntegrator", 0);
        }

        void t_AdaptiveStepsizeFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "class_", make_descriptor(AdaptiveStepsizeFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeFieldIntegrator::wrap_Object(AdaptiveStepsizeFieldIntegrator(((t_AdaptiveStepsizeFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_of_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdaptiveStepsizeFieldIntegrator_init_(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdaptiveStepsizeFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdaptiveStepsizeFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMaxStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_getMinStep(t_AdaptiveStepsizeFieldIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_initializeStep(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::ode::FieldEquationsMapper a4((jobject) NULL);
          PyTypeObject **p4;
          jdouble result;

          if (!parseArgs(args, "ZI[KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldEquationsMapper::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a4, &p4, ::org::hipparchus::ode::t_FieldEquationsMapper::parameters_))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setInitialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_setStepSizeControl(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }
        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__parameters_(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static int t_AdaptiveStepsizeFieldIntegrator_set__initialStepSize(t_AdaptiveStepsizeFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__maxStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeFieldIntegrator_get__minStep(t_AdaptiveStepsizeFieldIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedDCBS::class$ = NULL;
        jmethodID *AppliedDCBS::mids$ = NULL;
        bool AppliedDCBS::live$ = false;

        jclass AppliedDCBS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedDCBS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c3b8d2681241227] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgDCBS_3cffd47377eca18a] = env->getMethodID(cls, "getProgDCBS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourceDCBS_3cffd47377eca18a] = env->getMethodID(cls, "getSourceDCBS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedDCBS::AppliedDCBS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c3b8d2681241227, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedDCBS::getProgDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgDCBS_3cffd47377eca18a]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedDCBS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
        }

        ::java::lang::String AppliedDCBS::getSourceDCBS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceDCBS_3cffd47377eca18a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self);
        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data);
        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data);
        static PyGetSetDef t_AppliedDCBS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedDCBS, progDCBS),
          DECLARE_GET_FIELD(t_AppliedDCBS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedDCBS, sourceDCBS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedDCBS__methods_[] = {
          DECLARE_METHOD(t_AppliedDCBS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedDCBS, getProgDCBS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedDCBS, getSourceDCBS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedDCBS)[] = {
          { Py_tp_methods, t_AppliedDCBS__methods_ },
          { Py_tp_init, (void *) t_AppliedDCBS_init_ },
          { Py_tp_getset, t_AppliedDCBS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedDCBS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedDCBS, t_AppliedDCBS, AppliedDCBS);

        void t_AppliedDCBS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedDCBS), &PY_TYPE_DEF(AppliedDCBS), module, "AppliedDCBS", 0);
        }

        void t_AppliedDCBS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "class_", make_descriptor(AppliedDCBS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "wrapfn_", make_descriptor(t_AppliedDCBS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedDCBS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedDCBS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedDCBS::initializeClass, 1)))
            return NULL;
          return t_AppliedDCBS::wrap_Object(AppliedDCBS(((t_AppliedDCBS *) arg)->object.this$));
        }
        static PyObject *t_AppliedDCBS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedDCBS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedDCBS_init_(t_AppliedDCBS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedDCBS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedDCBS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedDCBS_getProgDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_getSatelliteSystem(t_AppliedDCBS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedDCBS_getSourceDCBS(t_AppliedDCBS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceDCBS());
          return j2p(result);
        }

        static PyObject *t_AppliedDCBS_get__progDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgDCBS());
          return j2p(value);
        }

        static PyObject *t_AppliedDCBS_get__satelliteSystem(t_AppliedDCBS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedDCBS_get__sourceDCBS(t_AppliedDCBS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceDCBS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixChangingVisitor::class$ = NULL;
      jmethodID *RealMatrixChangingVisitor::mids$ = NULL;
      bool RealMatrixChangingVisitor::live$ = false;

      jclass RealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_557b8123390d8d0c] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_73f37cd0aafa4920] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_557b8123390d8d0c]);
      }

      void RealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      jdouble RealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_73f37cd0aafa4920], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self);
      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixChangingVisitor, t_RealMatrixChangingVisitor, RealMatrixChangingVisitor);

      void t_RealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixChangingVisitor), &PY_TYPE_DEF(RealMatrixChangingVisitor), module, "RealMatrixChangingVisitor", 0);
      }

      void t_RealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "class_", make_descriptor(RealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_RealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixChangingVisitor::wrap_Object(RealMatrixChangingVisitor(((t_RealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/StopOnDecreasing.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnDecreasing::class$ = NULL;
          jmethodID *StopOnDecreasing::mids$ = NULL;
          bool StopOnDecreasing::live$ = false;

          jclass StopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnDecreasing::StopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action StopOnDecreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c85ac59cb25f2670], a0.this$, a1.this$, a2));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args);

          static PyMethodDef t_StopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnDecreasing)[] = {
            { Py_tp_methods, t_StopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnDecreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnDecreasing, t_StopOnDecreasing, StopOnDecreasing);

          void t_StopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnDecreasing), &PY_TYPE_DEF(StopOnDecreasing), module, "StopOnDecreasing", 0);
          }

          void t_StopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "class_", make_descriptor(StopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "wrapfn_", make_descriptor(t_StopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnDecreasing::wrap_Object(StopOnDecreasing(((t_StopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnDecreasing object((jobject) NULL);

            INT_CALL(object = StopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractNavigationMessage::class$ = NULL;
            jmethodID *AbstractNavigationMessage::mids$ = NULL;
            bool AbstractNavigationMessage::live$ = false;

            jclass AbstractNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_557b8123390d8d0c] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_557b8123390d8d0c] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_557b8123390d8d0c] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_557b8123390d8d0c] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_557b8123390d8d0c] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_557b8123390d8d0c] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_557b8123390d8d0c] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getDeltaN_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaN", "()D");
                mids$[mid_getEpochToc_7a97f7e149e79afb] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getSqrtA_557b8123390d8d0c] = env->getMethodID(cls, "getSqrtA", "()D");
                mids$[mid_getTransmissionTime_557b8123390d8d0c] = env->getMethodID(cls, "getTransmissionTime", "()D");
                mids$[mid_setAf2_10f281d777284cea] = env->getMethodID(cls, "setAf2", "(D)V");
                mids$[mid_setCic_10f281d777284cea] = env->getMethodID(cls, "setCic", "(D)V");
                mids$[mid_setCis_10f281d777284cea] = env->getMethodID(cls, "setCis", "(D)V");
                mids$[mid_setCrc_10f281d777284cea] = env->getMethodID(cls, "setCrc", "(D)V");
                mids$[mid_setCrs_10f281d777284cea] = env->getMethodID(cls, "setCrs", "(D)V");
                mids$[mid_setCuc_10f281d777284cea] = env->getMethodID(cls, "setCuc", "(D)V");
                mids$[mid_setCus_10f281d777284cea] = env->getMethodID(cls, "setCus", "(D)V");
                mids$[mid_setDeltaN_10f281d777284cea] = env->getMethodID(cls, "setDeltaN", "(D)V");
                mids$[mid_setEpochToc_20affcbd28542333] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setIDot_10f281d777284cea] = env->getMethodID(cls, "setIDot", "(D)V");
                mids$[mid_setSqrtA_10f281d777284cea] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setTransmissionTime_10f281d777284cea] = env->getMethodID(cls, "setTransmissionTime", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractNavigationMessage::AbstractNavigationMessage(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

            jdouble AbstractNavigationMessage::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getDeltaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN_557b8123390d8d0c]);
            }

            ::org::orekit::time::AbsoluteDate AbstractNavigationMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_7a97f7e149e79afb]));
            }

            jdouble AbstractNavigationMessage::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getSqrtA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSqrtA_557b8123390d8d0c]);
            }

            jdouble AbstractNavigationMessage::getTransmissionTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_557b8123390d8d0c]);
            }

            void AbstractNavigationMessage::setAf2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf2_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setCic(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCic_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setCis(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCis_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setCrc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrc_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setCrs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrs_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setCuc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCuc_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setCus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCus_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setDeltaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_20affcbd28542333], a0.this$);
            }

            void AbstractNavigationMessage::setIDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIDot_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_10f281d777284cea], a0);
            }

            void AbstractNavigationMessage::setTransmissionTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmissionTime_10f281d777284cea], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data);
            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, af2),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cic),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cis),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crs),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cuc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cus),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, deltaN),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, iDot),
              DECLARE_GET_FIELD(t_AbstractNavigationMessage, meanMotion),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, sqrtA),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, transmissionTime),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getDeltaN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getSqrtA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getTransmissionTime, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, setAf2, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCic, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCis, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrs, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCuc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCus, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setDeltaN, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setIDot, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setSqrtA, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setTransmissionTime, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractNavigationMessage)[] = {
              { Py_tp_methods, t_AbstractNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractNavigationMessage_init_ },
              { Py_tp_getset, t_AbstractNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractNavigationMessage, t_AbstractNavigationMessage, AbstractNavigationMessage);

            void t_AbstractNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractNavigationMessage), &PY_TYPE_DEF(AbstractNavigationMessage), module, "AbstractNavigationMessage", 0);
            }

            void t_AbstractNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "class_", make_descriptor(AbstractNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "wrapfn_", make_descriptor(t_AbstractNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractNavigationMessage::wrap_Object(AbstractNavigationMessage(((t_AbstractNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractNavigationMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSqrtA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf2", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCic(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCic", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCis(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCis", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrs", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCuc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCuc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCus", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTransmissionTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af2", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCic(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cic", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCis(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cis", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crs", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCuc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cuc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cus", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iDot", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSqrtA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTransmissionTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *BooleanDetector::class$ = NULL;
        jmethodID *BooleanDetector::mids$ = NULL;
        bool BooleanDetector::live$ = false;

        jclass BooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/BooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_39beb87557d816ae] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_andCombine_31d87b9a37beb770] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetectors_0d9551367f7ecdef] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_notCombine_b68ec1f6b42d104e] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/NegateDetector;");
            mids$[mid_orCombine_39beb87557d816ae] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_orCombine_31d87b9a37beb770] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_create_48212894f8dc62b9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/BooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BooleanDetector BooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_39beb87557d816ae], a0.this$));
        }

        BooleanDetector BooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_31d87b9a37beb770], a0.this$));
        }

        jdouble BooleanDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::java::util::List BooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_0d9551367f7ecdef]));
        }

        void BooleanDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::NegateDetector BooleanDetector::notCombine(const ::org::orekit::propagation::events::EventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::NegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_b68ec1f6b42d104e], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_39beb87557d816ae], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_31d87b9a37beb770], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self);
        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data);
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data);
        static PyGetSetDef t_BooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_BooleanDetector, detectors),
          DECLARE_GET_FIELD(t_BooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BooleanDetector__methods_[] = {
          DECLARE_METHOD(t_BooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_BooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BooleanDetector)[] = {
          { Py_tp_methods, t_BooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(BooleanDetector, t_BooleanDetector, BooleanDetector);
        PyObject *t_BooleanDetector::wrap_Object(const BooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(BooleanDetector), &PY_TYPE_DEF(BooleanDetector), module, "BooleanDetector", 0);
        }

        void t_BooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "class_", make_descriptor(BooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "wrapfn_", make_descriptor(t_BooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BooleanDetector::initializeClass, 1)))
            return NULL;
          return t_BooleanDetector::wrap_Object(BooleanDetector(((t_BooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::NegateDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_NegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *DateBasedManeuverTriggers::class$ = NULL;
          jmethodID *DateBasedManeuverTriggers::mids$ = NULL;
          bool DateBasedManeuverTriggers::live$ = false;
          ::java::lang::String *DateBasedManeuverTriggers::DEFAULT_NAME = NULL;

          jclass DateBasedManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f22bef3f7be90029] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_init$_c68a5ca0cc166e0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
              mids$[mid_getDuration_557b8123390d8d0c] = env->getMethodID(cls, "getDuration", "()D");
              mids$[mid_getEndDate_7a97f7e149e79afb] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStartDate_7a97f7e149e79afb] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_convertIntervalDetector_11c11f8a5b36a3f9] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_f22bef3f7be90029, a0.this$, a1)) {}

          DateBasedManeuverTriggers::DateBasedManeuverTriggers(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_c68a5ca0cc166e0d, a0.this$, a1.this$, a2)) {}

          jdouble DateBasedManeuverTriggers::getDuration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDuration_557b8123390d8d0c]);
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_7a97f7e149e79afb]));
          }

          ::java::lang::String DateBasedManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          ::java::util::List DateBasedManeuverTriggers::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::orekit::time::AbsoluteDate DateBasedManeuverTriggers::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_7a97f7e149e79afb]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args);
          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args);
          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self);
          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data);
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data);
          static PyGetSetDef t_DateBasedManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, duration),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, endDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, name),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parametersDrivers),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, startDate),
            DECLARE_GET_FIELD(t_DateBasedManeuverTriggers, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DateBasedManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_DateBasedManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, of_, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getDuration, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getName, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_DateBasedManeuverTriggers, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DateBasedManeuverTriggers)[] = {
            { Py_tp_methods, t_DateBasedManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_DateBasedManeuverTriggers_init_ },
            { Py_tp_getset, t_DateBasedManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DateBasedManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(DateBasedManeuverTriggers, t_DateBasedManeuverTriggers, DateBasedManeuverTriggers);
          PyObject *t_DateBasedManeuverTriggers::wrap_Object(const DateBasedManeuverTriggers& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DateBasedManeuverTriggers::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DateBasedManeuverTriggers::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DateBasedManeuverTriggers *self = (t_DateBasedManeuverTriggers *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DateBasedManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(DateBasedManeuverTriggers), &PY_TYPE_DEF(DateBasedManeuverTriggers), module, "DateBasedManeuverTriggers", 0);
          }

          void t_DateBasedManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "class_", make_descriptor(DateBasedManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "wrapfn_", make_descriptor(t_DateBasedManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            env->getClass(DateBasedManeuverTriggers::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DateBasedManeuverTriggers), "DEFAULT_NAME", make_descriptor(j2p(*DateBasedManeuverTriggers::DEFAULT_NAME)));
          }

          static PyObject *t_DateBasedManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DateBasedManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_DateBasedManeuverTriggers::wrap_Object(DateBasedManeuverTriggers(((t_DateBasedManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_DateBasedManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DateBasedManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DateBasedManeuverTriggers_of_(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DateBasedManeuverTriggers_init_(t_DateBasedManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble a1;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;
                DateBasedManeuverTriggers object((jobject) NULL);

                if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DateBasedManeuverTriggers(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DateBasedManeuverTriggers_getDuration(t_DateBasedManeuverTriggers *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDuration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getEndDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DateBasedManeuverTriggers_getName(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getName", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getParametersDrivers(t_DateBasedManeuverTriggers *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(DateBasedManeuverTriggers), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_DateBasedManeuverTriggers_getStartDate(t_DateBasedManeuverTriggers *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          static PyObject *t_DateBasedManeuverTriggers_get__parameters_(t_DateBasedManeuverTriggers *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DateBasedManeuverTriggers_get__duration(t_DateBasedManeuverTriggers *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDuration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__endDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__name(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__parametersDrivers(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DateBasedManeuverTriggers_get__startDate(t_DateBasedManeuverTriggers *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonJ2SquaredModel::class$ = NULL;
            jmethodID *PythonJ2SquaredModel::mids$ = NULL;
            bool PythonJ2SquaredModel::live$ = false;

            jclass PythonJ2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_3cadce1f0ff01a88] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_b35994dcdbf40b4e] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonJ2SquaredModel::PythonJ2SquaredModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonJ2SquaredModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonJ2SquaredModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonJ2SquaredModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self);
            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data);
            static PyGetSetDef t_PythonJ2SquaredModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonJ2SquaredModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonJ2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_PythonJ2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonJ2SquaredModel)[] = {
              { Py_tp_methods, t_PythonJ2SquaredModel__methods_ },
              { Py_tp_init, (void *) t_PythonJ2SquaredModel_init_ },
              { Py_tp_getset, t_PythonJ2SquaredModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonJ2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonJ2SquaredModel, t_PythonJ2SquaredModel, PythonJ2SquaredModel);

            void t_PythonJ2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonJ2SquaredModel), &PY_TYPE_DEF(PythonJ2SquaredModel), module, "PythonJ2SquaredModel", 1);
            }

            void t_PythonJ2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "class_", make_descriptor(PythonJ2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "wrapfn_", make_descriptor(t_PythonJ2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonJ2SquaredModel::initializeClass);
              JNINativeMethod methods[] = {
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0 },
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1 },
                { "pythonDecRef", "()V", (void *) t_PythonJ2SquaredModel_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonJ2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_PythonJ2SquaredModel::wrap_Object(PythonJ2SquaredModel(((t_PythonJ2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonJ2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds)
            {
              PythonJ2SquaredModel object((jobject) NULL);

              INT_CALL(object = PythonJ2SquaredModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_DSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceKey::class$ = NULL;
            jmethodID *RTNCovarianceKey::mids$ = NULL;
            bool RTNCovarianceKey::live$ = false;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::COMMENT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_THR = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_T = NULL;

            jclass RTNCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_c93747e68be263a4] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)Z");
                mids$[mid_valueOf_89ea04f00a2b6f17] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");
                mids$[mid_values_ce840628a444c420] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                COMMENT = new RTNCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_THR = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean RTNCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_c93747e68be263a4], a0.this$, a1.this$, a2.this$);
            }

            RTNCovarianceKey RTNCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RTNCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_89ea04f00a2b6f17], a0.this$));
            }

            JArray< RTNCovarianceKey > RTNCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RTNCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ce840628a444c420]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data);
            static PyGetSetDef t_RTNCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_RTNCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceKey)[] = {
              { Py_tp_methods, t_RTNCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RTNCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceKey, t_RTNCovarianceKey, RTNCovarianceKey);
            PyObject *t_RTNCovarianceKey::wrap_Object(const RTNCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RTNCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RTNCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceKey), &PY_TYPE_DEF(RTNCovarianceKey), module, "RTNCovarianceKey", 0);
            }

            void t_RTNCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "class_", make_descriptor(RTNCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "wrapfn_", make_descriptor(t_RTNCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(RTNCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "COMMENT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_THR", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_T)));
            }

            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceKey::wrap_Object(RTNCovarianceKey(((t_RTNCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RTNCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::valueOf(a0));
                return t_RTNCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type)
            {
              JArray< RTNCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_RTNCovarianceKey::wrap_jobject);
            }
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "java/util/List.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistory::class$ = NULL;
              jmethodID *AttitudeStateHistory::mids$ = NULL;
              bool AttitudeStateHistory::live$ = false;

              jclass AttitudeStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_83dfe7ef1f8f7703] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getAngularCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_b44a04493534d299] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAttitudeStates_0d9551367f7ecdef] = env->getMethodID(cls, "getAttitudeStates", "()Ljava/util/List;");
                  mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_81be42d28961bd53] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;");
                  mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistory::AttitudeStateHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83dfe7ef1f8f7703, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeStateHistory::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_0d9551367f7ecdef]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeStateHistory::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_b44a04493534d299]));
              }

              ::java::util::List AttitudeStateHistory::getAttitudeStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_0d9551367f7ecdef]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3]));
              }

              ::java::lang::String AttitudeStateHistory::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_3cffd47377eca18a]));
              }

              jint AttitudeStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata AttitudeStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_81be42d28961bd53]));
              }

              ::org::orekit::frames::Frame AttitudeStateHistory::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data);
              static PyGetSetDef t_AttitudeStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistory, angularCoordinates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeProvider),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeStates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationMethod),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, metadata),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, referenceFrame),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, start),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistory)[] = {
                { Py_tp_methods, t_AttitudeStateHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistory_init_ },
                { Py_tp_getset, t_AttitudeStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistory, t_AttitudeStateHistory, AttitudeStateHistory);

              void t_AttitudeStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistory), &PY_TYPE_DEF(AttitudeStateHistory), module, "AttitudeStateHistory", 0);
              }

              void t_AttitudeStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "class_", make_descriptor(AttitudeStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "wrapfn_", make_descriptor(t_AttitudeStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistory::wrap_Object(AttitudeStateHistory(((t_AttitudeStateHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeStateHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeState));
              }

              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonConstants.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonConstants::class$ = NULL;
      jmethodID *PythonConstants::mids$ = NULL;
      bool PythonConstants::live$ = false;

      jclass PythonConstants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonConstants");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonConstants::PythonConstants() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonConstants::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonConstants::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonConstants::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self);
      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args);
      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data);
      static PyGetSetDef t_PythonConstants__fields_[] = {
        DECLARE_GET_FIELD(t_PythonConstants, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonConstants__methods_[] = {
        DECLARE_METHOD(t_PythonConstants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonConstants, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonConstants)[] = {
        { Py_tp_methods, t_PythonConstants__methods_ },
        { Py_tp_init, (void *) t_PythonConstants_init_ },
        { Py_tp_getset, t_PythonConstants__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonConstants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonConstants, t_PythonConstants, PythonConstants);

      void t_PythonConstants::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonConstants), &PY_TYPE_DEF(PythonConstants), module, "PythonConstants", 1);
      }

      void t_PythonConstants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "class_", make_descriptor(PythonConstants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "wrapfn_", make_descriptor(t_PythonConstants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonConstants::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonConstants_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonConstants::initializeClass, 1)))
          return NULL;
        return t_PythonConstants::wrap_Object(PythonConstants(((t_PythonConstants *) arg)->object.this$));
      }
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonConstants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds)
      {
        PythonConstants object((jobject) NULL);

        INT_CALL(object = PythonConstants());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Pair::class$ = NULL;
      jmethodID *Pair::mids$ = NULL;
      bool Pair::live$ = false;

      jclass Pair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Pair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cdf90f5ab4b39eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_create_5eabaec61bd4b330] = env->getStaticMethodID(cls, "create", "(Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/util/Pair;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
          mids$[mid_getKey_e661fe3ba2fafb22] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
          mids$[mid_getSecond_e661fe3ba2fafb22] = env->getMethodID(cls, "getSecond", "()Ljava/lang/Object;");
          mids$[mid_getValue_e661fe3ba2fafb22] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Pair::Pair(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cdf90f5ab4b39eca, a0.this$, a1.this$)) {}

      Pair Pair::create(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Pair(env->callStaticObjectMethod(cls, mids$[mid_create_5eabaec61bd4b330], a0.this$, a1.this$));
      }

      jboolean Pair::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ::java::lang::Object Pair::getFirst() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_e661fe3ba2fafb22]));
      }

      ::java::lang::Object Pair::getKey() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_e661fe3ba2fafb22]));
      }

      ::java::lang::Object Pair::getSecond() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecond_e661fe3ba2fafb22]));
      }

      ::java::lang::Object Pair::getValue() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_e661fe3ba2fafb22]));
      }

      jint Pair::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      ::java::lang::String Pair::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args);
      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_getFirst(t_Pair *self);
      static PyObject *t_Pair_getKey(t_Pair *self);
      static PyObject *t_Pair_getSecond(t_Pair *self);
      static PyObject *t_Pair_getValue(t_Pair *self);
      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args);
      static PyObject *t_Pair_get__first(t_Pair *self, void *data);
      static PyObject *t_Pair_get__key(t_Pair *self, void *data);
      static PyObject *t_Pair_get__second(t_Pair *self, void *data);
      static PyObject *t_Pair_get__value(t_Pair *self, void *data);
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data);
      static PyGetSetDef t_Pair__fields_[] = {
        DECLARE_GET_FIELD(t_Pair, first),
        DECLARE_GET_FIELD(t_Pair, key),
        DECLARE_GET_FIELD(t_Pair, second),
        DECLARE_GET_FIELD(t_Pair, value),
        DECLARE_GET_FIELD(t_Pair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Pair__methods_[] = {
        DECLARE_METHOD(t_Pair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Pair, of_, METH_VARARGS),
        DECLARE_METHOD(t_Pair, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Pair, equals, METH_VARARGS),
        DECLARE_METHOD(t_Pair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getKey, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_Pair, getValue, METH_NOARGS),
        DECLARE_METHOD(t_Pair, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Pair, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Pair)[] = {
        { Py_tp_methods, t_Pair__methods_ },
        { Py_tp_init, (void *) t_Pair_init_ },
        { Py_tp_getset, t_Pair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Pair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Pair, t_Pair, Pair);
      PyObject *t_Pair::wrap_Object(const Pair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Pair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Pair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Pair *self = (t_Pair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Pair::install(PyObject *module)
      {
        installType(&PY_TYPE(Pair), &PY_TYPE_DEF(Pair), module, "Pair", 0);
      }

      void t_Pair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "class_", make_descriptor(Pair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "wrapfn_", make_descriptor(t_Pair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Pair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Pair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Pair::initializeClass, 1)))
          return NULL;
        return t_Pair::wrap_Object(Pair(((t_Pair *) arg)->object.this$));
      }
      static PyObject *t_Pair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Pair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Pair_of_(t_Pair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Pair_init_(t_Pair *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = Pair(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Pair_create(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        Pair result((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Pair::create(a0, a1));
          return t_Pair::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_Pair_equals(t_Pair *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Pair_getFirst(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getKey(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getSecond(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_getValue(t_Pair *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_Pair_hashCode(t_Pair *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Pair_toString(t_Pair *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Pair), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_Pair_get__parameters_(t_Pair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Pair_get__first(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__key(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__second(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_Pair_get__value(t_Pair *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::java::lang::t_Object::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeFrame::class$ = NULL;
            jmethodID *ScreenVolumeFrame::mids$ = NULL;
            bool ScreenVolumeFrame::live$ = false;
            ScreenVolumeFrame *ScreenVolumeFrame::RTN = NULL;
            ScreenVolumeFrame *ScreenVolumeFrame::TVN = NULL;

            jclass ScreenVolumeFrame::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_ec36d5ee0f9f89bb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_values_f8767c3e3db01bf1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RTN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                TVN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "TVN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeFrame ScreenVolumeFrame::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec36d5ee0f9f89bb], a0.this$));
            }

            JArray< ScreenVolumeFrame > ScreenVolumeFrame::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_f8767c3e3db01bf1]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data);
            static PyGetSetDef t_ScreenVolumeFrame__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeFrame, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeFrame__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeFrame, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeFrame, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeFrame)[] = {
              { Py_tp_methods, t_ScreenVolumeFrame__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeFrame__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeFrame)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeFrame, t_ScreenVolumeFrame, ScreenVolumeFrame);
            PyObject *t_ScreenVolumeFrame::wrap_Object(const ScreenVolumeFrame& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeFrame::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeFrame), &PY_TYPE_DEF(ScreenVolumeFrame), module, "ScreenVolumeFrame", 0);
            }

            void t_ScreenVolumeFrame::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "class_", make_descriptor(ScreenVolumeFrame::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "wrapfn_", make_descriptor(t_ScreenVolumeFrame::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeFrame::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "RTN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::RTN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "TVN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::TVN)));
            }

            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeFrame::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeFrame::wrap_Object(ScreenVolumeFrame(((t_ScreenVolumeFrame *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeFrame::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeFrame result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::valueOf(a0));
                return t_ScreenVolumeFrame::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeFrame > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeFrame::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/UnitsConverter.h"
#include "java/lang/String.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/UnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsConverter::class$ = NULL;
        jmethodID *UnitsConverter::mids$ = NULL;
        bool UnitsConverter::live$ = false;
        UnitsConverter *UnitsConverter::ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::DAYS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::IDENTITY = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_2_TO_METRES_2 = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_TO_METRES = NULL;
        UnitsConverter *UnitsConverter::KM3_P_S2_TO_M3_P_S2 = NULL;
        UnitsConverter *UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::MILLI_SECONDS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::NANO_TESLAS_TO_TESLAS = NULL;
        UnitsConverter *UnitsConverter::PERCENTS_TO_UNIT = NULL;

        jclass UnitsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dc8dedbc90d2894e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)V");
            mids$[mid_convert_7e960cd6eee376d8] = env->getMethodID(cls, "convert", "(D)D");
            mids$[mid_getFrom_3267fc1a8500bfc2] = env->getMethodID(cls, "getFrom", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_getTo_3267fc1a8500bfc2] = env->getMethodID(cls, "getTo", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            DAYS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "DAYS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            IDENTITY = new UnitsConverter(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_2_TO_METRES_2 = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_2_TO_METRES_2", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_TO_METRES = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_TO_METRES", "Lorg/orekit/utils/units/UnitsConverter;"));
            KM3_P_S2_TO_M3_P_S2 = new UnitsConverter(env->getStaticObjectField(cls, "KM3_P_S2_TO_M3_P_S2", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_SECONDS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_SECONDS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            NANO_TESLAS_TO_TESLAS = new UnitsConverter(env->getStaticObjectField(cls, "NANO_TESLAS_TO_TESLAS", "Lorg/orekit/utils/units/UnitsConverter;"));
            PERCENTS_TO_UNIT = new UnitsConverter(env->getStaticObjectField(cls, "PERCENTS_TO_UNIT", "Lorg/orekit/utils/units/UnitsConverter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsConverter::UnitsConverter(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc8dedbc90d2894e, a0.this$, a1.this$)) {}

        jdouble UnitsConverter::convert(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_convert_7e960cd6eee376d8], a0);
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getFrom() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getFrom_3267fc1a8500bfc2]));
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getTo() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getTo_3267fc1a8500bfc2]));
        }

        ::java::lang::String UnitsConverter::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {
        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg);
        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args);
        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data);
        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data);
        static PyGetSetDef t_UnitsConverter__fields_[] = {
          DECLARE_GET_FIELD(t_UnitsConverter, from),
          DECLARE_GET_FIELD(t_UnitsConverter, to),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnitsConverter__methods_[] = {
          DECLARE_METHOD(t_UnitsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, convert, METH_O),
          DECLARE_METHOD(t_UnitsConverter, getFrom, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, getTo, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsConverter)[] = {
          { Py_tp_methods, t_UnitsConverter__methods_ },
          { Py_tp_init, (void *) t_UnitsConverter_init_ },
          { Py_tp_getset, t_UnitsConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsConverter, t_UnitsConverter, UnitsConverter);

        void t_UnitsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsConverter), &PY_TYPE_DEF(UnitsConverter), module, "UnitsConverter", 0);
        }

        void t_UnitsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "class_", make_descriptor(UnitsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "wrapfn_", make_descriptor(t_UnitsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnitsConverter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "DAYS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::DAYS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "IDENTITY", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::IDENTITY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_2_TO_METRES_2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_2_TO_METRES_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_TO_METRES", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_TO_METRES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KM3_P_S2_TO_M3_P_S2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KM3_P_S2_TO_M3_P_S2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_SECONDS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_SECONDS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "NANO_TESLAS_TO_TESLAS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::NANO_TESLAS_TO_TESLAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "PERCENTS_TO_UNIT", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::PERCENTS_TO_UNIT)));
        }

        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsConverter::initializeClass, 1)))
            return NULL;
          return t_UnitsConverter::wrap_Object(UnitsConverter(((t_UnitsConverter *) arg)->object.this$));
        }
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          ::org::orekit::utils::units::Unit a1((jobject) NULL);
          UnitsConverter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
          {
            INT_CALL(object = UnitsConverter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.convert(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "convert", arg);
          return NULL;
        }

        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(UnitsConverter), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }

        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectorResults::class$ = NULL;
          jmethodID *CycleSlipDetectorResults::mids$ = NULL;
          bool CycleSlipDetectorResults::live$ = false;

          jclass CycleSlipDetectorResults::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getBeginDate_b36855b8e31e5f05] = env->getMethodID(cls, "getBeginDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCycleSlipMap_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getCycleSlipMap", "()Ljava/util/Map;");
              mids$[mid_getEndDate_b36855b8e31e5f05] = env->getMethodID(cls, "getEndDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getSatelliteName_3cffd47377eca18a] = env->getMethodID(cls, "getSatelliteName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getBeginDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeginDate_b36855b8e31e5f05], a0.this$));
          }

          ::java::util::Map CycleSlipDetectorResults::getCycleSlipMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCycleSlipMap_1e62c2f73fbdd1c4]));
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getEndDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_b36855b8e31e5f05], a0.this$));
          }

          ::java::lang::String CycleSlipDetectorResults::getSatelliteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSatelliteName_3cffd47377eca18a]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data);
          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data);
          static PyGetSetDef t_CycleSlipDetectorResults__fields_[] = {
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, cycleSlipMap),
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, satelliteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CycleSlipDetectorResults__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectorResults, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getBeginDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getCycleSlipMap, METH_NOARGS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getEndDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getSatelliteName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectorResults)[] = {
            { Py_tp_methods, t_CycleSlipDetectorResults__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CycleSlipDetectorResults__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectorResults)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectorResults, t_CycleSlipDetectorResults, CycleSlipDetectorResults);

          void t_CycleSlipDetectorResults::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectorResults), &PY_TYPE_DEF(CycleSlipDetectorResults), module, "CycleSlipDetectorResults", 0);
          }

          void t_CycleSlipDetectorResults::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "class_", make_descriptor(CycleSlipDetectorResults::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "wrapfn_", make_descriptor(t_CycleSlipDetectorResults::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectorResults::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectorResults::wrap_Object(CycleSlipDetectorResults(((t_CycleSlipDetectorResults *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectorResults::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getBeginDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBeginDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getEndDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEndDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteName());
            return j2p(result);
          }

          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well44497a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497a::class$ = NULL;
      jmethodID *Well44497a::mids$ = NULL;
      bool Well44497a::live$ = false;

      jclass Well44497a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497a::Well44497a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Well44497a::Well44497a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      Well44497a::Well44497a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Well44497a::Well44497a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint Well44497a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args);

      static PyMethodDef t_Well44497a__methods_[] = {
        DECLARE_METHOD(t_Well44497a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497a)[] = {
        { Py_tp_methods, t_Well44497a__methods_ },
        { Py_tp_init, (void *) t_Well44497a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497a, t_Well44497a, Well44497a);

      void t_Well44497a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497a), &PY_TYPE_DEF(Well44497a), module, "Well44497a", 0);
      }

      void t_Well44497a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "class_", make_descriptor(Well44497a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "wrapfn_", make_descriptor(t_Well44497a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497a::initializeClass, 1)))
          return NULL;
        return t_Well44497a::wrap_Object(Well44497a(((t_Well44497a *) arg)->object.this$));
      }
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497a object((jobject) NULL);

            INT_CALL(object = Well44497a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource::class$ = NULL;
      jmethodID *DataSource::mids$ = NULL;
      bool DataSource::live$ = false;

      jclass DataSource::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5d6bcca91ae998ee] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_d78fe12c98ba1e42] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$ReaderOpener;)V");
          mids$[mid_init$_e3be660e5a2ef485] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$StreamOpener;)V");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getOpener_4793c6fb0a9a9512] = env->getMethodID(cls, "getOpener", "()Lorg/orekit/data/DataSource$Opener;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataSource::DataSource(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d6bcca91ae998ee, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$ReaderOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d78fe12c98ba1e42, a0.this$, a1.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$StreamOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e3be660e5a2ef485, a0.this$, a1.this$)) {}

      ::java::lang::String DataSource::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::org::orekit::data::DataSource$Opener DataSource::getOpener() const
      {
        return ::org::orekit::data::DataSource$Opener(env->callObjectMethod(this$, mids$[mid_getOpener_4793c6fb0a9a9512]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataSource_getName(t_DataSource *self);
      static PyObject *t_DataSource_getOpener(t_DataSource *self);
      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data);
      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data);
      static PyGetSetDef t_DataSource__fields_[] = {
        DECLARE_GET_FIELD(t_DataSource, name),
        DECLARE_GET_FIELD(t_DataSource, opener),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataSource__methods_[] = {
        DECLARE_METHOD(t_DataSource, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, getName, METH_NOARGS),
        DECLARE_METHOD(t_DataSource, getOpener, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource)[] = {
        { Py_tp_methods, t_DataSource__methods_ },
        { Py_tp_init, (void *) t_DataSource_init_ },
        { Py_tp_getset, t_DataSource__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource, t_DataSource, DataSource);

      void t_DataSource::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource), &PY_TYPE_DEF(DataSource), module, "DataSource", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "StreamOpener", make_descriptor(&PY_TYPE_DEF(DataSource$StreamOpener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "Opener", make_descriptor(&PY_TYPE_DEF(DataSource$Opener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "ReaderOpener", make_descriptor(&PY_TYPE_DEF(DataSource$ReaderOpener)));
      }

      void t_DataSource::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "class_", make_descriptor(DataSource::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "wrapfn_", make_descriptor(t_DataSource::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource::initializeClass, 1)))
          return NULL;
        return t_DataSource::wrap_Object(DataSource(((t_DataSource *) arg)->object.this$));
      }
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$ReaderOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$ReaderOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$StreamOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$StreamOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DataSource_getName(t_DataSource *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_DataSource_getOpener(t_DataSource *self)
      {
        ::org::orekit::data::DataSource$Opener result((jobject) NULL);
        OBJ_CALL(result = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(result);
      }

      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data)
      {
        ::org::orekit::data::DataSource$Opener value((jobject) NULL);
        OBJ_CALL(value = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *TiesStrategy::class$ = NULL;
        jmethodID *TiesStrategy::mids$ = NULL;
        bool TiesStrategy::live$ = false;
        TiesStrategy *TiesStrategy::AVERAGE = NULL;
        TiesStrategy *TiesStrategy::MAXIMUM = NULL;
        TiesStrategy *TiesStrategy::MINIMUM = NULL;
        TiesStrategy *TiesStrategy::RANDOM = NULL;
        TiesStrategy *TiesStrategy::SEQUENTIAL = NULL;

        jclass TiesStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/TiesStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_9e07525c5046ba38] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_values_2366d1ed29343f5a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/TiesStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AVERAGE = new TiesStrategy(env->getStaticObjectField(cls, "AVERAGE", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MAXIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MAXIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MINIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MINIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            RANDOM = new TiesStrategy(env->getStaticObjectField(cls, "RANDOM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            SEQUENTIAL = new TiesStrategy(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TiesStrategy TiesStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return TiesStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9e07525c5046ba38], a0.this$));
        }

        JArray< TiesStrategy > TiesStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< TiesStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_2366d1ed29343f5a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {
        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args);
        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_TiesStrategy_values(PyTypeObject *type);
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data);
        static PyGetSetDef t_TiesStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_TiesStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TiesStrategy__methods_[] = {
          DECLARE_METHOD(t_TiesStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_TiesStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TiesStrategy)[] = {
          { Py_tp_methods, t_TiesStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TiesStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TiesStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(TiesStrategy, t_TiesStrategy, TiesStrategy);
        PyObject *t_TiesStrategy::wrap_Object(const TiesStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TiesStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TiesStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(TiesStrategy), &PY_TYPE_DEF(TiesStrategy), module, "TiesStrategy", 0);
        }

        void t_TiesStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "class_", make_descriptor(TiesStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "wrapfn_", make_descriptor(t_TiesStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(TiesStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "AVERAGE", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::AVERAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MAXIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MAXIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MINIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MINIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "RANDOM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::RANDOM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "SEQUENTIAL", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::SEQUENTIAL)));
        }

        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TiesStrategy::initializeClass, 1)))
            return NULL;
          return t_TiesStrategy::wrap_Object(TiesStrategy(((t_TiesStrategy *) arg)->object.this$));
        }
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TiesStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          TiesStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::valueOf(a0));
            return t_TiesStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_TiesStrategy_values(PyTypeObject *type)
        {
          JArray< TiesStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_TiesStrategy::wrap_jobject);
        }
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *TimeDerivativesEquations::class$ = NULL;
        jmethodID *TimeDerivativesEquations::mids$ = NULL;
        bool TimeDerivativesEquations::live$ = false;

        jclass TimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/TimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_10f281d777284cea] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_10f281d777284cea] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_2810d2bec90e7b1c] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TimeDerivativesEquations::addKeplerContribution(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_10f281d777284cea], a0);
        }

        void TimeDerivativesEquations::addMassDerivative(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_10f281d777284cea], a0);
        }

        void TimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_2810d2bec90e7b1c], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg);

        static PyMethodDef t_TimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_TimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDerivativesEquations)[] = {
          { Py_tp_methods, t_TimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDerivativesEquations, t_TimeDerivativesEquations, TimeDerivativesEquations);

        void t_TimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDerivativesEquations), &PY_TYPE_DEF(TimeDerivativesEquations), module, "TimeDerivativesEquations", 0);
        }

        void t_TimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "class_", make_descriptor(TimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "wrapfn_", make_descriptor(t_TimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_TimeDerivativesEquations::wrap_Object(TimeDerivativesEquations(((t_TimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Atanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atanh::class$ = NULL;
        jmethodID *Atanh::mids$ = NULL;
        bool Atanh::live$ = false;

        jclass Atanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atanh::Atanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Atanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args);

        static PyMethodDef t_Atanh__methods_[] = {
          DECLARE_METHOD(t_Atanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atanh)[] = {
          { Py_tp_methods, t_Atanh__methods_ },
          { Py_tp_init, (void *) t_Atanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atanh, t_Atanh, Atanh);

        void t_Atanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Atanh), &PY_TYPE_DEF(Atanh), module, "Atanh", 0);
        }

        void t_Atanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "class_", make_descriptor(Atanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "wrapfn_", make_descriptor(t_Atanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atanh::initializeClass, 1)))
            return NULL;
          return t_Atanh::wrap_Object(Atanh(((t_Atanh *) arg)->object.this$));
        }
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds)
        {
          Atanh object((jobject) NULL);

          INT_CALL(object = Atanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmMetadataKey::class$ = NULL;
              jmethodID *OcmMetadataKey::mids$ = NULL;
              bool OcmMetadataKey::live$ = false;
              OcmMetadataKey *OcmMetadataKey::ADM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::ALTERNATE_NAMES = NULL;
              OcmMetadataKey *OcmMetadataKey::CATALOG_NAME = NULL;
              OcmMetadataKey *OcmMetadataKey::CDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::CELESTIAL_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::CONSTELLATION = NULL;
              OcmMetadataKey *OcmMetadataKey::COUNTRY = NULL;
              OcmMetadataKey *OcmMetadataKey::EOP_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::EPOCH_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERP_METHOD_EOP = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_TYPE = NULL;
              OcmMetadataKey *OcmMetadataKey::OCM_DATA_ELEMENTS = NULL;
              OcmMetadataKey *OcmMetadataKey::OPERATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OPS_STATUS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORBIT_CATEGORY = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::OWNER = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::PRM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::RDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_OFFSET_AT_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_SEC_PER_SI_SEC = NULL;
              OcmMetadataKey *OcmMetadataKey::START_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::STOP_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::TAIMUTC_AT_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::TDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ORG = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::TIME_SPAN = NULL;
              OcmMetadataKey *OcmMetadataKey::UT1MUTC_AT_TZERO = NULL;

              jclass OcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_5fb049a3cc8df848] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;)Z");
                  mids$[mid_valueOf_c2c4632bb75e91be] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");
                  mids$[mid_values_07dd92008c106080] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ALTERNATE_NAMES = new OcmMetadataKey(env->getStaticObjectField(cls, "ALTERNATE_NAMES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CATALOG_NAME = new OcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "CDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CELESTIAL_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "CELESTIAL_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CONSTELLATION = new OcmMetadataKey(env->getStaticObjectField(cls, "CONSTELLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  COUNTRY = new OcmMetadataKey(env->getStaticObjectField(cls, "COUNTRY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EOP_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "EOP_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EPOCH_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERP_METHOD_EOP = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERP_METHOD_EOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_TYPE = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OCM_DATA_ELEMENTS = new OcmMetadataKey(env->getStaticObjectField(cls, "OCM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPERATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OPERATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPS_STATUS = new OcmMetadataKey(env->getStaticObjectField(cls, "OPS_STATUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORBIT_CATEGORY = new OcmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CATEGORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OWNER = new OcmMetadataKey(env->getStaticObjectField(cls, "OWNER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PRM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "PRM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  RDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "RDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_OFFSET_AT_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_OFFSET_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_SEC_PER_SI_SEC = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_SEC_PER_SI_SEC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  START_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  STOP_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "TDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ORG = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ORG", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TIME_SPAN = new OcmMetadataKey(env->getStaticObjectField(cls, "TIME_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  UT1MUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "UT1MUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_5fb049a3cc8df848], a0.this$, a1.this$, a2.this$);
              }

              OcmMetadataKey OcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c2c4632bb75e91be], a0.this$));
              }

              JArray< OcmMetadataKey > OcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_07dd92008c106080]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data);
              static PyGetSetDef t_OcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmMetadataKey)[] = {
                { Py_tp_methods, t_OcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmMetadataKey, t_OcmMetadataKey, OcmMetadataKey);
              PyObject *t_OcmMetadataKey::wrap_Object(const OcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmMetadataKey), &PY_TYPE_DEF(OcmMetadataKey), module, "OcmMetadataKey", 0);
              }

              void t_OcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "class_", make_descriptor(OcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "wrapfn_", make_descriptor(t_OcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ADM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ALTERNATE_NAMES", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ALTERNATE_NAMES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CATALOG_NAME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CELESTIAL_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CELESTIAL_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CONSTELLATION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CONSTELLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "COUNTRY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::COUNTRY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EOP_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EOP_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERP_METHOD_EOP", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERP_METHOD_EOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_TYPE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OCM_DATA_ELEMENTS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OCM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPERATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPERATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPS_STATUS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPS_STATUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORBIT_CATEGORY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORBIT_CATEGORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OWNER", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OWNER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PRM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PRM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "RDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::RDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_OFFSET_AT_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_OFFSET_AT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_SEC_PER_SI_SEC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_SEC_PER_SI_SEC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "START_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "STOP_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TAIMUTC_AT_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ORG", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ORG)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TIME_SPAN", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TIME_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "UT1MUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::UT1MUTC_AT_TZERO)));
              }

              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OcmMetadataKey::wrap_Object(OcmMetadataKey(((t_OcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::valueOf(a0));
                  return t_OcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/Stream.h"
#include "java/util/Comparator.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/function/Supplier.h"
#include "java/util/Optional.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Stream::class$ = NULL;
      jmethodID *Stream::mids$ = NULL;
      bool Stream::live$ = false;

      jclass Stream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Stream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_concat_9e0a3c4944e5dc50] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/Stream;Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
          mids$[mid_count_9e26256fb0d384a2] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_d7cce92225eb0db2] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/Stream;");
          mids$[mid_empty_d7cce92225eb0db2] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/Stream;");
          mids$[mid_findAny_d0ccac9b4c6bdd55] = env->getMethodID(cls, "findAny", "()Ljava/util/Optional;");
          mids$[mid_findFirst_d0ccac9b4c6bdd55] = env->getMethodID(cls, "findFirst", "()Ljava/util/Optional;");
          mids$[mid_generate_3245191b6f3ae2e0] = env->getStaticMethodID(cls, "generate", "(Ljava/util/function/Supplier;)Ljava/util/stream/Stream;");
          mids$[mid_limit_2d0d8836c8e6d751] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/Stream;");
          mids$[mid_max_17d9ff3676ac1fa2] = env->getMethodID(cls, "max", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_min_17d9ff3676ac1fa2] = env->getMethodID(cls, "min", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_of_13c199dd7611bbb8] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_of_f5d6c2fe1294fb2d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_ofNullable_f5d6c2fe1294fb2d] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_skip_2d0d8836c8e6d751] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/Stream;");
          mids$[mid_sorted_d7cce92225eb0db2] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/Stream;");
          mids$[mid_sorted_f8130c0783e3fa7c] = env->getMethodID(cls, "sorted", "(Ljava/util/Comparator;)Ljava/util/stream/Stream;");
          mids$[mid_toArray_6555a5198c71b73a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Stream Stream::concat(const Stream & a0, const Stream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_concat_9e0a3c4944e5dc50], a0.this$, a1.this$));
      }

      jlong Stream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_9e26256fb0d384a2]);
      }

      Stream Stream::distinct() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_distinct_d7cce92225eb0db2]));
      }

      Stream Stream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_empty_d7cce92225eb0db2]));
      }

      ::java::util::Optional Stream::findAny() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findAny_d0ccac9b4c6bdd55]));
      }

      ::java::util::Optional Stream::findFirst() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findFirst_d0ccac9b4c6bdd55]));
      }

      Stream Stream::generate(const ::java::util::function::Supplier & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_generate_3245191b6f3ae2e0], a0.this$));
      }

      Stream Stream::limit(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_limit_2d0d8836c8e6d751], a0));
      }

      ::java::util::Optional Stream::max$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_max_17d9ff3676ac1fa2], a0.this$));
      }

      ::java::util::Optional Stream::min$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_min_17d9ff3676ac1fa2], a0.this$));
      }

      Stream Stream::of(const JArray< ::java::lang::Object > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_13c199dd7611bbb8], a0.this$));
      }

      Stream Stream::of(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_f5d6c2fe1294fb2d], a0.this$));
      }

      Stream Stream::ofNullable(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_f5d6c2fe1294fb2d], a0.this$));
      }

      Stream Stream::skip(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_skip_2d0d8836c8e6d751], a0));
      }

      Stream Stream::sorted() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_d7cce92225eb0db2]));
      }

      Stream Stream::sorted(const ::java::util::Comparator & a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_f8130c0783e3fa7c], a0.this$));
      }

      JArray< ::java::lang::Object > Stream::toArray() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_6555a5198c71b73a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_count(t_Stream *self);
      static PyObject *t_Stream_distinct(t_Stream *self);
      static PyObject *t_Stream_empty(PyTypeObject *type);
      static PyObject *t_Stream_findAny(t_Stream *self);
      static PyObject *t_Stream_findFirst(t_Stream *self);
      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_toArray(t_Stream *self);
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data);
      static PyGetSetDef t_Stream__fields_[] = {
        DECLARE_GET_FIELD(t_Stream, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Stream__methods_[] = {
        DECLARE_METHOD(t_Stream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, of_, METH_VARARGS),
        DECLARE_METHOD(t_Stream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, count, METH_NOARGS),
        DECLARE_METHOD(t_Stream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_Stream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_Stream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_Stream, generate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, limit, METH_O),
        DECLARE_METHOD(t_Stream, max, METH_O),
        DECLARE_METHOD(t_Stream, min, METH_O),
        DECLARE_METHOD(t_Stream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, ofNullable, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, skip, METH_O),
        DECLARE_METHOD(t_Stream, sorted, METH_VARARGS),
        DECLARE_METHOD(t_Stream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Stream)[] = {
        { Py_tp_methods, t_Stream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Stream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Stream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Stream, t_Stream, Stream);
      PyObject *t_Stream::wrap_Object(const Stream& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Stream::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Stream::install(PyObject *module)
      {
        installType(&PY_TYPE(Stream), &PY_TYPE_DEF(Stream), module, "Stream", 0);
      }

      void t_Stream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "class_", make_descriptor(Stream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "wrapfn_", make_descriptor(t_Stream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Stream::initializeClass, 1)))
          return NULL;
        return t_Stream::wrap_Object(Stream(((t_Stream *) arg)->object.this$));
      }
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Stream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args)
      {
        Stream a0((jobject) NULL);
        PyTypeObject **p0;
        Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Stream result((jobject) NULL);

        if (!parseArgs(args, "KK", Stream::initializeClass, Stream::initializeClass, &a0, &p0, t_Stream::parameters_, &a1, &p1, t_Stream::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::concat(a0, a1));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_Stream_count(t_Stream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Stream_distinct(t_Stream *self)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_Stream::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_empty(PyTypeObject *type)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::Stream::empty());
        return t_Stream::wrap_Object(result);
      }

      static PyObject *t_Stream_findAny(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_findFirst(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::function::Supplier a0((jobject) NULL);
        PyTypeObject **p0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::generate(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "generate", arg);
        return NULL;
      }

      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.max$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "max", arg);
        return NULL;
      }

      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.min$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "min", arg);
        return NULL;
      }

      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::Object > a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "[o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        Stream result((jobject) NULL);

        if (!parseArg(arg, "o", &a0))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::ofNullable(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ofNullable", arg);
        return NULL;
      }

      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.sorted());
            return t_Stream::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(result = self->object.sorted(a0));
              return t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sorted", args);
        return NULL;
      }

      static PyObject *t_Stream_toArray(t_Stream *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *LimitAngle::class$ = NULL;
          jmethodID *LimitAngle::mids$ = NULL;
          bool LimitAngle::live$ = false;

          jclass LimitAngle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/LimitAngle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3124af4883917e47] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;ZD)V");
              mids$[mid_copySelf_0d8f45c3f1b74855] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_emptyHyperplane_4a61f36b44575d3c] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_getLocation_0b0acc7251a8d339] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_getOffset_cf1fec2b7b1c0efe] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getReverse_0d8f45c3f1b74855] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/oned/LimitAngle;");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_89b302893bdbe1f1] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_328d0d966eeb9668] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_sameOrientationAs_cb9274a363000a77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_4a61f36b44575d3c] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/oned/SubLimitAngle;");
              mids$[mid_wholeSpace_75597f9ad249cb08] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LimitAngle::LimitAngle(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3124af4883917e47, a0.this$, a1, a2)) {}

          LimitAngle LimitAngle::copySelf() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_copySelf_0d8f45c3f1b74855]));
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_4a61f36b44575d3c]));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point LimitAngle::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_getLocation_0b0acc7251a8d339]));
          }

          jdouble LimitAngle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_cf1fec2b7b1c0efe], a0.this$);
          }

          LimitAngle LimitAngle::getReverse() const
          {
            return LimitAngle(env->callObjectMethod(this$, mids$[mid_getReverse_0d8f45c3f1b74855]));
          }

          jdouble LimitAngle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
          }

          jboolean LimitAngle::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_89b302893bdbe1f1]);
          }

          ::org::hipparchus::geometry::Point LimitAngle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_328d0d966eeb9668], a0.this$));
          }

          jboolean LimitAngle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_cb9274a363000a77], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::oned::SubLimitAngle LimitAngle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::oned::SubLimitAngle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_4a61f36b44575d3c]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet LimitAngle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_75597f9ad249cb08]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self);
          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self);
          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self);
          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self);
          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg);
          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self);
          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self);
          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data);
          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data);
          static PyGetSetDef t_LimitAngle__fields_[] = {
            DECLARE_GET_FIELD(t_LimitAngle, direct),
            DECLARE_GET_FIELD(t_LimitAngle, location),
            DECLARE_GET_FIELD(t_LimitAngle, reverse),
            DECLARE_GET_FIELD(t_LimitAngle, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LimitAngle__methods_[] = {
            DECLARE_METHOD(t_LimitAngle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LimitAngle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getOffset, METH_O),
            DECLARE_METHOD(t_LimitAngle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, project, METH_O),
            DECLARE_METHOD(t_LimitAngle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_LimitAngle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_LimitAngle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LimitAngle)[] = {
            { Py_tp_methods, t_LimitAngle__methods_ },
            { Py_tp_init, (void *) t_LimitAngle_init_ },
            { Py_tp_getset, t_LimitAngle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LimitAngle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LimitAngle, t_LimitAngle, LimitAngle);

          void t_LimitAngle::install(PyObject *module)
          {
            installType(&PY_TYPE(LimitAngle), &PY_TYPE_DEF(LimitAngle), module, "LimitAngle", 0);
          }

          void t_LimitAngle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "class_", make_descriptor(LimitAngle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "wrapfn_", make_descriptor(t_LimitAngle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LimitAngle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LimitAngle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LimitAngle::initializeClass, 1)))
              return NULL;
            return t_LimitAngle::wrap_Object(LimitAngle(((t_LimitAngle *) arg)->object.this$));
          }
          static PyObject *t_LimitAngle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LimitAngle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LimitAngle_init_(t_LimitAngle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            LimitAngle object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LimitAngle(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LimitAngle_copySelf(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_emptyHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getLocation(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getOffset(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_getReverse(t_LimitAngle *self)
          {
            LimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_LimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_getTolerance(t_LimitAngle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_LimitAngle_isDirect(t_LimitAngle *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_LimitAngle_project(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_sameOrientationAs(t_LimitAngle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_LimitAngle_wholeHyperplane(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::SubLimitAngle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::oned::t_SubLimitAngle::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_wholeSpace(t_LimitAngle *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_LimitAngle_get__direct(t_LimitAngle *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_LimitAngle_get__location(t_LimitAngle *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::S1Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__reverse(t_LimitAngle *self, void *data)
          {
            LimitAngle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_LimitAngle::wrap_Object(value);
          }

          static PyObject *t_LimitAngle_get__tolerance(t_LimitAngle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *EpochDerivativesEquations::class$ = NULL;
        jmethodID *EpochDerivativesEquations::mids$ = NULL;
        bool EpochDerivativesEquations::live$ = false;
        jint EpochDerivativesEquations::STATE_DIMENSION = (jint) 0;

        jclass EpochDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/EpochDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fcf7e65889751518] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/propagation/numerical/NumericalPropagator;)V");
            mids$[mid_combinedDerivatives_5fc55a092d474e7c] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_setInitialJacobians_2c4cc16b11f79a6c] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_4e9faa373286a7e3] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_917e96f1f52f04b8] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D[D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EpochDerivativesEquations::EpochDerivativesEquations(const ::java::lang::String & a0, const ::org::orekit::propagation::numerical::NumericalPropagator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcf7e65889751518, a0.this$, a1.this$)) {}

        ::org::orekit::propagation::integration::CombinedDerivatives EpochDerivativesEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_5fc55a092d474e7c], a0.this$));
        }

        jint EpochDerivativesEquations::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        ::java::lang::String EpochDerivativesEquations::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_2c4cc16b11f79a6c], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_4e9faa373286a7e3], a0.this$, a1.this$, a2.this$));
        }

        void EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialJacobians_917e96f1f52f04b8], a0.this$, a1.this$, a2.this$, a3.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args);
        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data);
        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data);
        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data);
        static PyGetSetDef t_EpochDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, dimension),
          DECLARE_SET_FIELD(t_EpochDerivativesEquations, initialJacobians),
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EpochDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_EpochDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_EpochDerivativesEquations, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, getName, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, setInitialJacobians, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EpochDerivativesEquations)[] = {
          { Py_tp_methods, t_EpochDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_EpochDerivativesEquations_init_ },
          { Py_tp_getset, t_EpochDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EpochDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EpochDerivativesEquations, t_EpochDerivativesEquations, EpochDerivativesEquations);

        void t_EpochDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(EpochDerivativesEquations), &PY_TYPE_DEF(EpochDerivativesEquations), module, "EpochDerivativesEquations", 0);
        }

        void t_EpochDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "class_", make_descriptor(EpochDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "wrapfn_", make_descriptor(t_EpochDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          env->getClass(EpochDerivativesEquations::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "STATE_DIMENSION", make_descriptor(EpochDerivativesEquations::STATE_DIMENSION));
        }

        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EpochDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_EpochDerivativesEquations::wrap_Object(EpochDerivativesEquations(((t_EpochDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EpochDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator a1((jobject) NULL);
          EpochDerivativesEquations object((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::propagation::numerical::NumericalPropagator::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EpochDerivativesEquations(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0, a1, a2));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setInitialJacobians(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialJacobians", args);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialJacobians(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialJacobians", arg);
          return -1;
        }

        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOAIonosphericDelayModifier::class$ = NULL;
          jmethodID *TDOAIonosphericDelayModifier::mids$ = NULL;
          bool TDOAIonosphericDelayModifier::live$ = false;

          jclass TDOAIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_69c6b2cabec159dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOAIonosphericDelayModifier::TDOAIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69c6b2cabec159dd, a0.this$, a1)) {}

          ::java::util::List TDOAIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void TDOAIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void TDOAIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self);
          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOAIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOAIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOAIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOAIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOAIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOAIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOAIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOAIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOAIonosphericDelayModifier, t_TDOAIonosphericDelayModifier, TDOAIonosphericDelayModifier);

          void t_TDOAIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOAIonosphericDelayModifier), &PY_TYPE_DEF(TDOAIonosphericDelayModifier), module, "TDOAIonosphericDelayModifier", 0);
          }

          void t_TDOAIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "class_", make_descriptor(TDOAIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TDOAIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOAIonosphericDelayModifier::wrap_Object(TDOAIonosphericDelayModifier(((t_TDOAIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TDOAIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TDOAIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
