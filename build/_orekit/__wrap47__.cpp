#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimator::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_processMeasurements_63b6806abfbbcee4] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_578d9ba5b3b8b483] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_10690b877ea302f7] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_63b6806abfbbcee4], a0.this$));
        }

        void SemiAnalyticalUnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_578d9ba5b3b8b483], a0.this$);
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
      namespace sequential {
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalUnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimator, t_SemiAnalyticalUnscentedKalmanEstimator, SemiAnalyticalUnscentedKalmanEstimator);

        void t_SemiAnalyticalUnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimator), module, "SemiAnalyticalUnscentedKalmanEstimator", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(SemiAnalyticalUnscentedKalmanEstimator(((t_SemiAnalyticalUnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContributionContext::class$ = NULL;
            jmethodID *AbstractGaussianContributionContext::mids$ = NULL;
            bool AbstractGaussianContributionContext::live$ = false;

            jclass AbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCo2AB_b74f83833fdad017] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOOA_b74f83833fdad017] = env->getMethodID(cls, "getOOA", "()D");
                mids$[mid_getOOAB_b74f83833fdad017] = env->getMethodID(cls, "getOOAB", "()D");
                mids$[mid_getOoBpo_b74f83833fdad017] = env->getMethodID(cls, "getOoBpo", "()D");
                mids$[mid_getOoMU_b74f83833fdad017] = env->getMethodID(cls, "getOoMU", "()D");
                mids$[mid_getTon2a_b74f83833fdad017] = env->getMethodID(cls, "getTon2a", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AbstractGaussianContributionContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_b74f83833fdad017]);
            }

            jdouble AbstractGaussianContributionContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            jdouble AbstractGaussianContributionContext::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
            }

            jdouble AbstractGaussianContributionContext::getOOA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOA_b74f83833fdad017]);
            }

            jdouble AbstractGaussianContributionContext::getOOAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOAB_b74f83833fdad017]);
            }

            jdouble AbstractGaussianContributionContext::getOoBpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoBpo_b74f83833fdad017]);
            }

            jdouble AbstractGaussianContributionContext::getOoMU() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoMU_b74f83833fdad017]);
            }

            jdouble AbstractGaussianContributionContext::getTon2a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTon2a_b74f83833fdad017]);
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
            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_AbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ton2a),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_AbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContributionContext, t_AbstractGaussianContributionContext, AbstractGaussianContributionContext);

            void t_AbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContributionContext), &PY_TYPE_DEF(AbstractGaussianContributionContext), module, "AbstractGaussianContributionContext", 0);
            }

            void t_AbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "class_", make_descriptor(AbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_AbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContributionContext::wrap_Object(AbstractGaussianContributionContext(((t_AbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoBpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoMU());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTon2a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoBpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoMU());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTon2a());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OnOff::class$ = NULL;
          jmethodID *OnOff::mids$ = NULL;
          bool OnOff::live$ = false;
          OnOff *OnOff::OFF = NULL;
          OnOff *OnOff::ON = NULL;

          jclass OnOff::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OnOff");

              mids$ = new jmethodID[max_mid];
              mids$[mid_isOn_9ab94ac1dc23b105] = env->getMethodID(cls, "isOn", "()Z");
              mids$[mid_valueOf_946b7d342bc331cf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OnOff;");
              mids$[mid_values_44844c89107bf654] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OnOff;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              OFF = new OnOff(env->getStaticObjectField(cls, "OFF", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              ON = new OnOff(env->getStaticObjectField(cls, "ON", "Lorg/orekit/files/ccsds/definitions/OnOff;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean OnOff::isOn() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isOn_9ab94ac1dc23b105]);
          }

          OnOff OnOff::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OnOff(env->callStaticObjectMethod(cls, mids$[mid_valueOf_946b7d342bc331cf], a0.this$));
          }

          JArray< OnOff > OnOff::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OnOff >(env->callStaticObjectMethod(cls, mids$[mid_values_44844c89107bf654]));
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
        namespace definitions {
          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args);
          static PyObject *t_OnOff_isOn(t_OnOff *self);
          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OnOff_values(PyTypeObject *type);
          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data);
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data);
          static PyGetSetDef t_OnOff__fields_[] = {
            DECLARE_GET_FIELD(t_OnOff, on),
            DECLARE_GET_FIELD(t_OnOff, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnOff__methods_[] = {
            DECLARE_METHOD(t_OnOff, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnOff, of_, METH_VARARGS),
            DECLARE_METHOD(t_OnOff, isOn, METH_NOARGS),
            DECLARE_METHOD(t_OnOff, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OnOff, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnOff)[] = {
            { Py_tp_methods, t_OnOff__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OnOff__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnOff)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OnOff, t_OnOff, OnOff);
          PyObject *t_OnOff::wrap_Object(const OnOff& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OnOff::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OnOff::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OnOff *self = (t_OnOff *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OnOff::install(PyObject *module)
          {
            installType(&PY_TYPE(OnOff), &PY_TYPE_DEF(OnOff), module, "OnOff", 0);
          }

          void t_OnOff::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "class_", make_descriptor(OnOff::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "wrapfn_", make_descriptor(t_OnOff::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "boxfn_", make_descriptor(boxObject));
            env->getClass(OnOff::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "OFF", make_descriptor(t_OnOff::wrap_Object(*OnOff::OFF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnOff), "ON", make_descriptor(t_OnOff::wrap_Object(*OnOff::ON)));
          }

          static PyObject *t_OnOff_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnOff::initializeClass, 1)))
              return NULL;
            return t_OnOff::wrap_Object(OnOff(((t_OnOff *) arg)->object.this$));
          }
          static PyObject *t_OnOff_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnOff::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OnOff_of_(t_OnOff *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OnOff_isOn(t_OnOff *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isOn());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OnOff_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OnOff result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::valueOf(a0));
              return t_OnOff::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OnOff_values(PyTypeObject *type)
          {
            JArray< OnOff > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OnOff::values());
            return JArray<jobject>(result.this$).wrap(t_OnOff::wrap_jobject);
          }
          static PyObject *t_OnOff_get__parameters_(t_OnOff *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OnOff_get__on(t_OnOff *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isOn());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEStateAndDerivative::class$ = NULL;
      jmethodID *ComplexODEStateAndDerivative::mids$ = NULL;
      bool ComplexODEStateAndDerivative::live$ = false;

      jclass ComplexODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e2fe458c1bfd60e4] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_45c34c937b096403] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteDerivative_24cc06122e1087cf] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryDerivative_24cc06122e1087cf] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryDerivative_1f034b9f28067a63] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_e2fe458c1bfd60e4, a0, a1.this$, a2.this$)) {}

      ComplexODEStateAndDerivative::ComplexODEStateAndDerivative(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a3, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a4) : ::org::hipparchus::ode::ComplexODEState(env->newObject(initializeClass, &mids$, mid_init$_45c34c937b096403, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_24cc06122e1087cf]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_24cc06122e1087cf]));
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_1f034b9f28067a63], a0));
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
      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self);
      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ComplexODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ComplexODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ComplexODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ComplexODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ComplexODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ComplexODEState),
        NULL
      };

      DEFINE_TYPE(ComplexODEStateAndDerivative, t_ComplexODEStateAndDerivative, ComplexODEStateAndDerivative);

      void t_ComplexODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEStateAndDerivative), &PY_TYPE_DEF(ComplexODEStateAndDerivative), module, "ComplexODEStateAndDerivative", 0);
      }

      void t_ComplexODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "class_", make_descriptor(ComplexODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "wrapfn_", make_descriptor(t_ComplexODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ComplexODEStateAndDerivative::wrap_Object(ComplexODEStateAndDerivative(((t_ComplexODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEStateAndDerivative_init_(t_ComplexODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a3((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a4((jobject) NULL);
            ComplexODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[k[k[[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ComplexODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ComplexODEStateAndDerivative_getCompleteDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getPrimaryDerivative(t_ComplexODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_getSecondaryDerivative(t_ComplexODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__completeDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEStateAndDerivative_get__primaryDerivative(t_ComplexODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Tanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tanh::class$ = NULL;
        jmethodID *Tanh::mids$ = NULL;
        bool Tanh::live$ = false;

        jclass Tanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tanh::Tanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Tanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args);

        static PyMethodDef t_Tanh__methods_[] = {
          DECLARE_METHOD(t_Tanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tanh)[] = {
          { Py_tp_methods, t_Tanh__methods_ },
          { Py_tp_init, (void *) t_Tanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tanh, t_Tanh, Tanh);

        void t_Tanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Tanh), &PY_TYPE_DEF(Tanh), module, "Tanh", 0);
        }

        void t_Tanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "class_", make_descriptor(Tanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "wrapfn_", make_descriptor(t_Tanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tanh::initializeClass, 1)))
            return NULL;
          return t_Tanh::wrap_Object(Tanh(((t_Tanh *) arg)->object.this$));
        }
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds)
        {
          Tanh object((jobject) NULL);

          INT_CALL(object = Tanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args)
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
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedGenerator::class$ = NULL;
      jmethodID *TimeStampedGenerator::mids$ = NULL;
      bool TimeStampedGenerator::live$ = false;

      jclass TimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_generate_50850a0bb1306a34] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List TimeStampedGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_50850a0bb1306a34], a0.this$, a1.this$));
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
      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data);
      static PyGetSetDef t_TimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedGenerator)[] = {
        { Py_tp_methods, t_TimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedGenerator, t_TimeStampedGenerator, TimeStampedGenerator);
      PyObject *t_TimeStampedGenerator::wrap_Object(const TimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedGenerator), &PY_TYPE_DEF(TimeStampedGenerator), module, "TimeStampedGenerator", 0);
      }

      void t_TimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "class_", make_descriptor(TimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "wrapfn_", make_descriptor(t_TimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedGenerator::wrap_Object(TimeStampedGenerator(((t_TimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSPhaseModifier::RelativisticClockOneWayGNSSPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::java::util::List RelativisticClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSPhaseModifier, t_RelativisticClockOneWayGNSSPhaseModifier, RelativisticClockOneWayGNSSPhaseModifier);

          void t_RelativisticClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSPhaseModifier), module, "RelativisticClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticClockOneWayGNSSPhaseModifier(((t_RelativisticClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSPhaseModifier_init_(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSPhaseModifier *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedFrames::class$ = NULL;
      jmethodID *LazyLoadedFrames::mids$ = NULL;
      bool LazyLoadedFrames::live$ = false;

      jclass LazyLoadedFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a562e213c7979e22] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_e39b9463875d2aea] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_e39b9463875d2aea] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_f075adbabba5d6bc] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getEOPHistory_a77e9d6bc0da2439] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_8ba9fe7a847cecad] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedFrames::LazyLoadedFrames(const ::org::orekit::frames::LazyLoadedEop & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::bodies::CelestialBodies & a2) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_a562e213c7979e22, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedFrames::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_e39b9463875d2aea], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_e39b9463875d2aea], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_f075adbabba5d6bc], a0.this$, a1.this$);
      }

      void LazyLoadedFrames::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2]);
      }

      ::org::orekit::frames::EOPHistory LazyLoadedFrames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_a77e9d6bc0da2439], a0.this$, a1));
      }

      void LazyLoadedFrames::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_8ba9fe7a847cecad], a0);
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
      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self);
      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg);
      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedFrames__fields_[] = {
        DECLARE_SET_FIELD(t_LazyLoadedFrames, eOPContinuityThreshold),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedFrames__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, setEOPContinuityThreshold, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedFrames)[] = {
        { Py_tp_methods, t_LazyLoadedFrames__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedFrames_init_ },
        { Py_tp_getset, t_LazyLoadedFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(LazyLoadedFrames, t_LazyLoadedFrames, LazyLoadedFrames);

      void t_LazyLoadedFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedFrames), &PY_TYPE_DEF(LazyLoadedFrames), module, "LazyLoadedFrames", 0);
      }

      void t_LazyLoadedFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "class_", make_descriptor(LazyLoadedFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "wrapfn_", make_descriptor(t_LazyLoadedFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedFrames::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedFrames::wrap_Object(LazyLoadedFrames(((t_LazyLoadedFrames *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        LazyLoadedFrames object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::frames::LazyLoadedEop::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedFrames(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedFrames), (PyObject *) self, "getEOPHistory", args, 2);
      }

      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019Data::class$ = NULL;
              jmethodID *Rtcm1019Data::mids$ = NULL;
              bool Rtcm1019Data::live$ = false;

              jclass Rtcm1019Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGpsCodeOnL2_55546ef6a647f39b] = env->getMethodID(cls, "getGpsCodeOnL2", "()I");
                  mids$[mid_getGpsFitInterval_55546ef6a647f39b] = env->getMethodID(cls, "getGpsFitInterval", "()I");
                  mids$[mid_getGpsL2PDataFlag_9ab94ac1dc23b105] = env->getMethodID(cls, "getGpsL2PDataFlag", "()Z");
                  mids$[mid_getGpsNavigationMessage_aa68115a8276ce13] = env->getMethodID(cls, "getGpsNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsNavigationMessage_71b725e1cd81a850] = env->getMethodID(cls, "getGpsNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsToc_b74f83833fdad017] = env->getMethodID(cls, "getGpsToc", "()D");
                  mids$[mid_setGpsCodeOnL2_44ed599e93e8a30c] = env->getMethodID(cls, "setGpsCodeOnL2", "(I)V");
                  mids$[mid_setGpsFitInterval_44ed599e93e8a30c] = env->getMethodID(cls, "setGpsFitInterval", "(I)V");
                  mids$[mid_setGpsL2PDataFlag_fcb96c98de6fad04] = env->getMethodID(cls, "setGpsL2PDataFlag", "(Z)V");
                  mids$[mid_setGpsNavigationMessage_cfa2ffa15867e7bd] = env->getMethodID(cls, "setGpsNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
                  mids$[mid_setGpsToc_8ba9fe7a847cecad] = env->getMethodID(cls, "setGpsToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019Data::Rtcm1019Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint Rtcm1019Data::getGpsCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsCodeOnL2_55546ef6a647f39b]);
              }

              jint Rtcm1019Data::getGpsFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsFitInterval_55546ef6a647f39b]);
              }

              jboolean Rtcm1019Data::getGpsL2PDataFlag() const
              {
                return env->callBooleanMethod(this$, mids$[mid_getGpsL2PDataFlag_9ab94ac1dc23b105]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_aa68115a8276ce13]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_71b725e1cd81a850], a0.this$));
              }

              jdouble Rtcm1019Data::getGpsToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGpsToc_b74f83833fdad017]);
              }

              void Rtcm1019Data::setGpsCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsCodeOnL2_44ed599e93e8a30c], a0);
              }

              void Rtcm1019Data::setGpsFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsFitInterval_44ed599e93e8a30c], a0);
              }

              void Rtcm1019Data::setGpsL2PDataFlag(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsL2PDataFlag_fcb96c98de6fad04], a0);
              }

              void Rtcm1019Data::setGpsNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsNavigationMessage_cfa2ffa15867e7bd], a0.this$);
              }

              void Rtcm1019Data::setGpsToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsToc_8ba9fe7a847cecad], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args);
              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1019Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsL2PDataFlag),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsL2PDataFlag, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsL2PDataFlag, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019Data)[] = {
                { Py_tp_methods, t_Rtcm1019Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019Data_init_ },
                { Py_tp_getset, t_Rtcm1019Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1019Data, t_Rtcm1019Data, Rtcm1019Data);

              void t_Rtcm1019Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019Data), &PY_TYPE_DEF(Rtcm1019Data), module, "Rtcm1019Data", 0);
              }

              void t_Rtcm1019Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "class_", make_descriptor(Rtcm1019Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "wrapfn_", make_descriptor(t_Rtcm1019Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019Data::wrap_Object(Rtcm1019Data(((t_Rtcm1019Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1019Data object((jobject) NULL);

                INT_CALL(object = Rtcm1019Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGpsNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGpsNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGpsNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGpsToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setGpsL2PDataFlag(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsL2PDataFlag", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGpsNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGpsToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(value);
              }
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setGpsL2PDataFlag(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsL2PDataFlag", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGpsNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGpsNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGpsToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGpsToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsToc", arg);
                return -1;
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
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RiccatiEquationSolver::class$ = NULL;
      jmethodID *RiccatiEquationSolver::mids$ = NULL;
      bool RiccatiEquationSolver::live$ = false;

      jclass RiccatiEquationSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RiccatiEquationSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getK_f77d745f2128c391] = env->getMethodID(cls, "getK", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_f77d745f2128c391] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getK() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getK_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix RiccatiEquationSolver::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_f77d745f2128c391]));
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
      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self);
      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data);
      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data);
      static PyGetSetDef t_RiccatiEquationSolver__fields_[] = {
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, k),
        DECLARE_GET_FIELD(t_RiccatiEquationSolver, p),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RiccatiEquationSolver__methods_[] = {
        DECLARE_METHOD(t_RiccatiEquationSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getK, METH_NOARGS),
        DECLARE_METHOD(t_RiccatiEquationSolver, getP, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RiccatiEquationSolver)[] = {
        { Py_tp_methods, t_RiccatiEquationSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RiccatiEquationSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RiccatiEquationSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RiccatiEquationSolver, t_RiccatiEquationSolver, RiccatiEquationSolver);

      void t_RiccatiEquationSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(RiccatiEquationSolver), &PY_TYPE_DEF(RiccatiEquationSolver), module, "RiccatiEquationSolver", 0);
      }

      void t_RiccatiEquationSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "class_", make_descriptor(RiccatiEquationSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "wrapfn_", make_descriptor(t_RiccatiEquationSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RiccatiEquationSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RiccatiEquationSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RiccatiEquationSolver::initializeClass, 1)))
          return NULL;
        return t_RiccatiEquationSolver::wrap_Object(RiccatiEquationSolver(((t_RiccatiEquationSolver *) arg)->object.this$));
      }
      static PyObject *t_RiccatiEquationSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RiccatiEquationSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RiccatiEquationSolver_getK(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_getP(t_RiccatiEquationSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RiccatiEquationSolver_get__k(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getK());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RiccatiEquationSolver_get__p(t_RiccatiEquationSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory::class$ = NULL;
        jmethodID *FDSFactory::mids$ = NULL;
        bool FDSFactory::live$ = false;

        jclass FDSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_build_b2e42be64b624f3f] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_build_1a7f741fb94c3273] = env->getMethodID(cls, "build", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_7aeeac85ca41e793] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_af5f7afd2fa6e7d1] = env->getMethodID(cls, "constant", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getCompiler_e0888effe8b453a6] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_21a69e1beba00e8c] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/FDSFactory$DerivativeField;");
            mids$[mid_getValueField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_variable_21d34149fde44727] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_variable_d130203cc430a767] = env->getMethodID(cls, "variable", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDSFactory::FDSFactory(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_b2e42be64b624f3f], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_1a7f741fb94c3273], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_7aeeac85ca41e793], a0));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_af5f7afd2fa6e7d1], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler FDSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_e0888effe8b453a6]));
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField FDSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_21a69e1beba00e8c]));
        }

        ::org::hipparchus::Field FDSFactory::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_04d1f63e17d5c5d4]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_21d34149fde44727], a0, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_d130203cc430a767], a0, a1.this$));
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
      namespace differentiation {
        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args);
        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data);
        static PyGetSetDef t_FDSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory, compiler),
          DECLARE_GET_FIELD(t_FDSFactory, derivativeField),
          DECLARE_GET_FIELD(t_FDSFactory, valueField),
          DECLARE_GET_FIELD(t_FDSFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory__methods_[] = {
          DECLARE_METHOD(t_FDSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, build, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, constant, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory)[] = {
          { Py_tp_methods, t_FDSFactory__methods_ },
          { Py_tp_init, (void *) t_FDSFactory_init_ },
          { Py_tp_getset, t_FDSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory, t_FDSFactory, FDSFactory);
        PyObject *t_FDSFactory::wrap_Object(const FDSFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory), &PY_TYPE_DEF(FDSFactory), module, "FDSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "DerivativeField", make_descriptor(&PY_TYPE_DEF(FDSFactory$DerivativeField)));
        }

        void t_FDSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "class_", make_descriptor(FDSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "wrapfn_", make_descriptor(t_FDSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory::initializeClass, 1)))
            return NULL;
          return t_FDSFactory::wrap_Object(FDSFactory(((t_FDSFactory *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          FDSFactory object((jobject) NULL);

          if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
          {
            INT_CALL(object = FDSFactory(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "constant", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CommonGnssData::class$ = NULL;
            jmethodID *CommonGnssData::mids$ = NULL;
            bool CommonGnssData::live$ = false;

            jclass CommonGnssData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CommonGnssData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf0_b74f83833fdad017] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_b74f83833fdad017] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAngularVelocity_b74f83833fdad017] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCycleDuration_b74f83833fdad017] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_b74f83833fdad017] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getM0_b74f83833fdad017] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_b74f83833fdad017] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_b74f83833fdad017] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_55546ef6a647f39b] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_b74f83833fdad017] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getSma_b74f83833fdad017] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_55546ef6a647f39b] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAf0_8ba9fe7a847cecad] = env->getMethodID(cls, "setAf0", "(D)V");
                mids$[mid_setAf1_8ba9fe7a847cecad] = env->getMethodID(cls, "setAf1", "(D)V");
                mids$[mid_setDate_02135a6ef25adb4b] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setE_8ba9fe7a847cecad] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setI0_8ba9fe7a847cecad] = env->getMethodID(cls, "setI0", "(D)V");
                mids$[mid_setM0_8ba9fe7a847cecad] = env->getMethodID(cls, "setM0", "(D)V");
                mids$[mid_setOmega0_8ba9fe7a847cecad] = env->getMethodID(cls, "setOmega0", "(D)V");
                mids$[mid_setOmegaDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setOmegaDot", "(D)V");
                mids$[mid_setPRN_44ed599e93e8a30c] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setPa_8ba9fe7a847cecad] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setSma_8ba9fe7a847cecad] = env->getMethodID(cls, "setSma", "(D)V");
                mids$[mid_setTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setWeek_44ed599e93e8a30c] = env->getMethodID(cls, "setWeek", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonGnssData::CommonGnssData(jdouble a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

            jdouble CommonGnssData::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_b74f83833fdad017]);
            }

            ::org::orekit::time::AbsoluteDate CommonGnssData::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
            }

            jdouble CommonGnssData::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_b74f83833fdad017]);
            }

            jint CommonGnssData::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_55546ef6a647f39b]);
            }

            jdouble CommonGnssData::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_b74f83833fdad017]);
            }

            jdouble CommonGnssData::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }

            jint CommonGnssData::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_55546ef6a647f39b]);
            }

            void CommonGnssData::setAf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf0_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setAf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf1_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_02135a6ef25adb4b], a0.this$);
            }

            void CommonGnssData::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setI0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setM0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setM0_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setOmega0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmega0_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setOmegaDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmegaDot_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_44ed599e93e8a30c], a0);
            }

            void CommonGnssData::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setSma(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSma_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_8ba9fe7a847cecad], a0);
            }

            void CommonGnssData::setWeek(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeek_44ed599e93e8a30c], a0);
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
            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyGetSetDef t_CommonGnssData__fields_[] = {
              DECLARE_GETSET_FIELD(t_CommonGnssData, af0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, af1),
              DECLARE_GET_FIELD(t_CommonGnssData, angularVelocity),
              DECLARE_GET_FIELD(t_CommonGnssData, cycleDuration),
              DECLARE_GETSET_FIELD(t_CommonGnssData, date),
              DECLARE_GETSET_FIELD(t_CommonGnssData, e),
              DECLARE_GETSET_FIELD(t_CommonGnssData, i0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, m0),
              DECLARE_GET_FIELD(t_CommonGnssData, mu),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omega0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omegaDot),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pRN),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pa),
              DECLARE_GETSET_FIELD(t_CommonGnssData, sma),
              DECLARE_GETSET_FIELD(t_CommonGnssData, time),
              DECLARE_GETSET_FIELD(t_CommonGnssData, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonGnssData__methods_[] = {
              DECLARE_METHOD(t_CommonGnssData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getDate, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getE, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getI0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getM0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getMu, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPa, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getSma, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getTime, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, setAf0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setAf1, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setDate, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setE, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setI0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setM0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmega0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmegaDot, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPRN, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPa, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setSma, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setTime, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setWeek, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonGnssData)[] = {
              { Py_tp_methods, t_CommonGnssData__methods_ },
              { Py_tp_init, (void *) t_CommonGnssData_init_ },
              { Py_tp_getset, t_CommonGnssData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonGnssData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CommonGnssData, t_CommonGnssData, CommonGnssData);

            void t_CommonGnssData::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonGnssData), &PY_TYPE_DEF(CommonGnssData), module, "CommonGnssData", 0);
            }

            void t_CommonGnssData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "class_", make_descriptor(CommonGnssData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "wrapfn_", make_descriptor(t_CommonGnssData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonGnssData::initializeClass, 1)))
                return NULL;
              return t_CommonGnssData::wrap_Object(CommonGnssData(((t_CommonGnssData *) arg)->object.this$));
            }
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonGnssData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              CommonGnssData object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = CommonGnssData(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf1", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setM0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setM0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmega0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmega0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmegaDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmegaDot", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSma(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSma", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setWeek(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeek", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af1", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setM0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "m0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmega0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omega0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmegaDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omegaDot", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSma(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sma", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setWeek(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "week", arg);
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
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$CalibrationTargetConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$CalibrationTargetConfiguration::mids$ = NULL;
        bool CRDConfiguration$CalibrationTargetConfiguration::live$ = false;

        jclass CRDConfiguration$CalibrationTargetConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProcessingSoftwareName", "()Ljava/lang/String;");
            mids$[mid_getProcessingSoftwareVersion_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProcessingSoftwareVersion", "()Ljava/lang/String;");
            mids$[mid_getPulseEnergy_b74f83833fdad017] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getSumOfAllConstantDelays_b74f83833fdad017] = env->getMethodID(cls, "getSumOfAllConstantDelays", "()D");
            mids$[mid_getSurveyError_b74f83833fdad017] = env->getMethodID(cls, "getSurveyError", "()D");
            mids$[mid_getSurveyedTargetDistance_b74f83833fdad017] = env->getMethodID(cls, "getSurveyedTargetDistance", "()D");
            mids$[mid_getTargetName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTargetName", "()Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareName_734b91ac30d5f9b4] = env->getMethodID(cls, "setProcessingSoftwareName", "(Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwareVersion_734b91ac30d5f9b4] = env->getMethodID(cls, "setProcessingSoftwareVersion", "(Ljava/lang/String;)V");
            mids$[mid_setPulseEnergy_8ba9fe7a847cecad] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setSumOfAllConstantDelays_8ba9fe7a847cecad] = env->getMethodID(cls, "setSumOfAllConstantDelays", "(D)V");
            mids$[mid_setSurveyError_8ba9fe7a847cecad] = env->getMethodID(cls, "setSurveyError", "(D)V");
            mids$[mid_setSurveyedTargetDistance_8ba9fe7a847cecad] = env->getMethodID(cls, "setSurveyedTargetDistance", "(D)V");
            mids$[mid_setTargetName_734b91ac30d5f9b4] = env->getMethodID(cls, "setTargetName", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$CalibrationTargetConfiguration::CRDConfiguration$CalibrationTargetConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareName_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersion_1c1fa1e935d6cdcf]));
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSumOfAllConstantDelays() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfAllConstantDelays_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyError_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyedTargetDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyedTargetDistance_b74f83833fdad017]);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getTargetName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTargetName_1c1fa1e935d6cdcf]));
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareName_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareVersion(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersion_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSumOfAllConstantDelays(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSumOfAllConstantDelays_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyError(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyError_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyedTargetDistance(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyedTargetDistance_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setTargetName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetName_734b91ac30d5f9b4], a0.this$);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$CalibrationTargetConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareName),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareVersion),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, sumOfAllConstantDelays),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyError),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyedTargetDistance),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, targetName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$CalibrationTargetConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareVersion, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSumOfAllConstantDelays, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyError, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyedTargetDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getTargetName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareVersion, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSumOfAllConstantDelays, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyError, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyedTargetDistance, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setTargetName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$CalibrationTargetConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$CalibrationTargetConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$CalibrationTargetConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$CalibrationTargetConfiguration, t_CRDConfiguration$CalibrationTargetConfiguration, CRDConfiguration$CalibrationTargetConfiguration);

        void t_CRDConfiguration$CalibrationTargetConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), &PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration), module, "CRDConfiguration$CalibrationTargetConfiguration", 0);
        }

        void t_CRDConfiguration$CalibrationTargetConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "class_", make_descriptor(CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$CalibrationTargetConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(CRDConfiguration$CalibrationTargetConfiguration(((t_CRDConfiguration$CalibrationTargetConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$CalibrationTargetConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$CalibrationTargetConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersion());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersion", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSumOfAllConstantDelays(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSumOfAllConstantDelays", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyError(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyError", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyedTargetDistance(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyedTargetDistance", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTargetName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareName", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersion());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersion", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSumOfAllConstantDelays(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sumOfAllConstantDelays", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyError());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyError(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyError", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyedTargetDistance(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyedTargetDistance", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTargetName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetName", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$ReaderOpener::class$ = NULL;
      jmethodID *DataSource$ReaderOpener::mids$ = NULL;
      bool DataSource$ReaderOpener::live$ = false;

      jclass DataSource$ReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$ReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_b2bc6d3e210c2dd4] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$ReaderOpener::openOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openOnce_b2bc6d3e210c2dd4]));
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
      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self);

      static PyMethodDef t_DataSource$ReaderOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$ReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$ReaderOpener)[] = {
        { Py_tp_methods, t_DataSource$ReaderOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$ReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$ReaderOpener, t_DataSource$ReaderOpener, DataSource$ReaderOpener);

      void t_DataSource$ReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$ReaderOpener), &PY_TYPE_DEF(DataSource$ReaderOpener), module, "DataSource$ReaderOpener", 0);
      }

      void t_DataSource$ReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "class_", make_descriptor(DataSource$ReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "wrapfn_", make_descriptor(t_DataSource$ReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$ReaderOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$ReaderOpener::wrap_Object(DataSource$ReaderOpener(((t_DataSource$ReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$ReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCBScale::class$ = NULL;
      jmethodID *TCBScale::mids$ = NULL;
      bool TCBScale::live$ = false;

      jclass TCBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble TCBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String TCBScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_getName(t_TCBScale *self);
      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data);
      static PyGetSetDef t_TCBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCBScale__methods_[] = {
        DECLARE_METHOD(t_TCBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCBScale)[] = {
        { Py_tp_methods, t_TCBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCBScale, t_TCBScale, TCBScale);

      void t_TCBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCBScale), &PY_TYPE_DEF(TCBScale), module, "TCBScale", 0);
      }

      void t_TCBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "class_", make_descriptor(TCBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "wrapfn_", make_descriptor(t_TCBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCBScale::initializeClass, 1)))
          return NULL;
        return t_TCBScale::wrap_Object(TCBScale(((t_TCBScale *) arg)->object.this$));
      }
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCBScale_getName(t_TCBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSNavigationMessage::class$ = NULL;
            jmethodID *IRNSSNavigationMessage::mids$ = NULL;
            bool IRNSSNavigationMessage::live$ = false;

            jclass IRNSSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIODEC_55546ef6a647f39b] = env->getMethodID(cls, "getIODEC", "()I");
                mids$[mid_getSvHealth_b74f83833fdad017] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_getTGD_b74f83833fdad017] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_b74f83833fdad017] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setIODEC_8ba9fe7a847cecad] = env->getMethodID(cls, "setIODEC", "(D)V");
                mids$[mid_setSvHealth_8ba9fe7a847cecad] = env->getMethodID(cls, "setSvHealth", "(D)V");
                mids$[mid_setTGD_8ba9fe7a847cecad] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setURA_8ba9fe7a847cecad] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSNavigationMessage::IRNSSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint IRNSSNavigationMessage::getIODEC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODEC_55546ef6a647f39b]);
            }

            jdouble IRNSSNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_b74f83833fdad017]);
            }

            jdouble IRNSSNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_b74f83833fdad017]);
            }

            jdouble IRNSSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_b74f83833fdad017]);
            }

            void IRNSSNavigationMessage::setIODEC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODEC_8ba9fe7a847cecad], a0);
            }

            void IRNSSNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_8ba9fe7a847cecad], a0);
            }

            void IRNSSNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_8ba9fe7a847cecad], a0);
            }

            void IRNSSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_8ba9fe7a847cecad], a0);
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
            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, iODEC),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_IRNSSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getIODEC, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setIODEC, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSNavigationMessage)[] = {
              { Py_tp_methods, t_IRNSSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_IRNSSNavigationMessage_init_ },
              { Py_tp_getset, t_IRNSSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(IRNSSNavigationMessage, t_IRNSSNavigationMessage, IRNSSNavigationMessage);

            void t_IRNSSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSNavigationMessage), &PY_TYPE_DEF(IRNSSNavigationMessage), module, "IRNSSNavigationMessage", 0);
            }

            void t_IRNSSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "class_", make_descriptor(IRNSSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "wrapfn_", make_descriptor(t_IRNSSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_IRNSSNavigationMessage::wrap_Object(IRNSSNavigationMessage(((t_IRNSSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              IRNSSNavigationMessage object((jobject) NULL);

              INT_CALL(object = IRNSSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODEC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODEC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODEC", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODEC());
              return PyLong_FromLong((long) value);
            }
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODEC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODEC", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/orekit/utils/TrackingCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TrackingCoordinates::class$ = NULL;
      jmethodID *TrackingCoordinates::mids$ = NULL;
      bool TrackingCoordinates::live$ = false;

      jclass TrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getAzimuth_b74f83833fdad017] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getElevation_b74f83833fdad017] = env->getMethodID(cls, "getElevation", "()D");
          mids$[mid_getRange_b74f83833fdad017] = env->getMethodID(cls, "getRange", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TrackingCoordinates::TrackingCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

      jdouble TrackingCoordinates::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_b74f83833fdad017]);
      }

      jdouble TrackingCoordinates::getElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_b74f83833fdad017]);
      }

      jdouble TrackingCoordinates::getRange() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_b74f83833fdad017]);
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
      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data);
      static PyGetSetDef t_TrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_TrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_TrackingCoordinates, range),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_TrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrackingCoordinates)[] = {
        { Py_tp_methods, t_TrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_TrackingCoordinates_init_ },
        { Py_tp_getset, t_TrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrackingCoordinates, t_TrackingCoordinates, TrackingCoordinates);

      void t_TrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TrackingCoordinates), &PY_TYPE_DEF(TrackingCoordinates), module, "TrackingCoordinates", 0);
      }

      void t_TrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "class_", make_descriptor(TrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "wrapfn_", make_descriptor(t_TrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_TrackingCoordinates::wrap_Object(TrackingCoordinates(((t_TrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        TrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = TrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRange());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getElevation());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRange());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmData::class$ = NULL;
              jmethodID *SsrIgmData::mids$ = NULL;
              bool SsrIgmData::live$ = false;

              jclass SsrIgmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_44ed599e93e8a30c] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmData::SsrIgmData() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint SsrIgmData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_55546ef6a647f39b]);
              }

              void SsrIgmData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_44ed599e93e8a30c], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self);
              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg);
              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data);
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmData__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmData__methods_[] = {
                DECLARE_METHOD(t_SsrIgmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmData)[] = {
                { Py_tp_methods, t_SsrIgmData__methods_ },
                { Py_tp_init, (void *) t_SsrIgmData_init_ },
                { Py_tp_getset, t_SsrIgmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIgmData, t_SsrIgmData, SsrIgmData);

              void t_SsrIgmData::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmData), &PY_TYPE_DEF(SsrIgmData), module, "SsrIgmData", 0);
              }

              void t_SsrIgmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "class_", make_descriptor(SsrIgmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "wrapfn_", make_descriptor(t_SsrIgmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmData::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmData::wrap_Object(SsrIgmData(((t_SsrIgmData *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmData_init_(t_SsrIgmData *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmData object((jobject) NULL);

                INT_CALL(object = SsrIgmData());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmData_getSatelliteID(t_SsrIgmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmData_setSatelliteID(t_SsrIgmData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmData_get__satelliteID(t_SsrIgmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmData_set__satelliteID(t_SsrIgmData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
                return -1;
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
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *FieldProbabilityOfCollision::class$ = NULL;
        jmethodID *FieldProbabilityOfCollision::mids$ = NULL;
        bool FieldProbabilityOfCollision::live$ = false;

        jclass FieldProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/FieldProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_69100ceaa9527c48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;)V");
            mids$[mid_init$_1771911ab5506ea2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_init$_09e54bced4f47fa9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_getLowerLimit_81520b552cb3fa26] = env->getMethodID(cls, "getLowerLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getProbabilityOfCollisionMethodName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_81520b552cb3fa26] = env->getMethodID(cls, "getUpperLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_81520b552cb3fa26] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_isMaxProbability_9ab94ac1dc23b105] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69100ceaa9527c48, a0.this$, a1.this$)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1771911ab5506ea2, a0.this$, a1.this$, a2)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_09e54bced4f47fa9, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getLowerLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLowerLimit_81520b552cb3fa26]));
        }

        ::java::lang::String FieldProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_1c1fa1e935d6cdcf]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getUpperLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUpperLimit_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_81520b552cb3fa26]));
        }

        jboolean FieldProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_9ab94ac1dc23b105]);
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
    namespace ssa {
      namespace metrics {
        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args);
        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self);
        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data);
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_FieldProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, value),
          DECLARE_GET_FIELD(t_FieldProbabilityOfCollision, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_FieldProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldProbabilityOfCollision)[] = {
          { Py_tp_methods, t_FieldProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_FieldProbabilityOfCollision_init_ },
          { Py_tp_getset, t_FieldProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldProbabilityOfCollision, t_FieldProbabilityOfCollision, FieldProbabilityOfCollision);
        PyObject *t_FieldProbabilityOfCollision::wrap_Object(const FieldProbabilityOfCollision& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldProbabilityOfCollision::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldProbabilityOfCollision::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldProbabilityOfCollision *self = (t_FieldProbabilityOfCollision *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldProbabilityOfCollision), &PY_TYPE_DEF(FieldProbabilityOfCollision), module, "FieldProbabilityOfCollision", 0);
        }

        void t_FieldProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "class_", make_descriptor(FieldProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "wrapfn_", make_descriptor(t_FieldProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_FieldProbabilityOfCollision::wrap_Object(FieldProbabilityOfCollision(((t_FieldProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_FieldProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldProbabilityOfCollision_of_(t_FieldProbabilityOfCollision *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldProbabilityOfCollision_init_(t_FieldProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ks", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              FieldProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "KKKsZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldProbabilityOfCollision_getLowerLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLowerLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getUpperLimit(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperLimit());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_getValue(t_FieldProbabilityOfCollision *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldProbabilityOfCollision_isMaxProbability(t_FieldProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldProbabilityOfCollision_get__parameters_(t_FieldProbabilityOfCollision *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldProbabilityOfCollision_get__lowerLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLowerLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__maxProbability(t_FieldProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__upperLimit(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperLimit());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldProbabilityOfCollision_get__value(t_FieldProbabilityOfCollision *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WideLaneCombination::class$ = NULL;
          jmethodID *WideLaneCombination::mids$ = NULL;
          bool WideLaneCombination::live$ = false;

          jclass WideLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WideLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_67abdaf53ea90950] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_7bbbdc452eac601c] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_WideLaneCombination__methods_[] = {
            DECLARE_METHOD(t_WideLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WideLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WideLaneCombination)[] = {
            { Py_tp_methods, t_WideLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WideLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(WideLaneCombination, t_WideLaneCombination, WideLaneCombination);

          void t_WideLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(WideLaneCombination), &PY_TYPE_DEF(WideLaneCombination), module, "WideLaneCombination", 0);
          }

          void t_WideLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "class_", make_descriptor(WideLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "wrapfn_", make_descriptor(t_WideLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WideLaneCombination::initializeClass, 1)))
              return NULL;
            return t_WideLaneCombination::wrap_Object(WideLaneCombination(((t_WideLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WideLaneCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmDataKey::class$ = NULL;
            jmethodID *TdmDataKey::mids$ = NULL;
            bool TdmDataKey::live$ = false;
            TdmDataKey *TdmDataKey::COMMENT = NULL;
            TdmDataKey *TdmDataKey::EPOCH = NULL;
            TdmDataKey *TdmDataKey::observation = NULL;

            jclass TdmDataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmDataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_1696be5353f5ec5d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_valueOf_801e99a0474a36cb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");
                mids$[mid_values_5ebc4968bb5ef672] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new TdmDataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                EPOCH = new TdmDataKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                observation = new TdmDataKey(env->getStaticObjectField(cls, "observation", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmDataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_1696be5353f5ec5d], a0.this$, a1.this$, a2.this$);
            }

            TdmDataKey TdmDataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmDataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_801e99a0474a36cb], a0.this$));
            }

            JArray< TdmDataKey > TdmDataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmDataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5ebc4968bb5ef672]));
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
          namespace tdm {
            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmDataKey_values(PyTypeObject *type);
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data);
            static PyGetSetDef t_TdmDataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmDataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmDataKey__methods_[] = {
              DECLARE_METHOD(t_TdmDataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmDataKey)[] = {
              { Py_tp_methods, t_TdmDataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmDataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmDataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmDataKey, t_TdmDataKey, TdmDataKey);
            PyObject *t_TdmDataKey::wrap_Object(const TdmDataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmDataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmDataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmDataKey), &PY_TYPE_DEF(TdmDataKey), module, "TdmDataKey", 0);
            }

            void t_TdmDataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "class_", make_descriptor(TdmDataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "wrapfn_", make_descriptor(t_TdmDataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmDataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "COMMENT", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "EPOCH", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "observation", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::observation)));
            }

            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmDataKey::initializeClass, 1)))
                return NULL;
              return t_TdmDataKey::wrap_Object(TdmDataKey(((t_TdmDataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmDataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmDataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::valueOf(a0));
                return t_TdmDataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmDataKey_values(PyTypeObject *type)
            {
              JArray< TdmDataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmDataKey::wrap_jobject);
            }
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data)
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
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *Encloser::class$ = NULL;
        jmethodID *Encloser::mids$ = NULL;
        bool Encloser::live$ = false;

        jclass Encloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/Encloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_enclose_11758fc9a7169c2c] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall Encloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_11758fc9a7169c2c], a0.this$));
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
      namespace enclosing {
        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args);
        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg);
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data);
        static PyGetSetDef t_Encloser__fields_[] = {
          DECLARE_GET_FIELD(t_Encloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Encloser__methods_[] = {
          DECLARE_METHOD(t_Encloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Encloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_Encloser, enclose, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Encloser)[] = {
          { Py_tp_methods, t_Encloser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Encloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Encloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Encloser, t_Encloser, Encloser);
        PyObject *t_Encloser::wrap_Object(const Encloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Encloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Encloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Encloser *self = (t_Encloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Encloser::install(PyObject *module)
        {
          installType(&PY_TYPE(Encloser), &PY_TYPE_DEF(Encloser), module, "Encloser", 0);
        }

        void t_Encloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "class_", make_descriptor(Encloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "wrapfn_", make_descriptor(t_Encloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Encloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Encloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Encloser::initializeClass, 1)))
            return NULL;
          return t_Encloser::wrap_Object(Encloser(((t_Encloser *) arg)->object.this$));
        }
        static PyObject *t_Encloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Encloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Encloser_of_(t_Encloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Encloser_enclose(t_Encloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }
        static PyObject *t_Encloser_get__parameters_(t_Encloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *YesNoUnknown::class$ = NULL;
          jmethodID *YesNoUnknown::mids$ = NULL;
          bool YesNoUnknown::live$ = false;
          YesNoUnknown *YesNoUnknown::NO = NULL;
          YesNoUnknown *YesNoUnknown::UNKOWN = NULL;
          YesNoUnknown *YesNoUnknown::YES = NULL;

          jclass YesNoUnknown::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/YesNoUnknown");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_1d31839118dfb5d7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
              mids$[mid_values_aad02560f94482df] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NO = new YesNoUnknown(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              UNKOWN = new YesNoUnknown(env->getStaticObjectField(cls, "UNKOWN", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              YES = new YesNoUnknown(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/definitions/YesNoUnknown;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          YesNoUnknown YesNoUnknown::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return YesNoUnknown(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1d31839118dfb5d7], a0.this$));
          }

          JArray< YesNoUnknown > YesNoUnknown::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< YesNoUnknown >(env->callStaticObjectMethod(cls, mids$[mid_values_aad02560f94482df]));
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
        namespace definitions {
          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args);
          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_YesNoUnknown_values(PyTypeObject *type);
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data);
          static PyGetSetDef t_YesNoUnknown__fields_[] = {
            DECLARE_GET_FIELD(t_YesNoUnknown, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_YesNoUnknown__methods_[] = {
            DECLARE_METHOD(t_YesNoUnknown, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, of_, METH_VARARGS),
            DECLARE_METHOD(t_YesNoUnknown, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_YesNoUnknown, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(YesNoUnknown)[] = {
            { Py_tp_methods, t_YesNoUnknown__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_YesNoUnknown__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(YesNoUnknown)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(YesNoUnknown, t_YesNoUnknown, YesNoUnknown);
          PyObject *t_YesNoUnknown::wrap_Object(const YesNoUnknown& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_YesNoUnknown::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_YesNoUnknown::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_YesNoUnknown *self = (t_YesNoUnknown *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_YesNoUnknown::install(PyObject *module)
          {
            installType(&PY_TYPE(YesNoUnknown), &PY_TYPE_DEF(YesNoUnknown), module, "YesNoUnknown", 0);
          }

          void t_YesNoUnknown::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "class_", make_descriptor(YesNoUnknown::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "wrapfn_", make_descriptor(t_YesNoUnknown::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "boxfn_", make_descriptor(boxObject));
            env->getClass(YesNoUnknown::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "NO", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::NO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "UNKOWN", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::UNKOWN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(YesNoUnknown), "YES", make_descriptor(t_YesNoUnknown::wrap_Object(*YesNoUnknown::YES)));
          }

          static PyObject *t_YesNoUnknown_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, YesNoUnknown::initializeClass, 1)))
              return NULL;
            return t_YesNoUnknown::wrap_Object(YesNoUnknown(((t_YesNoUnknown *) arg)->object.this$));
          }
          static PyObject *t_YesNoUnknown_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, YesNoUnknown::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_YesNoUnknown_of_(t_YesNoUnknown *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_YesNoUnknown_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            YesNoUnknown result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::valueOf(a0));
              return t_YesNoUnknown::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_YesNoUnknown_values(PyTypeObject *type)
          {
            JArray< YesNoUnknown > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::YesNoUnknown::values());
            return JArray<jobject>(result.this$).wrap(t_YesNoUnknown::wrap_jobject);
          }
          static PyObject *t_YesNoUnknown_get__parameters_(t_YesNoUnknown *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LaguerreRuleFactory::class$ = NULL;
          jmethodID *LaguerreRuleFactory::mids$ = NULL;
          bool LaguerreRuleFactory::live$ = false;

          jclass LaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LaguerreRuleFactory::LaguerreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LaguerreRuleFactory)[] = {
            { Py_tp_methods, t_LaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LaguerreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LaguerreRuleFactory, t_LaguerreRuleFactory, LaguerreRuleFactory);

          void t_LaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LaguerreRuleFactory), &PY_TYPE_DEF(LaguerreRuleFactory), module, "LaguerreRuleFactory", 0);
          }

          void t_LaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "class_", make_descriptor(LaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "wrapfn_", make_descriptor(t_LaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LaguerreRuleFactory::wrap_Object(LaguerreRuleFactory(((t_LaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LaguerreRuleFactory object((jobject) NULL);

            INT_CALL(object = LaguerreRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GeographicZoneDetector::class$ = NULL;
        jmethodID *GeographicZoneDetector::mids$ = NULL;
        bool GeographicZoneDetector::live$ = false;

        jclass GeographicZoneDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GeographicZoneDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a23867f421f4c79b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_c5b07d45a6d67924] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_95d324082d4f411b] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getMargin_b74f83833fdad017] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getZone_bf39bb9c5825f40e] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_withMargin_7ff54f704ba6a830] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/GeographicZoneDetector;");
            mids$[mid_create_c838debbc3f65d6c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GeographicZoneDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeographicZoneDetector::GeographicZoneDetector(const ::org::orekit::bodies::BodyShape & a0, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a23867f421f4c79b, a0.this$, a1.this$, a2)) {}

        GeographicZoneDetector::GeographicZoneDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c5b07d45a6d67924, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble GeographicZoneDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::bodies::BodyShape GeographicZoneDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_95d324082d4f411b]));
        }

        jdouble GeographicZoneDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet GeographicZoneDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_bf39bb9c5825f40e]));
        }

        GeographicZoneDetector GeographicZoneDetector::withMargin(jdouble a0) const
        {
          return GeographicZoneDetector(env->callObjectMethod(this$, mids$[mid_withMargin_7ff54f704ba6a830], a0));
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
        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args);
        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args);
        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data);
        static PyGetSetDef t_GeographicZoneDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GeographicZoneDetector, body),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, margin),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, zone),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeographicZoneDetector__methods_[] = {
          DECLARE_METHOD(t_GeographicZoneDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getZone, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, withMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeographicZoneDetector)[] = {
          { Py_tp_methods, t_GeographicZoneDetector__methods_ },
          { Py_tp_init, (void *) t_GeographicZoneDetector_init_ },
          { Py_tp_getset, t_GeographicZoneDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeographicZoneDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GeographicZoneDetector, t_GeographicZoneDetector, GeographicZoneDetector);
        PyObject *t_GeographicZoneDetector::wrap_Object(const GeographicZoneDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeographicZoneDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeographicZoneDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GeographicZoneDetector), &PY_TYPE_DEF(GeographicZoneDetector), module, "GeographicZoneDetector", 0);
        }

        void t_GeographicZoneDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "class_", make_descriptor(GeographicZoneDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "wrapfn_", make_descriptor(t_GeographicZoneDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeographicZoneDetector::initializeClass, 1)))
            return NULL;
          return t_GeographicZoneDetector::wrap_Object(GeographicZoneDetector(((t_GeographicZoneDetector *) arg)->object.this$));
        }
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeographicZoneDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::bodies::BodyShape a0((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a2))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a4))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
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

        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeographicZoneDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg)
        {
          jdouble a0;
          GeographicZoneDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_GeographicZoneDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/EventBasedScheduler.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
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
              mids$[mid_init$_96463f83d671d5ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;Lorg/orekit/propagation/Propagator;Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/estimation/measurements/generation/SignSemantic;)V");
              mids$[mid_measurementIsFeasible_a35647bda2901f54] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventBasedScheduler::EventBasedScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1, const ::org::orekit::propagation::Propagator & a2, const ::org::orekit::propagation::events::EventDetector & a3, const ::org::orekit::estimation::measurements::generation::SignSemantic & a4) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_96463f83d671d5ac, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          jboolean EventBasedScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_a35647bda2901f54], a0.this$);
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
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *FieldOrekitFixedStepHandler::mids$ = NULL;
        bool FieldOrekitFixedStepHandler::live$ = false;

        jclass FieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_54d9efbf99822980] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_54d9efbf99822980] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_6c5f4137442325ee] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitFixedStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_54d9efbf99822980], a0.this$);
        }

        void FieldOrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_54d9efbf99822980], a0.this$);
        }

        void FieldOrekitFixedStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_6c5f4137442325ee], a0.this$, a1.this$, a2.this$);
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
      namespace sampling {
        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitFixedStepHandler, t_FieldOrekitFixedStepHandler, FieldOrekitFixedStepHandler);
        PyObject *t_FieldOrekitFixedStepHandler::wrap_Object(const FieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitFixedStepHandler), &PY_TYPE_DEF(FieldOrekitFixedStepHandler), module, "FieldOrekitFixedStepHandler", 0);
        }

        void t_FieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "class_", make_descriptor(FieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitFixedStepHandler::wrap_Object(FieldOrekitFixedStepHandler(((t_FieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GoalType::class$ = NULL;
          jmethodID *GoalType::mids$ = NULL;
          bool GoalType::live$ = false;
          GoalType *GoalType::MAXIMIZE = NULL;
          GoalType *GoalType::MINIMIZE = NULL;

          jclass GoalType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GoalType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_aed5e2c523d11e5a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_values_a2c1a8eec5ec2bd7] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MAXIMIZE = new GoalType(env->getStaticObjectField(cls, "MAXIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              MINIMIZE = new GoalType(env->getStaticObjectField(cls, "MINIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GoalType GoalType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return GoalType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aed5e2c523d11e5a], a0.this$));
          }

          JArray< GoalType > GoalType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< GoalType >(env->callStaticObjectMethod(cls, mids$[mid_values_a2c1a8eec5ec2bd7]));
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
          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args);
          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_GoalType_values(PyTypeObject *type);
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data);
          static PyGetSetDef t_GoalType__fields_[] = {
            DECLARE_GET_FIELD(t_GoalType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GoalType__methods_[] = {
            DECLARE_METHOD(t_GoalType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, of_, METH_VARARGS),
            DECLARE_METHOD(t_GoalType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GoalType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GoalType)[] = {
            { Py_tp_methods, t_GoalType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GoalType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GoalType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(GoalType, t_GoalType, GoalType);
          PyObject *t_GoalType::wrap_Object(const GoalType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GoalType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GoalType::install(PyObject *module)
          {
            installType(&PY_TYPE(GoalType), &PY_TYPE_DEF(GoalType), module, "GoalType", 0);
          }

          void t_GoalType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "class_", make_descriptor(GoalType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "wrapfn_", make_descriptor(t_GoalType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "boxfn_", make_descriptor(boxObject));
            env->getClass(GoalType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MAXIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MAXIMIZE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MINIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MINIMIZE)));
          }

          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GoalType::initializeClass, 1)))
              return NULL;
            return t_GoalType::wrap_Object(GoalType(((t_GoalType *) arg)->object.this$));
          }
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GoalType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            GoalType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::valueOf(a0));
              return t_GoalType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_GoalType_values(PyTypeObject *type)
          {
            JArray< GoalType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::values());
            return JArray<jobject>(result.this$).wrap(t_GoalType::wrap_jobject);
          }
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmData::class$ = NULL;
              jmethodID *OpmData::mids$ = NULL;
              bool OpmData::live$ = false;

              jclass OpmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d04007a8638a42f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_e10d3bdd874e7ebe] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_8313e8e884b218d3] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getManeuver_b5f4acb06008530a] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMass_b74f83833fdad017] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getNbManeuvers_55546ef6a647f39b] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getSpacecraftParametersBlock_ccfacaad97346180] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getStateVectorBlock_22b74842fb82ffba] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/odm/StateVector;");
                  mids$[mid_getUserDefinedBlock_757fcfae3141e23d] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_hasManeuvers_9ab94ac1dc23b105] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmData::OpmData(const ::org::orekit::files::ccsds::ndm::odm::StateVector & a0, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::java::util::List & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d04007a8638a42f5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OpmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_e10d3bdd874e7ebe]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OpmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_8313e8e884b218d3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver OpmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_b5f4acb06008530a], a0));
              }

              ::java::util::List OpmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_e62d3bb06d56d7e3]));
              }

              jdouble OpmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_b74f83833fdad017]);
              }

              jint OpmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_55546ef6a647f39b]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OpmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_ccfacaad97346180]));
              }

              ::org::orekit::files::ccsds::ndm::odm::StateVector OpmData::getStateVectorBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_22b74842fb82ffba]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OpmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_757fcfae3141e23d]));
              }

              jboolean OpmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_9ab94ac1dc23b105]);
              }

              void OpmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self);
              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self);
              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_getManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getMass(t_OpmData *self);
              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self);
              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self);
              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self);
              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data);
              static PyGetSetDef t_OpmData__fields_[] = {
                DECLARE_GET_FIELD(t_OpmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OpmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OpmData, maneuvers),
                DECLARE_GET_FIELD(t_OpmData, mass),
                DECLARE_GET_FIELD(t_OpmData, nbManeuvers),
                DECLARE_GET_FIELD(t_OpmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OpmData, stateVectorBlock),
                DECLARE_GET_FIELD(t_OpmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmData__methods_[] = {
                DECLARE_METHOD(t_OpmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getManeuver, METH_O),
                DECLARE_METHOD(t_OpmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getStateVectorBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmData)[] = {
                { Py_tp_methods, t_OpmData__methods_ },
                { Py_tp_init, (void *) t_OpmData_init_ },
                { Py_tp_getset, t_OpmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OpmData, t_OpmData, OpmData);

              void t_OpmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmData), &PY_TYPE_DEF(OpmData), module, "OpmData", 0);
              }

              void t_OpmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "class_", make_descriptor(OpmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "wrapfn_", make_descriptor(t_OpmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmData::initializeClass, 1)))
                  return NULL;
                return t_OpmData::wrap_Object(OpmData(((t_OpmData *) arg)->object.this$));
              }
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::java::util::List a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                jdouble a6;
                OpmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkKkD", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6))
                {
                  INT_CALL(object = OpmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_OpmData_getManeuvers(t_OpmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_OpmData_getMass(t_OpmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector result((jobject) NULL);
                OBJ_CALL(result = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(result);
              }

              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg)
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

              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector value((jobject) NULL);
                OBJ_CALL(value = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data)
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
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *EstimatedTroposphericModel::class$ = NULL;
          jmethodID *EstimatedTroposphericModel::mids$ = NULL;
          bool EstimatedTroposphericModel::live$ = false;
          ::java::lang::String *EstimatedTroposphericModel::TOTAL_ZENITH_DELAY = NULL;

          jclass EstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/EstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2a5646a2a563a1d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_init$_a32781d12c3f2c37] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TOTAL_ZENITH_DELAY = new ::java::lang::String(env->getStaticObjectField(cls, "TOTAL_ZENITH_DELAY", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedTroposphericModel::EstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::MappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a5646a2a563a1d9, a0.this$, a1)) {}

          EstimatedTroposphericModel::EstimatedTroposphericModel(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::MappingFunction & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a32781d12c3f2c37, a0, a1, a2.this$, a3)) {}

          ::java::util::List EstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::CalculusFieldElement EstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble EstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
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
        namespace troposphere {
          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self);
          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_EstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_EstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_EstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedTroposphericModel, t_EstimatedTroposphericModel, EstimatedTroposphericModel);

          void t_EstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedTroposphericModel), &PY_TYPE_DEF(EstimatedTroposphericModel), module, "EstimatedTroposphericModel", 0);
          }

          void t_EstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "class_", make_descriptor(EstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "wrapfn_", make_descriptor(t_EstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "TOTAL_ZENITH_DELAY", make_descriptor(j2p(*EstimatedTroposphericModel::TOTAL_ZENITH_DELAY)));
          }

          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedTroposphericModel::wrap_Object(EstimatedTroposphericModel(((t_EstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::models::earth::troposphere::MappingFunction a0((jobject) NULL);
                jdouble a1;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::MappingFunction a2((jobject) NULL);
                jdouble a3;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "DDkD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1, a2, a3));
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

          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OutlierFilter.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OutlierFilter::class$ = NULL;
          jmethodID *OutlierFilter::mids$ = NULL;
          bool OutlierFilter::live$ = false;

          jclass OutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_getWarmup_55546ef6a647f39b] = env->getMethodID(cls, "getWarmup", "()I");
              mids$[mid_getMaxSigma_b74f83833fdad017] = env->getMethodID(cls, "getMaxSigma", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlierFilter::OutlierFilter(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

          ::java::util::List OutlierFilter::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void OutlierFilter::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args);
          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self);
          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg);
          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data);
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data);
          static PyGetSetDef t_OutlierFilter__fields_[] = {
            DECLARE_GET_FIELD(t_OutlierFilter, parametersDrivers),
            DECLARE_GET_FIELD(t_OutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OutlierFilter__methods_[] = {
            DECLARE_METHOD(t_OutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_OutlierFilter, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OutlierFilter, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlierFilter)[] = {
            { Py_tp_methods, t_OutlierFilter__methods_ },
            { Py_tp_init, (void *) t_OutlierFilter_init_ },
            { Py_tp_getset, t_OutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlierFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlierFilter, t_OutlierFilter, OutlierFilter);
          PyObject *t_OutlierFilter::wrap_Object(const OutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlierFilter), &PY_TYPE_DEF(OutlierFilter), module, "OutlierFilter", 0);
          }

          void t_OutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "class_", make_descriptor(OutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "wrapfn_", make_descriptor(t_OutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlierFilter::initializeClass, 1)))
              return NULL;
            return t_OutlierFilter::wrap_Object(OutlierFilter(((t_OutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg)
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
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *BoundedPropagator::class$ = NULL;
      jmethodID *BoundedPropagator::mids$ = NULL;
      bool BoundedPropagator::live$ = false;

      jclass BoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/BoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
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
      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data);
      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data);
      static PyGetSetDef t_BoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_BoundedPropagator, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_BoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedPropagator)[] = {
        { Py_tp_methods, t_BoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::Propagator),
        NULL
      };

      DEFINE_TYPE(BoundedPropagator, t_BoundedPropagator, BoundedPropagator);

      void t_BoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedPropagator), &PY_TYPE_DEF(BoundedPropagator), module, "BoundedPropagator", 0);
      }

      void t_BoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "class_", make_descriptor(BoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "wrapfn_", make_descriptor(t_BoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_BoundedPropagator::wrap_Object(BoundedPropagator(((t_BoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
