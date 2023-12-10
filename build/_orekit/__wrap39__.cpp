#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/Ephemeris.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "java/util/Optional.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *Ephemeris::class$ = NULL;
        jmethodID *Ephemeris::mids$ = NULL;
        bool Ephemeris::live$ = false;

        jclass Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_03acd6a351f054ce] = env->getMethodID(cls, "<init>", "(Ljava/util/List;I)V");
            mids$[mid_init$_ccae413695f0dab4] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_e43529ca1a21e83d] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_33831b7a373bdb29] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_cd5e79efaeff69df] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_basicPropagate_fbff2ff5554d95e1] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_checkInputConsistency_33831b7a373bdb29] = env->getStaticMethodID(cls, "checkInputConsistency", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_checkStatesAndCovariancesConsistency_6701c064a13f8d2f] = env->getStaticMethodID(cls, "checkStatesAndCovariancesConsistency", "(Ljava/util/List;Ljava/util/List;)V");
            mids$[mid_getCovariance_c18892d0edac7e3f] = env->getMethodID(cls, "getCovariance", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/Optional;");
            mids$[mid_getCovarianceInterpolator_c5e311a9e5531e7d] = env->getMethodID(cls, "getCovarianceInterpolator", "()Ljava/util/Optional;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStateInterpolator_1d0d15c75b6b7aca] = env->getMethodID(cls, "getStateInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
            mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ephemeris::Ephemeris(const ::java::util::List & a0, jint a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_03acd6a351f054ce, a0.this$, a1)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ccae413695f0dab4, a0.this$, a1.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e43529ca1a21e83d, a0.this$, a1.this$, a2.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_33831b7a373bdb29, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_cd5e79efaeff69df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::SpacecraftState Ephemeris::basicPropagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_basicPropagate_fbff2ff5554d95e1], a0.this$));
        }

        void Ephemeris::checkInputConsistency(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkInputConsistency_33831b7a373bdb29], a0.this$, a1.this$, a2.this$, a3.this$);
        }

        void Ephemeris::checkStatesAndCovariancesConsistency(const ::java::util::List & a0, const ::java::util::List & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkStatesAndCovariancesConsistency_6701c064a13f8d2f], a0.this$, a1.this$);
        }

        ::java::util::Optional Ephemeris::getCovariance(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovariance_c18892d0edac7e3f], a0.this$));
        }

        ::java::util::Optional Ephemeris::getCovarianceInterpolator() const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovarianceInterpolator_c5e311a9e5531e7d]));
        }

        ::org::orekit::frames::Frame Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::propagation::SpacecraftState Ephemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_c6311115fea01a34]));
        }

        JArray< ::java::lang::String > Ephemeris::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
        }

        ::org::orekit::time::TimeInterpolator Ephemeris::getStateInterpolator() const
        {
          return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getStateInterpolator_1d0d15c75b6b7aca]));
        }

        jboolean Ephemeris::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68], a0.this$);
        }

        void Ephemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
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
        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data);
        static PyGetSetDef t_Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_Ephemeris, covarianceInterpolator),
          DECLARE_GET_FIELD(t_Ephemeris, frame),
          DECLARE_GET_FIELD(t_Ephemeris, initialState),
          DECLARE_GET_FIELD(t_Ephemeris, managedAdditionalStates),
          DECLARE_GET_FIELD(t_Ephemeris, maxDate),
          DECLARE_GET_FIELD(t_Ephemeris, minDate),
          DECLARE_GET_FIELD(t_Ephemeris, stateInterpolator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Ephemeris__methods_[] = {
          DECLARE_METHOD(t_Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, basicPropagate, METH_O),
          DECLARE_METHOD(t_Ephemeris, checkInputConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, checkStatesAndCovariancesConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, getCovariance, METH_O),
          DECLARE_METHOD(t_Ephemeris, getCovarianceInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getStateInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ephemeris)[] = {
          { Py_tp_methods, t_Ephemeris__methods_ },
          { Py_tp_init, (void *) t_Ephemeris_init_ },
          { Py_tp_getset, t_Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ephemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(Ephemeris, t_Ephemeris, Ephemeris);

        void t_Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(Ephemeris), &PY_TYPE_DEF(Ephemeris), module, "Ephemeris", 0);
        }

        void t_Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "class_", make_descriptor(Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "wrapfn_", make_descriptor(t_Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ephemeris::initializeClass, 1)))
            return NULL;
          return t_Ephemeris::wrap_Object(Ephemeris(((t_Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3, a4));
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

        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.basicPropagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "basicPropagate", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkInputConsistency(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkInputConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkStatesAndCovariancesConsistency(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkStatesAndCovariancesConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::util::Optional result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getCovariance(a0));
            return ::java::util::t_Optional::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(StateCovariance));
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self)
        {
          ::java::util::Optional result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self)
        {
          ::org::orekit::time::TimeInterpolator result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data)
        {
          ::java::util::Optional value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::TimeInterpolator value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenUtilities::class$ = NULL;
              jmethodID *HansenUtilities::mids$ = NULL;
              bool HansenUtilities::live$ = false;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ONE = NULL;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ZERO = NULL;

              jclass HansenUtilities::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_buildIdentityMatrix2_4e10566f7fc4170b] = env->getStaticMethodID(cls, "buildIdentityMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildIdentityMatrix4_4e10566f7fc4170b] = env->getStaticMethodID(cls, "buildIdentityMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix2_4e10566f7fc4170b] = env->getStaticMethodID(cls, "buildZeroMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix4_4e10566f7fc4170b] = env->getStaticMethodID(cls, "buildZeroMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ONE = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  ZERO = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix2_4e10566f7fc4170b]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix4_4e10566f7fc4170b]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix2_4e10566f7fc4170b]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix4_4e10566f7fc4170b]));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type);

              static PyMethodDef t_HansenUtilities__methods_[] = {
                DECLARE_METHOD(t_HansenUtilities, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix4, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix4, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenUtilities)[] = {
                { Py_tp_methods, t_HansenUtilities__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenUtilities)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenUtilities, t_HansenUtilities, HansenUtilities);

              void t_HansenUtilities::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenUtilities), &PY_TYPE_DEF(HansenUtilities), module, "HansenUtilities", 0);
              }

              void t_HansenUtilities::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "class_", make_descriptor(HansenUtilities::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "wrapfn_", make_descriptor(t_HansenUtilities::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "boxfn_", make_descriptor(boxObject));
                env->getClass(HansenUtilities::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ONE", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ZERO", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ZERO)));
              }

              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenUtilities::initializeClass, 1)))
                  return NULL;
                return t_HansenUtilities::wrap_Object(HansenUtilities(((t_HansenUtilities *) arg)->object.this$));
              }
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenUtilities::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
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
#include "org/orekit/estimation/measurements/PythonGroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonGroundReceiverMeasurement::class$ = NULL;
        jmethodID *PythonGroundReceiverMeasurement::mids$ = NULL;
        bool PythonGroundReceiverMeasurement::live$ = false;

        jclass PythonGroundReceiverMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonGroundReceiverMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d61b0753fbc5ddd9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGroundReceiverMeasurement::PythonGroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_d61b0753fbc5ddd9, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        void PythonGroundReceiverMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonGroundReceiverMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonGroundReceiverMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self);
        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyGetSetDef t_PythonGroundReceiverMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, self),
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGroundReceiverMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGroundReceiverMeasurement)[] = {
          { Py_tp_methods, t_PythonGroundReceiverMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonGroundReceiverMeasurement_init_ },
          { Py_tp_getset, t_PythonGroundReceiverMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGroundReceiverMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonGroundReceiverMeasurement, t_PythonGroundReceiverMeasurement, PythonGroundReceiverMeasurement);
        PyObject *t_PythonGroundReceiverMeasurement::wrap_Object(const PythonGroundReceiverMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonGroundReceiverMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonGroundReceiverMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGroundReceiverMeasurement), &PY_TYPE_DEF(PythonGroundReceiverMeasurement), module, "PythonGroundReceiverMeasurement", 1);
        }

        void t_PythonGroundReceiverMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "class_", make_descriptor(PythonGroundReceiverMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "wrapfn_", make_descriptor(t_PythonGroundReceiverMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGroundReceiverMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonGroundReceiverMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonGroundReceiverMeasurement::wrap_Object(PythonGroundReceiverMeasurement(((t_PythonGroundReceiverMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          PythonGroundReceiverMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = PythonGroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data)
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
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencyHatchFilter::class$ = NULL;
          jmethodID *DualFrequencyHatchFilter::mids$ = NULL;
          bool DualFrequencyHatchFilter::live$ = false;

          jclass DualFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_98d1fa5e5f58f19d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;DDDI)V");
              mids$[mid_filterData_add070bc4bad5f09] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_getFirstFrequencyPhaseHistory_d91fa6c7b6ddeaae] = env->getMethodID(cls, "getFirstFrequencyPhaseHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSecondFrequencyPhaseHistory_d91fa6c7b6ddeaae] = env->getMethodID(cls, "getSecondFrequencyPhaseHistory", "()Ljava/util/ArrayList;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencyHatchFilter::DualFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, jdouble a3, jdouble a4, jdouble a5, jint a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_98d1fa5e5f58f19d, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_add070bc4bad5f09], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getFirstFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getFirstFrequencyPhaseHistory_d91fa6c7b6ddeaae]));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getSecondFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSecondFrequencyPhaseHistory_d91fa6c7b6ddeaae]));
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
        namespace filtering {
          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args);
          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyGetSetDef t_DualFrequencyHatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, firstFrequencyPhaseHistory),
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, secondFrequencyPhaseHistory),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_DualFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, filterData, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getFirstFrequencyPhaseHistory, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getSecondFrequencyPhaseHistory, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_DualFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_DualFrequencyHatchFilter_init_ },
            { Py_tp_getset, t_DualFrequencyHatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(DualFrequencyHatchFilter, t_DualFrequencyHatchFilter, DualFrequencyHatchFilter);

          void t_DualFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencyHatchFilter), &PY_TYPE_DEF(DualFrequencyHatchFilter), module, "DualFrequencyHatchFilter", 0);
          }

          void t_DualFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "class_", make_descriptor(DualFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "wrapfn_", make_descriptor(t_DualFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_DualFrequencyHatchFilter::wrap_Object(DualFrequencyHatchFilter(((t_DualFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jint a6;
            DualFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDI", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = DualFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1, a2));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }

          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/CR3BPRotatingFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *CR3BPRotatingFrame::class$ = NULL;
      jmethodID *CR3BPRotatingFrame::mids$ = NULL;
      bool CR3BPRotatingFrame::live$ = false;

      jclass CR3BPRotatingFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/CR3BPRotatingFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_33e77487918af638] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPRotatingFrame::CR3BPRotatingFrame(jdouble a0, const ::org::orekit::bodies::CelestialBody & a1, const ::org::orekit::bodies::CelestialBody & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_33e77487918af638, a0, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_CR3BPRotatingFrame__methods_[] = {
        DECLARE_METHOD(t_CR3BPRotatingFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPRotatingFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPRotatingFrame)[] = {
        { Py_tp_methods, t_CR3BPRotatingFrame__methods_ },
        { Py_tp_init, (void *) t_CR3BPRotatingFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPRotatingFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(CR3BPRotatingFrame, t_CR3BPRotatingFrame, CR3BPRotatingFrame);

      void t_CR3BPRotatingFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPRotatingFrame), &PY_TYPE_DEF(CR3BPRotatingFrame), module, "CR3BPRotatingFrame", 0);
      }

      void t_CR3BPRotatingFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "class_", make_descriptor(CR3BPRotatingFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "wrapfn_", make_descriptor(t_CR3BPRotatingFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPRotatingFrame::initializeClass, 1)))
          return NULL;
        return t_CR3BPRotatingFrame::wrap_Object(CR3BPRotatingFrame(((t_CR3BPRotatingFrame *) arg)->object.this$));
      }
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPRotatingFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
        CR3BPRotatingFrame object((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPRotatingFrame(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader$LineParameters::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader$LineParameters::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader$LineParameters::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_b2c45b61abaea01a] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getAp_dff5885c2c873297] = env->getMethodID(cls, "getAp", "()D");
                mids$[mid_getF107_dff5885c2c873297] = env->getMethodID(cls, "getF107", "()D");
                mids$[mid_getFileDate_06e6477664d37caa] = env->getMethodID(cls, "getFileDate", "()Lorg/orekit/time/DateComponents;");
                mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_b2c45b61abaea01a], a0.this$);
            }

            jboolean MarshallSolarActivityFutureEstimationLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getAp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAp_dff5885c2c873297]);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getF107() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107_dff5885c2c873297]);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimationLoader$LineParameters::getFileDate() const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_06e6477664d37caa]));
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, ap),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, f107),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, fileDate),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getAp, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getF107, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getFileDate, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters, t_MarshallSolarActivityFutureEstimationLoader$LineParameters, MarshallSolarActivityFutureEstimationLoader$LineParameters);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(const MarshallSolarActivityFutureEstimationLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters), module, "MarshallSolarActivityFutureEstimationLoader$LineParameters", 0);
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(MarshallSolarActivityFutureEstimationLoader$LineParameters(((t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              ::org::orekit::time::DateComponents result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAp());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::DateComponents value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldBivariateFunction::class$ = NULL;
      jmethodID *FieldBivariateFunction::mids$ = NULL;
      bool FieldBivariateFunction::live$ = false;

      jclass FieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldBivariateFunction_a48fe1410b9380f5] = env->getMethodID(cls, "toCalculusFieldBivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldBivariateFunction;");
          mids$[mid_value_6746cc1cd9210d54] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldBivariateFunction FieldBivariateFunction::toCalculusFieldBivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldBivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldBivariateFunction_a48fe1410b9380f5], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6746cc1cd9210d54], a0.this$, a1.this$));
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
      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args);

      static PyMethodDef t_FieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, toCalculusFieldBivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBivariateFunction)[] = {
        { Py_tp_methods, t_FieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBivariateFunction, t_FieldBivariateFunction, FieldBivariateFunction);

      void t_FieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBivariateFunction), &PY_TYPE_DEF(FieldBivariateFunction), module, "FieldBivariateFunction", 0);
      }

      void t_FieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "class_", make_descriptor(FieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "wrapfn_", make_descriptor(t_FieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldBivariateFunction::wrap_Object(FieldBivariateFunction(((t_FieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldBivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldBivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldBivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldBivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *LazyLoadedDataContext::class$ = NULL;
      jmethodID *LazyLoadedDataContext::mids$ = NULL;
      bool LazyLoadedDataContext::live$ = false;

      jclass LazyLoadedDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/LazyLoadedDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_fc81056d907ed286] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getDataProvidersManager_69fa4d0abe16d651] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getFrames_ac56fa33f5ed59f4] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_df53e62f422caa08] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_6e6081b92fd46837] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_81309dd1495ca0f7] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedDataContext::LazyLoadedDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies LazyLoadedDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_fc81056d907ed286]));
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedDataContext::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_69fa4d0abe16d651]));
      }

      ::org::orekit::frames::LazyLoadedFrames LazyLoadedDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_ac56fa33f5ed59f4]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields LazyLoadedDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_df53e62f422caa08]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields LazyLoadedDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_6e6081b92fd46837]));
      }

      ::org::orekit::time::LazyLoadedTimeScales LazyLoadedDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_81309dd1495ca0f7]));
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
      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data);
      static PyGetSetDef t_LazyLoadedDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, dataProvidersManager),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, frames),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, gravityFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedDataContext__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedDataContext)[] = {
        { Py_tp_methods, t_LazyLoadedDataContext__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedDataContext_init_ },
        { Py_tp_getset, t_LazyLoadedDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedDataContext, t_LazyLoadedDataContext, LazyLoadedDataContext);

      void t_LazyLoadedDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedDataContext), &PY_TYPE_DEF(LazyLoadedDataContext), module, "LazyLoadedDataContext", 0);
      }

      void t_LazyLoadedDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "class_", make_descriptor(LazyLoadedDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "wrapfn_", make_descriptor(t_LazyLoadedDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedDataContext::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedDataContext::wrap_Object(LazyLoadedDataContext(((t_LazyLoadedDataContext *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds)
      {
        LazyLoadedDataContext object((jobject) NULL);

        INT_CALL(object = LazyLoadedDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonTideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonTideSystemProvider::class$ = NULL;
          jmethodID *PythonTideSystemProvider::mids$ = NULL;
          bool PythonTideSystemProvider::live$ = false;

          jclass PythonTideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonTideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTideSystemProvider::PythonTideSystemProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonTideSystemProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonTideSystemProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonTideSystemProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self);
          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args);
          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data);
          static PyGetSetDef t_PythonTideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTideSystemProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_PythonTideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTideSystemProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTideSystemProvider)[] = {
            { Py_tp_methods, t_PythonTideSystemProvider__methods_ },
            { Py_tp_init, (void *) t_PythonTideSystemProvider_init_ },
            { Py_tp_getset, t_PythonTideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTideSystemProvider, t_PythonTideSystemProvider, PythonTideSystemProvider);

          void t_PythonTideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTideSystemProvider), &PY_TYPE_DEF(PythonTideSystemProvider), module, "PythonTideSystemProvider", 1);
          }

          void t_PythonTideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "class_", make_descriptor(PythonTideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "wrapfn_", make_descriptor(t_PythonTideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTideSystemProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonTideSystemProvider_getTideSystem0 },
              { "pythonDecRef", "()V", (void *) t_PythonTideSystemProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_PythonTideSystemProvider::wrap_Object(PythonTideSystemProvider(((t_PythonTideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonTideSystemProvider object((jobject) NULL);

            INT_CALL(object = PythonTideSystemProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransform::class$ = NULL;
      jmethodID *FieldTransform::mids$ = NULL;
      bool FieldTransform::live$ = false;

      jclass FieldTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b65ab84bb47d00a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_468ba0bc6c5bf070] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_26718f4f8a0dd037] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_ffeb9db3a56160f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_377b90ea2be02ed7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_3a3329f14a7830fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_e4eca126a7326a31] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_3b280fe84d2fa2bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/FieldTransform;)V");
          mids$[mid_init$_b615b416f90b473e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_22c42e194d2f9e41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_freeze_8c35d0b6fdd377c3] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getAcceleration_716f50c86ffc8da7] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngular_816428dc64133c35] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getCartesian_aae6180d70913ad4] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFieldDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getFieldDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getIdentity_e1a67a7e3aeecd7e] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getInverse_8c35d0b6fdd377c3] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getJacobian_17a769a90b4358b9] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getRotation_1d339a2ee3a3323a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_716f50c86ffc8da7] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_716f50c86ffc8da7] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTranslation_716f50c86ffc8da7] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_716f50c86ffc8da7] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_interpolate_16c4aa3db8b258a4] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_58f99d45c331a0a9] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_5679859ce4e8409b] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/stream/Stream;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_2541ce2a53eedbd6] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_958f5755b0dcd0d4] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_staticShiftedBy_edfa04e1609ffef6] = env->getMethodID(cls, "staticShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toStaticTransform_b4e9bd069b43219a] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformPVCoordinates_2c604bfeb0a28a2f] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_554e30441a4431d6] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_f76646e67e6a0632] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_ddd20dd2dd77e82a] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b65ab84bb47d00a7, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_468ba0bc6c5bf070, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26718f4f8a0dd037, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ffeb9db3a56160f3, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::Transform & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_377b90ea2be02ed7, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a3329f14a7830fd, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e4eca126a7326a31, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldTransform & a1, const FieldTransform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b280fe84d2fa2bd, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b615b416f90b473e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_22c42e194d2f9e41, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform FieldTransform::freeze() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_freeze_8c35d0b6fdd377c3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_716f50c86ffc8da7]));
      }

      ::org::orekit::utils::FieldAngularCoordinates FieldTransform::getAngular() const
      {
        return ::org::orekit::utils::FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_816428dc64133c35]));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::getCartesian() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_aae6180d70913ad4]));
      }

      ::org::orekit::time::AbsoluteDate FieldTransform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTransform::getFieldDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFieldDate_51da00d5b8a3b5df]));
      }

      FieldTransform FieldTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_e1a67a7e3aeecd7e], a0.this$));
      }

      FieldTransform FieldTransform::getInverse() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_getInverse_8c35d0b6fdd377c3]));
      }

      void FieldTransform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_17a769a90b4358b9], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1d339a2ee3a3323a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_716f50c86ffc8da7]));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_16c4aa3db8b258a4], a0.this$, a1.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_58f99d45c331a0a9], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::stream::Stream & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_5679859ce4e8409b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::shiftedBy(jdouble a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_2541ce2a53eedbd6], a0));
      }

      FieldTransform FieldTransform::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_958f5755b0dcd0d4], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::staticShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_edfa04e1609ffef6], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_b4e9bd069b43219a]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_2c604bfeb0a28a2f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_554e30441a4431d6], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_f76646e67e6a0632], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_ddd20dd2dd77e82a], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args);
      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self);
      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg);
      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self);
      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data);
      static PyGetSetDef t_FieldTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransform, acceleration),
        DECLARE_GET_FIELD(t_FieldTransform, angular),
        DECLARE_GET_FIELD(t_FieldTransform, cartesian),
        DECLARE_GET_FIELD(t_FieldTransform, date),
        DECLARE_GET_FIELD(t_FieldTransform, fieldDate),
        DECLARE_GET_FIELD(t_FieldTransform, inverse),
        DECLARE_GET_FIELD(t_FieldTransform, rotation),
        DECLARE_GET_FIELD(t_FieldTransform, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldTransform, rotationRate),
        DECLARE_GET_FIELD(t_FieldTransform, translation),
        DECLARE_GET_FIELD(t_FieldTransform, velocity),
        DECLARE_GET_FIELD(t_FieldTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransform__methods_[] = {
        DECLARE_METHOD(t_FieldTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getFieldDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, interpolate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldTransform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransform)[] = {
        { Py_tp_methods, t_FieldTransform__methods_ },
        { Py_tp_init, (void *) t_FieldTransform_init_ },
        { Py_tp_getset, t_FieldTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransform, t_FieldTransform, FieldTransform);
      PyObject *t_FieldTransform::wrap_Object(const FieldTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransform), &PY_TYPE_DEF(FieldTransform), module, "FieldTransform", 0);
      }

      void t_FieldTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "class_", make_descriptor(FieldTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "wrapfn_", make_descriptor(t_FieldTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransform::initializeClass, 1)))
          return NULL;
        return t_FieldTransform::wrap_Object(FieldTransform(((t_FieldTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Transform a1((jobject) NULL);
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldTransform::initializeClass, FieldTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldTransform::parameters_, &a2, &p2, t_FieldTransform::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
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

      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldTransform::getIdentity(a0));
          return t_FieldTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::Collection a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::stream::Stream a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "interpolate", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data)
      {
        FieldTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldTransform::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPBasedTransformProvider::class$ = NULL;
      jmethodID *EOPBasedTransformProvider::mids$ = NULL;
      bool EOPBasedTransformProvider::live$ = false;

      jclass EOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_a75a6d9d92c81a5e] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_8ac98ab37841bf77] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory EOPBasedTransformProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_a75a6d9d92c81a5e]));
      }

      EOPBasedTransformProvider EOPBasedTransformProvider::getNonInterpolatingProvider() const
      {
        return EOPBasedTransformProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_8ac98ab37841bf77]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data);
      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_EOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, eOPHistory),
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_EOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getNonInterpolatingProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_EOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::TransformProvider),
        NULL
      };

      DEFINE_TYPE(EOPBasedTransformProvider, t_EOPBasedTransformProvider, EOPBasedTransformProvider);

      void t_EOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPBasedTransformProvider), &PY_TYPE_DEF(EOPBasedTransformProvider), module, "EOPBasedTransformProvider", 0);
      }

      void t_EOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "class_", make_descriptor(EOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "wrapfn_", make_descriptor(t_EOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_EOPBasedTransformProvider::wrap_Object(EOPBasedTransformProvider(((t_EOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self)
      {
        EOPBasedTransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data)
      {
        EOPBasedTransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileInputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/IOException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileInputStream::class$ = NULL;
    jmethodID *FileInputStream::mids$ = NULL;
    bool FileInputStream::live$ = false;

    jclass FileInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0613af62f2ba5dba] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_9d90d2b41ddf88a5] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_available_570ce0828f81a2c1] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_1b2c26fd91c09af1] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_5702323b606d072b] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_619434785725cc72] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_skip_02b241598e254a3f] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileInputStream::FileInputStream(const ::java::io::File & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_0613af62f2ba5dba, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::io::FileDescriptor & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_9d90d2b41ddf88a5, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::lang::String & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    jint FileInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_570ce0828f81a2c1]);
    }

    void FileInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    ::java::io::FileDescriptor FileInputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_1b2c26fd91c09af1]));
    }

    jint FileInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_5702323b606d072b], a0.this$);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_619434785725cc72], a0.this$, a1, a2);
    }

    jlong FileInputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_02b241598e254a3f], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self);
    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data);
    static PyGetSetDef t_FileInputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileInputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileInputStream__methods_[] = {
      DECLARE_METHOD(t_FileInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileInputStream)[] = {
      { Py_tp_methods, t_FileInputStream__methods_ },
      { Py_tp_init, (void *) t_FileInputStream_init_ },
      { Py_tp_getset, t_FileInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(FileInputStream, t_FileInputStream, FileInputStream);

    void t_FileInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileInputStream), &PY_TYPE_DEF(FileInputStream), module, "FileInputStream", 0);
    }

    void t_FileInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "class_", make_descriptor(FileInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "wrapfn_", make_descriptor(t_FileInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileInputStream::initializeClass, 1)))
        return NULL;
      return t_FileInputStream::wrap_Object(FileInputStream(((t_FileInputStream *) arg)->object.this$));
    }
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileInputStream(a0));
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

    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "skip", args, 2);
    }

    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonTimeDerivativesEquations::mids$ = NULL;
        bool PythonTimeDerivativesEquations::live$ = false;

        jclass PythonTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_17db3a65980d3441] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_17db3a65980d3441] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_029ff0cbf68ea054] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTimeDerivativesEquations::PythonTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonTimeDerivativesEquations::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self);
        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTimeDerivativesEquations, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTimeDerivativesEquations, t_PythonTimeDerivativesEquations, PythonTimeDerivativesEquations);

        void t_PythonTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTimeDerivativesEquations), &PY_TYPE_DEF(PythonTimeDerivativesEquations), module, "PythonTimeDerivativesEquations", 1);
        }

        void t_PythonTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "class_", make_descriptor(PythonTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(D)V", (void *) t_PythonTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(D)V", (void *) t_PythonTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V", (void *) t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonTimeDerivativesEquations::wrap_Object(PythonTimeDerivativesEquations(((t_PythonTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryAttribute.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryAttribute::class$ = NULL;
        jmethodID *BoundaryAttribute::mids$ = NULL;
        bool BoundaryAttribute::live$ = false;

        jclass BoundaryAttribute::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryAttribute");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPlusInside_6e34449919366687] = env->getMethodID(cls, "getPlusInside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlusOutside_6e34449919366687] = env->getMethodID(cls, "getPlusOutside", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSplitters_2147d93a31c2c0b0] = env->getMethodID(cls, "getSplitters", "()Lorg/hipparchus/geometry/partitioning/NodesSet;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusInside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusInside_6e34449919366687]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BoundaryAttribute::getPlusOutside() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlusOutside_6e34449919366687]));
        }

        ::org::hipparchus::geometry::partitioning::NodesSet BoundaryAttribute::getSplitters() const
        {
          return ::org::hipparchus::geometry::partitioning::NodesSet(env->callObjectMethod(this$, mids$[mid_getSplitters_2147d93a31c2c0b0]));
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
      namespace partitioning {
        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args);
        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self);
        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data);
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data);
        static PyGetSetDef t_BoundaryAttribute__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusInside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, plusOutside),
          DECLARE_GET_FIELD(t_BoundaryAttribute, splitters),
          DECLARE_GET_FIELD(t_BoundaryAttribute, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryAttribute__methods_[] = {
          DECLARE_METHOD(t_BoundaryAttribute, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryAttribute, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusInside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getPlusOutside, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryAttribute, getSplitters, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryAttribute)[] = {
          { Py_tp_methods, t_BoundaryAttribute__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BoundaryAttribute__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryAttribute)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryAttribute, t_BoundaryAttribute, BoundaryAttribute);
        PyObject *t_BoundaryAttribute::wrap_Object(const BoundaryAttribute& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryAttribute::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryAttribute::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryAttribute *self = (t_BoundaryAttribute *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryAttribute::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryAttribute), &PY_TYPE_DEF(BoundaryAttribute), module, "BoundaryAttribute", 0);
        }

        void t_BoundaryAttribute::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "class_", make_descriptor(BoundaryAttribute::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "wrapfn_", make_descriptor(t_BoundaryAttribute::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryAttribute), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryAttribute_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryAttribute::initializeClass, 1)))
            return NULL;
          return t_BoundaryAttribute::wrap_Object(BoundaryAttribute(((t_BoundaryAttribute *) arg)->object.this$));
        }
        static PyObject *t_BoundaryAttribute_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryAttribute::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryAttribute_of_(t_BoundaryAttribute *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BoundaryAttribute_getPlusInside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getPlusOutside(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryAttribute_getSplitters(t_BoundaryAttribute *self)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryAttribute_get__parameters_(t_BoundaryAttribute *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryAttribute_get__plusInside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusInside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__plusOutside(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlusOutside());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BoundaryAttribute_get__splitters(t_BoundaryAttribute *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::NodesSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getSplitters());
          return ::org::hipparchus::geometry::partitioning::t_NodesSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader$RangeType::class$ = NULL;
        jmethodID *CRDHeader$RangeType::mids$ = NULL;
        bool CRDHeader$RangeType::live$ = false;
        CRDHeader$RangeType *CRDHeader$RangeType::MIXED = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::NO_RANGES = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::ONE_WAY = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::RECEIVED_ONLY = NULL;
        CRDHeader$RangeType *CRDHeader$RangeType::TWO_WAY = NULL;

        jclass CRDHeader$RangeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader$RangeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_getRangeType_22475d41bb366e9e] = env->getStaticMethodID(cls, "getRangeType", "(I)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_valueOf_489a5542e981a997] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_values_d34a4affbcf89f4a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$RangeType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIXED = new CRDHeader$RangeType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            NO_RANGES = new CRDHeader$RangeType(env->getStaticObjectField(cls, "NO_RANGES", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            ONE_WAY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            RECEIVED_ONLY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "RECEIVED_ONLY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            TWO_WAY = new CRDHeader$RangeType(env->getStaticObjectField(cls, "TWO_WAY", "Lorg/orekit/files/ilrs/CRDHeader$RangeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint CRDHeader$RangeType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_570ce0828f81a2c1]);
        }

        CRDHeader$RangeType CRDHeader$RangeType::getRangeType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_getRangeType_22475d41bb366e9e], a0));
        }

        CRDHeader$RangeType CRDHeader$RangeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_489a5542e981a997], a0.this$));
        }

        JArray< CRDHeader$RangeType > CRDHeader$RangeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$RangeType >(env->callStaticObjectMethod(cls, mids$[mid_values_d34a4affbcf89f4a]));
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
      namespace ilrs {
        static PyObject *t_CRDHeader$RangeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_of_(t_CRDHeader$RangeType *self, PyObject *args);
        static PyObject *t_CRDHeader$RangeType_getIndicator(t_CRDHeader$RangeType *self);
        static PyObject *t_CRDHeader$RangeType_getRangeType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$RangeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRDHeader$RangeType_values(PyTypeObject *type);
        static PyObject *t_CRDHeader$RangeType_get__indicator(t_CRDHeader$RangeType *self, void *data);
        static PyObject *t_CRDHeader$RangeType_get__parameters_(t_CRDHeader$RangeType *self, void *data);
        static PyGetSetDef t_CRDHeader$RangeType__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader$RangeType, indicator),
          DECLARE_GET_FIELD(t_CRDHeader$RangeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader$RangeType__methods_[] = {
          DECLARE_METHOD(t_CRDHeader$RangeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_CRDHeader$RangeType, getIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader$RangeType, getRangeType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$RangeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader$RangeType)[] = {
          { Py_tp_methods, t_CRDHeader$RangeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_CRDHeader$RangeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader$RangeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(CRDHeader$RangeType, t_CRDHeader$RangeType, CRDHeader$RangeType);
        PyObject *t_CRDHeader$RangeType::wrap_Object(const CRDHeader$RangeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$RangeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$RangeType *self = (t_CRDHeader$RangeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_CRDHeader$RangeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$RangeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$RangeType *self = (t_CRDHeader$RangeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_CRDHeader$RangeType::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader$RangeType), &PY_TYPE_DEF(CRDHeader$RangeType), module, "CRDHeader$RangeType", 0);
        }

        void t_CRDHeader$RangeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "class_", make_descriptor(CRDHeader$RangeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "wrapfn_", make_descriptor(t_CRDHeader$RangeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDHeader$RangeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "MIXED", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "NO_RANGES", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::NO_RANGES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "ONE_WAY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::ONE_WAY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "RECEIVED_ONLY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::RECEIVED_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$RangeType), "TWO_WAY", make_descriptor(t_CRDHeader$RangeType::wrap_Object(*CRDHeader$RangeType::TWO_WAY)));
        }

        static PyObject *t_CRDHeader$RangeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader$RangeType::initializeClass, 1)))
            return NULL;
          return t_CRDHeader$RangeType::wrap_Object(CRDHeader$RangeType(((t_CRDHeader$RangeType *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader$RangeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader$RangeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CRDHeader$RangeType_of_(t_CRDHeader$RangeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_CRDHeader$RangeType_getIndicator(t_CRDHeader$RangeType *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader$RangeType_getRangeType(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          CRDHeader$RangeType result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::getRangeType(a0));
            return t_CRDHeader$RangeType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getRangeType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader$RangeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          CRDHeader$RangeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::valueOf(a0));
            return t_CRDHeader$RangeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_CRDHeader$RangeType_values(PyTypeObject *type)
        {
          JArray< CRDHeader$RangeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$RangeType::values());
          return JArray<jobject>(result.this$).wrap(t_CRDHeader$RangeType::wrap_jobject);
        }
        static PyObject *t_CRDHeader$RangeType_get__parameters_(t_CRDHeader$RangeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_CRDHeader$RangeType_get__indicator(t_CRDHeader$RangeType *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIndicator());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmDataField::class$ = NULL;
          jmethodID *RtcmDataField::mids$ = NULL;
          bool RtcmDataField::live$ = false;
          RtcmDataField *RtcmDataField::DF002 = NULL;
          RtcmDataField *RtcmDataField::DF009 = NULL;
          RtcmDataField *RtcmDataField::DF038 = NULL;
          RtcmDataField *RtcmDataField::DF040 = NULL;
          RtcmDataField *RtcmDataField::DF068 = NULL;
          RtcmDataField *RtcmDataField::DF071 = NULL;
          RtcmDataField *RtcmDataField::DF076 = NULL;
          RtcmDataField *RtcmDataField::DF077 = NULL;
          RtcmDataField *RtcmDataField::DF078 = NULL;
          RtcmDataField *RtcmDataField::DF079 = NULL;
          RtcmDataField *RtcmDataField::DF081 = NULL;
          RtcmDataField *RtcmDataField::DF082 = NULL;
          RtcmDataField *RtcmDataField::DF083 = NULL;
          RtcmDataField *RtcmDataField::DF084 = NULL;
          RtcmDataField *RtcmDataField::DF085 = NULL;
          RtcmDataField *RtcmDataField::DF086 = NULL;
          RtcmDataField *RtcmDataField::DF087 = NULL;
          RtcmDataField *RtcmDataField::DF088 = NULL;
          RtcmDataField *RtcmDataField::DF089 = NULL;
          RtcmDataField *RtcmDataField::DF090 = NULL;
          RtcmDataField *RtcmDataField::DF091 = NULL;
          RtcmDataField *RtcmDataField::DF092 = NULL;
          RtcmDataField *RtcmDataField::DF093 = NULL;
          RtcmDataField *RtcmDataField::DF094 = NULL;
          RtcmDataField *RtcmDataField::DF095 = NULL;
          RtcmDataField *RtcmDataField::DF096 = NULL;
          RtcmDataField *RtcmDataField::DF097 = NULL;
          RtcmDataField *RtcmDataField::DF098 = NULL;
          RtcmDataField *RtcmDataField::DF099 = NULL;
          RtcmDataField *RtcmDataField::DF100 = NULL;
          RtcmDataField *RtcmDataField::DF101 = NULL;
          RtcmDataField *RtcmDataField::DF102 = NULL;
          RtcmDataField *RtcmDataField::DF103 = NULL;
          RtcmDataField *RtcmDataField::DF104 = NULL;
          RtcmDataField *RtcmDataField::DF105 = NULL;
          RtcmDataField *RtcmDataField::DF106 = NULL;
          RtcmDataField *RtcmDataField::DF107 = NULL;
          RtcmDataField *RtcmDataField::DF108 = NULL;
          RtcmDataField *RtcmDataField::DF109 = NULL;
          RtcmDataField *RtcmDataField::DF110 = NULL;
          RtcmDataField *RtcmDataField::DF111 = NULL;
          RtcmDataField *RtcmDataField::DF112 = NULL;
          RtcmDataField *RtcmDataField::DF113 = NULL;
          RtcmDataField *RtcmDataField::DF114 = NULL;
          RtcmDataField *RtcmDataField::DF115 = NULL;
          RtcmDataField *RtcmDataField::DF116 = NULL;
          RtcmDataField *RtcmDataField::DF117 = NULL;
          RtcmDataField *RtcmDataField::DF118 = NULL;
          RtcmDataField *RtcmDataField::DF119 = NULL;
          RtcmDataField *RtcmDataField::DF120 = NULL;
          RtcmDataField *RtcmDataField::DF121 = NULL;
          RtcmDataField *RtcmDataField::DF122 = NULL;
          RtcmDataField *RtcmDataField::DF123 = NULL;
          RtcmDataField *RtcmDataField::DF124 = NULL;
          RtcmDataField *RtcmDataField::DF125 = NULL;
          RtcmDataField *RtcmDataField::DF126 = NULL;
          RtcmDataField *RtcmDataField::DF127 = NULL;
          RtcmDataField *RtcmDataField::DF128 = NULL;
          RtcmDataField *RtcmDataField::DF129 = NULL;
          RtcmDataField *RtcmDataField::DF130 = NULL;
          RtcmDataField *RtcmDataField::DF131 = NULL;
          RtcmDataField *RtcmDataField::DF132 = NULL;
          RtcmDataField *RtcmDataField::DF133 = NULL;
          RtcmDataField *RtcmDataField::DF134 = NULL;
          RtcmDataField *RtcmDataField::DF135 = NULL;
          RtcmDataField *RtcmDataField::DF136 = NULL;
          RtcmDataField *RtcmDataField::DF137 = NULL;
          RtcmDataField *RtcmDataField::DF252 = NULL;
          RtcmDataField *RtcmDataField::DF289 = NULL;
          RtcmDataField *RtcmDataField::DF290 = NULL;
          RtcmDataField *RtcmDataField::DF291 = NULL;
          RtcmDataField *RtcmDataField::DF292 = NULL;
          RtcmDataField *RtcmDataField::DF293 = NULL;
          RtcmDataField *RtcmDataField::DF294 = NULL;
          RtcmDataField *RtcmDataField::DF295 = NULL;
          RtcmDataField *RtcmDataField::DF296 = NULL;
          RtcmDataField *RtcmDataField::DF297 = NULL;
          RtcmDataField *RtcmDataField::DF298 = NULL;
          RtcmDataField *RtcmDataField::DF299 = NULL;
          RtcmDataField *RtcmDataField::DF300 = NULL;
          RtcmDataField *RtcmDataField::DF301 = NULL;
          RtcmDataField *RtcmDataField::DF302 = NULL;
          RtcmDataField *RtcmDataField::DF303 = NULL;
          RtcmDataField *RtcmDataField::DF304 = NULL;
          RtcmDataField *RtcmDataField::DF305 = NULL;
          RtcmDataField *RtcmDataField::DF306 = NULL;
          RtcmDataField *RtcmDataField::DF307 = NULL;
          RtcmDataField *RtcmDataField::DF308 = NULL;
          RtcmDataField *RtcmDataField::DF309 = NULL;
          RtcmDataField *RtcmDataField::DF310 = NULL;
          RtcmDataField *RtcmDataField::DF311 = NULL;
          RtcmDataField *RtcmDataField::DF312 = NULL;
          RtcmDataField *RtcmDataField::DF313 = NULL;
          RtcmDataField *RtcmDataField::DF314 = NULL;
          RtcmDataField *RtcmDataField::DF315 = NULL;
          RtcmDataField *RtcmDataField::DF316 = NULL;
          RtcmDataField *RtcmDataField::DF317 = NULL;
          RtcmDataField *RtcmDataField::DF365 = NULL;
          RtcmDataField *RtcmDataField::DF366 = NULL;
          RtcmDataField *RtcmDataField::DF367 = NULL;
          RtcmDataField *RtcmDataField::DF368 = NULL;
          RtcmDataField *RtcmDataField::DF369 = NULL;
          RtcmDataField *RtcmDataField::DF370 = NULL;
          RtcmDataField *RtcmDataField::DF375 = NULL;
          RtcmDataField *RtcmDataField::DF376 = NULL;
          RtcmDataField *RtcmDataField::DF377 = NULL;
          RtcmDataField *RtcmDataField::DF378 = NULL;
          RtcmDataField *RtcmDataField::DF384 = NULL;
          RtcmDataField *RtcmDataField::DF385 = NULL;
          RtcmDataField *RtcmDataField::DF386 = NULL;
          RtcmDataField *RtcmDataField::DF387 = NULL;
          RtcmDataField *RtcmDataField::DF388 = NULL;
          RtcmDataField *RtcmDataField::DF391 = NULL;
          RtcmDataField *RtcmDataField::DF392 = NULL;
          RtcmDataField *RtcmDataField::DF413 = NULL;
          RtcmDataField *RtcmDataField::DF414 = NULL;
          RtcmDataField *RtcmDataField::DF415 = NULL;
          RtcmDataField *RtcmDataField::DF429 = NULL;
          RtcmDataField *RtcmDataField::DF430 = NULL;
          RtcmDataField *RtcmDataField::DF431 = NULL;
          RtcmDataField *RtcmDataField::DF432 = NULL;
          RtcmDataField *RtcmDataField::DF433 = NULL;
          RtcmDataField *RtcmDataField::DF434 = NULL;
          RtcmDataField *RtcmDataField::DF435 = NULL;
          RtcmDataField *RtcmDataField::DF436 = NULL;
          RtcmDataField *RtcmDataField::DF437 = NULL;
          RtcmDataField *RtcmDataField::DF438 = NULL;
          RtcmDataField *RtcmDataField::DF439 = NULL;
          RtcmDataField *RtcmDataField::DF440 = NULL;
          RtcmDataField *RtcmDataField::DF441 = NULL;
          RtcmDataField *RtcmDataField::DF442 = NULL;
          RtcmDataField *RtcmDataField::DF443 = NULL;
          RtcmDataField *RtcmDataField::DF444 = NULL;
          RtcmDataField *RtcmDataField::DF445 = NULL;
          RtcmDataField *RtcmDataField::DF446 = NULL;
          RtcmDataField *RtcmDataField::DF447 = NULL;
          RtcmDataField *RtcmDataField::DF448 = NULL;
          RtcmDataField *RtcmDataField::DF449 = NULL;
          RtcmDataField *RtcmDataField::DF450 = NULL;
          RtcmDataField *RtcmDataField::DF451 = NULL;
          RtcmDataField *RtcmDataField::DF452 = NULL;
          RtcmDataField *RtcmDataField::DF453 = NULL;
          RtcmDataField *RtcmDataField::DF454 = NULL;
          RtcmDataField *RtcmDataField::DF455 = NULL;
          RtcmDataField *RtcmDataField::DF456 = NULL;
          RtcmDataField *RtcmDataField::DF457 = NULL;
          RtcmDataField *RtcmDataField::DF458 = NULL;
          RtcmDataField *RtcmDataField::DF488 = NULL;
          RtcmDataField *RtcmDataField::DF489 = NULL;
          RtcmDataField *RtcmDataField::DF490 = NULL;
          RtcmDataField *RtcmDataField::DF491 = NULL;
          RtcmDataField *RtcmDataField::DF492 = NULL;
          RtcmDataField *RtcmDataField::DF493 = NULL;
          RtcmDataField *RtcmDataField::DF494 = NULL;
          RtcmDataField *RtcmDataField::DF495 = NULL;
          RtcmDataField *RtcmDataField::DF496 = NULL;
          RtcmDataField *RtcmDataField::DF497 = NULL;
          RtcmDataField *RtcmDataField::DF498 = NULL;
          RtcmDataField *RtcmDataField::DF499 = NULL;
          RtcmDataField *RtcmDataField::DF500 = NULL;
          RtcmDataField *RtcmDataField::DF501 = NULL;
          RtcmDataField *RtcmDataField::DF502 = NULL;
          RtcmDataField *RtcmDataField::DF503 = NULL;
          RtcmDataField *RtcmDataField::DF504 = NULL;
          RtcmDataField *RtcmDataField::DF505 = NULL;
          RtcmDataField *RtcmDataField::DF506 = NULL;
          RtcmDataField *RtcmDataField::DF507 = NULL;
          RtcmDataField *RtcmDataField::DF508 = NULL;
          RtcmDataField *RtcmDataField::DF509 = NULL;
          RtcmDataField *RtcmDataField::DF510 = NULL;
          RtcmDataField *RtcmDataField::DF511 = NULL;
          RtcmDataField *RtcmDataField::DF512 = NULL;
          RtcmDataField *RtcmDataField::DF513 = NULL;
          RtcmDataField *RtcmDataField::DF514 = NULL;
          RtcmDataField *RtcmDataField::DF515 = NULL;

          jclass RtcmDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_14eb376e68869fc7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmDataField;");
              mids$[mid_values_f2eb5f44516d56a1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DF002 = new RtcmDataField(env->getStaticObjectField(cls, "DF002", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF009 = new RtcmDataField(env->getStaticObjectField(cls, "DF009", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF038 = new RtcmDataField(env->getStaticObjectField(cls, "DF038", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF040 = new RtcmDataField(env->getStaticObjectField(cls, "DF040", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF068 = new RtcmDataField(env->getStaticObjectField(cls, "DF068", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF071 = new RtcmDataField(env->getStaticObjectField(cls, "DF071", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF076 = new RtcmDataField(env->getStaticObjectField(cls, "DF076", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF077 = new RtcmDataField(env->getStaticObjectField(cls, "DF077", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF078 = new RtcmDataField(env->getStaticObjectField(cls, "DF078", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF079 = new RtcmDataField(env->getStaticObjectField(cls, "DF079", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF081 = new RtcmDataField(env->getStaticObjectField(cls, "DF081", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF082 = new RtcmDataField(env->getStaticObjectField(cls, "DF082", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF083 = new RtcmDataField(env->getStaticObjectField(cls, "DF083", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF084 = new RtcmDataField(env->getStaticObjectField(cls, "DF084", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF085 = new RtcmDataField(env->getStaticObjectField(cls, "DF085", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF086 = new RtcmDataField(env->getStaticObjectField(cls, "DF086", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF087 = new RtcmDataField(env->getStaticObjectField(cls, "DF087", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF088 = new RtcmDataField(env->getStaticObjectField(cls, "DF088", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF089 = new RtcmDataField(env->getStaticObjectField(cls, "DF089", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF090 = new RtcmDataField(env->getStaticObjectField(cls, "DF090", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF091 = new RtcmDataField(env->getStaticObjectField(cls, "DF091", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF092 = new RtcmDataField(env->getStaticObjectField(cls, "DF092", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF093 = new RtcmDataField(env->getStaticObjectField(cls, "DF093", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF094 = new RtcmDataField(env->getStaticObjectField(cls, "DF094", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF095 = new RtcmDataField(env->getStaticObjectField(cls, "DF095", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF096 = new RtcmDataField(env->getStaticObjectField(cls, "DF096", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF097 = new RtcmDataField(env->getStaticObjectField(cls, "DF097", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF098 = new RtcmDataField(env->getStaticObjectField(cls, "DF098", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF099 = new RtcmDataField(env->getStaticObjectField(cls, "DF099", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF100 = new RtcmDataField(env->getStaticObjectField(cls, "DF100", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF101 = new RtcmDataField(env->getStaticObjectField(cls, "DF101", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF102 = new RtcmDataField(env->getStaticObjectField(cls, "DF102", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF103 = new RtcmDataField(env->getStaticObjectField(cls, "DF103", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF104 = new RtcmDataField(env->getStaticObjectField(cls, "DF104", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF105 = new RtcmDataField(env->getStaticObjectField(cls, "DF105", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF106 = new RtcmDataField(env->getStaticObjectField(cls, "DF106", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF107 = new RtcmDataField(env->getStaticObjectField(cls, "DF107", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF108 = new RtcmDataField(env->getStaticObjectField(cls, "DF108", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF109 = new RtcmDataField(env->getStaticObjectField(cls, "DF109", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF110 = new RtcmDataField(env->getStaticObjectField(cls, "DF110", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF111 = new RtcmDataField(env->getStaticObjectField(cls, "DF111", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF112 = new RtcmDataField(env->getStaticObjectField(cls, "DF112", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF113 = new RtcmDataField(env->getStaticObjectField(cls, "DF113", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF114 = new RtcmDataField(env->getStaticObjectField(cls, "DF114", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF115 = new RtcmDataField(env->getStaticObjectField(cls, "DF115", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF116 = new RtcmDataField(env->getStaticObjectField(cls, "DF116", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF117 = new RtcmDataField(env->getStaticObjectField(cls, "DF117", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF118 = new RtcmDataField(env->getStaticObjectField(cls, "DF118", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF119 = new RtcmDataField(env->getStaticObjectField(cls, "DF119", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF120 = new RtcmDataField(env->getStaticObjectField(cls, "DF120", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF121 = new RtcmDataField(env->getStaticObjectField(cls, "DF121", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF122 = new RtcmDataField(env->getStaticObjectField(cls, "DF122", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF123 = new RtcmDataField(env->getStaticObjectField(cls, "DF123", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF124 = new RtcmDataField(env->getStaticObjectField(cls, "DF124", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF125 = new RtcmDataField(env->getStaticObjectField(cls, "DF125", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF126 = new RtcmDataField(env->getStaticObjectField(cls, "DF126", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF127 = new RtcmDataField(env->getStaticObjectField(cls, "DF127", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF128 = new RtcmDataField(env->getStaticObjectField(cls, "DF128", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF129 = new RtcmDataField(env->getStaticObjectField(cls, "DF129", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF130 = new RtcmDataField(env->getStaticObjectField(cls, "DF130", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF131 = new RtcmDataField(env->getStaticObjectField(cls, "DF131", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF132 = new RtcmDataField(env->getStaticObjectField(cls, "DF132", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF133 = new RtcmDataField(env->getStaticObjectField(cls, "DF133", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF134 = new RtcmDataField(env->getStaticObjectField(cls, "DF134", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF135 = new RtcmDataField(env->getStaticObjectField(cls, "DF135", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF136 = new RtcmDataField(env->getStaticObjectField(cls, "DF136", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF137 = new RtcmDataField(env->getStaticObjectField(cls, "DF137", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF252 = new RtcmDataField(env->getStaticObjectField(cls, "DF252", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF289 = new RtcmDataField(env->getStaticObjectField(cls, "DF289", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF290 = new RtcmDataField(env->getStaticObjectField(cls, "DF290", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF291 = new RtcmDataField(env->getStaticObjectField(cls, "DF291", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF292 = new RtcmDataField(env->getStaticObjectField(cls, "DF292", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF293 = new RtcmDataField(env->getStaticObjectField(cls, "DF293", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF294 = new RtcmDataField(env->getStaticObjectField(cls, "DF294", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF295 = new RtcmDataField(env->getStaticObjectField(cls, "DF295", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF296 = new RtcmDataField(env->getStaticObjectField(cls, "DF296", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF297 = new RtcmDataField(env->getStaticObjectField(cls, "DF297", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF298 = new RtcmDataField(env->getStaticObjectField(cls, "DF298", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF299 = new RtcmDataField(env->getStaticObjectField(cls, "DF299", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF300 = new RtcmDataField(env->getStaticObjectField(cls, "DF300", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF301 = new RtcmDataField(env->getStaticObjectField(cls, "DF301", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF302 = new RtcmDataField(env->getStaticObjectField(cls, "DF302", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF303 = new RtcmDataField(env->getStaticObjectField(cls, "DF303", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF304 = new RtcmDataField(env->getStaticObjectField(cls, "DF304", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF305 = new RtcmDataField(env->getStaticObjectField(cls, "DF305", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF306 = new RtcmDataField(env->getStaticObjectField(cls, "DF306", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF307 = new RtcmDataField(env->getStaticObjectField(cls, "DF307", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF308 = new RtcmDataField(env->getStaticObjectField(cls, "DF308", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF309 = new RtcmDataField(env->getStaticObjectField(cls, "DF309", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF310 = new RtcmDataField(env->getStaticObjectField(cls, "DF310", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF311 = new RtcmDataField(env->getStaticObjectField(cls, "DF311", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF312 = new RtcmDataField(env->getStaticObjectField(cls, "DF312", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF313 = new RtcmDataField(env->getStaticObjectField(cls, "DF313", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF314 = new RtcmDataField(env->getStaticObjectField(cls, "DF314", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF315 = new RtcmDataField(env->getStaticObjectField(cls, "DF315", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF316 = new RtcmDataField(env->getStaticObjectField(cls, "DF316", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF317 = new RtcmDataField(env->getStaticObjectField(cls, "DF317", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF365 = new RtcmDataField(env->getStaticObjectField(cls, "DF365", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF366 = new RtcmDataField(env->getStaticObjectField(cls, "DF366", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF367 = new RtcmDataField(env->getStaticObjectField(cls, "DF367", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF368 = new RtcmDataField(env->getStaticObjectField(cls, "DF368", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF369 = new RtcmDataField(env->getStaticObjectField(cls, "DF369", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF370 = new RtcmDataField(env->getStaticObjectField(cls, "DF370", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF375 = new RtcmDataField(env->getStaticObjectField(cls, "DF375", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF376 = new RtcmDataField(env->getStaticObjectField(cls, "DF376", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF377 = new RtcmDataField(env->getStaticObjectField(cls, "DF377", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF378 = new RtcmDataField(env->getStaticObjectField(cls, "DF378", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF384 = new RtcmDataField(env->getStaticObjectField(cls, "DF384", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF385 = new RtcmDataField(env->getStaticObjectField(cls, "DF385", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF386 = new RtcmDataField(env->getStaticObjectField(cls, "DF386", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF387 = new RtcmDataField(env->getStaticObjectField(cls, "DF387", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF388 = new RtcmDataField(env->getStaticObjectField(cls, "DF388", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF391 = new RtcmDataField(env->getStaticObjectField(cls, "DF391", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF392 = new RtcmDataField(env->getStaticObjectField(cls, "DF392", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF413 = new RtcmDataField(env->getStaticObjectField(cls, "DF413", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF414 = new RtcmDataField(env->getStaticObjectField(cls, "DF414", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF415 = new RtcmDataField(env->getStaticObjectField(cls, "DF415", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF429 = new RtcmDataField(env->getStaticObjectField(cls, "DF429", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF430 = new RtcmDataField(env->getStaticObjectField(cls, "DF430", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF431 = new RtcmDataField(env->getStaticObjectField(cls, "DF431", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF432 = new RtcmDataField(env->getStaticObjectField(cls, "DF432", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF433 = new RtcmDataField(env->getStaticObjectField(cls, "DF433", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF434 = new RtcmDataField(env->getStaticObjectField(cls, "DF434", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF435 = new RtcmDataField(env->getStaticObjectField(cls, "DF435", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF436 = new RtcmDataField(env->getStaticObjectField(cls, "DF436", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF437 = new RtcmDataField(env->getStaticObjectField(cls, "DF437", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF438 = new RtcmDataField(env->getStaticObjectField(cls, "DF438", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF439 = new RtcmDataField(env->getStaticObjectField(cls, "DF439", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF440 = new RtcmDataField(env->getStaticObjectField(cls, "DF440", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF441 = new RtcmDataField(env->getStaticObjectField(cls, "DF441", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF442 = new RtcmDataField(env->getStaticObjectField(cls, "DF442", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF443 = new RtcmDataField(env->getStaticObjectField(cls, "DF443", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF444 = new RtcmDataField(env->getStaticObjectField(cls, "DF444", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF445 = new RtcmDataField(env->getStaticObjectField(cls, "DF445", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF446 = new RtcmDataField(env->getStaticObjectField(cls, "DF446", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF447 = new RtcmDataField(env->getStaticObjectField(cls, "DF447", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF448 = new RtcmDataField(env->getStaticObjectField(cls, "DF448", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF449 = new RtcmDataField(env->getStaticObjectField(cls, "DF449", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF450 = new RtcmDataField(env->getStaticObjectField(cls, "DF450", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF451 = new RtcmDataField(env->getStaticObjectField(cls, "DF451", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF452 = new RtcmDataField(env->getStaticObjectField(cls, "DF452", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF453 = new RtcmDataField(env->getStaticObjectField(cls, "DF453", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF454 = new RtcmDataField(env->getStaticObjectField(cls, "DF454", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF455 = new RtcmDataField(env->getStaticObjectField(cls, "DF455", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF456 = new RtcmDataField(env->getStaticObjectField(cls, "DF456", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF457 = new RtcmDataField(env->getStaticObjectField(cls, "DF457", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF458 = new RtcmDataField(env->getStaticObjectField(cls, "DF458", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF488 = new RtcmDataField(env->getStaticObjectField(cls, "DF488", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF489 = new RtcmDataField(env->getStaticObjectField(cls, "DF489", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF490 = new RtcmDataField(env->getStaticObjectField(cls, "DF490", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF491 = new RtcmDataField(env->getStaticObjectField(cls, "DF491", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF492 = new RtcmDataField(env->getStaticObjectField(cls, "DF492", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF493 = new RtcmDataField(env->getStaticObjectField(cls, "DF493", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF494 = new RtcmDataField(env->getStaticObjectField(cls, "DF494", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF495 = new RtcmDataField(env->getStaticObjectField(cls, "DF495", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF496 = new RtcmDataField(env->getStaticObjectField(cls, "DF496", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF497 = new RtcmDataField(env->getStaticObjectField(cls, "DF497", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF498 = new RtcmDataField(env->getStaticObjectField(cls, "DF498", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF499 = new RtcmDataField(env->getStaticObjectField(cls, "DF499", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF500 = new RtcmDataField(env->getStaticObjectField(cls, "DF500", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF501 = new RtcmDataField(env->getStaticObjectField(cls, "DF501", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF502 = new RtcmDataField(env->getStaticObjectField(cls, "DF502", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF503 = new RtcmDataField(env->getStaticObjectField(cls, "DF503", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF504 = new RtcmDataField(env->getStaticObjectField(cls, "DF504", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF505 = new RtcmDataField(env->getStaticObjectField(cls, "DF505", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF506 = new RtcmDataField(env->getStaticObjectField(cls, "DF506", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF507 = new RtcmDataField(env->getStaticObjectField(cls, "DF507", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF508 = new RtcmDataField(env->getStaticObjectField(cls, "DF508", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF509 = new RtcmDataField(env->getStaticObjectField(cls, "DF509", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF510 = new RtcmDataField(env->getStaticObjectField(cls, "DF510", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF511 = new RtcmDataField(env->getStaticObjectField(cls, "DF511", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF512 = new RtcmDataField(env->getStaticObjectField(cls, "DF512", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF513 = new RtcmDataField(env->getStaticObjectField(cls, "DF513", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF514 = new RtcmDataField(env->getStaticObjectField(cls, "DF514", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF515 = new RtcmDataField(env->getStaticObjectField(cls, "DF515", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmDataField RtcmDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_14eb376e68869fc7], a0.this$));
          }

          JArray< RtcmDataField > RtcmDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_f2eb5f44516d56a1]));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args);
          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmDataField_values(PyTypeObject *type);
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data);
          static PyGetSetDef t_RtcmDataField__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmDataField__methods_[] = {
            DECLARE_METHOD(t_RtcmDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmDataField)[] = {
            { Py_tp_methods, t_RtcmDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmDataField, t_RtcmDataField, RtcmDataField);
          PyObject *t_RtcmDataField::wrap_Object(const RtcmDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmDataField), &PY_TYPE_DEF(RtcmDataField), module, "RtcmDataField", 0);
          }

          void t_RtcmDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "class_", make_descriptor(RtcmDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "wrapfn_", make_descriptor(t_RtcmDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF002", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF009", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF038", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF040", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF068", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF068)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF071", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF071)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF076", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF076)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF077", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF077)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF078", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF078)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF079", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF079)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF081", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF081)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF082", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF082)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF083", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF083)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF084", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF084)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF085", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF085)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF086", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF086)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF087", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF087)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF088", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF088)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF089", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF089)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF090", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF090)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF091", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF091)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF092", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF092)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF093", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF093)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF094", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF094)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF095", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF095)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF096", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF096)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF097", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF097)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF098", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF098)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF099", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF099)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF100", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF100)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF101", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF101)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF102", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF102)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF103", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF103)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF104", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF104)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF105", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF105)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF106", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF106)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF107", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF107)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF108", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF108)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF109", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF109)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF110", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF110)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF111", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF111)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF112", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF112)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF113", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF113)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF114", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF114)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF115", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF115)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF116", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF116)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF117", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF117)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF118", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF118)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF119", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF119)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF120", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF120)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF121", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF121)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF122", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF122)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF123", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF123)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF124", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF124)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF125", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF125)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF126", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF126)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF127", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF127)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF128", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF128)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF129", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF129)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF130", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF130)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF131", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF131)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF132", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF132)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF133", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF133)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF134", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF134)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF135", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF135)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF136", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF136)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF137", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF137)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF252", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF252)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF289", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF289)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF290", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF290)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF291", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF291)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF292", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF292)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF293", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF293)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF294", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF294)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF295", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF295)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF296", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF296)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF297", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF297)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF298", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF298)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF299", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF299)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF300", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF300)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF301", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF301)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF302", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF302)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF303", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF303)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF304", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF304)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF305", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF305)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF306", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF306)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF307", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF307)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF308", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF308)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF309", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF309)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF310", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF310)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF311", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF311)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF312", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF312)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF313", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF313)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF314", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF314)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF315", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF315)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF316", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF316)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF317", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF317)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF365", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF365)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF366", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF366)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF367", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF367)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF368", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF368)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF369", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF369)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF370", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF370)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF375", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF375)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF376", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF376)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF377", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF377)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF378", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF378)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF384", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF384)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF385", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF385)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF386", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF386)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF387", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF387)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF388", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF388)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF391", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF391)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF392", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF392)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF413", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF413)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF414", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF414)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF415", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF415)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF429", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF429)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF430", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF430)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF431", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF431)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF432", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF432)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF433", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF433)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF434", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF434)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF435", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF435)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF436", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF436)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF437", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF437)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF438", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF438)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF439", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF439)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF440", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF440)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF441", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF441)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF442", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF442)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF443", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF443)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF444", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF444)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF445", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF445)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF446", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF446)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF447", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF447)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF448", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF448)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF449", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF449)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF450", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF450)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF451", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF451)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF452", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF452)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF453", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF453)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF454", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF454)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF455", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF455)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF456", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF456)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF457", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF457)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF458", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF458)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF488", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF488)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF489", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF489)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF490", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF490)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF491", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF491)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF492", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF492)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF493", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF493)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF494", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF494)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF495", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF495)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF496", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF496)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF497", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF497)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF498", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF498)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF499", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF499)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF500", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF500)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF501", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF501)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF502", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF502)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF503", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF503)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF504", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF504)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF505", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF505)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF506", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF506)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF507", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF507)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF508", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF508)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF509", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF509)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF510", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF510)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF511", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF511)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF512", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF512)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF513", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF513)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF514", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF514)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF515", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF515)));
          }

          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmDataField::initializeClass, 1)))
              return NULL;
            return t_RtcmDataField::wrap_Object(RtcmDataField(((t_RtcmDataField *) arg)->object.this$));
          }
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::valueOf(a0));
              return t_RtcmDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmDataField_values(PyTypeObject *type)
          {
            JArray< RtcmDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmDataField::wrap_jobject);
          }
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data)
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
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbDescription::class$ = NULL;
        jmethodID *DcbDescription::mids$ = NULL;
        bool DcbDescription::live$ = false;

        jclass DcbDescription::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbDescription");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBiasMode_11b109bd155ca898] = env->getMethodID(cls, "getBiasMode", "()Ljava/lang/String;");
            mids$[mid_getDeterminationMethod_11b109bd155ca898] = env->getMethodID(cls, "getDeterminationMethod", "()Ljava/lang/String;");
            mids$[mid_getObservationSampling_570ce0828f81a2c1] = env->getMethodID(cls, "getObservationSampling", "()I");
            mids$[mid_getParameterSpacing_570ce0828f81a2c1] = env->getMethodID(cls, "getParameterSpacing", "()I");
            mids$[mid_getTimeSystem_47ed81afbc0cea8f] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_setBiasMode_d0bc48d5b00dc40c] = env->getMethodID(cls, "setBiasMode", "(Ljava/lang/String;)V");
            mids$[mid_setDeterminationMethod_d0bc48d5b00dc40c] = env->getMethodID(cls, "setDeterminationMethod", "(Ljava/lang/String;)V");
            mids$[mid_setObservationSampling_99803b0791f320ff] = env->getMethodID(cls, "setObservationSampling", "(I)V");
            mids$[mid_setParameterSpacing_99803b0791f320ff] = env->getMethodID(cls, "setParameterSpacing", "(I)V");
            mids$[mid_setTimeSystem_188d9681dd6fbe69] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbDescription::DcbDescription() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::java::lang::String DcbDescription::getBiasMode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBiasMode_11b109bd155ca898]));
        }

        ::java::lang::String DcbDescription::getDeterminationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeterminationMethod_11b109bd155ca898]));
        }

        jint DcbDescription::getObservationSampling() const
        {
          return env->callIntMethod(this$, mids$[mid_getObservationSampling_570ce0828f81a2c1]);
        }

        jint DcbDescription::getParameterSpacing() const
        {
          return env->callIntMethod(this$, mids$[mid_getParameterSpacing_570ce0828f81a2c1]);
        }

        ::org::orekit::gnss::TimeSystem DcbDescription::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_47ed81afbc0cea8f]));
        }

        void DcbDescription::setBiasMode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBiasMode_d0bc48d5b00dc40c], a0.this$);
        }

        void DcbDescription::setDeterminationMethod(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDeterminationMethod_d0bc48d5b00dc40c], a0.this$);
        }

        void DcbDescription::setObservationSampling(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObservationSampling_99803b0791f320ff], a0);
        }

        void DcbDescription::setParameterSpacing(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterSpacing_99803b0791f320ff], a0);
        }

        void DcbDescription::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_188d9681dd6fbe69], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self);
        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data);
        static PyGetSetDef t_DcbDescription__fields_[] = {
          DECLARE_GETSET_FIELD(t_DcbDescription, biasMode),
          DECLARE_GETSET_FIELD(t_DcbDescription, determinationMethod),
          DECLARE_GETSET_FIELD(t_DcbDescription, observationSampling),
          DECLARE_GETSET_FIELD(t_DcbDescription, parameterSpacing),
          DECLARE_GETSET_FIELD(t_DcbDescription, timeSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbDescription__methods_[] = {
          DECLARE_METHOD(t_DcbDescription, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, getBiasMode, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getDeterminationMethod, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getObservationSampling, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getParameterSpacing, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, setBiasMode, METH_O),
          DECLARE_METHOD(t_DcbDescription, setDeterminationMethod, METH_O),
          DECLARE_METHOD(t_DcbDescription, setObservationSampling, METH_O),
          DECLARE_METHOD(t_DcbDescription, setParameterSpacing, METH_O),
          DECLARE_METHOD(t_DcbDescription, setTimeSystem, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbDescription)[] = {
          { Py_tp_methods, t_DcbDescription__methods_ },
          { Py_tp_init, (void *) t_DcbDescription_init_ },
          { Py_tp_getset, t_DcbDescription__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbDescription)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbDescription, t_DcbDescription, DcbDescription);

        void t_DcbDescription::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbDescription), &PY_TYPE_DEF(DcbDescription), module, "DcbDescription", 0);
        }

        void t_DcbDescription::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "class_", make_descriptor(DcbDescription::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "wrapfn_", make_descriptor(t_DcbDescription::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbDescription::initializeClass, 1)))
            return NULL;
          return t_DcbDescription::wrap_Object(DcbDescription(((t_DcbDescription *) arg)->object.this$));
        }
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbDescription::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds)
        {
          DcbDescription object((jobject) NULL);

          INT_CALL(object = DcbDescription());
          self->object = object;

          return 0;
        }

        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getBiasMode());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeterminationMethod());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getObservationSampling());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getParameterSpacing());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setBiasMode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBiasMode", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDeterminationMethod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDeterminationMethod", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setObservationSampling(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObservationSampling", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setParameterSpacing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterSpacing", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getBiasMode());
          return j2p(value);
        }
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setBiasMode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "biasMode", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeterminationMethod());
          return j2p(value);
        }
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDeterminationMethod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "determinationMethod", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getObservationSampling());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setObservationSampling(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observationSampling", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getParameterSpacing());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setParameterSpacing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parameterSpacing", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$SystemConfiguration::live$ = false;

        jclass CRDConfiguration$SystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getComponents_2afa36052df4765d] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_getSystemId_11b109bd155ca898] = env->getMethodID(cls, "getSystemId", "()Ljava/lang/String;");
            mids$[mid_getWavelength_dff5885c2c873297] = env->getMethodID(cls, "getWavelength", "()D");
            mids$[mid_setComponents_b8ac5bb33398c2cf] = env->getMethodID(cls, "setComponents", "([Ljava/lang/String;)V");
            mids$[mid_setSystemId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSystemId", "(Ljava/lang/String;)V");
            mids$[mid_setWavelength_17db3a65980d3441] = env->getMethodID(cls, "setWavelength", "(D)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SystemConfiguration::CRDConfiguration$SystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::java::util::List CRDConfiguration$SystemConfiguration::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_2afa36052df4765d]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::getSystemId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemId_11b109bd155ca898]));
        }

        jdouble CRDConfiguration$SystemConfiguration::getWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_dff5885c2c873297]);
        }

        void CRDConfiguration$SystemConfiguration::setComponents(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setComponents_b8ac5bb33398c2cf], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setSystemId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemId_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWavelength_17db3a65980d3441], a0);
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      namespace ilrs {
        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, components),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, systemId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, wavelength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getSystemId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setComponents, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setSystemId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SystemConfiguration, t_CRDConfiguration$SystemConfiguration, CRDConfiguration$SystemConfiguration);

        void t_CRDConfiguration$SystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$SystemConfiguration), module, "CRDConfiguration$SystemConfiguration", 0);
        }

        void t_CRDConfiguration$SystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "class_", make_descriptor(CRDConfiguration$SystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SystemConfiguration::wrap_Object(CRDConfiguration$SystemConfiguration(((t_CRDConfiguration$SystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setComponents(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setComponents", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSystemId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setComponents(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "components", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSystemId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "wavelength", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/projection/PCA.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {

        ::java::lang::Class *PCA::class$ = NULL;
        jmethodID *PCA::mids$ = NULL;
        bool PCA::live$ = false;

        jclass PCA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/projection/PCA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_0e9bc5460f08ea27] = env->getMethodID(cls, "<init>", "(IZZ)V");
            mids$[mid_fit_c913668afa3c2c2a] = env->getMethodID(cls, "fit", "([[D)Lorg/hipparchus/stat/projection/PCA;");
            mids$[mid_fitAndTransform_9c0348b17db96525] = env->getMethodID(cls, "fitAndTransform", "([[D)[[D");
            mids$[mid_getCenter_60c7040667a7dc5c] = env->getMethodID(cls, "getCenter", "()[D");
            mids$[mid_getComponents_0358d8ea02f2cdb1] = env->getMethodID(cls, "getComponents", "()[[D");
            mids$[mid_getNumComponents_570ce0828f81a2c1] = env->getMethodID(cls, "getNumComponents", "()I");
            mids$[mid_getVariance_60c7040667a7dc5c] = env->getMethodID(cls, "getVariance", "()[D");
            mids$[mid_isBiasCorrection_b108b35ef48e27bd] = env->getMethodID(cls, "isBiasCorrection", "()Z");
            mids$[mid_isScale_b108b35ef48e27bd] = env->getMethodID(cls, "isScale", "()Z");
            mids$[mid_transform_9c0348b17db96525] = env->getMethodID(cls, "transform", "([[D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PCA::PCA(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

        PCA::PCA(jint a0, jboolean a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e9bc5460f08ea27, a0, a1, a2)) {}

        PCA PCA::fit(const JArray< JArray< jdouble > > & a0) const
        {
          return PCA(env->callObjectMethod(this$, mids$[mid_fit_c913668afa3c2c2a], a0.this$));
        }

        JArray< JArray< jdouble > > PCA::fitAndTransform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_fitAndTransform_9c0348b17db96525], a0.this$));
        }

        JArray< jdouble > PCA::getCenter() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenter_60c7040667a7dc5c]));
        }

        JArray< JArray< jdouble > > PCA::getComponents() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getComponents_0358d8ea02f2cdb1]));
        }

        jint PCA::getNumComponents() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumComponents_570ce0828f81a2c1]);
        }

        JArray< jdouble > PCA::getVariance() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVariance_60c7040667a7dc5c]));
        }

        jboolean PCA::isBiasCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isBiasCorrection_b108b35ef48e27bd]);
        }

        jboolean PCA::isScale() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isScale_b108b35ef48e27bd]);
        }

        JArray< JArray< jdouble > > PCA::transform(const JArray< JArray< jdouble > > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_transform_9c0348b17db96525], a0.this$));
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
      namespace projection {
        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_getCenter(t_PCA *self);
        static PyObject *t_PCA_getComponents(t_PCA *self);
        static PyObject *t_PCA_getNumComponents(t_PCA *self);
        static PyObject *t_PCA_getVariance(t_PCA *self);
        static PyObject *t_PCA_isBiasCorrection(t_PCA *self);
        static PyObject *t_PCA_isScale(t_PCA *self);
        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg);
        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data);
        static PyObject *t_PCA_get__center(t_PCA *self, void *data);
        static PyObject *t_PCA_get__components(t_PCA *self, void *data);
        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data);
        static PyObject *t_PCA_get__scale(t_PCA *self, void *data);
        static PyObject *t_PCA_get__variance(t_PCA *self, void *data);
        static PyGetSetDef t_PCA__fields_[] = {
          DECLARE_GET_FIELD(t_PCA, biasCorrection),
          DECLARE_GET_FIELD(t_PCA, center),
          DECLARE_GET_FIELD(t_PCA, components),
          DECLARE_GET_FIELD(t_PCA, numComponents),
          DECLARE_GET_FIELD(t_PCA, scale),
          DECLARE_GET_FIELD(t_PCA, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PCA__methods_[] = {
          DECLARE_METHOD(t_PCA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PCA, fit, METH_O),
          DECLARE_METHOD(t_PCA, fitAndTransform, METH_O),
          DECLARE_METHOD(t_PCA, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getNumComponents, METH_NOARGS),
          DECLARE_METHOD(t_PCA, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isBiasCorrection, METH_NOARGS),
          DECLARE_METHOD(t_PCA, isScale, METH_NOARGS),
          DECLARE_METHOD(t_PCA, transform, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PCA)[] = {
          { Py_tp_methods, t_PCA__methods_ },
          { Py_tp_init, (void *) t_PCA_init_ },
          { Py_tp_getset, t_PCA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PCA)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PCA, t_PCA, PCA);

        void t_PCA::install(PyObject *module)
        {
          installType(&PY_TYPE(PCA), &PY_TYPE_DEF(PCA), module, "PCA", 0);
        }

        void t_PCA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "class_", make_descriptor(PCA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "wrapfn_", make_descriptor(t_PCA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PCA), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PCA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PCA::initializeClass, 1)))
            return NULL;
          return t_PCA::wrap_Object(PCA(((t_PCA *) arg)->object.this$));
        }
        static PyObject *t_PCA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PCA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PCA_init_(t_PCA *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = PCA(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jboolean a2;
              PCA object((jobject) NULL);

              if (!parseArgs(args, "IZZ", &a0, &a1, &a2))
              {
                INT_CALL(object = PCA(a0, a1, a2));
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

        static PyObject *t_PCA_fit(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          PCA result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fit(a0));
            return t_PCA::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "fit", arg);
          return NULL;
        }

        static PyObject *t_PCA_fitAndTransform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.fitAndTransform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "fitAndTransform", arg);
          return NULL;
        }

        static PyObject *t_PCA_getCenter(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return result.wrap();
        }

        static PyObject *t_PCA_getComponents(t_PCA *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PCA_getNumComponents(t_PCA *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumComponents());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PCA_getVariance(t_PCA *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVariance());
          return result.wrap();
        }

        static PyObject *t_PCA_isBiasCorrection(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isBiasCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_isScale(t_PCA *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isScale());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_PCA_transform(t_PCA *self, PyObject *arg)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[[D", &a0))
          {
            OBJ_CALL(result = self->object.transform(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "transform", arg);
          return NULL;
        }

        static PyObject *t_PCA_get__biasCorrection(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isBiasCorrection());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__center(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return value.wrap();
        }

        static PyObject *t_PCA_get__components(t_PCA *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PCA_get__numComponents(t_PCA *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumComponents());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PCA_get__scale(t_PCA *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isScale());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PCA_get__variance(t_PCA *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVariance());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *SimplexOptimizer::class$ = NULL;
            jmethodID *SimplexOptimizer::mids$ = NULL;
            bool SimplexOptimizer::live$ = false;

            jclass SimplexOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a5d0ffcf0a6327fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_optimize_d70788483e9a9a2c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_4ae915e35f441d39] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SimplexOptimizer::SimplexOptimizer(const ::org::hipparchus::optim::ConvergenceChecker & a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_a5d0ffcf0a6327fe, a0.this$)) {}

            SimplexOptimizer::SimplexOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

            ::org::hipparchus::optim::PointValuePair SimplexOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d70788483e9a9a2c], a0.this$));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args);
            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args);
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data);
            static PyGetSetDef t_SimplexOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SimplexOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SimplexOptimizer__methods_[] = {
              DECLARE_METHOD(t_SimplexOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_SimplexOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SimplexOptimizer)[] = {
              { Py_tp_methods, t_SimplexOptimizer__methods_ },
              { Py_tp_init, (void *) t_SimplexOptimizer_init_ },
              { Py_tp_getset, t_SimplexOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SimplexOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(SimplexOptimizer, t_SimplexOptimizer, SimplexOptimizer);
            PyObject *t_SimplexOptimizer::wrap_Object(const SimplexOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SimplexOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SimplexOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SimplexOptimizer), &PY_TYPE_DEF(SimplexOptimizer), module, "SimplexOptimizer", 0);
            }

            void t_SimplexOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "class_", make_descriptor(SimplexOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "wrapfn_", make_descriptor(t_SimplexOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SimplexOptimizer::initializeClass, 1)))
                return NULL;
              return t_SimplexOptimizer::wrap_Object(SimplexOptimizer(((t_SimplexOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SimplexOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
                  PyTypeObject **p0;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = SimplexOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = SimplexOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(SimplexOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data)
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
#include "org/hipparchus/random/Well19937a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937a::class$ = NULL;
      jmethodID *Well19937a::mids$ = NULL;
      bool Well19937a::live$ = false;

      jclass Well19937a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937a::Well19937a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Well19937a::Well19937a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      Well19937a::Well19937a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Well19937a::Well19937a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint Well19937a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
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
      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args);

      static PyMethodDef t_Well19937a__methods_[] = {
        DECLARE_METHOD(t_Well19937a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937a)[] = {
        { Py_tp_methods, t_Well19937a__methods_ },
        { Py_tp_init, (void *) t_Well19937a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937a, t_Well19937a, Well19937a);

      void t_Well19937a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937a), &PY_TYPE_DEF(Well19937a), module, "Well19937a", 0);
      }

      void t_Well19937a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "class_", make_descriptor(Well19937a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "wrapfn_", make_descriptor(t_Well19937a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937a::initializeClass, 1)))
          return NULL;
        return t_Well19937a::wrap_Object(Well19937a(((t_Well19937a *) arg)->object.this$));
      }
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937a object((jobject) NULL);

            INT_CALL(object = Well19937a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937a(a0));
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

      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeRateBuilder::class$ = NULL;
          jmethodID *RangeRateBuilder::mids$ = NULL;
          bool RangeRateBuilder::live$ = false;

          jclass RangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cde18597fb8b008b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_62446d5b012a9118] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/RangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateBuilder::RangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_cde18597fb8b008b, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::RangeRate RangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::RangeRate(env->callObjectMethod(this$, mids$[mid_build_62446d5b012a9118], a0.this$, a1.this$));
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
          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args);
          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args);
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data);
          static PyGetSetDef t_RangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateBuilder)[] = {
            { Py_tp_methods, t_RangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeRateBuilder_init_ },
            { Py_tp_getset, t_RangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeRateBuilder, t_RangeRateBuilder, RangeRateBuilder);
          PyObject *t_RangeRateBuilder::wrap_Object(const RangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeRateBuilder *self = (t_RangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateBuilder), &PY_TYPE_DEF(RangeRateBuilder), module, "RangeRateBuilder", 0);
          }

          void t_RangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "class_", make_descriptor(RangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "wrapfn_", make_descriptor(t_RangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeRateBuilder::wrap_Object(RangeRateBuilder(((t_RangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeRateBuilder_of_(t_RangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeRateBuilder_init_(t_RangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateBuilder_build(t_RangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::RangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_RangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeRateBuilder_get__parameters_(t_RangeRateBuilder *self, void *data)
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
#include "org/hipparchus/analysis/function/Sigmoid.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid::class$ = NULL;
        jmethodID *Sigmoid::mids$ = NULL;
        bool Sigmoid::live$ = false;

        jclass Sigmoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid::Sigmoid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        Sigmoid::Sigmoid(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble Sigmoid::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sigmoid::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args);

        static PyMethodDef t_Sigmoid__methods_[] = {
          DECLARE_METHOD(t_Sigmoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid)[] = {
          { Py_tp_methods, t_Sigmoid__methods_ },
          { Py_tp_init, (void *) t_Sigmoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid, t_Sigmoid, Sigmoid);

        void t_Sigmoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid), &PY_TYPE_DEF(Sigmoid), module, "Sigmoid", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "Parametric", make_descriptor(&PY_TYPE_DEF(Sigmoid$Parametric)));
        }

        void t_Sigmoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "class_", make_descriptor(Sigmoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "wrapfn_", make_descriptor(t_Sigmoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid::initializeClass, 1)))
            return NULL;
          return t_Sigmoid::wrap_Object(Sigmoid(((t_Sigmoid *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sigmoid object((jobject) NULL);

              INT_CALL(object = Sigmoid());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Sigmoid object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Sigmoid(a0, a1));
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

        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/generation/PythonMeasurementBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonMeasurementBuilder::class$ = NULL;
          jmethodID *PythonMeasurementBuilder::mids$ = NULL;
          bool PythonMeasurementBuilder::live$ = false;

          jclass PythonMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addModifier_baf3397e6fffc21d] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_ae909064be36023e] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getModifiers_2afa36052df4765d] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_f81b672126a6576d] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementBuilder::PythonMeasurementBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args);
          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self);
          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args);
          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data);
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementBuilder, t_PythonMeasurementBuilder, PythonMeasurementBuilder);
          PyObject *t_PythonMeasurementBuilder::wrap_Object(const PythonMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementBuilder), &PY_TYPE_DEF(PythonMeasurementBuilder), module, "PythonMeasurementBuilder", 1);
          }

          void t_PythonMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "class_", make_descriptor(PythonMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonMeasurementBuilder_addModifier0 },
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonMeasurementBuilder_build1 },
              { "getModifiers", "()Ljava/util/List;", (void *) t_PythonMeasurementBuilder_getModifiers2 },
              { "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;", (void *) t_PythonMeasurementBuilder_getSatellites3 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMeasurementBuilder_init4 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementBuilder_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementBuilder::wrap_Object(PythonMeasurementBuilder(((t_PythonMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementBuilder object((jobject) NULL);

            INT_CALL(object = PythonMeasurementBuilder());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args)
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

          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
            PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
            {
              throwTypeError("build", result);
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

          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getModifiers", result);
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

          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &value))
            {
              throwTypeError("getSatellites", result);
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

          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data)
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
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data)
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
          mids$[mid_end_dff5885c2c873297] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_3a88ef0e755558fa] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_dff5885c2c873297]);
      }

      void RealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      jdouble RealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_3a88ef0e755558fa], a0, a1, a2);
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
#include "org/hipparchus/distribution/continuous/FDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *FDistribution::class$ = NULL;
        jmethodID *FDistribution::mids$ = NULL;
        bool FDistribution::live$ = false;

        jclass FDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/FDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDenominatorDegreesOfFreedom_dff5885c2c873297] = env->getMethodID(cls, "getDenominatorDegreesOfFreedom", "()D");
            mids$[mid_getNumeratorDegreesOfFreedom_dff5885c2c873297] = env->getMethodID(cls, "getNumeratorDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDistribution::FDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        FDistribution::FDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble FDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble FDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble FDistribution::getDenominatorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDenominatorDegreesOfFreedom_dff5885c2c873297]);
        }

        jdouble FDistribution::getNumeratorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumeratorDegreesOfFreedom_dff5885c2c873297]);
        }

        jdouble FDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble FDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble FDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble FDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean FDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble FDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data);
        static PyGetSetDef t_FDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_FDistribution, denominatorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numeratorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numericalMean),
          DECLARE_GET_FIELD(t_FDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_FDistribution, supportConnected),
          DECLARE_GET_FIELD(t_FDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_FDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDistribution__methods_[] = {
          DECLARE_METHOD(t_FDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getDenominatorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumeratorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDistribution)[] = {
          { Py_tp_methods, t_FDistribution__methods_ },
          { Py_tp_init, (void *) t_FDistribution_init_ },
          { Py_tp_getset, t_FDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(FDistribution, t_FDistribution, FDistribution);

        void t_FDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(FDistribution), &PY_TYPE_DEF(FDistribution), module, "FDistribution", 0);
        }

        void t_FDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "class_", make_descriptor(FDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "wrapfn_", make_descriptor(t_FDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDistribution::initializeClass, 1)))
            return NULL;
          return t_FDistribution::wrap_Object(FDistribution(((t_FDistribution *) arg)->object.this$));
        }
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = FDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = FDistribution(a0, a1, a2));
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

        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLaguerreRuleFactory::class$ = NULL;
          jmethodID *FieldLaguerreRuleFactory::mids$ = NULL;
          bool FieldLaguerreRuleFactory::live$ = false;

          jclass FieldLaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLaguerreRuleFactory::FieldLaguerreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLaguerreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_e670405dd33862ee], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args);
          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLaguerreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLaguerreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLaguerreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLaguerreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLaguerreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLaguerreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLaguerreRuleFactory, t_FieldLaguerreRuleFactory, FieldLaguerreRuleFactory);
          PyObject *t_FieldLaguerreRuleFactory::wrap_Object(const FieldLaguerreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLaguerreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLaguerreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLaguerreRuleFactory *self = (t_FieldLaguerreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLaguerreRuleFactory), &PY_TYPE_DEF(FieldLaguerreRuleFactory), module, "FieldLaguerreRuleFactory", 0);
          }

          void t_FieldLaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "class_", make_descriptor(FieldLaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "wrapfn_", make_descriptor(t_FieldLaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLaguerreRuleFactory::wrap_Object(FieldLaguerreRuleFactory(((t_FieldLaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLaguerreRuleFactory_of_(t_FieldLaguerreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLaguerreRuleFactory_init_(t_FieldLaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLaguerreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLaguerreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLaguerreRuleFactory_computeRule(t_FieldLaguerreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLaguerreRuleFactory_get__parameters_(t_FieldLaguerreRuleFactory *self, void *data)
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
                mids$[mid_process_a225aa4cbe503e97] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)Z");
                mids$[mid_valueOf_06ec16330ba26c4c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");
                mids$[mid_values_4fbf8d4000185b21] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");

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
              return env->callBooleanMethod(this$, mids$[mid_process_a225aa4cbe503e97], a0.this$, a1.this$, a2.this$);
            }

            RTNCovarianceKey RTNCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RTNCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_06ec16330ba26c4c], a0.this$));
            }

            JArray< RTNCovarianceKey > RTNCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RTNCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4fbf8d4000185b21]));
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
#include "org/hipparchus/util/Combinations.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Combinations::class$ = NULL;
      jmethodID *Combinations::mids$ = NULL;
      bool Combinations::live$ = false;

      jclass Combinations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Combinations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_comparator_96e45e3694fbbb22] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
          mids$[mid_getK_570ce0828f81a2c1] = env->getMethodID(cls, "getK", "()I");
          mids$[mid_getN_570ce0828f81a2c1] = env->getMethodID(cls, "getN", "()I");
          mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Combinations::Combinations(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      ::java::util::Comparator Combinations::comparator() const
      {
        return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_96e45e3694fbbb22]));
      }

      jint Combinations::getK() const
      {
        return env->callIntMethod(this$, mids$[mid_getK_570ce0828f81a2c1]);
      }

      jint Combinations::getN() const
      {
        return env->callIntMethod(this$, mids$[mid_getN_570ce0828f81a2c1]);
      }

      ::java::util::Iterator Combinations::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
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
      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Combinations_comparator(t_Combinations *self);
      static PyObject *t_Combinations_getK(t_Combinations *self);
      static PyObject *t_Combinations_getN(t_Combinations *self);
      static PyObject *t_Combinations_iterator(t_Combinations *self);
      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data);
      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data);
      static PyGetSetDef t_Combinations__fields_[] = {
        DECLARE_GET_FIELD(t_Combinations, k),
        DECLARE_GET_FIELD(t_Combinations, n),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Combinations__methods_[] = {
        DECLARE_METHOD(t_Combinations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, comparator, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getK, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getN, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, iterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Combinations)[] = {
        { Py_tp_methods, t_Combinations__methods_ },
        { Py_tp_init, (void *) t_Combinations_init_ },
        { Py_tp_getset, t_Combinations__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_Combinations *)) get_iterator< t_Combinations >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Combinations)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Combinations, t_Combinations, Combinations);

      void t_Combinations::install(PyObject *module)
      {
        installType(&PY_TYPE(Combinations), &PY_TYPE_DEF(Combinations), module, "Combinations", 0);
      }

      void t_Combinations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "class_", make_descriptor(Combinations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "wrapfn_", make_descriptor(t_Combinations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Combinations::initializeClass, 1)))
          return NULL;
        return t_Combinations::wrap_Object(Combinations(((t_Combinations *) arg)->object.this$));
      }
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Combinations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        Combinations object((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          INT_CALL(object = Combinations(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Combinations_comparator(t_Combinations *self)
      {
        ::java::util::Comparator result((jobject) NULL);
        OBJ_CALL(result = self->object.comparator());
        return ::java::util::t_Comparator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_getK(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getK());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_getN(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_iterator(t_Combinations *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getK());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
