#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPFactory::class$ = NULL;
      jmethodID *CR3BPFactory::mids$ = NULL;
      bool CR3BPFactory::live$ = false;

      jclass CR3BPFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarthMoonCR3BP_2748a8cb525bb823] = env->getStaticMethodID(cls, "getEarthMoonCR3BP", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunEarthCR3BP_61a155c86078c96f] = env->getStaticMethodID(cls, "getSunEarthCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunJupiterCR3BP_61a155c86078c96f] = env->getStaticMethodID(cls, "getSunJupiterCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSystem_d00c1cb3e2e0b3f6] = env->getStaticMethodID(cls, "getSystem", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)Lorg/orekit/bodies/CR3BPSystem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getEarthMoonCR3BP()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonCR3BP_2748a8cb525bb823]));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunEarthCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunEarthCR3BP_61a155c86078c96f], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunJupiterCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunJupiterCR3BP_61a155c86078c96f], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSystem_d00c1cb3e2e0b3f6], a0.this$, a1.this$, a2));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type);
      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data);
      static PyGetSetDef t_CR3BPFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPFactory, earthMoonCR3BP),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPFactory__methods_[] = {
        DECLARE_METHOD(t_CR3BPFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getEarthMoonCR3BP, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunEarthCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunJupiterCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPFactory)[] = {
        { Py_tp_methods, t_CR3BPFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CR3BPFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPFactory, t_CR3BPFactory, CR3BPFactory);

      void t_CR3BPFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPFactory), &PY_TYPE_DEF(CR3BPFactory), module, "CR3BPFactory", 0);
      }

      void t_CR3BPFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "class_", make_descriptor(CR3BPFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "wrapfn_", make_descriptor(t_CR3BPFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPFactory::initializeClass, 1)))
          return NULL;
        return t_CR3BPFactory::wrap_Object(CR3BPFactory(((t_CR3BPFactory *) arg)->object.this$));
      }
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunEarthCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunEarthCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunJupiterCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunJupiterCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        jdouble a2;
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSystem(a0, a1, a2));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSystem", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterConsumer::mids$ = NULL;
            bool ParseToken$CenterConsumer::live$ = false;

            jclass ParseToken$CenterConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_564458ee450fa323] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterConsumer::accept(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_564458ee450fa323], a0.this$);
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
          namespace lexical {
            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterConsumer, t_ParseToken$CenterConsumer, ParseToken$CenterConsumer);

            void t_ParseToken$CenterConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterConsumer), &PY_TYPE_DEF(ParseToken$CenterConsumer), module, "ParseToken$CenterConsumer", 0);
            }

            void t_ParseToken$CenterConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "class_", make_descriptor(ParseToken$CenterConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterConsumer::wrap_Object(ParseToken$CenterConsumer(((t_ParseToken$CenterConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRangeRate::class$ = NULL;
        jmethodID *BistaticRangeRate::mids$ = NULL;
        bool BistaticRangeRate::live$ = false;
        ::java::lang::String *BistaticRangeRate::MEASUREMENT_TYPE = NULL;

        jclass BistaticRangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd3e59569738d7bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_e5278a7660eeb13f] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_e5278a7660eeb13f] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRangeRate::BistaticRangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_bd3e59569738d7bf, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_e5278a7660eeb13f]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_e5278a7660eeb13f]));
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
        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args);
        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data);
        static PyGetSetDef t_BistaticRangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRangeRate, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRangeRate__methods_[] = {
          DECLARE_METHOD(t_BistaticRangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRate)[] = {
          { Py_tp_methods, t_BistaticRangeRate__methods_ },
          { Py_tp_init, (void *) t_BistaticRangeRate_init_ },
          { Py_tp_getset, t_BistaticRangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRangeRate, t_BistaticRangeRate, BistaticRangeRate);
        PyObject *t_BistaticRangeRate::wrap_Object(const BistaticRangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRangeRate), &PY_TYPE_DEF(BistaticRangeRate), module, "BistaticRangeRate", 0);
        }

        void t_BistaticRangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "class_", make_descriptor(BistaticRangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "wrapfn_", make_descriptor(t_BistaticRangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRangeRate::initializeClass, 1)))
            return NULL;
          return t_BistaticRangeRate::wrap_Object(BistaticRangeRate(((t_BistaticRangeRate *) arg)->object.this$));
        }
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultiStartMultivariateOptimizer::class$ = NULL;
          jmethodID *MultiStartMultivariateOptimizer::mids$ = NULL;
          bool MultiStartMultivariateOptimizer::live$ = false;

          jclass MultiStartMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_51476170e7dcfb1f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
              mids$[mid_getOptima_326f59a2f136a3de] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_store_0fcf7e12e098dad2] = env->getMethodID(cls, "store", "(Lorg/hipparchus/optim/PointValuePair;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiStartMultivariateOptimizer::MultiStartMultivariateOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_51476170e7dcfb1f, a0.this$, a1, a2.this$)) {}

          JArray< ::org::hipparchus::optim::PointValuePair > MultiStartMultivariateOptimizer::getOptima() const
          {
            return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_326f59a2f136a3de]));
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
          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultiStartMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, optima),
            DECLARE_GET_FIELD(t_MultiStartMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiStartMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultiStartMultivariateOptimizer, getOptima, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiStartMultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultiStartMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) t_MultiStartMultivariateOptimizer_init_ },
            { Py_tp_getset, t_MultiStartMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiStartMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultiStartMultivariateOptimizer, t_MultiStartMultivariateOptimizer, MultiStartMultivariateOptimizer);
          PyObject *t_MultiStartMultivariateOptimizer::wrap_Object(const MultiStartMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultiStartMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultiStartMultivariateOptimizer *self = (t_MultiStartMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultiStartMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiStartMultivariateOptimizer), &PY_TYPE_DEF(MultiStartMultivariateOptimizer), module, "MultiStartMultivariateOptimizer", 0);
          }

          void t_MultiStartMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "class_", make_descriptor(MultiStartMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultiStartMultivariateOptimizer::wrap_Object(MultiStartMultivariateOptimizer(((t_MultiStartMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiStartMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_of_(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_MultiStartMultivariateOptimizer_init_(t_MultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
            MultiStartMultivariateOptimizer object((jobject) NULL);

            if (!parseArgs(args, "KIk", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2))
            {
              INT_CALL(object = MultiStartMultivariateOptimizer(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiStartMultivariateOptimizer_getOptima(t_MultiStartMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOptima());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            return callSuper(PY_TYPE(MultiStartMultivariateOptimizer), (PyObject *) self, "getOptima", args, 2);
          }
          static PyObject *t_MultiStartMultivariateOptimizer_get__parameters_(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultiStartMultivariateOptimizer_get__optima(t_MultiStartMultivariateOptimizer *self, void *data)
          {
            JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
            OBJ_CALL(value = self->object.getOptima());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomGenerator::class$ = NULL;
      jmethodID *RandomGenerator::mids$ = NULL;
      bool RandomGenerator::live$ = false;

      jclass RandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_459771b03534868e] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_a9fddc59b07ce512] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_b74f83833fdad017] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0e7cf35192c3effe] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_9db63109f74a74fc] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_44ed599e93e8a30c] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean RandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_9ab94ac1dc23b105]);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_459771b03534868e], a0.this$);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_a9fddc59b07ce512], a0.this$, a1, a2);
      }

      jdouble RandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
      }

      jfloat RandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_1fb1bf0772ae5db7]);
      }

      jdouble RandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_b74f83833fdad017]);
      }

      jint RandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      jint RandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0e7cf35192c3effe], a0);
      }

      jlong RandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_6c0ce7e438e5ded4]);
      }

      jlong RandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9db63109f74a74fc], a0);
      }

      void RandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }

      void RandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_44ed599e93e8a30c], a0);
      }

      void RandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3d7dd2314a0dd456], a0);
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
      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args);
      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_RandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomGenerator)[] = {
        { Py_tp_methods, t_RandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomGenerator, t_RandomGenerator, RandomGenerator);

      void t_RandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomGenerator), &PY_TYPE_DEF(RandomGenerator), module, "RandomGenerator", 0);
      }

      void t_RandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "class_", make_descriptor(RandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "wrapfn_", make_descriptor(t_RandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomGenerator::wrap_Object(RandomGenerator(((t_RandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1::mids$ = NULL;
        bool FieldUnivariateDerivative1::live$ = false;

        jclass FieldUnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bf4cfa4b031fbab0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_e337ae7145f7989c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_b6c5666e0fb56c6c] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acos_b6c5666e0fb56c6c] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_acosh_b6c5666e0fb56c6c] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_89d8cb5e9d796b74] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_19f8d790d8b3d47d] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_add_9259b9626b64a83d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asin_b6c5666e0fb56c6c] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_asinh_b6c5666e0fb56c6c] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan_b6c5666e0fb56c6c] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atan2_89d8cb5e9d796b74] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_atanh_b6c5666e0fb56c6c] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cbrt_b6c5666e0fb56c6c] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ceil_b6c5666e0fb56c6c] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_compose_06eacd0d0bc02448] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_89d8cb5e9d796b74] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_19f8d790d8b3d47d] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_copySign_9259b9626b64a83d] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cos_b6c5666e0fb56c6c] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_cosh_b6c5666e0fb56c6c] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_89d8cb5e9d796b74] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_19f8d790d8b3d47d] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_divide_9259b9626b64a83d] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_b6c5666e0fb56c6c] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_expm1_b6c5666e0fb56c6c] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_floor_b6c5666e0fb56c6c] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getDerivative_21e6b3c521b9c768] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_58076eba231832db] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_81520b552cb3fa26] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_b6c5666e0fb56c6c] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_81520b552cb3fa26] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_89d8cb5e9d796b74] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_16acb0634f89f67d] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_70805ce19bb2c24d] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_ea95e293323ea24c] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_1806f7e30b016317] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_9b9ff316e006ffc5] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_cd8faa2f4c2a8552] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_ad99a7ed2029b89e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_93ac59aed79a2f3b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_25cb46505af89d8a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_linearCombination_7313c5ef7af496de] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log_b6c5666e0fb56c6c] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log10_b6c5666e0fb56c6c] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_log1p_b6c5666e0fb56c6c] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_89d8cb5e9d796b74] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_19f8d790d8b3d47d] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_9ded581dd411a634] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_multiply_9259b9626b64a83d] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_negate_b6c5666e0fb56c6c] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_newInstance_19f8d790d8b3d47d] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_89d8cb5e9d796b74] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_19f8d790d8b3d47d] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_9ded581dd411a634] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_pow_9bfde024bcef87c4] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_reciprocal_b6c5666e0fb56c6c] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_89d8cb5e9d796b74] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_19f8d790d8b3d47d] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_remainder_9259b9626b64a83d] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rint_b6c5666e0fb56c6c] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_rootN_9ded581dd411a634] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_scalb_9ded581dd411a634] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sign_b6c5666e0fb56c6c] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sin_b6c5666e0fb56c6c] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_b6c5666e0fb56c6c] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_b6c5666e0fb56c6c] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_89d8cb5e9d796b74] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_19f8d790d8b3d47d] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_subtract_9259b9626b64a83d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tan_b6c5666e0fb56c6c] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_tanh_b6c5666e0fb56c6c] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_taylor_1d3e368d09a6f8a6] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_6e00dc5eb352fe51] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_b6c5666e0fb56c6c] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_4b6e77c66fd622c3] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_b6c5666e0fb56c6c] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_ulp_b6c5666e0fb56c6c] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_bf4cfa4b031fbab0, a0.this$)) {}

        FieldUnivariateDerivative1::FieldUnivariateDerivative1(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_e337ae7145f7989c, a0.this$, a1.this$)) {}

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::abs() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::acosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_9259b9626b64a83d], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::asinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atan2(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::atanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cbrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ceil() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_06eacd0d0bc02448], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_9259b9626b64a83d], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cos() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::cosh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_9259b9626b64a83d], a0.this$));
        }

        jboolean FieldUnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::exp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::expm1() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::floor() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_b6c5666e0fb56c6c]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_21e6b3c521b9c768], a0));
        }

        jint FieldUnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field FieldUnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_58076eba231832db]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_81520b552cb3fa26]));
        }

        jint FieldUnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::getPi() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_b6c5666e0fb56c6c]));
        }

        jdouble FieldUnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_81520b552cb3fa26]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative1::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_04d1f63e17d5c5d4]));
        }

        jint FieldUnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::hypot(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_16acb0634f89f67d], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_70805ce19bb2c24d], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const JArray< FieldUnivariateDerivative1 > & a0, const JArray< FieldUnivariateDerivative1 > & a1) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_ea95e293323ea24c], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_1806f7e30b016317], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_9b9ff316e006ffc5], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_cd8faa2f4c2a8552], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_ad99a7ed2029b89e], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative1 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative1 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative1 & a5) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_93ac59aed79a2f3b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(const FieldUnivariateDerivative1 & a0, const FieldUnivariateDerivative1 & a1, const FieldUnivariateDerivative1 & a2, const FieldUnivariateDerivative1 & a3, const FieldUnivariateDerivative1 & a4, const FieldUnivariateDerivative1 & a5, const FieldUnivariateDerivative1 & a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_25cb46505af89d8a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::linearCombination(jdouble a0, const FieldUnivariateDerivative1 & a1, jdouble a2, const FieldUnivariateDerivative1 & a3, jdouble a4, const FieldUnivariateDerivative1 & a5, jdouble a6, const FieldUnivariateDerivative1 & a7) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_7313c5ef7af496de], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log10() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::log1p() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_9ded581dd411a634], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_9259b9626b64a83d], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::negate() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_9ded581dd411a634], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::pow(jdouble a0, const FieldUnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_9bfde024bcef87c4], a0, a1.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::reciprocal() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_9259b9626b64a83d], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rint() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::rootN(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_9ded581dd411a634], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::scalb(jint a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_9ded581dd411a634], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sign() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sin() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_b6c5666e0fb56c6c]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sinh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_b6c5666e0fb56c6c]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::sqrt() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const FieldUnivariateDerivative1 & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_89d8cb5e9d796b74], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_19f8d790d8b3d47d], a0));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_9259b9626b64a83d], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tan() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::tanh() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_b6c5666e0fb56c6c]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_1d3e368d09a6f8a6], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative1::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_6e00dc5eb352fe51], a0.this$));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toDegrees() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_b6c5666e0fb56c6c]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_4b6e77c66fd622c3]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::toRadians() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_b6c5666e0fb56c6c]));
        }

        FieldUnivariateDerivative1 FieldUnivariateDerivative1::ulp() const
        {
          return FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_b6c5666e0fb56c6c]));
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
        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self);
        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative1_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1, t_FieldUnivariateDerivative1, FieldUnivariateDerivative1);
        PyObject *t_FieldUnivariateDerivative1::wrap_Object(const FieldUnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1 *self = (t_FieldUnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1), &PY_TYPE_DEF(FieldUnivariateDerivative1), module, "FieldUnivariateDerivative1", 0);
        }

        void t_FieldUnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "class_", make_descriptor(FieldUnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1::wrap_Object(FieldUnivariateDerivative1(((t_FieldUnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1_of_(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative1_init_(t_FieldUnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative1(a0, a1));
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

        static PyObject *t_FieldUnivariateDerivative1_abs(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_acosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_add(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_asinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atan2(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_atanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cbrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ceil(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_compose(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_copySign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_cosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_divide(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_equals(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_exp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_expm1(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_floor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getDerivative(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getExponent(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getField(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getFirstDerivative(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1_getOrder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getPi(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getReal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValue(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_getValueField(t_FieldUnivariateDerivative1 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1_hashCode(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_hypot(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_linearCombination(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &p2, t_FieldUnivariateDerivative1::parameters_, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &p4, t_FieldUnivariateDerivative1::parameters_, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &p6, t_FieldUnivariateDerivative1::parameters_, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative1::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative1::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log10(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_log1p(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_multiply(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_negate(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_newInstance(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1::pow(a0, a1));
            return t_FieldUnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_reciprocal(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_remainder(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rint(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_rootN(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_scalb(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sign(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sin(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinCos(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sinhCosh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_sqrt(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_subtract(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative1::initializeClass, &a0, &p0, t_FieldUnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tan(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_tanh(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_taylor(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1_toDegrees(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toDerivativeStructure(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_toRadians(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1_ulp(t_FieldUnivariateDerivative1 *self, PyObject *args)
        {
          FieldUnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1_get__parameters_(t_FieldUnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1_get__exponent(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__field(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__firstDerivative(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__order(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__pi(t_FieldUnivariateDerivative1 *self, void *data)
        {
          FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__real(t_FieldUnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__value(t_FieldUnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1_get__valueField(t_FieldUnivariateDerivative1 *self, void *data)
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
#include "java/lang/Class.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/Package.h"
#include "java/lang/SecurityException.h"
#include "java/lang/Module.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Class::class$ = NULL;
    jmethodID *Class::mids$ = NULL;
    bool Class::live$ = false;

    jclass Class::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Class");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asSubclass_8796c3559c3e2023] = env->getMethodID(cls, "asSubclass", "(Ljava/lang/Class;)Ljava/lang/Class;");
        mids$[mid_cast_5804c890f94a02b6] = env->getMethodID(cls, "cast", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_desiredAssertionStatus_9ab94ac1dc23b105] = env->getMethodID(cls, "desiredAssertionStatus", "()Z");
        mids$[mid_forName_19d7740902dbd288] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_914052f7ac73009e] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_17a93706411190d2] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
        mids$[mid_getCanonicalName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCanonicalName", "()Ljava/lang/String;");
        mids$[mid_getClassLoader_fb951be34fc77929] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getClasses_5aec5e13d1a5cd63] = env->getMethodID(cls, "getClasses", "()[Ljava/lang/Class;");
        mids$[mid_getComponentType_1aeb0737a960d371] = env->getMethodID(cls, "getComponentType", "()Ljava/lang/Class;");
        mids$[mid_getDeclaredClasses_5aec5e13d1a5cd63] = env->getMethodID(cls, "getDeclaredClasses", "()[Ljava/lang/Class;");
        mids$[mid_getDeclaringClass_1aeb0737a960d371] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_getEnclosingClass_1aeb0737a960d371] = env->getMethodID(cls, "getEnclosingClass", "()Ljava/lang/Class;");
        mids$[mid_getEnumConstants_24e2edd6319f4c5a] = env->getMethodID(cls, "getEnumConstants", "()[Ljava/lang/Object;");
        mids$[mid_getInterfaces_5aec5e13d1a5cd63] = env->getMethodID(cls, "getInterfaces", "()[Ljava/lang/Class;");
        mids$[mid_getModifiers_55546ef6a647f39b] = env->getMethodID(cls, "getModifiers", "()I");
        mids$[mid_getModule_a1af2f56cbb446b6] = env->getMethodID(cls, "getModule", "()Ljava/lang/Module;");
        mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getNestHost_1aeb0737a960d371] = env->getMethodID(cls, "getNestHost", "()Ljava/lang/Class;");
        mids$[mid_getNestMembers_5aec5e13d1a5cd63] = env->getMethodID(cls, "getNestMembers", "()[Ljava/lang/Class;");
        mids$[mid_getPackage_3638481b62f070b2] = env->getMethodID(cls, "getPackage", "()Ljava/lang/Package;");
        mids$[mid_getPackageName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPackageName", "()Ljava/lang/String;");
        mids$[mid_getResource_4872b6a8d8971899] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_6831515bfd9973e1] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSigners_24e2edd6319f4c5a] = env->getMethodID(cls, "getSigners", "()[Ljava/lang/Object;");
        mids$[mid_getSimpleName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSimpleName", "()Ljava/lang/String;");
        mids$[mid_getSuperclass_1aeb0737a960d371] = env->getMethodID(cls, "getSuperclass", "()Ljava/lang/Class;");
        mids$[mid_getTypeName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTypeName", "()Ljava/lang/String;");
        mids$[mid_isAnnotation_9ab94ac1dc23b105] = env->getMethodID(cls, "isAnnotation", "()Z");
        mids$[mid_isAnonymousClass_9ab94ac1dc23b105] = env->getMethodID(cls, "isAnonymousClass", "()Z");
        mids$[mid_isArray_9ab94ac1dc23b105] = env->getMethodID(cls, "isArray", "()Z");
        mids$[mid_isAssignableFrom_a24f4963f111aa48] = env->getMethodID(cls, "isAssignableFrom", "(Ljava/lang/Class;)Z");
        mids$[mid_isEnum_9ab94ac1dc23b105] = env->getMethodID(cls, "isEnum", "()Z");
        mids$[mid_isInstance_460c5e2d9d51c6cc] = env->getMethodID(cls, "isInstance", "(Ljava/lang/Object;)Z");
        mids$[mid_isInterface_9ab94ac1dc23b105] = env->getMethodID(cls, "isInterface", "()Z");
        mids$[mid_isLocalClass_9ab94ac1dc23b105] = env->getMethodID(cls, "isLocalClass", "()Z");
        mids$[mid_isMemberClass_9ab94ac1dc23b105] = env->getMethodID(cls, "isMemberClass", "()Z");
        mids$[mid_isNestmateOf_a24f4963f111aa48] = env->getMethodID(cls, "isNestmateOf", "(Ljava/lang/Class;)Z");
        mids$[mid_isPrimitive_9ab94ac1dc23b105] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isSynthetic_9ab94ac1dc23b105] = env->getMethodID(cls, "isSynthetic", "()Z");
        mids$[mid_newInstance_541690f9ee81d3ad] = env->getMethodID(cls, "newInstance", "()Ljava/lang/Object;");
        mids$[mid_toGenericString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toGenericString", "()Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Class Class::asSubclass(const Class & a0) const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_asSubclass_8796c3559c3e2023], a0.this$));
    }

    ::java::lang::Object Class::cast(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cast_5804c890f94a02b6], a0.this$));
    }

    jboolean Class::desiredAssertionStatus() const
    {
      return env->callBooleanMethod(this$, mids$[mid_desiredAssertionStatus_9ab94ac1dc23b105]);
    }

    Class Class::forName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_19d7740902dbd288], a0.this$));
    }

    Class Class::forName(const ::java::lang::Module & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_914052f7ac73009e], a0.this$, a1.this$));
    }

    Class Class::forName(const ::java::lang::String & a0, jboolean a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_17a93706411190d2], a0.this$, a1, a2.this$));
    }

    ::java::lang::String Class::getCanonicalName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::ClassLoader Class::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_fb951be34fc77929]));
    }

    JArray< Class > Class::getClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getClasses_5aec5e13d1a5cd63]));
    }

    Class Class::getComponentType() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getComponentType_1aeb0737a960d371]));
    }

    JArray< Class > Class::getDeclaredClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getDeclaredClasses_5aec5e13d1a5cd63]));
    }

    Class Class::getDeclaringClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_1aeb0737a960d371]));
    }

    Class Class::getEnclosingClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getEnclosingClass_1aeb0737a960d371]));
    }

    JArray< ::java::lang::Object > Class::getEnumConstants() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getEnumConstants_24e2edd6319f4c5a]));
    }

    JArray< Class > Class::getInterfaces() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getInterfaces_5aec5e13d1a5cd63]));
    }

    jint Class::getModifiers() const
    {
      return env->callIntMethod(this$, mids$[mid_getModifiers_55546ef6a647f39b]);
    }

    ::java::lang::Module Class::getModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getModule_a1af2f56cbb446b6]));
    }

    ::java::lang::String Class::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
    }

    Class Class::getNestHost() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getNestHost_1aeb0737a960d371]));
    }

    JArray< Class > Class::getNestMembers() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getNestMembers_5aec5e13d1a5cd63]));
    }

    ::java::lang::Package Class::getPackage() const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getPackage_3638481b62f070b2]));
    }

    ::java::lang::String Class::getPackageName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPackageName_1c1fa1e935d6cdcf]));
    }

    ::java::net::URL Class::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_4872b6a8d8971899], a0.this$));
    }

    ::java::io::InputStream Class::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_6831515bfd9973e1], a0.this$));
    }

    JArray< ::java::lang::Object > Class::getSigners() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getSigners_24e2edd6319f4c5a]));
    }

    ::java::lang::String Class::getSimpleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSimpleName_1c1fa1e935d6cdcf]));
    }

    Class Class::getSuperclass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getSuperclass_1aeb0737a960d371]));
    }

    ::java::lang::String Class::getTypeName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeName_1c1fa1e935d6cdcf]));
    }

    jboolean Class::isAnnotation() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnnotation_9ab94ac1dc23b105]);
    }

    jboolean Class::isAnonymousClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnonymousClass_9ab94ac1dc23b105]);
    }

    jboolean Class::isArray() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isArray_9ab94ac1dc23b105]);
    }

    jboolean Class::isAssignableFrom(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAssignableFrom_a24f4963f111aa48], a0.this$);
    }

    jboolean Class::isEnum() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEnum_9ab94ac1dc23b105]);
    }

    jboolean Class::isInstance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInstance_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Class::isInterface() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterface_9ab94ac1dc23b105]);
    }

    jboolean Class::isLocalClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLocalClass_9ab94ac1dc23b105]);
    }

    jboolean Class::isMemberClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isMemberClass_9ab94ac1dc23b105]);
    }

    jboolean Class::isNestmateOf(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNestmateOf_a24f4963f111aa48], a0.this$);
    }

    jboolean Class::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_9ab94ac1dc23b105]);
    }

    jboolean Class::isSynthetic() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSynthetic_9ab94ac1dc23b105]);
    }

    ::java::lang::Object Class::newInstance() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_newInstance_541690f9ee81d3ad]));
    }

    ::java::lang::String Class::toGenericString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGenericString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Class::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_of_(t_Class *self, PyObject *args);
    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg);
    static PyObject *t_Class_cast(t_Class *self, PyObject *arg);
    static PyObject *t_Class_desiredAssertionStatus(t_Class *self);
    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args);
    static PyObject *t_Class_getCanonicalName(t_Class *self);
    static PyObject *t_Class_getClassLoader(t_Class *self);
    static PyObject *t_Class_getClasses(t_Class *self);
    static PyObject *t_Class_getComponentType(t_Class *self);
    static PyObject *t_Class_getDeclaredClasses(t_Class *self);
    static PyObject *t_Class_getDeclaringClass(t_Class *self);
    static PyObject *t_Class_getEnclosingClass(t_Class *self);
    static PyObject *t_Class_getEnumConstants(t_Class *self);
    static PyObject *t_Class_getInterfaces(t_Class *self);
    static PyObject *t_Class_getModifiers(t_Class *self);
    static PyObject *t_Class_getModule(t_Class *self);
    static PyObject *t_Class_getName(t_Class *self);
    static PyObject *t_Class_getNestHost(t_Class *self);
    static PyObject *t_Class_getNestMembers(t_Class *self);
    static PyObject *t_Class_getPackage(t_Class *self);
    static PyObject *t_Class_getPackageName(t_Class *self);
    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getSigners(t_Class *self);
    static PyObject *t_Class_getSimpleName(t_Class *self);
    static PyObject *t_Class_getSuperclass(t_Class *self);
    static PyObject *t_Class_getTypeName(t_Class *self);
    static PyObject *t_Class_isAnnotation(t_Class *self);
    static PyObject *t_Class_isAnonymousClass(t_Class *self);
    static PyObject *t_Class_isArray(t_Class *self);
    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isEnum(t_Class *self);
    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isInterface(t_Class *self);
    static PyObject *t_Class_isLocalClass(t_Class *self);
    static PyObject *t_Class_isMemberClass(t_Class *self);
    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isPrimitive(t_Class *self);
    static PyObject *t_Class_isSynthetic(t_Class *self);
    static PyObject *t_Class_newInstance(t_Class *self);
    static PyObject *t_Class_toGenericString(t_Class *self);
    static PyObject *t_Class_toString(t_Class *self, PyObject *args);
    static PyObject *t_Class_get__annotation(t_Class *self, void *data);
    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data);
    static PyObject *t_Class_get__array(t_Class *self, void *data);
    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data);
    static PyObject *t_Class_get__classLoader(t_Class *self, void *data);
    static PyObject *t_Class_get__classes(t_Class *self, void *data);
    static PyObject *t_Class_get__componentType(t_Class *self, void *data);
    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data);
    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enum(t_Class *self, void *data);
    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data);
    static PyObject *t_Class_get__interface(t_Class *self, void *data);
    static PyObject *t_Class_get__interfaces(t_Class *self, void *data);
    static PyObject *t_Class_get__localClass(t_Class *self, void *data);
    static PyObject *t_Class_get__memberClass(t_Class *self, void *data);
    static PyObject *t_Class_get__modifiers(t_Class *self, void *data);
    static PyObject *t_Class_get__module(t_Class *self, void *data);
    static PyObject *t_Class_get__name(t_Class *self, void *data);
    static PyObject *t_Class_get__nestHost(t_Class *self, void *data);
    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data);
    static PyObject *t_Class_get__package(t_Class *self, void *data);
    static PyObject *t_Class_get__packageName(t_Class *self, void *data);
    static PyObject *t_Class_get__primitive(t_Class *self, void *data);
    static PyObject *t_Class_get__signers(t_Class *self, void *data);
    static PyObject *t_Class_get__simpleName(t_Class *self, void *data);
    static PyObject *t_Class_get__superclass(t_Class *self, void *data);
    static PyObject *t_Class_get__synthetic(t_Class *self, void *data);
    static PyObject *t_Class_get__typeName(t_Class *self, void *data);
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data);
    static PyGetSetDef t_Class__fields_[] = {
      DECLARE_GET_FIELD(t_Class, annotation),
      DECLARE_GET_FIELD(t_Class, anonymousClass),
      DECLARE_GET_FIELD(t_Class, array),
      DECLARE_GET_FIELD(t_Class, canonicalName),
      DECLARE_GET_FIELD(t_Class, classLoader),
      DECLARE_GET_FIELD(t_Class, classes),
      DECLARE_GET_FIELD(t_Class, componentType),
      DECLARE_GET_FIELD(t_Class, declaredClasses),
      DECLARE_GET_FIELD(t_Class, declaringClass),
      DECLARE_GET_FIELD(t_Class, enclosingClass),
      DECLARE_GET_FIELD(t_Class, enum),
      DECLARE_GET_FIELD(t_Class, enumConstants),
      DECLARE_GET_FIELD(t_Class, interface),
      DECLARE_GET_FIELD(t_Class, interfaces),
      DECLARE_GET_FIELD(t_Class, localClass),
      DECLARE_GET_FIELD(t_Class, memberClass),
      DECLARE_GET_FIELD(t_Class, modifiers),
      DECLARE_GET_FIELD(t_Class, module),
      DECLARE_GET_FIELD(t_Class, name),
      DECLARE_GET_FIELD(t_Class, nestHost),
      DECLARE_GET_FIELD(t_Class, nestMembers),
      DECLARE_GET_FIELD(t_Class, package),
      DECLARE_GET_FIELD(t_Class, packageName),
      DECLARE_GET_FIELD(t_Class, primitive),
      DECLARE_GET_FIELD(t_Class, signers),
      DECLARE_GET_FIELD(t_Class, simpleName),
      DECLARE_GET_FIELD(t_Class, superclass),
      DECLARE_GET_FIELD(t_Class, synthetic),
      DECLARE_GET_FIELD(t_Class, typeName),
      DECLARE_GET_FIELD(t_Class, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Class__methods_[] = {
      DECLARE_METHOD(t_Class, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, of_, METH_VARARGS),
      DECLARE_METHOD(t_Class, asSubclass, METH_O),
      DECLARE_METHOD(t_Class, cast, METH_O),
      DECLARE_METHOD(t_Class, desiredAssertionStatus, METH_NOARGS),
      DECLARE_METHOD(t_Class, forName, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Class, getCanonicalName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getComponentType, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaredClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnclosingClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnumConstants, METH_NOARGS),
      DECLARE_METHOD(t_Class, getInterfaces, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModifiers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModule, METH_NOARGS),
      DECLARE_METHOD(t_Class, getName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestHost, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestMembers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackage, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackageName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getResource, METH_O),
      DECLARE_METHOD(t_Class, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_Class, getSigners, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSimpleName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSuperclass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getTypeName, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnnotation, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnonymousClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isArray, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAssignableFrom, METH_O),
      DECLARE_METHOD(t_Class, isEnum, METH_NOARGS),
      DECLARE_METHOD(t_Class, isInstance, METH_O),
      DECLARE_METHOD(t_Class, isInterface, METH_NOARGS),
      DECLARE_METHOD(t_Class, isLocalClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isMemberClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isNestmateOf, METH_O),
      DECLARE_METHOD(t_Class, isPrimitive, METH_NOARGS),
      DECLARE_METHOD(t_Class, isSynthetic, METH_NOARGS),
      DECLARE_METHOD(t_Class, newInstance, METH_NOARGS),
      DECLARE_METHOD(t_Class, toGenericString, METH_NOARGS),
      DECLARE_METHOD(t_Class, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Class)[] = {
      { Py_tp_methods, t_Class__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Class__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Class)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Class, t_Class, Class);
    PyObject *t_Class::wrap_Object(const Class& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Class::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Class::install(PyObject *module)
    {
      installType(&PY_TYPE(Class), &PY_TYPE_DEF(Class), module, "Class", 0);
    }

    void t_Class::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "class_", make_descriptor(Class::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "wrapfn_", make_descriptor(t_Class::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Class::initializeClass, 1)))
        return NULL;
      return t_Class::wrap_Object(Class(((t_Class *) arg)->object.this$));
    }
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Class::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Class_of_(t_Class *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      Class result((jobject) NULL);

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.asSubclass(a0));
        return t_Class::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "asSubclass", arg);
      return NULL;
    }

    static PyObject *t_Class_cast(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.cast(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "cast", arg);
      return NULL;
    }

    static PyObject *t_Class_desiredAssertionStatus(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.desiredAssertionStatus());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Module a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          ::java::lang::ClassLoader a2((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "sZk", ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1, a2));
            return t_Class::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "forName", args);
      return NULL;
    }

    static PyObject *t_Class_getCanonicalName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalName());
      return j2p(result);
    }

    static PyObject *t_Class_getClassLoader(t_Class *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Class_getClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getComponentType(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getComponentType());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getDeclaredClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaredClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getDeclaringClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnclosingClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnclosingClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnumConstants(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnumConstants());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getInterfaces(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getInterfaces());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getModifiers(t_Class *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getModifiers());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Class_getModule(t_Class *self)
    {
      ::java::lang::Module result((jobject) NULL);
      OBJ_CALL(result = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(result);
    }

    static PyObject *t_Class_getName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Class_getNestHost(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestHost());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getNestMembers(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestMembers());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getPackage(t_Class *self)
    {
      ::java::lang::Package result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(result);
    }

    static PyObject *t_Class_getPackageName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackageName());
      return j2p(result);
    }

    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResource", arg);
      return NULL;
    }

    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_Class_getSigners(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSigners());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getSimpleName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSimpleName());
      return j2p(result);
    }

    static PyObject *t_Class_getSuperclass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuperclass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getTypeName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getTypeName());
      return j2p(result);
    }

    static PyObject *t_Class_isAnnotation(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnnotation());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAnonymousClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnonymousClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isArray(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isArray());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isAssignableFrom(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isAssignableFrom", arg);
      return NULL;
    }

    static PyObject *t_Class_isEnum(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEnum());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.isInstance(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isInstance", arg);
      return NULL;
    }

    static PyObject *t_Class_isInterface(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInterface());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isLocalClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isLocalClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isMemberClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isMemberClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isNestmateOf(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isNestmateOf", arg);
      return NULL;
    }

    static PyObject *t_Class_isPrimitive(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPrimitive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isSynthetic(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isSynthetic());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_newInstance(t_Class *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.newInstance());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Class_toGenericString(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGenericString());
      return j2p(result);
    }

    static PyObject *t_Class_toString(t_Class *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Class), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Class_get__annotation(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnnotation());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnonymousClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__array(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isArray());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalName());
      return j2p(value);
    }

    static PyObject *t_Class_get__classLoader(t_Class *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_Class_get__classes(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__componentType(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getComponentType());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaredClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnclosingClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enum(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEnum());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnumConstants());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__interface(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInterface());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__interfaces(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getInterfaces());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__localClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isLocalClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__memberClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isMemberClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__modifiers(t_Class *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getModifiers());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Class_get__module(t_Class *self, void *data)
    {
      ::java::lang::Module value((jobject) NULL);
      OBJ_CALL(value = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(value);
    }

    static PyObject *t_Class_get__name(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Class_get__nestHost(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestHost());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestMembers());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__package(t_Class *self, void *data)
    {
      ::java::lang::Package value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(value);
    }

    static PyObject *t_Class_get__packageName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackageName());
      return j2p(value);
    }

    static PyObject *t_Class_get__primitive(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPrimitive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__signers(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSigners());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__simpleName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSimpleName());
      return j2p(value);
    }

    static PyObject *t_Class_get__superclass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuperclass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__synthetic(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isSynthetic());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__typeName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getTypeName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap::mids$ = NULL;
      bool OpenIntToDoubleHashMap::live$ = false;

      jclass OpenIntToDoubleHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_containsKey_96f51a3f36d3a2a7] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_2afcbc21f4e57ab2] = env->getMethodID(cls, "get", "(I)D");
          mids$[mid_iterator_814de4da7c72b3ee] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToDoubleHashMap$Iterator;");
          mids$[mid_put_98e10c261c066ee7] = env->getMethodID(cls, "put", "(ID)D");
          mids$[mid_remove_2afcbc21f4e57ab2] = env->getMethodID(cls, "remove", "(I)D");
          mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      jboolean OpenIntToDoubleHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_96f51a3f36d3a2a7], a0);
      }

      jdouble OpenIntToDoubleHashMap::get$(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_get_2afcbc21f4e57ab2], a0);
      }

      ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator OpenIntToDoubleHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_814de4da7c72b3ee]));
      }

      jdouble OpenIntToDoubleHashMap::put(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_put_98e10c261c066ee7], a0, a1);
      }

      jdouble OpenIntToDoubleHashMap::remove(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_remove_2afcbc21f4e57ab2], a0);
      }

      jint OpenIntToDoubleHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
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
      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self);
      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self);

      static PyMethodDef t_OpenIntToDoubleHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToDoubleHashMap_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap, t_OpenIntToDoubleHashMap, OpenIntToDoubleHashMap);

      void t_OpenIntToDoubleHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap), &PY_TYPE_DEF(OpenIntToDoubleHashMap), module, "OpenIntToDoubleHashMap", 0);
      }

      void t_OpenIntToDoubleHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "class_", make_descriptor(OpenIntToDoubleHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap::wrap_Object(OpenIntToDoubleHashMap(((t_OpenIntToDoubleHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenIntToDoubleHashMap object((jobject) NULL);

            INT_CALL(object = OpenIntToDoubleHashMap());
            self->object = object;
            break;
          }
         case 1:
          {
            jdouble a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0, a1));
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

      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToDoubleHashMap$Iterator::wrap_Object(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/IsotropicDrag.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *IsotropicDrag::class$ = NULL;
        jmethodID *IsotropicDrag::mids$ = NULL;
        bool IsotropicDrag::live$ = false;

        jclass IsotropicDrag::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/IsotropicDrag");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_dragAcceleration_7a2b875d7cdeb947] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_c95e6c4bf4979a1a] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        IsotropicDrag::IsotropicDrag(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_7a2b875d7cdeb947], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicDrag::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_c95e6c4bf4979a1a], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List IsotropicDrag::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_e62d3bb06d56d7e3]));
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
        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args);
        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self);
        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data);
        static PyGetSetDef t_IsotropicDrag__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicDrag, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicDrag__methods_[] = {
          DECLARE_METHOD(t_IsotropicDrag, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicDrag, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_IsotropicDrag, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicDrag)[] = {
          { Py_tp_methods, t_IsotropicDrag__methods_ },
          { Py_tp_init, (void *) t_IsotropicDrag_init_ },
          { Py_tp_getset, t_IsotropicDrag__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicDrag)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicDrag, t_IsotropicDrag, IsotropicDrag);

        void t_IsotropicDrag::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicDrag), &PY_TYPE_DEF(IsotropicDrag), module, "IsotropicDrag", 0);
        }

        void t_IsotropicDrag::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "class_", make_descriptor(IsotropicDrag::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "wrapfn_", make_descriptor(t_IsotropicDrag::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicDrag), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicDrag_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicDrag::initializeClass, 1)))
            return NULL;
          return t_IsotropicDrag::wrap_Object(IsotropicDrag(((t_IsotropicDrag *) arg)->object.this$));
        }
        static PyObject *t_IsotropicDrag_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicDrag::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicDrag_init_(t_IsotropicDrag *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicDrag(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicDrag object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicDrag(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicDrag_dragAcceleration(t_IsotropicDrag *self, PyObject *args)
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

        static PyObject *t_IsotropicDrag_getDragParametersDrivers(t_IsotropicDrag *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicDrag_get__dragParametersDrivers(t_IsotropicDrag *self, void *data)
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
#include "org/orekit/files/ccsds/section/HeaderProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderProcessingState::class$ = NULL;
          jmethodID *HeaderProcessingState::mids$ = NULL;
          bool HeaderProcessingState::live$ = false;

          jclass HeaderProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_118972c51270c52e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_5949d4df22f33350] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HeaderProcessingState::HeaderProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_118972c51270c52e, a0.this$)) {}

          jboolean HeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_5949d4df22f33350], a0.this$);
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
        namespace section {
          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg);

          static PyMethodDef t_HeaderProcessingState__methods_[] = {
            DECLARE_METHOD(t_HeaderProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderProcessingState)[] = {
            { Py_tp_methods, t_HeaderProcessingState__methods_ },
            { Py_tp_init, (void *) t_HeaderProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HeaderProcessingState, t_HeaderProcessingState, HeaderProcessingState);

          void t_HeaderProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderProcessingState), &PY_TYPE_DEF(HeaderProcessingState), module, "HeaderProcessingState", 0);
          }

          void t_HeaderProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "class_", make_descriptor(HeaderProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "wrapfn_", make_descriptor(t_HeaderProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderProcessingState::initializeClass, 1)))
              return NULL;
            return t_HeaderProcessingState::wrap_Object(HeaderProcessingState(((t_HeaderProcessingState *) arg)->object.this$));
          }
          static PyObject *t_HeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HeaderProcessingState_init_(t_HeaderProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            HeaderProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = HeaderProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HeaderProcessingState_processToken(t_HeaderProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeWriter::class$ = NULL;
              jmethodID *AttitudeWriter::mids$ = NULL;
              bool AttitudeWriter::live$ = false;

              jclass AttitudeWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_427bbc8e0954e463] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_50a488c23b217f54] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeWriter::AttitudeWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a0, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_427bbc8e0954e463, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void AttitudeWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_50a488c23b217f54], a0.this$, a1.this$);
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
            namespace aem {
              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args);

              static PyMethodDef t_AttitudeWriter__methods_[] = {
                DECLARE_METHOD(t_AttitudeWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeWriter)[] = {
                { Py_tp_methods, t_AttitudeWriter__methods_ },
                { Py_tp_init, (void *) t_AttitudeWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeWriter, t_AttitudeWriter, AttitudeWriter);

              void t_AttitudeWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeWriter), &PY_TYPE_DEF(AttitudeWriter), module, "AttitudeWriter", 0);
              }

              void t_AttitudeWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "class_", make_descriptor(AttitudeWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "wrapfn_", make_descriptor(t_AttitudeWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeWriter::initializeClass, 1)))
                  return NULL;
                return t_AttitudeWriter::wrap_Object(AttitudeWriter(((t_AttitudeWriter *) arg)->object.this$));
              }
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                AttitudeWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = AttitudeWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
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
#include "org/hipparchus/random/Well44497b.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497b::class$ = NULL;
      jmethodID *Well44497b::mids$ = NULL;
      bool Well44497b::live$ = false;

      jclass Well44497b::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497b");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497b::Well44497b() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Well44497b::Well44497b(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      Well44497b::Well44497b(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Well44497b::Well44497b(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint Well44497b::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
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
      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args);

      static PyMethodDef t_Well44497b__methods_[] = {
        DECLARE_METHOD(t_Well44497b, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497b)[] = {
        { Py_tp_methods, t_Well44497b__methods_ },
        { Py_tp_init, (void *) t_Well44497b_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497b)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497b, t_Well44497b, Well44497b);

      void t_Well44497b::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497b), &PY_TYPE_DEF(Well44497b), module, "Well44497b", 0);
      }

      void t_Well44497b::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "class_", make_descriptor(Well44497b::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "wrapfn_", make_descriptor(t_Well44497b::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497b::initializeClass, 1)))
          return NULL;
        return t_Well44497b::wrap_Object(Well44497b(((t_Well44497b *) arg)->object.this$));
      }
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497b::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497b object((jobject) NULL);

            INT_CALL(object = Well44497b());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497b(a0));
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

      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497b), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldIntegratedEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldIntegratedEphemeris::class$ = NULL;
        jmethodID *FieldIntegratedEphemeris::mids$ = NULL;
        bool FieldIntegratedEphemeris::live$ = false;

        jclass FieldIntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldIntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5a0fc6c09d7cf9a1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/integration/FieldStateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/FieldDenseOutputModel;Lorg/orekit/utils/FieldArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMaxDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getMinDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getMass_140b8964300ddedf] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_updateAdditionalStates_370b1acde6244b7e] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_basicPropagate_70fecd201ca47d3b] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_resetIntermediateState_871885b409df9d57] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_propagateOrbit_f34a7a94e111b112] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldIntegratedEphemeris::FieldIntegratedEphemeris(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::propagation::integration::FieldStateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::FieldDenseOutputModel & a5, const ::org::orekit::utils::FieldArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5a0fc6c09d7cf9a1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame FieldIntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldIntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_fba6d56f8dbc98d0]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_fa23a4301b9c83e7]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_fa23a4301b9c83e7]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldIntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
        }

        ::java::util::List FieldIntegratedEphemeris::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        void FieldIntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
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
      namespace integration {
        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args);
        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self);
        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args);
        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data);
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data);
        static PyGetSetDef t_FieldIntegratedEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, minDate),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldIntegratedEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldIntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_FieldIntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldIntegratedEphemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldIntegratedEphemeris)[] = {
          { Py_tp_methods, t_FieldIntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_FieldIntegratedEphemeris_init_ },
          { Py_tp_getset, t_FieldIntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldIntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldIntegratedEphemeris, t_FieldIntegratedEphemeris, FieldIntegratedEphemeris);
        PyObject *t_FieldIntegratedEphemeris::wrap_Object(const FieldIntegratedEphemeris& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldIntegratedEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldIntegratedEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldIntegratedEphemeris *self = (t_FieldIntegratedEphemeris *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldIntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldIntegratedEphemeris), &PY_TYPE_DEF(FieldIntegratedEphemeris), module, "FieldIntegratedEphemeris", 0);
        }

        void t_FieldIntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "class_", make_descriptor(FieldIntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "wrapfn_", make_descriptor(t_FieldIntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldIntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldIntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldIntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_FieldIntegratedEphemeris::wrap_Object(FieldIntegratedEphemeris(((t_FieldIntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_FieldIntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldIntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldIntegratedEphemeris_of_(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldIntegratedEphemeris_init_(t_FieldIntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::propagation::integration::FieldStateMapper a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::FieldDenseOutputModel a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::orekit::utils::FieldArrayDictionary a6((jobject) NULL);
          PyTypeObject **p6;
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          FieldIntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK[s[I", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::FieldDenseOutputModel::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::propagation::integration::t_FieldStateMapper::parameters_, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &p5, ::org::hipparchus::ode::t_FieldDenseOutputModel::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = FieldIntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldIntegratedEphemeris_getFrame(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMaxDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getMinDate(t_FieldIntegratedEphemeris *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldIntegratedEphemeris_getPVCoordinates(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_getParametersDrivers(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldIntegratedEphemeris_resetInitialState(t_FieldIntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldIntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldIntegratedEphemeris_get__parameters_(t_FieldIntegratedEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldIntegratedEphemeris_get__frame(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__initialState(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__maxDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__minDate(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldIntegratedEphemeris_get__parametersDrivers(t_FieldIntegratedEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$NptRangeMeasurement::class$ = NULL;
        jmethodID *CRD$NptRangeMeasurement::mids$ = NULL;
        bool CRD$NptRangeMeasurement::live$ = false;

        jclass CRD$NptRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$NptRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ce9c96f5fdc70ab3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_init$_ec5895b47419eed5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;DIDDDDDI)V");
            mids$[mid_getBinKurtosis_b74f83833fdad017] = env->getMethodID(cls, "getBinKurtosis", "()D");
            mids$[mid_getBinPeakMinusMean_b74f83833fdad017] = env->getMethodID(cls, "getBinPeakMinusMean", "()D");
            mids$[mid_getBinRms_b74f83833fdad017] = env->getMethodID(cls, "getBinRms", "()D");
            mids$[mid_getBinSkew_b74f83833fdad017] = env->getMethodID(cls, "getBinSkew", "()D");
            mids$[mid_getDetectorChannel_55546ef6a647f39b] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getNumberOfRawRanges_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfRawRanges", "()I");
            mids$[mid_getReturnRate_b74f83833fdad017] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getWindowLength_b74f83833fdad017] = env->getMethodID(cls, "getWindowLength", "()D");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_ce9c96f5fdc70ab3, a0.this$, a1, a2, a3, a4.this$)) {}

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_ec5895b47419eed5, a0.this$, a1, a2, a3, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble CRD$NptRangeMeasurement::getBinKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinKurtosis_b74f83833fdad017]);
        }

        jdouble CRD$NptRangeMeasurement::getBinPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinPeakMinusMean_b74f83833fdad017]);
        }

        jdouble CRD$NptRangeMeasurement::getBinRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinRms_b74f83833fdad017]);
        }

        jdouble CRD$NptRangeMeasurement::getBinSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinSkew_b74f83833fdad017]);
        }

        jint CRD$NptRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_55546ef6a647f39b]);
        }

        jint CRD$NptRangeMeasurement::getNumberOfRawRanges() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfRawRanges_55546ef6a647f39b]);
        }

        jdouble CRD$NptRangeMeasurement::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_b74f83833fdad017]);
        }

        jdouble CRD$NptRangeMeasurement::getWindowLength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWindowLength_b74f83833fdad017]);
        }

        ::java::lang::String CRD$NptRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$NptRangeMeasurement::toString() const
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
        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$NptRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binKurtosis),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binPeakMinusMean),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binRms),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binSkew),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, numberOfRawRanges),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, returnRate),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, windowLength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$NptRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getNumberOfRawRanges, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getWindowLength, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$NptRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$NptRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$NptRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$NptRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$NptRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$NptRangeMeasurement, t_CRD$NptRangeMeasurement, CRD$NptRangeMeasurement);

        void t_CRD$NptRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$NptRangeMeasurement), &PY_TYPE_DEF(CRD$NptRangeMeasurement), module, "CRD$NptRangeMeasurement", 0);
        }

        void t_CRD$NptRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "class_", make_descriptor(CRD$NptRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$NptRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$NptRangeMeasurement::wrap_Object(CRD$NptRangeMeasurement(((t_CRD$NptRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              jint a12;
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDsDIDDDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWindowLength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWindowLength());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap::class$ = NULL;
      jmethodID *TimeSpanMap::mids$ = NULL;
      bool TimeSpanMap::live$ = false;

      jclass TimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_55f3c894852c27a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
          mids$[mid_addValidAfter_8fdd18825f40925f] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBefore_8fdd18825f40925f] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBetween_3d88095cff705c55] = env->getMethodID(cls, "addValidBetween", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_extractRange_2917731b47ff4d6e] = env->getMethodID(cls, "extractRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_get_65e8d6bf93c53df3] = env->getMethodID(cls, "get", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getFirstSpan_5290b219f9ebfd63] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getFirstTransition_c754c29f2c04a95a] = env->getMethodID(cls, "getFirstTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getLastSpan_5290b219f9ebfd63] = env->getMethodID(cls, "getLastSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getLastTransition_c754c29f2c04a95a] = env->getMethodID(cls, "getLastTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getSpan_d9699fc4c4f11b26] = env->getMethodID(cls, "getSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpansNumber_55546ef6a647f39b] = env->getMethodID(cls, "getSpansNumber", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeSpanMap::TimeSpanMap(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55f3c894852c27a3, a0.this$)) {}

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidAfter_8fdd18825f40925f], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBefore_8fdd18825f40925f], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBetween(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBetween_3d88095cff705c55], a0.this$, a1.this$, a2.this$));
      }

      TimeSpanMap TimeSpanMap::extractRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractRange_2917731b47ff4d6e], a0.this$, a1.this$));
      }

      ::java::lang::Object TimeSpanMap::get$(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_65e8d6bf93c53df3], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getFirstSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_5290b219f9ebfd63]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getFirstTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getFirstTransition_c754c29f2c04a95a]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getLastSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getLastSpan_5290b219f9ebfd63]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getLastTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getLastTransition_c754c29f2c04a95a]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpan_d9699fc4c4f11b26], a0.this$));
      }

      jint TimeSpanMap::getSpansNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getSpansNumber_55546ef6a647f39b]);
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
      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args);
      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data);
      static PyGetSetDef t_TimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap, firstSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, firstTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, spansNumber),
        DECLARE_GET_FIELD(t_TimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBetween, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, extractRange, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getFirstSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getFirstTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getSpan, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getSpansNumber, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap)[] = {
        { Py_tp_methods, t_TimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_TimeSpanMap_init_ },
        { Py_tp_getset, t_TimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap, t_TimeSpanMap, TimeSpanMap);
      PyObject *t_TimeSpanMap::wrap_Object(const TimeSpanMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap), &PY_TYPE_DEF(TimeSpanMap), module, "TimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Span", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Span)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Transition)));
      }

      void t_TimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "class_", make_descriptor(TimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "wrapfn_", make_descriptor(t_TimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap::wrap_Object(TimeSpanMap(((t_TimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        TimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "o", &a0))
        {
          INT_CALL(object = TimeSpanMap(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidAfter(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBefore(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "Okk", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBetween(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBetween", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeSpanMap result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractRange(a0, a1));
          return t_TimeSpanMap::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "extractRange", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSpan(a0));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSpan", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSpansNumber());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSpansNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlLexicalAnalyzer::class$ = NULL;
            jmethodID *XmlLexicalAnalyzer::mids$ = NULL;
            bool XmlLexicalAnalyzer::live$ = false;

            jclass XmlLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4345325324782fee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_315581e8824888b8] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlLexicalAnalyzer::XmlLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4345325324782fee, a0.this$)) {}

            ::java::lang::Object XmlLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_315581e8824888b8], a0.this$));
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
          namespace lexical {
            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_XmlLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_XmlLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlLexicalAnalyzer)[] = {
              { Py_tp_methods, t_XmlLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_XmlLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlLexicalAnalyzer, t_XmlLexicalAnalyzer, XmlLexicalAnalyzer);

            void t_XmlLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlLexicalAnalyzer), &PY_TYPE_DEF(XmlLexicalAnalyzer), module, "XmlLexicalAnalyzer", 0);
            }

            void t_XmlLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "class_", make_descriptor(XmlLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "wrapfn_", make_descriptor(t_XmlLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_XmlLexicalAnalyzer::wrap_Object(XmlLexicalAnalyzer(((t_XmlLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_XmlLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlLexicalAnalyzer_init_(t_XmlLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              XmlLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = XmlLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlLexicalAnalyzer_accept(t_XmlLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonGenerator::class$ = NULL;
            jmethodID *PythonGenerator::mids$ = NULL;
            bool PythonGenerator::live$ = false;

            jclass PythonGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_2352320e099b9531] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_2352320e099b9531] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_a97dc068e719c14c] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_11ae2994efd15504] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_734b91ac30d5f9b4] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_734b91ac30d5f9b4] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_1c1fa1e935d6cdcf] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_a1fa5dae97ea5ed2] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_siToCcsdsName_6f0f3576df9f75ee] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_03ff9b80a9f63d81] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_ec48f6b9c20c08b3] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_0e7c3032c7c93ed3] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_20c2e4ef4663dfc7] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_f61f520115d82ef0] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_68be04607557ff44] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_06b2ed40d0cea8dd] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_09a7fd998b7aed89] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_bae21004607fffc6] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_6c986fa8f6aabe22] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_7b1b43161792cef8] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_df95ad02f5b4acd9] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_902d69c788edaf18] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonGenerator::PythonGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonGenerator::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          namespace generation {
            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self);
            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args);
            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5);
            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0);
            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4);
            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0);
            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data);
            static PyGetSetDef t_PythonGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonGenerator)[] = {
              { Py_tp_methods, t_PythonGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonGenerator_init_ },
              { Py_tp_getset, t_PythonGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonGenerator, t_PythonGenerator, PythonGenerator);

            void t_PythonGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonGenerator), &PY_TYPE_DEF(PythonGenerator), module, "PythonGenerator", 1);
            }

            void t_PythonGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "class_", make_descriptor(PythonGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "wrapfn_", make_descriptor(t_PythonGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "close", "()V", (void *) t_PythonGenerator_close0 },
                { "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToCalendarString1 },
                { "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString2 },
                { "dateToString", "(IIIIID)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString3 },
                { "doubleToString", "(D)Ljava/lang/String;", (void *) t_PythonGenerator_doubleToString4 },
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_endMessage5 },
                { "enterSection", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_enterSection6 },
                { "exitSection", "()Ljava/lang/String;", (void *) t_PythonGenerator_exitSection7 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonGenerator_getFormat8 },
                { "getOutputName", "()Ljava/lang/String;", (void *) t_PythonGenerator_getOutputName9 },
                { "newLine", "()V", (void *) t_PythonGenerator_newLine10 },
                { "pythonDecRef", "()V", (void *) t_PythonGenerator_pythonDecRef11 },
                { "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;", (void *) t_PythonGenerator_siToCcsdsName12 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonGenerator_startMessage13 },
                { "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;", (void *) t_PythonGenerator_unitsListToString14 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonGenerator_writeComments15 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V", (void *) t_PythonGenerator_writeEntry16 },
                { "writeEntry", "(Ljava/lang/String;CZ)V", (void *) t_PythonGenerator_writeEntry17 },
                { "writeEntry", "(Ljava/lang/String;IZ)V", (void *) t_PythonGenerator_writeEntry18 },
                { "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V", (void *) t_PythonGenerator_writeEntry19 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry20 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry21 },
                { "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry22 },
                { "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V", (void *) t_PythonGenerator_writeEntry23 },
                { "writeRawData", "(C)V", (void *) t_PythonGenerator_writeRawData24 },
                { "writeRawData", "(Ljava/lang/CharSequence;)V", (void *) t_PythonGenerator_writeRawData25 },
              };
              env->registerNatives(cls, methods, 26);
            }

            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonGenerator::wrap_Object(PythonGenerator(((t_PythonGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds)
            {
              PythonGenerator object((jobject) NULL);

              INT_CALL(object = PythonGenerator());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "close", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToCalendarString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToCalendarString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "iiiiid", (int) a0, (int) a1, (int) a2, (int) a3, (int) a4, (double) a5);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "doubleToString", "d", (double) a0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("doubleToString", result);
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

            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "enterSection", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "exitSection", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("exitSection", result);
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

            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getOutputName", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getOutputName", result);
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

            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "newLine", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "siToCcsdsName", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("siToCcsdsName", result);
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

            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "unitsListToString", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("unitsListToString", result);
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

            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Enum::wrap_Object(::java::lang::Enum(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = c2p(a1);;
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OiO", o0, (int) a1, o2);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Double::wrap_Object(::java::lang::Double(a1));
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OdOO", o0, (double) a1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a1));
              PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *o4 = (a4 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOOO", o0, o1, o2, o3, o4);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = c2p(a0);;
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::lang::t_CharSequence::wrap_Object(::java::lang::CharSequence(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data)
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
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *CalculusFieldElement::class$ = NULL;
    jmethodID *CalculusFieldElement::mids$ = NULL;
    bool CalculusFieldElement::live$ = false;

    jclass CalculusFieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/CalculusFieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_abs_2ff8de927fda4153] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acos_2ff8de927fda4153] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acosh_2ff8de927fda4153] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_add_24adc9c1a7e0cbd2] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_asin_2ff8de927fda4153] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_asinh_2ff8de927fda4153] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan_2ff8de927fda4153] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan2_392eff94748018d4] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_atanh_2ff8de927fda4153] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cbrt_2ff8de927fda4153] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ceil_2ff8de927fda4153] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_24adc9c1a7e0cbd2] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_392eff94748018d4] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_cos_2ff8de927fda4153] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cosh_2ff8de927fda4153] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_24adc9c1a7e0cbd2] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_exp_2ff8de927fda4153] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_expm1_2ff8de927fda4153] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_floor_2ff8de927fda4153] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
        mids$[mid_getPi_2ff8de927fda4153] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_hypot_392eff94748018d4] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_isFinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isFinite", "()Z");
        mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_linearCombination_1e67f64fd149ce54] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_ce8088cdfdeca75c] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_c11d3080748c8935] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_fcdbbadd03bede84] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_a7ddec7e866d67ff] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_6c33c9c54c0f67d4] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_e9088396a30da997] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_2ef475d775443e2f] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_log_2ff8de927fda4153] = env->getMethodID(cls, "log", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log10_2ff8de927fda4153] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log1p_2ff8de927fda4153] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_24adc9c1a7e0cbd2] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_newInstance_24adc9c1a7e0cbd2] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_norm_b74f83833fdad017] = env->getMethodID(cls, "norm", "()D");
        mids$[mid_pow_24adc9c1a7e0cbd2] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_6c5caf579ccf9ce5] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_392eff94748018d4] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_2ff8de927fda4153] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_24adc9c1a7e0cbd2] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_392eff94748018d4] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_rint_2ff8de927fda4153] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_rootN_6c5caf579ccf9ce5] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_round_6c0ce7e438e5ded4] = env->getMethodID(cls, "round", "()J");
        mids$[mid_scalb_6c5caf579ccf9ce5] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_sign_2ff8de927fda4153] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sin_2ff8de927fda4153] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
        mids$[mid_sinh_2ff8de927fda4153] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
        mids$[mid_sqrt_2ff8de927fda4153] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_24adc9c1a7e0cbd2] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_tan_2ff8de927fda4153] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_tanh_2ff8de927fda4153] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toDegrees_2ff8de927fda4153] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toRadians_2ff8de927fda4153] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ulp_2ff8de927fda4153] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::abs() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_abs_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acos_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acosh_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::add(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_add_24adc9c1a7e0cbd2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asin_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asinh_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan2(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan2_392eff94748018d4], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atanh_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cbrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cbrt_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ceil() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ceil_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_24adc9c1a7e0cbd2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_392eff94748018d4], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cos_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cosh_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::divide(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_divide_24adc9c1a7e0cbd2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::exp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_exp_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::expm1() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_expm1_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::floor() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_floor_2ff8de927fda4153]));
    }

    jint CalculusFieldElement::getExponent() const
    {
      return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::getPi() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getPi_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::hypot(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_hypot_392eff94748018d4], a0.this$));
    }

    jboolean CalculusFieldElement::isFinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFinite_9ab94ac1dc23b105]);
    }

    jboolean CalculusFieldElement::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
    }

    jboolean CalculusFieldElement::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_1e67f64fd149ce54], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_ce8088cdfdeca75c], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_c11d3080748c8935], a0, a1.this$, a2, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_fcdbbadd03bede84], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_a7ddec7e866d67ff], a0, a1.this$, a2, a3.this$, a4, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_6c33c9c54c0f67d4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5, jdouble a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_e9088396a30da997], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5, const ::org::hipparchus::FieldElement & a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_2ef475d775443e2f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log10() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log10_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log1p() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log1p_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::multiply(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_24adc9c1a7e0cbd2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::newInstance(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_newInstance_24adc9c1a7e0cbd2], a0));
    }

    jdouble CalculusFieldElement::norm() const
    {
      return env->callDoubleMethod(this$, mids$[mid_norm_b74f83833fdad017]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_24adc9c1a7e0cbd2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_6c5caf579ccf9ce5], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_392eff94748018d4], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::reciprocal() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_24adc9c1a7e0cbd2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_392eff94748018d4], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rint() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rint_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rootN(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rootN_6c5caf579ccf9ce5], a0));
    }

    jlong CalculusFieldElement::round() const
    {
      return env->callLongMethod(this$, mids$[mid_round_6c0ce7e438e5ded4]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::scalb(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_scalb_6c5caf579ccf9ce5], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sign() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sign_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sin_2ff8de927fda4153]));
    }

    ::org::hipparchus::util::FieldSinCos CalculusFieldElement::sinCos() const
    {
      return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sinh_2ff8de927fda4153]));
    }

    ::org::hipparchus::util::FieldSinhCosh CalculusFieldElement::sinhCosh() const
    {
      return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sqrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sqrt_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::subtract(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_24adc9c1a7e0cbd2], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tan_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tanh_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toDegrees() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toDegrees_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toRadians() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toRadians_2ff8de927fda4153]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ulp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ulp_2ff8de927fda4153]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data);
    static PyGetSetDef t_CalculusFieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_CalculusFieldElement, exponent),
      DECLARE_GET_FIELD(t_CalculusFieldElement, finite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, infinite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, naN),
      DECLARE_GET_FIELD(t_CalculusFieldElement, pi),
      DECLARE_GET_FIELD(t_CalculusFieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_CalculusFieldElement__methods_[] = {
      DECLARE_METHOD(t_CalculusFieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, abs, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, add, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan2, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, atanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cbrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ceil, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, copySign, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, divide, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, exp, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, expm1, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, floor, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getExponent, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getPi, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, hypot, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, isFinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, linearCombination, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log10, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log1p, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, newInstance, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, norm, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, pow, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, reciprocal, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, remainder, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rint, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rootN, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, round, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, scalb, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, sign, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinCos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinhCosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sqrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, subtract, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toDegrees, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toRadians, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ulp, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(CalculusFieldElement)[] = {
      { Py_tp_methods, t_CalculusFieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_CalculusFieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(CalculusFieldElement)[] = {
      &PY_TYPE_DEF(::org::hipparchus::FieldElement),
      NULL
    };

    DEFINE_TYPE(CalculusFieldElement, t_CalculusFieldElement, CalculusFieldElement);
    PyObject *t_CalculusFieldElement::wrap_Object(const CalculusFieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_CalculusFieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_CalculusFieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(CalculusFieldElement), &PY_TYPE_DEF(CalculusFieldElement), module, "CalculusFieldElement", 0);
    }

    void t_CalculusFieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "class_", make_descriptor(CalculusFieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "wrapfn_", make_descriptor(t_CalculusFieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, CalculusFieldElement::initializeClass, 1)))
        return NULL;
      return t_CalculusFieldElement::wrap_Object(CalculusFieldElement(((t_CalculusFieldElement *) arg)->object.this$));
    }
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, CalculusFieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.abs());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.atan2(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "atan2", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cbrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ceil());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "copySign", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "divide", args, 2);
    }

    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.exp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.expm1());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.floor());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getExponent());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getPi());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.hypot(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hypot", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[D[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          jdouble a6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement a6((jobject) NULL);
          PyTypeObject **p6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_FieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log10());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log1p());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.multiply(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "multiply", args, 2);
    }

    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = self->object.newInstance(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.norm());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "pow", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reciprocal());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "reciprocal", args, 2);
    }

    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remainder", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.rint());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.rootN(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "rootN", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.round());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.scalb(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "scalb", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sign());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
      OBJ_CALL(result = self->object.sinCos());
      return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
      OBJ_CALL(result = self->object.sinhCosh());
      return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sqrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "subtract", args, 2);
    }

    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toDegrees());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toRadians());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ulp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getExponent());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getPi());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory::class$ = NULL;
        jmethodID *DSFactory::mids$ = NULL;
        bool DSFactory::live$ = false;

        jclass DSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_build_86f1b5af7e082a1a] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_constant_d33302169f933b5a] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getCompiler_e0888effe8b453a6] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_41dff4b84eb98073] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/DSFactory$DSField;");
            mids$[mid_variable_3955647bcb5e5f97] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSFactory::DSFactory(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_86f1b5af7e082a1a], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_d33302169f933b5a], a0));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler DSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_e0888effe8b453a6]));
        }

        ::org::hipparchus::analysis::differentiation::DSFactory$DSField DSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory$DSField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_41dff4b84eb98073]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_3955647bcb5e5f97], a0, a1));
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
        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self);
        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self);
        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args);
        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data);
        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data);
        static PyGetSetDef t_DSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory, compiler),
          DECLARE_GET_FIELD(t_DSFactory, derivativeField),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory__methods_[] = {
          DECLARE_METHOD(t_DSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, build, METH_O),
          DECLARE_METHOD(t_DSFactory, constant, METH_O),
          DECLARE_METHOD(t_DSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory)[] = {
          { Py_tp_methods, t_DSFactory__methods_ },
          { Py_tp_init, (void *) t_DSFactory_init_ },
          { Py_tp_getset, t_DSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory, t_DSFactory, DSFactory);

        void t_DSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory), &PY_TYPE_DEF(DSFactory), module, "DSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "DSField", make_descriptor(&PY_TYPE_DEF(DSFactory$DSField)));
        }

        void t_DSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "class_", make_descriptor(DSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "wrapfn_", make_descriptor(t_DSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory::initializeClass, 1)))
            return NULL;
          return t_DSFactory::wrap_Object(DSFactory(((t_DSFactory *) arg)->object.this$));
        }
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          DSFactory object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = DSFactory(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.build(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(result);
        }

        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.variable(a0, a1));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }

        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialStorelessStatistic::class$ = NULL;
          jmethodID *VectorialStorelessStatistic::mids$ = NULL;
          bool VectorialStorelessStatistic::live$ = false;

          jclass VectorialStorelessStatistic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5608c45922443b4] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_25e1757a36c4dde2] = env->getMethodID(cls, "getResult", "()[D");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_ab69da052b88f50c] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialStorelessStatistic::VectorialStorelessStatistic(jint a0, const ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5608c45922443b4, a0, a1.this$)) {}

          void VectorialStorelessStatistic::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          jboolean VectorialStorelessStatistic::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jint VectorialStorelessStatistic::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          jlong VectorialStorelessStatistic::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          JArray< jdouble > VectorialStorelessStatistic::getResult() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_25e1757a36c4dde2]));
          }

          jint VectorialStorelessStatistic::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          void VectorialStorelessStatistic::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_ab69da052b88f50c], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data);
          static PyGetSetDef t_VectorialStorelessStatistic__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, dimension),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, n),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialStorelessStatistic__methods_[] = {
            DECLARE_METHOD(t_VectorialStorelessStatistic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialStorelessStatistic)[] = {
            { Py_tp_methods, t_VectorialStorelessStatistic__methods_ },
            { Py_tp_init, (void *) t_VectorialStorelessStatistic_init_ },
            { Py_tp_getset, t_VectorialStorelessStatistic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialStorelessStatistic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialStorelessStatistic, t_VectorialStorelessStatistic, VectorialStorelessStatistic);

          void t_VectorialStorelessStatistic::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialStorelessStatistic), &PY_TYPE_DEF(VectorialStorelessStatistic), module, "VectorialStorelessStatistic", 0);
          }

          void t_VectorialStorelessStatistic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "class_", make_descriptor(VectorialStorelessStatistic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "wrapfn_", make_descriptor(t_VectorialStorelessStatistic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialStorelessStatistic::initializeClass, 1)))
              return NULL;
            return t_VectorialStorelessStatistic::wrap_Object(VectorialStorelessStatistic(((t_VectorialStorelessStatistic *) arg)->object.this$));
          }
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialStorelessStatistic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic a1((jobject) NULL);
            VectorialStorelessStatistic object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VectorialStorelessStatistic(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return result.wrap();
          }

          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIBulletinAFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIBulletinAFilesLoader::class$ = NULL;
      jmethodID *UTCTAIBulletinAFilesLoader::mids$ = NULL;
      bool UTCTAIBulletinAFilesLoader::live$ = false;

      jclass UTCTAIBulletinAFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIBulletinAFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_e62d3bb06d56d7e3] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}

      ::java::util::List UTCTAIBulletinAFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_e62d3bb06d56d7e3]));
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
      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self);

      static PyMethodDef t_UTCTAIBulletinAFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIBulletinAFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIBulletinAFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIBulletinAFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIBulletinAFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIBulletinAFilesLoader, t_UTCTAIBulletinAFilesLoader, UTCTAIBulletinAFilesLoader);

      void t_UTCTAIBulletinAFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIBulletinAFilesLoader), &PY_TYPE_DEF(UTCTAIBulletinAFilesLoader), module, "UTCTAIBulletinAFilesLoader", 0);
      }

      void t_UTCTAIBulletinAFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "class_", make_descriptor(UTCTAIBulletinAFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIBulletinAFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIBulletinAFilesLoader::wrap_Object(UTCTAIBulletinAFilesLoader(((t_UTCTAIBulletinAFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0, a1));
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

      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Double.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Double::class$ = NULL;
    jmethodID *Double::mids$ = NULL;
    bool Double::live$ = false;
    jint Double::BYTES = (jint) 0;
    jint Double::MAX_EXPONENT = (jint) 0;
    jdouble Double::MAX_VALUE = (jdouble) 0;
    jint Double::MIN_EXPONENT = (jint) 0;
    jdouble Double::MIN_NORMAL = (jdouble) 0;
    jdouble Double::MIN_VALUE = (jdouble) 0;
    jdouble Double::NEGATIVE_INFINITY = (jdouble) 0;
    jdouble Double::NaN = (jdouble) 0;
    jdouble Double::POSITIVE_INFINITY = (jdouble) 0;
    jint Double::SIZE = (jint) 0;
    ::java::lang::Class *Double::TYPE = NULL;

    jclass Double::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Double");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_a390351c2ab3d097] = env->getStaticMethodID(cls, "compare", "(DD)I");
        mids$[mid_compareTo_a8e655ea2fbadf43] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Double;)I");
        mids$[mid_doubleToLongBits_12ed7e7112604870] = env->getStaticMethodID(cls, "doubleToLongBits", "(D)J");
        mids$[mid_doubleToRawLongBits_12ed7e7112604870] = env->getStaticMethodID(cls, "doubleToRawLongBits", "(D)J");
        mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_2af4736545087009] = env->getStaticMethodID(cls, "hashCode", "(D)I");
        mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_716249baa52d209e] = env->getStaticMethodID(cls, "isFinite", "(D)Z");
        mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_716249baa52d209e] = env->getStaticMethodID(cls, "isInfinite", "(D)Z");
        mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_716249baa52d209e] = env->getStaticMethodID(cls, "isNaN", "(D)Z");
        mids$[mid_longBitsToDouble_8caf38275755b2fd] = env->getStaticMethodID(cls, "longBitsToDouble", "(J)D");
        mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_99e3200dafc19573] = env->getStaticMethodID(cls, "max", "(DD)D");
        mids$[mid_min_99e3200dafc19573] = env->getStaticMethodID(cls, "min", "(DD)D");
        mids$[mid_parseDouble_a84f304e8cd7ce1b] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");
        mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_99e3200dafc19573] = env->getStaticMethodID(cls, "sum", "(DD)D");
        mids$[mid_toHexString_11ae2994efd15504] = env->getStaticMethodID(cls, "toHexString", "(D)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_11ae2994efd15504] = env->getStaticMethodID(cls, "toString", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_76ce52eb492100d7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Double;");
        mids$[mid_valueOf_296806f10627d10c] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/Double;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticDoubleField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticDoubleField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticDoubleField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticDoubleField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticDoubleField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticDoubleField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Double::Double(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Double::Double(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

    jbyte Double::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
    }

    jint Double::compare(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a390351c2ab3d097], a0, a1);
    }

    jint Double::compareTo(const Double & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_a8e655ea2fbadf43], a0.this$);
    }

    jlong Double::doubleToLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToLongBits_12ed7e7112604870], a0);
    }

    jlong Double::doubleToRawLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToRawLongBits_12ed7e7112604870], a0);
    }

    jdouble Double::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
    }

    jboolean Double::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jfloat Double::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
    }

    jint Double::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Double::hashCode(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_2af4736545087009], a0);
    }

    jint Double::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
    }

    jboolean Double::isFinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_716249baa52d209e], a0);
    }

    jboolean Double::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
    }

    jboolean Double::isInfinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_716249baa52d209e], a0);
    }

    jboolean Double::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
    }

    jboolean Double::isNaN(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_716249baa52d209e], a0);
    }

    jdouble Double::longBitsToDouble(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_longBitsToDouble_8caf38275755b2fd], a0);
    }

    jlong Double::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
    }

    jdouble Double::max$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_max_99e3200dafc19573], a0, a1);
    }

    jdouble Double::min$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_min_99e3200dafc19573], a0, a1);
    }

    jdouble Double::parseDouble(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_a84f304e8cd7ce1b], a0.this$);
    }

    jshort Double::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
    }

    jdouble Double::sum(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_sum_99e3200dafc19573], a0, a1);
    }

    ::java::lang::String Double::toHexString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_11ae2994efd15504], a0));
    }

    ::java::lang::String Double::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Double::toString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_11ae2994efd15504], a0));
    }

    Double Double::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_76ce52eb492100d7], a0.this$));
    }

    Double Double::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_296806f10627d10c], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg);
    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_equals(t_Double *self, PyObject *args);
    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_intValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isInfinite(t_Double *self);
    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isNaN(t_Double *self);
    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_toString(t_Double *self, PyObject *args);
    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_get__infinite(t_Double *self, void *data);
    static PyObject *t_Double_get__naN(t_Double *self, void *data);
    static PyGetSetDef t_Double__fields_[] = {
      DECLARE_GET_FIELD(t_Double, infinite),
      DECLARE_GET_FIELD(t_Double, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Double__methods_[] = {
      DECLARE_METHOD(t_Double, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, compareTo, METH_O),
      DECLARE_METHOD(t_Double, doubleToLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleToRawLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, equals, METH_VARARGS),
      DECLARE_METHOD(t_Double, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Double, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Double, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longBitsToDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, parseDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, toString, METH_VARARGS),
      DECLARE_METHOD(t_Double, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Double)[] = {
      { Py_tp_methods, t_Double__methods_ },
      { Py_tp_init, (void *) t_Double_init_ },
      { Py_tp_getset, t_Double__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Double)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Double, t_Double, Double);

    void t_Double::install(PyObject *module)
    {
      installType(&PY_TYPE(Double), &PY_TYPE_DEF(Double), module, "Double", 0);
    }

    void t_Double::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "class_", make_descriptor(Double::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "wrapfn_", make_descriptor(unboxDouble));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "boxfn_", make_descriptor(boxDouble));
      env->getClass(Double::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "BYTES", make_descriptor(Double::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_EXPONENT", make_descriptor(Double::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_VALUE", make_descriptor(Double::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_EXPONENT", make_descriptor(Double::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_NORMAL", make_descriptor(Double::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_VALUE", make_descriptor(Double::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NEGATIVE_INFINITY", make_descriptor(Double::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NaN", make_descriptor(Double::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "POSITIVE_INFINITY", make_descriptor(Double::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "SIZE", make_descriptor(Double::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Double::TYPE)));
    }

    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Double::initializeClass, 1)))
        return NULL;
      return t_Double::wrap_Object(Double(((t_Double *) arg)->object.this$));
    }
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Double::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Double(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Double object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Double(a0));
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

    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jint result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg)
    {
      Double a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Double), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToRawLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToRawLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Double_equals(t_Double *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jint result;

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Double_intValue(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Double_isInfinite(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Double_isNaN(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jdouble result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::longBitsToDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "longBitsToDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_longValue(t_Double *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jdouble result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::parseDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Double_toString(t_Double *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          Double result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Double_get__infinite(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Double_get__naN(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
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
                  mids$[mid_buildIdentityMatrix2_83f3832922dd475f] = env->getStaticMethodID(cls, "buildIdentityMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildIdentityMatrix4_83f3832922dd475f] = env->getStaticMethodID(cls, "buildIdentityMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix2_83f3832922dd475f] = env->getStaticMethodID(cls, "buildZeroMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix4_83f3832922dd475f] = env->getStaticMethodID(cls, "buildZeroMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");

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
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix2_83f3832922dd475f]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix4_83f3832922dd475f]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix2_83f3832922dd475f]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix4_83f3832922dd475f]));
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractSingleFrequencyCombination::mids$ = NULL;
          bool PythonAbstractSingleFrequencyCombination::live$ = false;

          jclass PythonAbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1af956d1b87222ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedValue_99e3200dafc19573] = env->getMethodID(cls, "getCombinedValue", "(DD)D");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractSingleFrequencyCombination::PythonAbstractSingleFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_1af956d1b87222ce, a0.this$, a1.this$)) {}

          void PythonAbstractSingleFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractSingleFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractSingleFrequencyCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractSingleFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractSingleFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractSingleFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractSingleFrequencyCombination, t_PythonAbstractSingleFrequencyCombination, PythonAbstractSingleFrequencyCombination);

          void t_PythonAbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractSingleFrequencyCombination), &PY_TYPE_DEF(PythonAbstractSingleFrequencyCombination), module, "PythonAbstractSingleFrequencyCombination", 1);
          }

          void t_PythonAbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "class_", make_descriptor(PythonAbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractSingleFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedValue", "(DD)D", (void *) t_PythonAbstractSingleFrequencyCombination_getCombinedValue0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractSingleFrequencyCombination_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractSingleFrequencyCombination::wrap_Object(PythonAbstractSingleFrequencyCombination(((t_PythonAbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractSingleFrequencyCombination_init_(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractSingleFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractSingleFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractSingleFrequencyCombination_finalize(t_PythonAbstractSingleFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_pythonExtension(t_PythonAbstractSingleFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractSingleFrequencyCombination_getCombinedValue0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dd", (double) a0, (double) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractSingleFrequencyCombination_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractSingleFrequencyCombination::mids$[PythonAbstractSingleFrequencyCombination::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractSingleFrequencyCombination_get__self(t_PythonAbstractSingleFrequencyCombination *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *AttitudeEphemerisFileParser::mids$ = NULL;
        bool AttitudeEphemerisFileParser::live$ = false;

        jclass AttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_61d485826e6f03b7] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::AttitudeEphemerisFile AttitudeEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::AttitudeEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_61d485826e6f03b7], a0.this$));
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
      namespace general {
        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileParser, t_AttitudeEphemerisFileParser, AttitudeEphemerisFileParser);
        PyObject *t_AttitudeEphemerisFileParser::wrap_Object(const AttitudeEphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileParser), &PY_TYPE_DEF(AttitudeEphemerisFileParser), module, "AttitudeEphemerisFileParser", 0);
        }

        void t_AttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "class_", make_descriptor(AttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileParser::wrap_Object(AttitudeEphemerisFileParser(((t_AttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::AttitudeEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerBootstrapping.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerBootstrapping::class$ = NULL;
          jmethodID *IntegerBootstrapping::mids$ = NULL;
          bool IntegerBootstrapping::live$ = false;

          jclass IntegerBootstrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerBootstrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_discreteSearch_a1fa5dae97ea5ed2] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_recoverAmbiguities_992f722e5b5b80cb] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerBootstrapping::IntegerBootstrapping(jdouble a0) : ::org::orekit::estimation::measurements::gnss::LambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}
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
          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IntegerBootstrapping__methods_[] = {
            DECLARE_METHOD(t_IntegerBootstrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerBootstrapping, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerBootstrapping)[] = {
            { Py_tp_methods, t_IntegerBootstrapping__methods_ },
            { Py_tp_init, (void *) t_IntegerBootstrapping_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerBootstrapping)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::LambdaMethod),
            NULL
          };

          DEFINE_TYPE(IntegerBootstrapping, t_IntegerBootstrapping, IntegerBootstrapping);

          void t_IntegerBootstrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerBootstrapping), &PY_TYPE_DEF(IntegerBootstrapping), module, "IntegerBootstrapping", 0);
          }

          void t_IntegerBootstrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "class_", make_descriptor(IntegerBootstrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "wrapfn_", make_descriptor(t_IntegerBootstrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerBootstrapping::initializeClass, 1)))
              return NULL;
            return t_IntegerBootstrapping::wrap_Object(IntegerBootstrapping(((t_IntegerBootstrapping *) arg)->object.this$));
          }
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerBootstrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            IntegerBootstrapping object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = IntegerBootstrapping(a0));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame1::class$ = NULL;
          jmethodID *SubFrame1::mids$ = NULL;
          bool SubFrame1::live$ = false;

          jclass SubFrame1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame1");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_b74f83833fdad017] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_b74f83833fdad017] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getAF2_b74f83833fdad017] = env->getMethodID(cls, "getAF2", "()D");
              mids$[mid_getCaOrPFlag_55546ef6a647f39b] = env->getMethodID(cls, "getCaOrPFlag", "()I");
              mids$[mid_getIODC_55546ef6a647f39b] = env->getMethodID(cls, "getIODC", "()I");
              mids$[mid_getL2PDataFlag_55546ef6a647f39b] = env->getMethodID(cls, "getL2PDataFlag", "()I");
              mids$[mid_getReserved04_55546ef6a647f39b] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_55546ef6a647f39b] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_55546ef6a647f39b] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_55546ef6a647f39b] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getSvHealth_55546ef6a647f39b] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getTGD_55546ef6a647f39b] = env->getMethodID(cls, "getTGD", "()I");
              mids$[mid_getTOC_55546ef6a647f39b] = env->getMethodID(cls, "getTOC", "()I");
              mids$[mid_getUraIndex_55546ef6a647f39b] = env->getMethodID(cls, "getUraIndex", "()I");
              mids$[mid_getWeekNumber_55546ef6a647f39b] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame1::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_b74f83833fdad017]);
          }

          jdouble SubFrame1::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_b74f83833fdad017]);
          }

          jdouble SubFrame1::getAF2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF2_b74f83833fdad017]);
          }

          jint SubFrame1::getCaOrPFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getCaOrPFlag_55546ef6a647f39b]);
          }

          jint SubFrame1::getIODC() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODC_55546ef6a647f39b]);
          }

          jint SubFrame1::getL2PDataFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getL2PDataFlag_55546ef6a647f39b]);
          }

          jint SubFrame1::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_55546ef6a647f39b]);
          }

          jint SubFrame1::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_55546ef6a647f39b]);
          }

          jint SubFrame1::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_55546ef6a647f39b]);
          }

          jint SubFrame1::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_55546ef6a647f39b]);
          }

          jint SubFrame1::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_55546ef6a647f39b]);
          }

          jint SubFrame1::getTGD() const
          {
            return env->callIntMethod(this$, mids$[mid_getTGD_55546ef6a647f39b]);
          }

          jint SubFrame1::getTOC() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOC_55546ef6a647f39b]);
          }

          jint SubFrame1::getUraIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getUraIndex_55546ef6a647f39b]);
          }

          jint SubFrame1::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_55546ef6a647f39b]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data);
          static PyGetSetDef t_SubFrame1__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame1, aF0),
            DECLARE_GET_FIELD(t_SubFrame1, aF1),
            DECLARE_GET_FIELD(t_SubFrame1, aF2),
            DECLARE_GET_FIELD(t_SubFrame1, caOrPFlag),
            DECLARE_GET_FIELD(t_SubFrame1, iODC),
            DECLARE_GET_FIELD(t_SubFrame1, l2PDataFlag),
            DECLARE_GET_FIELD(t_SubFrame1, reserved04),
            DECLARE_GET_FIELD(t_SubFrame1, reserved05),
            DECLARE_GET_FIELD(t_SubFrame1, reserved06),
            DECLARE_GET_FIELD(t_SubFrame1, reserved07),
            DECLARE_GET_FIELD(t_SubFrame1, svHealth),
            DECLARE_GET_FIELD(t_SubFrame1, tGD),
            DECLARE_GET_FIELD(t_SubFrame1, tOC),
            DECLARE_GET_FIELD(t_SubFrame1, uraIndex),
            DECLARE_GET_FIELD(t_SubFrame1, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame1__methods_[] = {
            DECLARE_METHOD(t_SubFrame1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getCaOrPFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getIODC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getL2PDataFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTGD, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTOC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getUraIndex, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame1)[] = {
            { Py_tp_methods, t_SubFrame1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame1__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame1, t_SubFrame1, SubFrame1);

          void t_SubFrame1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame1), &PY_TYPE_DEF(SubFrame1), module, "SubFrame1", 0);
          }

          void t_SubFrame1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "class_", make_descriptor(SubFrame1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "wrapfn_", make_descriptor(t_SubFrame1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame1::initializeClass, 1)))
              return NULL;
            return t_SubFrame1::wrap_Object(SubFrame1(((t_SubFrame1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame1::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTGD());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getUraIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTGD());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getUraIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader$Parser::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader$Parser::mids$ = NULL;
      bool TAIUTCDatFilesLoader$Parser::live$ = false;

      jclass TAIUTCDatFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_7b8887374449b257] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader$Parser::TAIUTCDatFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::java::util::List TAIUTCDatFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_7b8887374449b257], a0.this$, a1.this$));
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
      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_TAIUTCDatFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader$Parser)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader$Parser, t_TAIUTCDatFilesLoader$Parser, TAIUTCDatFilesLoader$Parser);

      void t_TAIUTCDatFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader$Parser), &PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser), module, "TAIUTCDatFilesLoader$Parser", 0);
      }

      void t_TAIUTCDatFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "class_", make_descriptor(TAIUTCDatFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader$Parser::wrap_Object(TAIUTCDatFilesLoader$Parser(((t_TAIUTCDatFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        TAIUTCDatFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = TAIUTCDatFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *PivotingStrategy::class$ = NULL;
      jmethodID *PivotingStrategy::mids$ = NULL;
      bool PivotingStrategy::live$ = false;
      PivotingStrategy *PivotingStrategy::CENTRAL = NULL;
      PivotingStrategy *PivotingStrategy::MEDIAN_OF_3 = NULL;

      jclass PivotingStrategy::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/PivotingStrategy");

          mids$ = new jmethodID[max_mid];
          mids$[mid_pivotIndex_a39b8700a2dab961] = env->getMethodID(cls, "pivotIndex", "([DII)I");
          mids$[mid_valueOf_861337c48a57490d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_values_784bb9013e909172] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/PivotingStrategy;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CENTRAL = new PivotingStrategy(env->getStaticObjectField(cls, "CENTRAL", "Lorg/hipparchus/util/PivotingStrategy;"));
          MEDIAN_OF_3 = new PivotingStrategy(env->getStaticObjectField(cls, "MEDIAN_OF_3", "Lorg/hipparchus/util/PivotingStrategy;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint PivotingStrategy::pivotIndex(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_pivotIndex_a39b8700a2dab961], a0.this$, a1, a2);
      }

      PivotingStrategy PivotingStrategy::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PivotingStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_861337c48a57490d], a0.this$));
      }

      JArray< PivotingStrategy > PivotingStrategy::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PivotingStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_784bb9013e909172]));
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
      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PivotingStrategy_values(PyTypeObject *type);
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data);
      static PyGetSetDef t_PivotingStrategy__fields_[] = {
        DECLARE_GET_FIELD(t_PivotingStrategy, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PivotingStrategy__methods_[] = {
        DECLARE_METHOD(t_PivotingStrategy, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, of_, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, pivotIndex, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PivotingStrategy)[] = {
        { Py_tp_methods, t_PivotingStrategy__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PivotingStrategy__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PivotingStrategy)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PivotingStrategy, t_PivotingStrategy, PivotingStrategy);
      PyObject *t_PivotingStrategy::wrap_Object(const PivotingStrategy& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PivotingStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PivotingStrategy::install(PyObject *module)
      {
        installType(&PY_TYPE(PivotingStrategy), &PY_TYPE_DEF(PivotingStrategy), module, "PivotingStrategy", 0);
      }

      void t_PivotingStrategy::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "class_", make_descriptor(PivotingStrategy::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "wrapfn_", make_descriptor(t_PivotingStrategy::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "boxfn_", make_descriptor(boxObject));
        env->getClass(PivotingStrategy::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "CENTRAL", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::CENTRAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "MEDIAN_OF_3", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::MEDIAN_OF_3)));
      }

      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PivotingStrategy::initializeClass, 1)))
          return NULL;
        return t_PivotingStrategy::wrap_Object(PivotingStrategy(((t_PivotingStrategy *) arg)->object.this$));
      }
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PivotingStrategy::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        jint a2;
        jint result;

        if (!parseArgs(args, "[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pivotIndex(a0, a1, a2));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "pivotIndex", args);
        return NULL;
      }

      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PivotingStrategy result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::valueOf(a0));
          return t_PivotingStrategy::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PivotingStrategy_values(PyTypeObject *type)
      {
        JArray< PivotingStrategy > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::values());
        return JArray<jobject>(result.this$).wrap(t_PivotingStrategy::wrap_jobject);
      }
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomAdaptor.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomAdaptor::class$ = NULL;
      jmethodID *RandomAdaptor::mids$ = NULL;
      bool RandomAdaptor::live$ = false;

      jclass RandomAdaptor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomAdaptor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f1c8159898f25396] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_459771b03534868e] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_a9fddc59b07ce512] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_b74f83833fdad017] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0e7cf35192c3effe] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_9db63109f74a74fc] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_of_08644760e350d382] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Ljava/util/Random;");
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_44ed599e93e8a30c] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3d7dd2314a0dd456] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomAdaptor::RandomAdaptor(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::util::Random(env->newObject(initializeClass, &mids$, mid_init$_f1c8159898f25396, a0.this$)) {}

      jboolean RandomAdaptor::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_9ab94ac1dc23b105]);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_459771b03534868e], a0.this$);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_a9fddc59b07ce512], a0.this$, a1, a2);
      }

      jdouble RandomAdaptor::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
      }

      jfloat RandomAdaptor::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_1fb1bf0772ae5db7]);
      }

      jdouble RandomAdaptor::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_b74f83833fdad017]);
      }

      jint RandomAdaptor::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      jint RandomAdaptor::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0e7cf35192c3effe], a0);
      }

      jlong RandomAdaptor::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_6c0ce7e438e5ded4]);
      }

      jlong RandomAdaptor::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9db63109f74a74fc], a0);
      }

      ::java::util::Random RandomAdaptor::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Random(env->callStaticObjectMethod(cls, mids$[mid_of_08644760e350d382], a0.this$));
      }

      void RandomAdaptor::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }

      void RandomAdaptor::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_44ed599e93e8a30c], a0);
      }

      void RandomAdaptor::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3d7dd2314a0dd456], a0);
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
      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args);
      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomAdaptor__fields_[] = {
        DECLARE_SET_FIELD(t_RandomAdaptor, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomAdaptor__methods_[] = {
        DECLARE_METHOD(t_RandomAdaptor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, of, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomAdaptor)[] = {
        { Py_tp_methods, t_RandomAdaptor__methods_ },
        { Py_tp_init, (void *) t_RandomAdaptor_init_ },
        { Py_tp_getset, t_RandomAdaptor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomAdaptor)[] = {
        &PY_TYPE_DEF(::java::util::Random),
        NULL
      };

      DEFINE_TYPE(RandomAdaptor, t_RandomAdaptor, RandomAdaptor);

      void t_RandomAdaptor::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomAdaptor), &PY_TYPE_DEF(RandomAdaptor), module, "RandomAdaptor", 0);
      }

      void t_RandomAdaptor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "class_", make_descriptor(RandomAdaptor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "wrapfn_", make_descriptor(t_RandomAdaptor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomAdaptor::initializeClass, 1)))
          return NULL;
        return t_RandomAdaptor::wrap_Object(RandomAdaptor(((t_RandomAdaptor *) arg)->object.this$));
      }
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomAdaptor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomAdaptor object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = RandomAdaptor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        ::java::util::Random result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomAdaptor::of(a0));
          return ::java::util::t_Random::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }

      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/net/URL.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace java {
  namespace net {

    ::java::lang::Class *URL::class$ = NULL;
    jmethodID *URL::mids$ = NULL;
    bool URL::live$ = false;

    jclass URL::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/net/URL");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_15e1af85a4dfcb77] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;Ljava/lang/String;)V");
        mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_0fa1d5c018fc6528] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAuthority_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAuthority", "()Ljava/lang/String;");
        mids$[mid_getContent_541690f9ee81d3ad] = env->getMethodID(cls, "getContent", "()Ljava/lang/Object;");
        mids$[mid_getContent_de4df9dfd38c3157] = env->getMethodID(cls, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
        mids$[mid_getDefaultPort_55546ef6a647f39b] = env->getMethodID(cls, "getDefaultPort", "()I");
        mids$[mid_getFile_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFile", "()Ljava/lang/String;");
        mids$[mid_getHost_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
        mids$[mid_getPath_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getPort_55546ef6a647f39b] = env->getMethodID(cls, "getPort", "()I");
        mids$[mid_getProtocol_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getProtocol", "()Ljava/lang/String;");
        mids$[mid_getQuery_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getQuery", "()Ljava/lang/String;");
        mids$[mid_getRef_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRef", "()Ljava/lang/String;");
        mids$[mid_getUserInfo_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getUserInfo", "()Ljava/lang/String;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_openStream_6c37d64ac8173086] = env->getMethodID(cls, "openStream", "()Ljava/io/InputStream;");
        mids$[mid_sameFile_72310db42813c777] = env->getMethodID(cls, "sameFile", "(Ljava/net/URL;)Z");
        mids$[mid_toExternalForm_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toExternalForm", "()Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    URL::URL(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    URL::URL(const URL & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15e1af85a4dfcb77, a0.this$, a1.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, jint a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa1d5c018fc6528, a0.this$, a1.this$, a2, a3.this$)) {}

    jboolean URL::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::String URL::getAuthority() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAuthority_1c1fa1e935d6cdcf]));
    }

    ::java::lang::Object URL::getContent() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_541690f9ee81d3ad]));
    }

    ::java::lang::Object URL::getContent(const JArray< ::java::lang::Class > & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_de4df9dfd38c3157], a0.this$));
    }

    jint URL::getDefaultPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultPort_55546ef6a647f39b]);
    }

    ::java::lang::String URL::getFile() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFile_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String URL::getHost() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String URL::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_1c1fa1e935d6cdcf]));
    }

    jint URL::getPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getPort_55546ef6a647f39b]);
    }

    ::java::lang::String URL::getProtocol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProtocol_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String URL::getQuery() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getQuery_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String URL::getRef() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRef_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String URL::getUserInfo() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUserInfo_1c1fa1e935d6cdcf]));
    }

    jint URL::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    ::java::io::InputStream URL::openStream() const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStream_6c37d64ac8173086]));
    }

    jboolean URL::sameFile(const URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_sameFile_72310db42813c777], a0.this$);
    }

    ::java::lang::String URL::toExternalForm() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toExternalForm_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String URL::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace net {
    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg);
    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds);
    static PyObject *t_URL_equals(t_URL *self, PyObject *args);
    static PyObject *t_URL_getAuthority(t_URL *self);
    static PyObject *t_URL_getContent(t_URL *self, PyObject *args);
    static PyObject *t_URL_getDefaultPort(t_URL *self);
    static PyObject *t_URL_getFile(t_URL *self);
    static PyObject *t_URL_getHost(t_URL *self);
    static PyObject *t_URL_getPath(t_URL *self);
    static PyObject *t_URL_getPort(t_URL *self);
    static PyObject *t_URL_getProtocol(t_URL *self);
    static PyObject *t_URL_getQuery(t_URL *self);
    static PyObject *t_URL_getRef(t_URL *self);
    static PyObject *t_URL_getUserInfo(t_URL *self);
    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args);
    static PyObject *t_URL_openStream(t_URL *self);
    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg);
    static PyObject *t_URL_toExternalForm(t_URL *self);
    static PyObject *t_URL_toString(t_URL *self, PyObject *args);
    static PyObject *t_URL_get__authority(t_URL *self, void *data);
    static PyObject *t_URL_get__content(t_URL *self, void *data);
    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data);
    static PyObject *t_URL_get__file(t_URL *self, void *data);
    static PyObject *t_URL_get__host(t_URL *self, void *data);
    static PyObject *t_URL_get__path(t_URL *self, void *data);
    static PyObject *t_URL_get__port(t_URL *self, void *data);
    static PyObject *t_URL_get__protocol(t_URL *self, void *data);
    static PyObject *t_URL_get__query(t_URL *self, void *data);
    static PyObject *t_URL_get__ref(t_URL *self, void *data);
    static PyObject *t_URL_get__userInfo(t_URL *self, void *data);
    static PyGetSetDef t_URL__fields_[] = {
      DECLARE_GET_FIELD(t_URL, authority),
      DECLARE_GET_FIELD(t_URL, content),
      DECLARE_GET_FIELD(t_URL, defaultPort),
      DECLARE_GET_FIELD(t_URL, file),
      DECLARE_GET_FIELD(t_URL, host),
      DECLARE_GET_FIELD(t_URL, path),
      DECLARE_GET_FIELD(t_URL, port),
      DECLARE_GET_FIELD(t_URL, protocol),
      DECLARE_GET_FIELD(t_URL, query),
      DECLARE_GET_FIELD(t_URL, ref),
      DECLARE_GET_FIELD(t_URL, userInfo),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_URL__methods_[] = {
      DECLARE_METHOD(t_URL, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, equals, METH_VARARGS),
      DECLARE_METHOD(t_URL, getAuthority, METH_NOARGS),
      DECLARE_METHOD(t_URL, getContent, METH_VARARGS),
      DECLARE_METHOD(t_URL, getDefaultPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getFile, METH_NOARGS),
      DECLARE_METHOD(t_URL, getHost, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPath, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getProtocol, METH_NOARGS),
      DECLARE_METHOD(t_URL, getQuery, METH_NOARGS),
      DECLARE_METHOD(t_URL, getRef, METH_NOARGS),
      DECLARE_METHOD(t_URL, getUserInfo, METH_NOARGS),
      DECLARE_METHOD(t_URL, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_URL, openStream, METH_NOARGS),
      DECLARE_METHOD(t_URL, sameFile, METH_O),
      DECLARE_METHOD(t_URL, toExternalForm, METH_NOARGS),
      DECLARE_METHOD(t_URL, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(URL)[] = {
      { Py_tp_methods, t_URL__methods_ },
      { Py_tp_init, (void *) t_URL_init_ },
      { Py_tp_getset, t_URL__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(URL)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(URL, t_URL, URL);

    void t_URL::install(PyObject *module)
    {
      installType(&PY_TYPE(URL), &PY_TYPE_DEF(URL), module, "URL", 0);
    }

    void t_URL::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "class_", make_descriptor(URL::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "wrapfn_", make_descriptor(t_URL::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, URL::initializeClass, 1)))
        return NULL;
      return t_URL::wrap_Object(URL(((t_URL *) arg)->object.this$));
    }
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, URL::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = URL(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          URL a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ks", URL::initializeClass, &a0, &a1))
          {
            INT_CALL(object = URL(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = URL(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ssIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = URL(a0, a1, a2, a3));
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

    static PyObject *t_URL_equals(t_URL *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_URL_getAuthority(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAuthority());
      return j2p(result);
    }

    static PyObject *t_URL_getContent(t_URL *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getContent());
          return ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Class > a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "[K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = self->object.getContent(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getContent", args);
      return NULL;
    }

    static PyObject *t_URL_getDefaultPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getFile(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFile());
      return j2p(result);
    }

    static PyObject *t_URL_getHost(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getHost());
      return j2p(result);
    }

    static PyObject *t_URL_getPath(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_URL_getPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getProtocol(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getProtocol());
      return j2p(result);
    }

    static PyObject *t_URL_getQuery(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getQuery());
      return j2p(result);
    }

    static PyObject *t_URL_getRef(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getRef());
      return j2p(result);
    }

    static PyObject *t_URL_getUserInfo(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getUserInfo());
      return j2p(result);
    }

    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_URL_openStream(t_URL *self)
    {
      ::java::io::InputStream result((jobject) NULL);
      OBJ_CALL(result = self->object.openStream());
      return ::java::io::t_InputStream::wrap_Object(result);
    }

    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg)
    {
      URL a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", URL::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.sameFile(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "sameFile", arg);
      return NULL;
    }

    static PyObject *t_URL_toExternalForm(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toExternalForm());
      return j2p(result);
    }

    static PyObject *t_URL_toString(t_URL *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_URL_get__authority(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAuthority());
      return j2p(value);
    }

    static PyObject *t_URL_get__content(t_URL *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getContent());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__file(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFile());
      return j2p(value);
    }

    static PyObject *t_URL_get__host(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getHost());
      return j2p(value);
    }

    static PyObject *t_URL_get__path(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static PyObject *t_URL_get__port(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__protocol(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getProtocol());
      return j2p(value);
    }

    static PyObject *t_URL_get__query(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getQuery());
      return j2p(value);
    }

    static PyObject *t_URL_get__ref(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getRef());
      return j2p(value);
    }

    static PyObject *t_URL_get__userInfo(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getUserInfo());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Map::class$ = NULL;
    jmethodID *Map::mids$ = NULL;
    bool Map::live$ = false;

    jclass Map::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Map");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_copyOf_1219d2729927aa1d] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_entry_36adb9ab5a7c355a] = env->getStaticMethodID(cls, "entry", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_entrySet_7e8f11dd23d1142c] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_5804c890f94a02b6] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_2329cf24e33e570d] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_7e8f11dd23d1142c] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_of_810bed48fafb0b9a] = env->getStaticMethodID(cls, "of", "()Ljava/util/Map;");
        mids$[mid_of_dc0b43c0c4f53fdb] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_a2c331f5e0732b51] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_c2742e4003620972] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_8edfe967fb5c72ec] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_9c96fdfd3457d799] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_3e79769dbff41dbc] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_9c53791d1b7b3e79] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_d9f0867ac977a8eb] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_3850697a43b7038a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_f73d9f07ec861495] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_ofEntries_b1792a9df91f3b51] = env->getStaticMethodID(cls, "ofEntries", "([Ljava/util/Map$Entry;)Ljava/util/Map;");
        mids$[mid_put_2329cf24e33e570d] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6648520b18d8ef1d] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_2329cf24e33e570d] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5804c890f94a02b6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_b13624253707cc45] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_2329cf24e33e570d] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9e90e99288cb1520] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_cb666ea1a15f5210] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Map::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    jboolean Map::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Map::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_460c5e2d9d51c6cc], a0.this$);
    }

    Map Map::copyOf(const Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_copyOf_1219d2729927aa1d], a0.this$));
    }

    ::java::util::Map$Entry Map::entry(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map$Entry(env->callStaticObjectMethod(cls, mids$[mid_entry_36adb9ab5a7c355a], a0.this$, a1.this$));
    }

    ::java::util::Set Map::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_7e8f11dd23d1142c]));
    }

    jboolean Map::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Map::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5804c890f94a02b6], a0.this$));
    }

    ::java::lang::Object Map::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_2329cf24e33e570d], a0.this$, a1.this$));
    }

    jint Map::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean Map::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Set Map::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_7e8f11dd23d1142c]));
    }

    Map Map::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_810bed48fafb0b9a]));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_dc0b43c0c4f53fdb], a0.this$, a1.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_a2c331f5e0732b51], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_c2742e4003620972], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_8edfe967fb5c72ec], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_9c96fdfd3457d799], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_3e79769dbff41dbc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_9c53791d1b7b3e79], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_d9f0867ac977a8eb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_3850697a43b7038a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17, const ::java::lang::Object & a18, const ::java::lang::Object & a19)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_f73d9f07ec861495], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$));
    }

    Map Map::ofEntries(const JArray< ::java::util::Map$Entry > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_ofEntries_b1792a9df91f3b51], a0.this$));
    }

    ::java::lang::Object Map::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_2329cf24e33e570d], a0.this$, a1.this$));
    }

    void Map::putAll(const Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6648520b18d8ef1d], a0.this$);
    }

    ::java::lang::Object Map::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_2329cf24e33e570d], a0.this$, a1.this$));
    }

    ::java::lang::Object Map::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_5804c890f94a02b6], a0.this$));
    }

    jboolean Map::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_b13624253707cc45], a0.this$, a1.this$);
    }

    ::java::lang::Object Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_2329cf24e33e570d], a0.this$, a1.this$));
    }

    jboolean Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9e90e99288cb1520], a0.this$, a1.this$, a2.this$);
    }

    jint Map::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::util::Collection Map::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cb666ea1a15f5210]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_of_(t_Map *self, PyObject *args);
    static PyObject *t_Map_clear(t_Map *self);
    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg);
    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg);
    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_entrySet(t_Map *self);
    static PyObject *t_Map_equals(t_Map *self, PyObject *args);
    static PyObject *t_Map_get(t_Map *self, PyObject *arg);
    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args);
    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args);
    static PyObject *t_Map_isEmpty(t_Map *self);
    static PyObject *t_Map_keySet(t_Map *self);
    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_put(t_Map *self, PyObject *args);
    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg);
    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args);
    static PyObject *t_Map_remove(t_Map *self, PyObject *args);
    static PyObject *t_Map_replace(t_Map *self, PyObject *args);
    static PyObject *t_Map_size(t_Map *self);
    static PyObject *t_Map_values(t_Map *self);
    static PyObject *t_Map_get__empty(t_Map *self, void *data);
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data);
    static PyGetSetDef t_Map__fields_[] = {
      DECLARE_GET_FIELD(t_Map, empty),
      DECLARE_GET_FIELD(t_Map, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Map__methods_[] = {
      DECLARE_METHOD(t_Map, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, of_, METH_VARARGS),
      DECLARE_METHOD(t_Map, clear, METH_NOARGS),
      DECLARE_METHOD(t_Map, containsKey, METH_O),
      DECLARE_METHOD(t_Map, containsValue, METH_O),
      DECLARE_METHOD(t_Map, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, entry, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, equals, METH_VARARGS),
      DECLARE_METHOD(t_Map, get, METH_O),
      DECLARE_METHOD(t_Map, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Map, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Map, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Map, keySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, ofEntries, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, put, METH_VARARGS),
      DECLARE_METHOD(t_Map, putAll, METH_O),
      DECLARE_METHOD(t_Map, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Map, remove, METH_VARARGS),
      DECLARE_METHOD(t_Map, replace, METH_VARARGS),
      DECLARE_METHOD(t_Map, size, METH_NOARGS),
      DECLARE_METHOD(t_Map, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Map)[] = {
      { Py_tp_methods, t_Map__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Map__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Map)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Map, t_Map, Map);
    PyObject *t_Map::wrap_Object(const Map& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Map::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Map::install(PyObject *module)
    {
      installType(&PY_TYPE(Map), &PY_TYPE_DEF(Map), module, "Map", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "Entry", make_descriptor(&PY_TYPE_DEF(Map$Entry)));
    }

    void t_Map::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "class_", make_descriptor(Map::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "wrapfn_", make_descriptor(t_Map::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Map::initializeClass, 1)))
        return NULL;
      return t_Map::wrap_Object(Map(((t_Map *) arg)->object.this$));
    }
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Map::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Map_of_(t_Map *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Map_clear(t_Map *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::copyOf(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Map::entry(a0, a1));
        return ::java::util::t_Map$Entry::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "entry", args);
      return NULL;
    }

    static PyObject *t_Map_entrySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Map_equals(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Map_get(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getOrDefault", args);
      return NULL;
    }

    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Map_isEmpty(t_Map *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Map_keySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Map result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map::of());
          return t_Map::wrap_Object(result);
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 12:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 14:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 16:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 18:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 20:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          ::java::lang::Object a18((jobject) NULL);
          ::java::lang::Object a19((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19));
            return t_Map::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::util::Map$Entry > a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "[K", ::java::util::Map$Entry::initializeClass, &a0, &p0, ::java::util::t_Map$Entry::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::ofEntries(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "ofEntries", arg);
      return NULL;
    }

    static PyObject *t_Map_put(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "putIfAbsent", args);
      return NULL;
    }

    static PyObject *t_Map_remove(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remove", args);
      return NULL;
    }

    static PyObject *t_Map_replace(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_Map_size(t_Map *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Map_values(t_Map *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Map_get__empty(t_Map *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
