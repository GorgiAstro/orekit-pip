#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/KeplerianPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *KeplerianPropagator::class$ = NULL;
        jmethodID *KeplerianPropagator::mids$ = NULL;
        bool KeplerianPropagator::live$ = false;

        jclass KeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/KeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a9af82a1647a21f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_6bcd4ef191c1dc21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
            mids$[mid_init$_23c8620d4b42ef5f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_27faad14ca55d093] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_833f230a8a50fec3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DD)V");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a9af82a1647a21f3, a0.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6bcd4ef191c1dc21, a0.this$, a1)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_23c8620d4b42ef5f, a0.this$, a1.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_27faad14ca55d093, a0.this$, a1.this$, a2)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_833f230a8a50fec3, a0.this$, a1.this$, a2, a3)) {}

        void KeplerianPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
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
        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagator)[] = {
          { Py_tp_methods, t_KeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagator, t_KeplerianPropagator, KeplerianPropagator);

        void t_KeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagator), &PY_TYPE_DEF(KeplerianPropagator), module, "KeplerianPropagator", 0);
        }

        void t_KeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "class_", make_descriptor(KeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "wrapfn_", make_descriptor(t_KeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagator::wrap_Object(KeplerianPropagator(((t_KeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = KeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(KeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GillIntegratorBuilder.h"
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

        ::java::lang::Class *GillIntegratorBuilder::class$ = NULL;
        jmethodID *GillIntegratorBuilder::mids$ = NULL;
        bool GillIntegratorBuilder::live$ = false;

        jclass GillIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillIntegratorBuilder::GillIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator GillIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GillIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GillIntegratorBuilder, t_GillIntegratorBuilder, GillIntegratorBuilder);

        void t_GillIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillIntegratorBuilder), &PY_TYPE_DEF(GillIntegratorBuilder), module, "GillIntegratorBuilder", 0);
        }

        void t_GillIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "class_", make_descriptor(GillIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "wrapfn_", make_descriptor(t_GillIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillIntegratorBuilder::wrap_Object(GillIntegratorBuilder(((t_GillIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GillIntegratorBuilder_init_(t_GillIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GillIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GillIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillIntegratorBuilder_buildIntegrator(t_GillIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonFieldShortPeriodTerms::class$ = NULL;
            jmethodID *PythonFieldShortPeriodTerms::mids$ = NULL;
            bool PythonFieldShortPeriodTerms::live$ = false;

            jclass PythonFieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_34654a764ba0e833] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_e1d65e2f6c9d2422] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldShortPeriodTerms::PythonFieldShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonFieldShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonFieldShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonFieldShortPeriodTerms::pythonExtension(jlong a0) const
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
            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self);
            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonFieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, self),
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonFieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonFieldShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonFieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldShortPeriodTerms, t_PythonFieldShortPeriodTerms, PythonFieldShortPeriodTerms);
            PyObject *t_PythonFieldShortPeriodTerms::wrap_Object(const PythonFieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldShortPeriodTerms), &PY_TYPE_DEF(PythonFieldShortPeriodTerms), module, "PythonFieldShortPeriodTerms", 1);
            }

            void t_PythonFieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "class_", make_descriptor(PythonFieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonFieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonFieldShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonFieldShortPeriodTerms::wrap_Object(PythonFieldShortPeriodTerms(((t_PythonFieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonFieldShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("value", result);
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

            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data)
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
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data)
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
#include "org/orekit/utils/LoveNumbers.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LoveNumbers::class$ = NULL;
      jmethodID *LoveNumbers::mids$ = NULL;
      bool LoveNumbers::live$ = false;

      jclass LoveNumbers::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LoveNumbers");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e0c6b539d2838bf3] = env->getMethodID(cls, "<init>", "([[D[[D[[D)V");
          mids$[mid_getImaginary_21b81d54c06b64b0] = env->getMethodID(cls, "getImaginary", "(II)D");
          mids$[mid_getPlus_21b81d54c06b64b0] = env->getMethodID(cls, "getPlus", "(II)D");
          mids$[mid_getReal_21b81d54c06b64b0] = env->getMethodID(cls, "getReal", "(II)D");
          mids$[mid_getSize_412668abc8d889e9] = env->getMethodID(cls, "getSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoveNumbers::LoveNumbers(const JArray< JArray< jdouble > > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0c6b539d2838bf3, a0.this$, a1.this$, a2.this$)) {}

      jdouble LoveNumbers::getImaginary(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_21b81d54c06b64b0], a0, a1);
      }

      jdouble LoveNumbers::getPlus(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPlus_21b81d54c06b64b0], a0, a1);
      }

      jdouble LoveNumbers::getReal(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_21b81d54c06b64b0], a0, a1);
      }

      jint LoveNumbers::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_412668abc8d889e9]);
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
      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self);
      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data);
      static PyGetSetDef t_LoveNumbers__fields_[] = {
        DECLARE_GET_FIELD(t_LoveNumbers, size),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoveNumbers__methods_[] = {
        DECLARE_METHOD(t_LoveNumbers, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, getImaginary, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getPlus, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getReal, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoveNumbers)[] = {
        { Py_tp_methods, t_LoveNumbers__methods_ },
        { Py_tp_init, (void *) t_LoveNumbers_init_ },
        { Py_tp_getset, t_LoveNumbers__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoveNumbers)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LoveNumbers, t_LoveNumbers, LoveNumbers);

      void t_LoveNumbers::install(PyObject *module)
      {
        installType(&PY_TYPE(LoveNumbers), &PY_TYPE_DEF(LoveNumbers), module, "LoveNumbers", 0);
      }

      void t_LoveNumbers::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "class_", make_descriptor(LoveNumbers::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "wrapfn_", make_descriptor(t_LoveNumbers::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoveNumbers::initializeClass, 1)))
          return NULL;
        return t_LoveNumbers::wrap_Object(LoveNumbers(((t_LoveNumbers *) arg)->object.this$));
      }
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoveNumbers::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > a1((jobject) NULL);
        JArray< JArray< jdouble > > a2((jobject) NULL);
        LoveNumbers object((jobject) NULL);

        if (!parseArgs(args, "[[D[[D[[D", &a0, &a1, &a2))
        {
          INT_CALL(object = LoveNumbers(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getImaginary(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPlus(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPlus", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getReal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TDBScale::class$ = NULL;
      jmethodID *TDBScale::mids$ = NULL;
      bool TDBScale::live$ = false;

      jclass TDBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TDBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TDBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble TDBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TDBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String TDBScale::toString() const
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
  namespace orekit {
    namespace time {
      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_getName(t_TDBScale *self);
      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data);
      static PyGetSetDef t_TDBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TDBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TDBScale__methods_[] = {
        DECLARE_METHOD(t_TDBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TDBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TDBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TDBScale)[] = {
        { Py_tp_methods, t_TDBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TDBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TDBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TDBScale, t_TDBScale, TDBScale);

      void t_TDBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TDBScale), &PY_TYPE_DEF(TDBScale), module, "TDBScale", 0);
      }

      void t_TDBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "class_", make_descriptor(TDBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "wrapfn_", make_descriptor(t_TDBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TDBScale::initializeClass, 1)))
          return NULL;
        return t_TDBScale::wrap_Object(TDBScale(((t_TDBScale *) arg)->object.this$));
      }
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TDBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TDBScale_getName(t_TDBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args)
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

      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TDBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data)
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
#include "org/orekit/gnss/attitude/GPSBlockIIR.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIR::class$ = NULL;
        jmethodID *GPSBlockIIR::mids$ = NULL;
        bool GPSBlockIIR::live$ = false;
        jdouble GPSBlockIIR::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIR::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIR");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d2624b53a7984676] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIR::GPSBlockIIR(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_d2624b53a7984676, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace attitude {
        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIR__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIR, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIR, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIR)[] = {
          { Py_tp_methods, t_GPSBlockIIR__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIR_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIR)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIR, t_GPSBlockIIR, GPSBlockIIR);

        void t_GPSBlockIIR::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIR), &PY_TYPE_DEF(GPSBlockIIR), module, "GPSBlockIIR", 0);
        }

        void t_GPSBlockIIR::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "class_", make_descriptor(GPSBlockIIR::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "wrapfn_", make_descriptor(t_GPSBlockIIR::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIR::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIR::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIR::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIR::wrap_Object(GPSBlockIIR(((t_GPSBlockIIR *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIR::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          GPSBlockIIR object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = GPSBlockIIR(a0, a1, a2, a3, a4));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/StepsizeHelper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *StepsizeHelper::class$ = NULL;
        jmethodID *StepsizeHelper::mids$ = NULL;
        bool StepsizeHelper::live$ = false;

        jclass StepsizeHelper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/StepsizeHelper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c13e969c0f339014] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_filterStep_5670ca349fa5f245] = env->getMethodID(cls, "filterStep", "(DZZ)D");
            mids$[mid_filterStep_43e75d46ec6c38f2] = env->getMethodID(cls, "filterStep", "(Lorg/hipparchus/CalculusFieldElement;ZZ)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDummyStepsize_557b8123390d8d0c] = env->getMethodID(cls, "getDummyStepsize", "()D");
            mids$[mid_getInitialStep_557b8123390d8d0c] = env->getMethodID(cls, "getInitialStep", "()D");
            mids$[mid_getMainSetDimension_412668abc8d889e9] = env->getMethodID(cls, "getMainSetDimension", "()I");
            mids$[mid_getMaxStep_557b8123390d8d0c] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_557b8123390d8d0c] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_getRelativeTolerance_69cfb132c661aca4] = env->getMethodID(cls, "getRelativeTolerance", "(I)D");
            mids$[mid_getTolerance_77f9e227e4cf04b4] = env->getMethodID(cls, "getTolerance", "(ID)D");
            mids$[mid_getTolerance_d7f69d00c9b191e9] = env->getMethodID(cls, "getTolerance", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setInitialStepSize_10f281d777284cea] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setMainSetDimension_a3da1a935cb37f7b] = env->getMethodID(cls, "setMainSetDimension", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c13e969c0f339014, a0, a1, a2.this$, a3.this$)) {}

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        jdouble StepsizeHelper::filterStep(jdouble a0, jboolean a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_filterStep_5670ca349fa5f245], a0, a1, a2);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::filterStep(const ::org::hipparchus::CalculusFieldElement & a0, jboolean a1, jboolean a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_filterStep_43e75d46ec6c38f2], a0.this$, a1, a2));
        }

        jdouble StepsizeHelper::getDummyStepsize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDummyStepsize_557b8123390d8d0c]);
        }

        jdouble StepsizeHelper::getInitialStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInitialStep_557b8123390d8d0c]);
        }

        jint StepsizeHelper::getMainSetDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getMainSetDimension_412668abc8d889e9]);
        }

        jdouble StepsizeHelper::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_557b8123390d8d0c]);
        }

        jdouble StepsizeHelper::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_557b8123390d8d0c]);
        }

        jdouble StepsizeHelper::getRelativeTolerance(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeTolerance_69cfb132c661aca4], a0);
        }

        jdouble StepsizeHelper::getTolerance(jint a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_77f9e227e4cf04b4], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::getTolerance(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTolerance_d7f69d00c9b191e9], a0, a1.this$));
        }

        void StepsizeHelper::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_10f281d777284cea], a0);
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
        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data);
        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data);
        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data);
        static PyGetSetDef t_StepsizeHelper__fields_[] = {
          DECLARE_GET_FIELD(t_StepsizeHelper, dummyStepsize),
          DECLARE_GET_FIELD(t_StepsizeHelper, initialStep),
          DECLARE_SET_FIELD(t_StepsizeHelper, initialStepSize),
          DECLARE_GET_FIELD(t_StepsizeHelper, mainSetDimension),
          DECLARE_GET_FIELD(t_StepsizeHelper, maxStep),
          DECLARE_GET_FIELD(t_StepsizeHelper, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepsizeHelper__methods_[] = {
          DECLARE_METHOD(t_StepsizeHelper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, filterStep, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, getDummyStepsize, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getInitialStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMainSetDimension, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getRelativeTolerance, METH_O),
          DECLARE_METHOD(t_StepsizeHelper, getTolerance, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, setInitialStepSize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepsizeHelper)[] = {
          { Py_tp_methods, t_StepsizeHelper__methods_ },
          { Py_tp_init, (void *) t_StepsizeHelper_init_ },
          { Py_tp_getset, t_StepsizeHelper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepsizeHelper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepsizeHelper, t_StepsizeHelper, StepsizeHelper);

        void t_StepsizeHelper::install(PyObject *module)
        {
          installType(&PY_TYPE(StepsizeHelper), &PY_TYPE_DEF(StepsizeHelper), module, "StepsizeHelper", 0);
        }

        void t_StepsizeHelper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "class_", make_descriptor(StepsizeHelper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "wrapfn_", make_descriptor(t_StepsizeHelper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepsizeHelper::initializeClass, 1)))
            return NULL;
          return t_StepsizeHelper::wrap_Object(StepsizeHelper(((t_StepsizeHelper *) arg)->object.this$));
        }
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepsizeHelper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
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

        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              jboolean a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DZZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jboolean a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "filterStep", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInitialStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMainSetDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getRelativeTolerance(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRelativeTolerance", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTolerance", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg)
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

        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInitialStep());
          return PyFloat_FromDouble((double) value);
        }

        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data)
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

        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMainSetDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmWriter::class$ = NULL;
              jmethodID *OpmWriter::mids$ = NULL;
              bool OpmWriter::live$ = false;
              jdouble OpmWriter::CCSDS_OPM_VERS = (jdouble) 0;
              jint OpmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OpmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_170ee021ab23bf06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OPM_VERS = env->getStaticDoubleField(cls, "CCSDS_OPM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmWriter::OpmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_170ee021ab23bf06, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args);
              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data);
              static PyGetSetDef t_OpmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OpmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmWriter__methods_[] = {
                DECLARE_METHOD(t_OpmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmWriter)[] = {
                { Py_tp_methods, t_OpmWriter__methods_ },
                { Py_tp_init, (void *) t_OpmWriter_init_ },
                { Py_tp_getset, t_OpmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OpmWriter, t_OpmWriter, OpmWriter);
              PyObject *t_OpmWriter::wrap_Object(const OpmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OpmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OpmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmWriter), &PY_TYPE_DEF(OpmWriter), module, "OpmWriter", 0);
              }

              void t_OpmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "class_", make_descriptor(OpmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "wrapfn_", make_descriptor(t_OpmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "CCSDS_OPM_VERS", make_descriptor(OpmWriter::CCSDS_OPM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "KVN_PADDING_WIDTH", make_descriptor(OpmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmWriter::initializeClass, 1)))
                  return NULL;
                return t_OpmWriter::wrap_Object(OpmWriter(((t_OpmWriter *) arg)->object.this$));
              }
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OpmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OpmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Opm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data)
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
#include "org/hipparchus/analysis/function/Multiply.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Multiply::class$ = NULL;
        jmethodID *Multiply::mids$ = NULL;
        bool Multiply::live$ = false;

        jclass Multiply::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Multiply");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Multiply::Multiply() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Multiply::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args);

        static PyMethodDef t_Multiply__methods_[] = {
          DECLARE_METHOD(t_Multiply, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Multiply)[] = {
          { Py_tp_methods, t_Multiply__methods_ },
          { Py_tp_init, (void *) t_Multiply_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Multiply)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Multiply, t_Multiply, Multiply);

        void t_Multiply::install(PyObject *module)
        {
          installType(&PY_TYPE(Multiply), &PY_TYPE_DEF(Multiply), module, "Multiply", 0);
        }

        void t_Multiply::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "class_", make_descriptor(Multiply::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "wrapfn_", make_descriptor(t_Multiply::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Multiply::initializeClass, 1)))
            return NULL;
          return t_Multiply::wrap_Object(Multiply(((t_Multiply *) arg)->object.this$));
        }
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Multiply::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds)
        {
          Multiply object((jobject) NULL);

          INT_CALL(object = Multiply());
          self->object = object;

          return 0;
        }

        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
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
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessageType::class$ = NULL;
          jmethodID *MessageType::mids$ = NULL;
          bool MessageType::live$ = false;

          jclass MessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parse_0a827faad8220c1a] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::messages::ParsedMessage MessageType::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_0a827faad8220c1a], a0.this$, a1));
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
          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args);

          static PyMethodDef t_MessageType__methods_[] = {
            DECLARE_METHOD(t_MessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageType)[] = {
            { Py_tp_methods, t_MessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageType, t_MessageType, MessageType);

          void t_MessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageType), &PY_TYPE_DEF(MessageType), module, "MessageType", 0);
          }

          void t_MessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "class_", make_descriptor(MessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "wrapfn_", make_descriptor(t_MessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageType::initializeClass, 1)))
              return NULL;
            return t_MessageType::wrap_Object(MessageType(((t_MessageType *) arg)->object.this$));
          }
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/FDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDenominatorDegreesOfFreedom_557b8123390d8d0c] = env->getMethodID(cls, "getDenominatorDegreesOfFreedom", "()D");
            mids$[mid_getNumeratorDegreesOfFreedom_557b8123390d8d0c] = env->getMethodID(cls, "getNumeratorDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDistribution::FDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        FDistribution::FDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble FDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble FDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble FDistribution::getDenominatorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDenominatorDegreesOfFreedom_557b8123390d8d0c]);
        }

        jdouble FDistribution::getNumeratorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumeratorDegreesOfFreedom_557b8123390d8d0c]);
        }

        jdouble FDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble FDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble FDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble FDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean FDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble FDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSRangeModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSRangeModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0d111dc230cd433] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSRangeModifier::OnBoardAntennaOneWayGNSSRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0d111dc230cd433, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void OnBoardAntennaOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSRangeModifier, t_OnBoardAntennaOneWayGNSSRangeModifier, OnBoardAntennaOneWayGNSSRangeModifier);

          void t_OnBoardAntennaOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSRangeModifier), module, "OnBoardAntennaOneWayGNSSRangeModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_Object(OnBoardAntennaOneWayGNSSRangeModifier(((t_OnBoardAntennaOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data)
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
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractIntegrator::class$ = NULL;
      jmethodID *AbstractIntegrator::mids$ = NULL;
      bool AbstractIntegrator::live$ = false;

      jclass AbstractIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_a2423f3286456e55] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_b9694d2460b8c773] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_2660d523bc4bf5e9] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_31b9a2982d73e37a] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getCurrentSignedStepsize_557b8123390d8d0c] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_0d9551367f7ecdef] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_0d9551367f7ecdef] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_0a798a152cb54887] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_isLastStep_89b302893bdbe1f1] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_acceptStep_7bb9d62fab63cbcb] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_sanityChecks_4d28f529380c21e7] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
          mids$[mid_initIntegration_7b1e7ccc98e27149] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setStepStart_b79fdee299d79fcc] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_setIsLastStep_ed2afdb8506b9742] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_setStepSize_10f281d777284cea] = env->getMethodID(cls, "setStepSize", "(D)V");
          mids$[mid_getStepSize_557b8123390d8d0c] = env->getMethodID(cls, "getStepSize", "()D");
          mids$[mid_resetOccurred_89b302893bdbe1f1] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_getEquations_38aa8763986f508b] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/ExpandableODE;");
          mids$[mid_getEvaluationsCounter_d3591c1ea177be92] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_setStateInitialized_ed2afdb8506b9742] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_a2423f3286456e55], a0.this$);
      }

      void AbstractIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_b9694d2460b8c773], a0.this$);
      }

      void AbstractIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_2660d523bc4bf5e9], a0.this$);
      }

      void AbstractIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_0640e6acf969ed28]);
      }

      void AbstractIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_0640e6acf969ed28]);
      }

      void AbstractIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0640e6acf969ed28]);
      }

      JArray< jdouble > AbstractIntegrator::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_31b9a2982d73e37a], a0, a1.this$));
      }

      jdouble AbstractIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_557b8123390d8d0c]);
      }

      jint AbstractIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
      }

      ::java::util::List AbstractIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_0d9551367f7ecdef]));
      }

      jint AbstractIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
      }

      ::java::lang::String AbstractIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::java::util::List AbstractIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_0d9551367f7ecdef]));
      }

      ::java::util::List AbstractIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_0d9551367f7ecdef]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative AbstractIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_0a798a152cb54887]));
      }

      void AbstractIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_a3da1a935cb37f7b], a0);
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
      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args);
      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data);
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data);
      static PyGetSetDef t_AbstractIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_AbstractIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractIntegrator)[] = {
        { Py_tp_methods, t_AbstractIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractIntegrator, t_AbstractIntegrator, AbstractIntegrator);

      void t_AbstractIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractIntegrator), &PY_TYPE_DEF(AbstractIntegrator), module, "AbstractIntegrator", 0);
      }

      void t_AbstractIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "class_", make_descriptor(AbstractIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "wrapfn_", make_descriptor(t_AbstractIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractIntegrator::wrap_Object(AbstractIntegrator(((t_AbstractIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase::class$ = NULL;
        jmethodID *EstimatedMeasurementBase::mids$ = NULL;
        bool EstimatedMeasurementBase::live$ = false;

        jclass EstimatedMeasurementBase::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f92fd0d275c4d59c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getCount_412668abc8d889e9] = env->getMethodID(cls, "getCount", "()I");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEstimatedValue_a53a7513ecedada2] = env->getMethodID(cls, "getEstimatedValue", "()[D");
            mids$[mid_getIteration_412668abc8d889e9] = env->getMethodID(cls, "getIteration", "()I");
            mids$[mid_getObservedMeasurement_1217c497a513de4c] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getObservedValue_a53a7513ecedada2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParticipants_94d7c40250738b28] = env->getMethodID(cls, "getParticipants", "()[Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getStates_5dccf571345671af] = env->getMethodID(cls, "getStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStatus_0bf93a0304e8d453] = env->getMethodID(cls, "getStatus", "()Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_getTimeOffset_557b8123390d8d0c] = env->getMethodID(cls, "getTimeOffset", "()D");
            mids$[mid_setEstimatedValue_cc18240f4a737f14] = env->getMethodID(cls, "setEstimatedValue", "([D)V");
            mids$[mid_setStatus_340c6e935d582f0c] = env->getMethodID(cls, "setStatus", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase::EstimatedMeasurementBase(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f92fd0d275c4d59c, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        jint EstimatedMeasurementBase::getCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getCount_412668abc8d889e9]);
        }

        ::org::orekit::time::AbsoluteDate EstimatedMeasurementBase::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getEstimatedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEstimatedValue_a53a7513ecedada2]));
        }

        jint EstimatedMeasurementBase::getIteration() const
        {
          return env->callIntMethod(this$, mids$[mid_getIteration_412668abc8d889e9]);
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement EstimatedMeasurementBase::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_1217c497a513de4c]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_a53a7513ecedada2]));
        }

        JArray< ::org::orekit::utils::TimeStampedPVCoordinates > EstimatedMeasurementBase::getParticipants() const
        {
          return JArray< ::org::orekit::utils::TimeStampedPVCoordinates >(env->callObjectMethod(this$, mids$[mid_getParticipants_94d7c40250738b28]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > EstimatedMeasurementBase::getStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getStates_5dccf571345671af]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status EstimatedMeasurementBase::getStatus() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status(env->callObjectMethod(this$, mids$[mid_getStatus_0bf93a0304e8d453]));
        }

        jdouble EstimatedMeasurementBase::getTimeOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOffset_557b8123390d8d0c]);
        }

        void EstimatedMeasurementBase::setEstimatedValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEstimatedValue_cc18240f4a737f14], a0.this$);
        }

        void EstimatedMeasurementBase::setStatus(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStatus_340c6e935d582f0c], a0.this$);
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
        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args);
        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, count),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, date),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, estimatedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, iteration),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedMeasurement),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, participants),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, states),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, status),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, timeOffset),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getCount, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getEstimatedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getIteration, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getParticipants, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStates, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStatus, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getTimeOffset, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setEstimatedValue, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setStatus, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurementBase_init_ },
          { Py_tp_getset, t_EstimatedMeasurementBase__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase, t_EstimatedMeasurementBase, EstimatedMeasurementBase);
        PyObject *t_EstimatedMeasurementBase::wrap_Object(const EstimatedMeasurementBase& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase), &PY_TYPE_DEF(EstimatedMeasurementBase), module, "EstimatedMeasurementBase", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "Status", make_descriptor(&PY_TYPE_DEF(EstimatedMeasurementBase$Status)));
        }

        void t_EstimatedMeasurementBase::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "class_", make_descriptor(EstimatedMeasurementBase::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase::wrap_Object(EstimatedMeasurementBase(((t_EstimatedMeasurementBase *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurementBase object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurementBase(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIteration());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParticipants());
          return JArray<jobject>(result.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status result((jobject) NULL);
          OBJ_CALL(result = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.setEstimatedValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEstimatedValue", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::parameters_))
          {
            OBJ_CALL(self->object.setStatus(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStatus", arg);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedValue());
          return value.wrap();
        }
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            JArray< jdouble > value((jobject) NULL);
            if (!parseArg(arg, "[D", &value))
            {
              INT_CALL(self->object.setEstimatedValue(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "estimatedValue", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIteration());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParticipants());
          return JArray<jobject>(value.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
          OBJ_CALL(value = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(value);
        }
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &value))
            {
              INT_CALL(self->object.setStatus(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "status", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) value);
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
              mids$[mid_init$_a3353ef76be92d8b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;DDDI)V");
              mids$[mid_filterData_97f9c68e98daab4e] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_getFirstFrequencyPhaseHistory_897d94db124f72e1] = env->getMethodID(cls, "getFirstFrequencyPhaseHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSecondFrequencyPhaseHistory_897d94db124f72e1] = env->getMethodID(cls, "getSecondFrequencyPhaseHistory", "()Ljava/util/ArrayList;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencyHatchFilter::DualFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, jdouble a3, jdouble a4, jdouble a5, jint a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_a3353ef76be92d8b, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_97f9c68e98daab4e], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getFirstFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getFirstFrequencyPhaseHistory_897d94db124f72e1]));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getSecondFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSecondFrequencyPhaseHistory_897d94db124f72e1]));
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
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockRealMatrix::class$ = NULL;
      jmethodID *BlockRealMatrix::mids$ = NULL;
      bool BlockRealMatrix::live$ = false;
      jint BlockRealMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_9d47f54cd89306c8] = env->getMethodID(cls, "<init>", "(II[[DZ)V");
          mids$[mid_add_62d403a2d2ad5686] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_add_25f9c54536e0540d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_addToEntry_754312f3734d6e2f] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_9333b940bd071573] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_createBlocksLayout_c5a249365f81f631] = env->getStaticMethodID(cls, "createBlocksLayout", "(II)[[D");
          mids$[mid_createMatrix_351e55853827f946] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumn_1da5c9e77f24f269] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_ecbebd8431a3d52f] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumnVector_2a32cae841870443] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_8cf5267aa13a77f3] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_21b81d54c06b64b0] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_557b8123390d8d0c] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_557b8123390d8d0c] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_557b8123390d8d0c] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_1da5c9e77f24f269] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_ecbebd8431a3d52f] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getRowVector_2a32cae841870443] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_93a08624532f2e10] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_62d403a2d2ad5686] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_25f9c54536e0540d] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyEntry_754312f3734d6e2f] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_62d403a2d2ad5686] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyTransposed_25f9c54536e0540d] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_operate_1db7c087750eaffe] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_1db7c087750eaffe] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_scalarAdd_97e5e241a12b4daa] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_scalarMultiply_e95e381257af03e9] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_3246bd31f432242d] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_4fd5e02248c1a963] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_a967cf1fffd0038f] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_754312f3734d6e2f] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_3246bd31f432242d] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_c46b71cc81d6d481] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockRealMatrix;)V");
          mids$[mid_setRowMatrix_4fd5e02248c1a963] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_a967cf1fffd0038f] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_672f554eb45cea1a] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_62d403a2d2ad5686] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_subtract_25f9c54536e0540d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_toBlocksLayout_2b7f9de2d1ea1ddb] = env->getStaticMethodID(cls, "toBlocksLayout", "([[D)[[D");
          mids$[mid_transpose_9333b940bd071573] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_62d403a2d2ad5686] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_25f9c54536e0540d] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_walkInOptimizedOrder_f151009359824fc3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_f151009359824fc3] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockRealMatrix::BlockRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_9d47f54cd89306c8, a0, a1, a2.this$, a3)) {}

      BlockRealMatrix BlockRealMatrix::add(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_62d403a2d2ad5686], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_25f9c54536e0540d], a0.this$));
      }

      void BlockRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_754312f3734d6e2f], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::copy() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_9333b940bd071573]));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::createBlocksLayout(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_c5a249365f81f631], a0, a1));
      }

      BlockRealMatrix BlockRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_351e55853827f946], a0, a1));
      }

      JArray< jdouble > BlockRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_1da5c9e77f24f269], a0));
      }

      jint BlockRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      BlockRealMatrix BlockRealMatrix::getColumnMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_ecbebd8431a3d52f], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2a32cae841870443], a0));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_8cf5267aa13a77f3]));
      }

      jdouble BlockRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_21b81d54c06b64b0], a0, a1);
      }

      jdouble BlockRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_557b8123390d8d0c]);
      }

      jdouble BlockRealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_557b8123390d8d0c]);
      }

      jdouble BlockRealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_557b8123390d8d0c]);
      }

      JArray< jdouble > BlockRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_1da5c9e77f24f269], a0));
      }

      jint BlockRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      BlockRealMatrix BlockRealMatrix::getRowMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_ecbebd8431a3d52f], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2a32cae841870443], a0));
      }

      BlockRealMatrix BlockRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_93a08624532f2e10], a0, a1, a2, a3));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_62d403a2d2ad5686], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_25f9c54536e0540d], a0.this$));
      }

      void BlockRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_754312f3734d6e2f], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_62d403a2d2ad5686], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_25f9c54536e0540d], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_1db7c087750eaffe], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_1db7c087750eaffe], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::scalarAdd(jdouble a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_97e5e241a12b4daa], a0));
      }

      ::org::hipparchus::linear::RealMatrix BlockRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_e95e381257af03e9], a0));
      }

      void BlockRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_3246bd31f432242d], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_4fd5e02248c1a963], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_a967cf1fffd0038f], a0, a1.this$);
      }

      void BlockRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_754312f3734d6e2f], a0, a1, a2);
      }

      void BlockRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_3246bd31f432242d], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const BlockRealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_c46b71cc81d6d481], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_4fd5e02248c1a963], a0, a1.this$);
      }

      void BlockRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_a967cf1fffd0038f], a0, a1.this$);
      }

      void BlockRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_672f554eb45cea1a], a0.this$, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::subtract(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_62d403a2d2ad5686], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_25f9c54536e0540d], a0.this$));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::toBlocksLayout(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_2b7f9de2d1ea1ddb], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transpose() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_9333b940bd071573]));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_62d403a2d2ad5686], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_25f9c54536e0540d], a0.this$));
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_f151009359824fc3], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_f151009359824fc3], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data);
      static PyGetSetDef t_BlockRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockRealMatrix, data),
        DECLARE_GET_FIELD(t_BlockRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_BlockRealMatrix, norm1),
        DECLARE_GET_FIELD(t_BlockRealMatrix, normInfty),
        DECLARE_GET_FIELD(t_BlockRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockRealMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getFrobeniusNorm, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNorm1, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNormInfty, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockRealMatrix)[] = {
        { Py_tp_methods, t_BlockRealMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockRealMatrix_init_ },
        { Py_tp_getset, t_BlockRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(BlockRealMatrix, t_BlockRealMatrix, BlockRealMatrix);

      void t_BlockRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockRealMatrix), &PY_TYPE_DEF(BlockRealMatrix), module, "BlockRealMatrix", 0);
      }

      void t_BlockRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "class_", make_descriptor(BlockRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "wrapfn_", make_descriptor(t_BlockRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockRealMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "BLOCK_SIZE", make_descriptor(BlockRealMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockRealMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockRealMatrix::wrap_Object(BlockRealMatrix(((t_BlockRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = BlockRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > a2((jobject) NULL);
            jboolean a3;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[DZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::createBlocksLayout(a0, a1));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrobeniusNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getFrobeniusNorm", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm1());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNorm1", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormInfty());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNormInfty", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockRealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", BlockRealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *MultiplexedMeasurement::class$ = NULL;
        jmethodID *MultiplexedMeasurement::mids$ = NULL;
        bool MultiplexedMeasurement::live$ = false;
        ::java::lang::String *MultiplexedMeasurement::MEASUREMENT_TYPE = NULL;

        jclass MultiplexedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/MultiplexedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_getEstimatedMeasurements_0d9551367f7ecdef] = env->getMethodID(cls, "getEstimatedMeasurements", "()Ljava/util/List;");
            mids$[mid_getEstimatedMeasurementsWithoutDerivatives_0d9551367f7ecdef] = env->getMethodID(cls, "getEstimatedMeasurementsWithoutDerivatives", "()Ljava/util/List;");
            mids$[mid_getMeasurements_0d9551367f7ecdef] = env->getMethodID(cls, "getMeasurements", "()Ljava/util/List;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiplexedMeasurement::MultiplexedMeasurement(const ::java::util::List & a0) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurements_0d9551367f7ecdef]));
        }

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurementsWithoutDerivatives() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsWithoutDerivatives_0d9551367f7ecdef]));
        }

        ::java::util::List MultiplexedMeasurement::getMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMeasurements_0d9551367f7ecdef]));
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
        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args);
        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data);
        static PyGetSetDef t_MultiplexedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurementsWithoutDerivatives),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, measurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiplexedMeasurement__methods_[] = {
          DECLARE_METHOD(t_MultiplexedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurements, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurementsWithoutDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getMeasurements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurement)[] = {
          { Py_tp_methods, t_MultiplexedMeasurement__methods_ },
          { Py_tp_init, (void *) t_MultiplexedMeasurement_init_ },
          { Py_tp_getset, t_MultiplexedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(MultiplexedMeasurement, t_MultiplexedMeasurement, MultiplexedMeasurement);
        PyObject *t_MultiplexedMeasurement::wrap_Object(const MultiplexedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiplexedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiplexedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiplexedMeasurement), &PY_TYPE_DEF(MultiplexedMeasurement), module, "MultiplexedMeasurement", 0);
        }

        void t_MultiplexedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "class_", make_descriptor(MultiplexedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "wrapfn_", make_descriptor(t_MultiplexedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "boxfn_", make_descriptor(boxObject));
          env->getClass(MultiplexedMeasurement::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "MEASUREMENT_TYPE", make_descriptor(j2p(*MultiplexedMeasurement::MEASUREMENT_TYPE)));
        }

        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiplexedMeasurement::initializeClass, 1)))
            return NULL;
          return t_MultiplexedMeasurement::wrap_Object(MultiplexedMeasurement(((t_MultiplexedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiplexedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          MultiplexedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = MultiplexedMeasurement(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(MultiplexedMeasurement);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonForceModelContext::class$ = NULL;
            jmethodID *PythonForceModelContext::mids$ = NULL;
            bool PythonForceModelContext::live$ = false;

            jclass PythonForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a95aaab9d04f30fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonForceModelContext::PythonForceModelContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_a95aaab9d04f30fd, a0.this$)) {}

            void PythonForceModelContext::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonForceModelContext::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonForceModelContext::pythonExtension(jlong a0) const
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
            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self);
            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args);
            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data);
            static PyGetSetDef t_PythonForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_PythonForceModelContext, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonForceModelContext__methods_[] = {
              DECLARE_METHOD(t_PythonForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonForceModelContext, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonForceModelContext)[] = {
              { Py_tp_methods, t_PythonForceModelContext__methods_ },
              { Py_tp_init, (void *) t_PythonForceModelContext_init_ },
              { Py_tp_getset, t_PythonForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonForceModelContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(PythonForceModelContext, t_PythonForceModelContext, PythonForceModelContext);

            void t_PythonForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonForceModelContext), &PY_TYPE_DEF(PythonForceModelContext), module, "PythonForceModelContext", 1);
            }

            void t_PythonForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "class_", make_descriptor(PythonForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "wrapfn_", make_descriptor(t_PythonForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonForceModelContext::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonForceModelContext_pythonDecRef0 },
              };
              env->registerNatives(cls, methods, 1);
            }

            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonForceModelContext::initializeClass, 1)))
                return NULL;
              return t_PythonForceModelContext::wrap_Object(PythonForceModelContext(((t_PythonForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              PythonForceModelContext object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0))
              {
                INT_CALL(object = PythonForceModelContext(a0));
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

            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args)
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

            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSRangeModifier::RelativisticClockOneWayGNSSRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::java::util::List RelativisticClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSRangeModifier, t_RelativisticClockOneWayGNSSRangeModifier, RelativisticClockOneWayGNSSRangeModifier);

          void t_RelativisticClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSRangeModifier), module, "RelativisticClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSRangeModifier::wrap_Object(RelativisticClockOneWayGNSSRangeModifier(((t_RelativisticClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonStartStopEventsTrigger::class$ = NULL;
          jmethodID *PythonStartStopEventsTrigger::mids$ = NULL;
          bool PythonStartStopEventsTrigger::live$ = false;

          jclass PythonStartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6d6c8f67fc7acdb8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertStartDetector_590bb38060674b63] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_590bb38060674b63] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStartStopEventsTrigger::PythonStartStopEventsTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0, const ::org::orekit::propagation::events::AbstractDetector & a1) : ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger(env->newObject(initializeClass, &mids$, mid_init$_6d6c8f67fc7acdb8, a0.this$, a1.this$)) {}

          void PythonStartStopEventsTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonStartStopEventsTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonStartStopEventsTrigger::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self);
          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data);
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_PythonStartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, self),
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStartStopEventsTrigger)[] = {
            { Py_tp_methods, t_PythonStartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonStartStopEventsTrigger_init_ },
            { Py_tp_getset, t_PythonStartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger),
            NULL
          };

          DEFINE_TYPE(PythonStartStopEventsTrigger, t_PythonStartStopEventsTrigger, PythonStartStopEventsTrigger);
          PyObject *t_PythonStartStopEventsTrigger::wrap_Object(const PythonStartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonStartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonStartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStartStopEventsTrigger), &PY_TYPE_DEF(PythonStartStopEventsTrigger), module, "PythonStartStopEventsTrigger", 1);
          }

          void t_PythonStartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "class_", make_descriptor(PythonStartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "wrapfn_", make_descriptor(t_PythonStartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStartStopEventsTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStartDetector0 },
              { "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStopDetector1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonStartStopEventsTrigger_getParametersDrivers2 },
              { "pythonDecRef", "()V", (void *) t_PythonStartStopEventsTrigger_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonStartStopEventsTrigger::wrap_Object(PythonStartStopEventsTrigger(((t_PythonStartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::AbstractDetector a1((jobject) NULL);
            PyTypeObject **p1;
            PythonStartStopEventsTrigger object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::AbstractDetector::initializeClass, ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonStartStopEventsTrigger(a0, a1));
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

          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStartDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStartDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStopDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStopDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data)
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
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data)
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
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *ProcessEstimate::class$ = NULL;
        jmethodID *ProcessEstimate::mids$ = NULL;
        bool ProcessEstimate::live$ = false;

        jclass ProcessEstimate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/ProcessEstimate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fd385d0a9ef22a8e] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_c48eea702e0cbbc7] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getCovariance_70a207fcbc031df2] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getInnovationCovariance_70a207fcbc031df2] = env->getMethodID(cls, "getInnovationCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getKalmanGain_70a207fcbc031df2] = env->getMethodID(cls, "getKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getState_75d50d73180655b4] = env->getMethodID(cls, "getState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd385d0a9ef22a8e, a0, a1.this$, a2.this$)) {}

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::linear::RealMatrix & a5, const ::org::hipparchus::linear::RealMatrix & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c48eea702e0cbbc7, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getInnovationCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInnovationCovariance_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getKalmanGain_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealVector ProcessEstimate::getState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getState_75d50d73180655b4]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_70a207fcbc031df2]));
        }

        jdouble ProcessEstimate::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
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
    namespace filtering {
      namespace kalman {
        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data);
        static PyGetSetDef t_ProcessEstimate__fields_[] = {
          DECLARE_GET_FIELD(t_ProcessEstimate, covariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, innovationCovariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, kalmanGain),
          DECLARE_GET_FIELD(t_ProcessEstimate, measurementJacobian),
          DECLARE_GET_FIELD(t_ProcessEstimate, state),
          DECLARE_GET_FIELD(t_ProcessEstimate, stateTransitionMatrix),
          DECLARE_GET_FIELD(t_ProcessEstimate, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProcessEstimate__methods_[] = {
          DECLARE_METHOD(t_ProcessEstimate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getInnovationCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getState, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProcessEstimate)[] = {
          { Py_tp_methods, t_ProcessEstimate__methods_ },
          { Py_tp_init, (void *) t_ProcessEstimate_init_ },
          { Py_tp_getset, t_ProcessEstimate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProcessEstimate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProcessEstimate, t_ProcessEstimate, ProcessEstimate);

        void t_ProcessEstimate::install(PyObject *module)
        {
          installType(&PY_TYPE(ProcessEstimate), &PY_TYPE_DEF(ProcessEstimate), module, "ProcessEstimate", 0);
        }

        void t_ProcessEstimate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "class_", make_descriptor(ProcessEstimate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "wrapfn_", make_descriptor(t_ProcessEstimate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProcessEstimate::initializeClass, 1)))
            return NULL;
          return t_ProcessEstimate::wrap_Object(ProcessEstimate(((t_ProcessEstimate *) arg)->object.this$));
        }
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProcessEstimate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a5((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a6((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkkkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleType::class$ = NULL;
      jmethodID *PositionAngleType::mids$ = NULL;
      bool PositionAngleType::live$ = false;
      PositionAngleType *PositionAngleType::ECCENTRIC = NULL;
      PositionAngleType *PositionAngleType::MEAN = NULL;
      PositionAngleType *PositionAngleType::TRUE = NULL;

      jclass PositionAngleType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_18e722d0453806fa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_values_a44ba59349bc8b1c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/PositionAngleType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ECCENTRIC = new PositionAngleType(env->getStaticObjectField(cls, "ECCENTRIC", "Lorg/orekit/orbits/PositionAngleType;"));
          MEAN = new PositionAngleType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/orbits/PositionAngleType;"));
          TRUE = new PositionAngleType(env->getStaticObjectField(cls, "TRUE", "Lorg/orekit/orbits/PositionAngleType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PositionAngleType PositionAngleType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PositionAngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_18e722d0453806fa], a0.this$));
      }

      JArray< PositionAngleType > PositionAngleType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PositionAngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_a44ba59349bc8b1c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args);
      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PositionAngleType_values(PyTypeObject *type);
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data);
      static PyGetSetDef t_PositionAngleType__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleType__methods_[] = {
        DECLARE_METHOD(t_PositionAngleType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PositionAngleType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleType)[] = {
        { Py_tp_methods, t_PositionAngleType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PositionAngleType, t_PositionAngleType, PositionAngleType);
      PyObject *t_PositionAngleType::wrap_Object(const PositionAngleType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PositionAngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PositionAngleType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PositionAngleType *self = (t_PositionAngleType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PositionAngleType::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleType), &PY_TYPE_DEF(PositionAngleType), module, "PositionAngleType", 0);
      }

      void t_PositionAngleType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "class_", make_descriptor(PositionAngleType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "wrapfn_", make_descriptor(t_PositionAngleType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PositionAngleType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "ECCENTRIC", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::ECCENTRIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "MEAN", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleType), "TRUE", make_descriptor(t_PositionAngleType::wrap_Object(*PositionAngleType::TRUE)));
      }

      static PyObject *t_PositionAngleType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleType::initializeClass, 1)))
          return NULL;
        return t_PositionAngleType::wrap_Object(PositionAngleType(((t_PositionAngleType *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleType_of_(t_PositionAngleType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PositionAngleType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PositionAngleType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::valueOf(a0));
          return t_PositionAngleType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PositionAngleType_values(PyTypeObject *type)
      {
        JArray< PositionAngleType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::PositionAngleType::values());
        return JArray<jobject>(result.this$).wrap(t_PositionAngleType::wrap_jobject);
      }
      static PyObject *t_PositionAngleType_get__parameters_(t_PositionAngleType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractFrames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractFrames::class$ = NULL;
      jmethodID *AbstractFrames::mids$ = NULL;
      bool AbstractFrames::live$ = false;

      jclass AbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_079a6d283d35a519] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_buildUncachedITRF_d001272d652a2315] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_af417399ee2f3e0d] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_e96d0d85e78fc6bd] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEcliptic_bb61238dc14574bc] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_9103848bb456e582] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_af417399ee2f3e0d] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_af417399ee2f3e0d] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_e7702de838b8de68] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_af417399ee2f3e0d] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_57509cacf2364dd9] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_af417399ee2f3e0d] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_e96d0d85e78fc6bd] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_57509cacf2364dd9] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_af417399ee2f3e0d] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af417399ee2f3e0d] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_e96d0d85e78fc6bd] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTimeScales_ac9ef17f951ae11a] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFrames::AbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_079a6d283d35a519, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Frame AbstractFrames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_d001272d652a2315], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_e96d0d85e78fc6bd]));
      }

      ::org::orekit::frames::Frame AbstractFrames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_bb61238dc14574bc], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_9103848bb456e582], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::Frame AbstractFrames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF AbstractFrames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_e7702de838b8de68], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_57509cacf2364dd9], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_e96d0d85e78fc6bd]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_57509cacf2364dd9], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_e96d0d85e78fc6bd]));
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
      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data);
      static PyGetSetDef t_AbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFrames, eME2000),
        DECLARE_GET_FIELD(t_AbstractFrames, gCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, iCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, tEME),
        DECLARE_GET_FIELD(t_AbstractFrames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFrames__methods_[] = {
        DECLARE_METHOD(t_AbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getEcliptic, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getFrame, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getVeis1950, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFrames)[] = {
        { Py_tp_methods, t_AbstractFrames__methods_ },
        { Py_tp_init, (void *) t_AbstractFrames_init_ },
        { Py_tp_getset, t_AbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFrames, t_AbstractFrames, AbstractFrames);

      void t_AbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFrames), &PY_TYPE_DEF(AbstractFrames), module, "AbstractFrames", 0);
      }

      void t_AbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "class_", make_descriptor(AbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "wrapfn_", make_descriptor(t_AbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFrames::initializeClass, 1)))
          return NULL;
        return t_AbstractFrames::wrap_Object(AbstractFrames(((t_AbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        AbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractFrames(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *FieldMultivariateVectorFunction::mids$ = NULL;
      bool FieldMultivariateVectorFunction::live$ = false;

      jclass FieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateVectorFunction_3cba6cb6006461bf] = env->getMethodID(cls, "toCalculusFieldMultivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateVectorFunction;");
          mids$[mid_value_a126e91ca3e53df2] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction FieldMultivariateVectorFunction::toCalculusFieldMultivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateVectorFunction_3cba6cb6006461bf], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_a126e91ca3e53df2], a0.this$));
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
      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, toCalculusFieldMultivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateVectorFunction, t_FieldMultivariateVectorFunction, FieldMultivariateVectorFunction);

      void t_FieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateVectorFunction), &PY_TYPE_DEF(FieldMultivariateVectorFunction), module, "FieldMultivariateVectorFunction", 0);
      }

      void t_FieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "class_", make_descriptor(FieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateVectorFunction::wrap_Object(FieldMultivariateVectorFunction(((t_FieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractMessageParser::class$ = NULL;
            jmethodID *AbstractMessageParser::mids$ = NULL;
            bool AbstractMessageParser::live$ = false;

            jclass AbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_anticipateNext_a4672268e69dcb47] = env->getMethodID(cls, "anticipateNext", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_getCurrent_50ed54b038eedc45] = env->getMethodID(cls, "getCurrent", "()Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;");
                mids$[mid_getFileFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_3cffd47377eca18a] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_850ca290e1713a38] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_1eac6345cb6bda02] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_setEndTagSeen_ed2afdb8506b9742] = env->getMethodID(cls, "setEndTagSeen", "(Z)V");
                mids$[mid_setFallback_a4672268e69dcb47] = env->getMethodID(cls, "setFallback", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_wasEndTagSeen_89b302893bdbe1f1] = env->getMethodID(cls, "wasEndTagSeen", "()Z");
                mids$[mid_reset_5f31019b1332b69c] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractMessageParser::anticipateNext(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_anticipateNext_a4672268e69dcb47], a0.this$);
            }

            ::org::orekit::files::ccsds::utils::parsing::ProcessingState AbstractMessageParser::getCurrent() const
            {
              return ::org::orekit::files::ccsds::utils::parsing::ProcessingState(env->callObjectMethod(this$, mids$[mid_getCurrent_50ed54b038eedc45]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat AbstractMessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_c3a4c5f37e67a25e]));
            }

            ::java::lang::String AbstractMessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_3cffd47377eca18a]));
            }

            ::java::util::Map AbstractMessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
            }

            ::java::lang::Object AbstractMessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_850ca290e1713a38], a0.this$));
            }

            void AbstractMessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_1eac6345cb6bda02], a0.this$);
            }

            void AbstractMessageParser::setEndTagSeen(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEndTagSeen_ed2afdb8506b9742], a0);
            }

            void AbstractMessageParser::setFallback(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFallback_a4672268e69dcb47], a0.this$);
            }

            jboolean AbstractMessageParser::wasEndTagSeen() const
            {
              return env->callBooleanMethod(this$, mids$[mid_wasEndTagSeen_89b302893bdbe1f1]);
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
        namespace utils {
          namespace parsing {
            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args);
            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data);
            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data);
            static PyGetSetDef t_AbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractMessageParser, current),
              DECLARE_SET_FIELD(t_AbstractMessageParser, endTagSeen),
              DECLARE_SET_FIELD(t_AbstractMessageParser, fallback),
              DECLARE_GET_FIELD(t_AbstractMessageParser, fileFormat),
              DECLARE_GET_FIELD(t_AbstractMessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageParser, anticipateNext, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, getCurrent, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, process, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setEndTagSeen, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setFallback, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, wasEndTagSeen, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageParser)[] = {
              { Py_tp_methods, t_AbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageParser, t_AbstractMessageParser, AbstractMessageParser);
            PyObject *t_AbstractMessageParser::wrap_Object(const AbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageParser), &PY_TYPE_DEF(AbstractMessageParser), module, "AbstractMessageParser", 0);
            }

            void t_AbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "class_", make_descriptor(AbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "wrapfn_", make_descriptor(t_AbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageParser::wrap_Object(AbstractMessageParser(((t_AbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.anticipateNext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "anticipateNext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState result((jobject) NULL);
              OBJ_CALL(result = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setEndTagSeen(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEndTagSeen", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFallback(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFallback", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.wasEndTagSeen());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
              OBJ_CALL(value = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(value);
            }

            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setEndTagSeen(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "endTagSeen", arg);
              return -1;
            }

            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &value))
                {
                  INT_CALL(self->object.setFallback(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fallback", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance$Direction::class$ = NULL;
          jmethodID *SemiVariance$Direction::mids$ = NULL;
          bool SemiVariance$Direction::live$ = false;
          SemiVariance$Direction *SemiVariance$Direction::DOWNSIDE = NULL;
          SemiVariance$Direction *SemiVariance$Direction::UPSIDE = NULL;

          jclass SemiVariance$Direction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance$Direction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_47f84cc3a8ad1cd7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_values_83f57805c36f76b0] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance$Direction SemiVariance$Direction::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SemiVariance$Direction(env->callStaticObjectMethod(cls, mids$[mid_valueOf_47f84cc3a8ad1cd7], a0.this$));
          }

          JArray< SemiVariance$Direction > SemiVariance$Direction::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SemiVariance$Direction >(env->callStaticObjectMethod(cls, mids$[mid_values_83f57805c36f76b0]));
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args);
          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type);
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data);
          static PyGetSetDef t_SemiVariance$Direction__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance$Direction, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance$Direction__methods_[] = {
            DECLARE_METHOD(t_SemiVariance$Direction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, of_, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance$Direction, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance$Direction)[] = {
            { Py_tp_methods, t_SemiVariance$Direction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SemiVariance$Direction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance$Direction)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SemiVariance$Direction, t_SemiVariance$Direction, SemiVariance$Direction);
          PyObject *t_SemiVariance$Direction::wrap_Object(const SemiVariance$Direction& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SemiVariance$Direction::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SemiVariance$Direction::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance$Direction), &PY_TYPE_DEF(SemiVariance$Direction), module, "SemiVariance$Direction", 0);
          }

          void t_SemiVariance$Direction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "class_", make_descriptor(SemiVariance$Direction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "wrapfn_", make_descriptor(t_SemiVariance$Direction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance$Direction::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "DOWNSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::DOWNSIDE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "UPSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::UPSIDE)));
          }

          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance$Direction::initializeClass, 1)))
              return NULL;
            return t_SemiVariance$Direction::wrap_Object(SemiVariance$Direction(((t_SemiVariance$Direction *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance$Direction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SemiVariance$Direction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::valueOf(a0));
              return t_SemiVariance$Direction::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type)
          {
            JArray< SemiVariance$Direction > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::values());
            return JArray<jobject>(result.this$).wrap(t_SemiVariance$Direction::wrap_jobject);
          }
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data)
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
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragSensitive::class$ = NULL;
        jmethodID *DragSensitive::mids$ = NULL;
        bool DragSensitive::live$ = false;
        ::java::lang::String *DragSensitive::DRAG_COEFFICIENT = NULL;
        ::java::lang::String *DragSensitive::GLOBAL_DRAG_FACTOR = NULL;
        ::java::lang::String *DragSensitive::LIFT_RATIO = NULL;

        jclass DragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dragAcceleration_59d392869e8fa633] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_bc16b30ecfb3a4cc] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRAG_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "DRAG_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_DRAG_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_DRAG_FACTOR", "Ljava/lang/String;"));
            LIFT_RATIO = new ::java::lang::String(env->getStaticObjectField(cls, "LIFT_RATIO", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_59d392869e8fa633], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_bc16b30ecfb3a4cc], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List DragSensitive::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_0d9551367f7ecdef]));
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
      namespace drag {
        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args);
        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self);
        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data);
        static PyGetSetDef t_DragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_DragSensitive, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragSensitive__methods_[] = {
          DECLARE_METHOD(t_DragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragSensitive, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragSensitive)[] = {
          { Py_tp_methods, t_DragSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DragSensitive, t_DragSensitive, DragSensitive);

        void t_DragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(DragSensitive), &PY_TYPE_DEF(DragSensitive), module, "DragSensitive", 0);
        }

        void t_DragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "class_", make_descriptor(DragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "wrapfn_", make_descriptor(t_DragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(DragSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "DRAG_COEFFICIENT", make_descriptor(j2p(*DragSensitive::DRAG_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "GLOBAL_DRAG_FACTOR", make_descriptor(j2p(*DragSensitive::GLOBAL_DRAG_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "LIFT_RATIO", make_descriptor(j2p(*DragSensitive::LIFT_RATIO)));
        }

        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragSensitive::initializeClass, 1)))
            return NULL;
          return t_DragSensitive::wrap_Object(DragSensitive(((t_DragSensitive *) arg)->object.this$));
        }
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
          return NULL;
        }

        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *AdMethodType::class$ = NULL;
          jmethodID *AdMethodType::mids$ = NULL;
          bool AdMethodType::live$ = false;
          AdMethodType *AdMethodType::BATCH = NULL;
          AdMethodType *AdMethodType::EKF = NULL;
          AdMethodType *AdMethodType::FILTER_SMOOTHER = NULL;
          AdMethodType *AdMethodType::QUEST = NULL;
          AdMethodType *AdMethodType::Q_METHOD = NULL;
          AdMethodType *AdMethodType::TRIAD = NULL;

          jclass AdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/AdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_01d8b486b22c0dea] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/AdMethodType;");
              mids$[mid_values_0d83ac99b7b44a4c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/AdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BATCH = new AdMethodType(env->getStaticObjectField(cls, "BATCH", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              EKF = new AdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              FILTER_SMOOTHER = new AdMethodType(env->getStaticObjectField(cls, "FILTER_SMOOTHER", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              QUEST = new AdMethodType(env->getStaticObjectField(cls, "QUEST", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              Q_METHOD = new AdMethodType(env->getStaticObjectField(cls, "Q_METHOD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              TRIAD = new AdMethodType(env->getStaticObjectField(cls, "TRIAD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AdMethodType AdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return AdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_01d8b486b22c0dea], a0.this$));
          }

          JArray< AdMethodType > AdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< AdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_0d83ac99b7b44a4c]));
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
          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args);
          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_AdMethodType_values(PyTypeObject *type);
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data);
          static PyGetSetDef t_AdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_AdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AdMethodType__methods_[] = {
            DECLARE_METHOD(t_AdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_AdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AdMethodType)[] = {
            { Py_tp_methods, t_AdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(AdMethodType, t_AdMethodType, AdMethodType);
          PyObject *t_AdMethodType::wrap_Object(const AdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(AdMethodType), &PY_TYPE_DEF(AdMethodType), module, "AdMethodType", 0);
          }

          void t_AdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "class_", make_descriptor(AdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "wrapfn_", make_descriptor(t_AdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(AdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "BATCH", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::BATCH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "EKF", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "FILTER_SMOOTHER", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::FILTER_SMOOTHER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "QUEST", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::QUEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "Q_METHOD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::Q_METHOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "TRIAD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::TRIAD)));
          }

          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AdMethodType::initializeClass, 1)))
              return NULL;
            return t_AdMethodType::wrap_Object(AdMethodType(((t_AdMethodType *) arg)->object.this$));
          }
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            AdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::valueOf(a0));
              return t_AdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_AdMethodType_values(PyTypeObject *type)
          {
            JArray< AdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_AdMethodType::wrap_jobject);
          }
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data)
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
#include "org/orekit/propagation/conversion/JacobianPropagatorConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *JacobianPropagatorConverter::class$ = NULL;
        jmethodID *JacobianPropagatorConverter::mids$ = NULL;
        bool JacobianPropagatorConverter::live$ = false;

        jclass JacobianPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/JacobianPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b3456292d77c8d6c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;DI)V");
            mids$[mid_getModel_e31bcbfb9203b3a6] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_88ca328d89915cf7] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianPropagatorConverter::JacobianPropagatorConverter(const ::org::orekit::propagation::conversion::NumericalPropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_b3456292d77c8d6c, a0.this$, a1, a2)) {}
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
        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_JacobianPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_JacobianPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianPropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianPropagatorConverter)[] = {
          { Py_tp_methods, t_JacobianPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_JacobianPropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(JacobianPropagatorConverter, t_JacobianPropagatorConverter, JacobianPropagatorConverter);

        void t_JacobianPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianPropagatorConverter), &PY_TYPE_DEF(JacobianPropagatorConverter), module, "JacobianPropagatorConverter", 0);
        }

        void t_JacobianPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "class_", make_descriptor(JacobianPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "wrapfn_", make_descriptor(t_JacobianPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_JacobianPropagatorConverter::wrap_Object(JacobianPropagatorConverter(((t_JacobianPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::NumericalPropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          JacobianPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::NumericalPropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = JacobianPropagatorConverter(a0, a1, a2));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ComplexEigenDecomposition.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ComplexEigenDecomposition::class$ = NULL;
      jmethodID *ComplexEigenDecomposition::mids$ = NULL;
      bool ComplexEigenDecomposition::live$ = false;
      jdouble ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK = (jdouble) 0;

      jclass ComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_a1e398644838b5f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_getD_1d6b27621d7bea96] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getDeterminant_557b8123390d8d0c] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalues_cdf70bdb2a575f18] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_6f1c886add96d5a0] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getV_1d6b27621d7bea96] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getVT_1d6b27621d7bea96] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_hasComplexEigenvalues_89b302893bdbe1f1] = env->getMethodID(cls, "hasComplexEigenvalues", "()Z");
          mids$[mid_findEigenValues_f3731847577f13e6] = env->getMethodID(cls, "findEigenValues", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_findEigenVectors_33e6ddbf6bb140a5] = env->getMethodID(cls, "findEigenVectors", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_matricesToEigenArrays_0640e6acf969ed28] = env->getMethodID(cls, "matricesToEigenArrays", "()V");
          mids$[mid_checkDefinition_f3731847577f13e6] = env->getMethodID(cls, "checkDefinition", "(Lorg/hipparchus/linear/RealMatrix;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EIGENVECTORS_EQUALITY = env->getStaticDoubleField(cls, "DEFAULT_EIGENVECTORS_EQUALITY");
          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          DEFAULT_EPSILON_AV_VD_CHECK = env->getStaticDoubleField(cls, "DEFAULT_EPSILON_AV_VD_CHECK");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1e398644838b5f0, a0.this$, a1, a2, a3)) {}

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getD() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getD_1d6b27621d7bea96]));
      }

      jdouble ComplexEigenDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_557b8123390d8d0c]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexEigenDecomposition::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_cdf70bdb2a575f18]));
      }

      ::org::hipparchus::linear::FieldVector ComplexEigenDecomposition::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_6f1c886add96d5a0], a0));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getV() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getV_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_1d6b27621d7bea96]));
      }

      jboolean ComplexEigenDecomposition::hasComplexEigenvalues() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasComplexEigenvalues_89b302893bdbe1f1]);
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
      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_ComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, d),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, determinant),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, eigenvalues),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, v),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_ComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getD, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvector, METH_O),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getVT, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, hasComplexEigenvalues, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_ComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_ComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_ComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexEigenDecomposition, t_ComplexEigenDecomposition, ComplexEigenDecomposition);

      void t_ComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexEigenDecomposition), &PY_TYPE_DEF(ComplexEigenDecomposition), module, "ComplexEigenDecomposition", 0);
      }

      void t_ComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "class_", make_descriptor(ComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "wrapfn_", make_descriptor(t_ComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(ComplexEigenDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EIGENVECTORS_EQUALITY", make_descriptor(ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON_AV_VD_CHECK", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK));
      }

      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_ComplexEigenDecomposition::wrap_Object(ComplexEigenDecomposition(((t_ComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0, a1, a2, a3));
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

      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasComplexEigenvalues());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractSelfFeedingLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *PythonAbstractSelfFeedingLoader::mids$ = NULL;
      bool PythonAbstractSelfFeedingLoader::live$ = false;

      jclass PythonAbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractSelfFeedingLoader::PythonAbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PythonAbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_PythonAbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(PythonAbstractSelfFeedingLoader, t_PythonAbstractSelfFeedingLoader, PythonAbstractSelfFeedingLoader);

      void t_PythonAbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractSelfFeedingLoader), &PY_TYPE_DEF(PythonAbstractSelfFeedingLoader), module, "PythonAbstractSelfFeedingLoader", 0);
      }

      void t_PythonAbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "class_", make_descriptor(PythonAbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_PythonAbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractSelfFeedingLoader::wrap_Object(PythonAbstractSelfFeedingLoader(((t_PythonAbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        PythonAbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonAbstractSelfFeedingLoader(a0, a1));
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
#include "org/hipparchus/optim/SimpleValueChecker.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleValueChecker::class$ = NULL;
      jmethodID *SimpleValueChecker::mids$ = NULL;
      bool SimpleValueChecker::live$ = false;

      jclass SimpleValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_c138b9ae16d7b7f9] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointValuePair;Lorg/hipparchus/optim/PointValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

      SimpleValueChecker::SimpleValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

      jboolean SimpleValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointValuePair & a1, const ::org::hipparchus::optim::PointValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_c138b9ae16d7b7f9], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args);
      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args);
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data);
      static PyGetSetDef t_SimpleValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleValueChecker)[] = {
        { Py_tp_methods, t_SimpleValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleValueChecker_init_ },
        { Py_tp_getset, t_SimpleValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleValueChecker, t_SimpleValueChecker, SimpleValueChecker);
      PyObject *t_SimpleValueChecker::wrap_Object(const SimpleValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleValueChecker *self = (t_SimpleValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleValueChecker), &PY_TYPE_DEF(SimpleValueChecker), module, "SimpleValueChecker", 0);
      }

      void t_SimpleValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "class_", make_descriptor(SimpleValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "wrapfn_", make_descriptor(t_SimpleValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleValueChecker::wrap_Object(SimpleValueChecker(((t_SimpleValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleValueChecker_of_(t_SimpleValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleValueChecker_init_(t_SimpleValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleValueChecker(a0, a1, a2));
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

      static PyObject *t_SimpleValueChecker_converged(t_SimpleValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointValuePair::initializeClass, ::org::hipparchus::optim::PointValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleValueChecker_get__parameters_(t_SimpleValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
