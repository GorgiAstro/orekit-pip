#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EulerIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerIntegrator::class$ = NULL;
        jmethodID *EulerIntegrator::mids$ = NULL;
        bool EulerIntegrator::live$ = false;

        jclass EulerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_2a06dcdb9833144e] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegrator::EulerIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        JArray< JArray< jdouble > > EulerIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > EulerIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > EulerIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
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
        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data);
        static PyGetSetDef t_EulerIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerIntegrator, a),
          DECLARE_GET_FIELD(t_EulerIntegrator, b),
          DECLARE_GET_FIELD(t_EulerIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegrator)[] = {
          { Py_tp_methods, t_EulerIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerIntegrator_init_ },
          { Py_tp_getset, t_EulerIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerIntegrator, t_EulerIntegrator, EulerIntegrator);

        void t_EulerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegrator), &PY_TYPE_DEF(EulerIntegrator), module, "EulerIntegrator", 0);
        }

        void t_EulerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "class_", make_descriptor(EulerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "wrapfn_", make_descriptor(t_EulerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerIntegrator::wrap_Object(EulerIntegrator(((t_EulerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/GatheringSubscriber.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GatheringSubscriber::class$ = NULL;
          jmethodID *GatheringSubscriber::mids$ = NULL;
          bool GatheringSubscriber::live$ = false;

          jclass GatheringSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GatheringSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getGeneratedMeasurements_917725130bbb61f1] = env->getMethodID(cls, "getGeneratedMeasurements", "()Ljava/util/SortedSet;");
              mids$[mid_handleGeneratedMeasurement_558d7f8249b8a2bc] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GatheringSubscriber::GatheringSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::java::util::SortedSet GatheringSubscriber::getGeneratedMeasurements() const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getGeneratedMeasurements_917725130bbb61f1]));
          }

          void GatheringSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_558d7f8249b8a2bc], a0.this$);
          }

          void GatheringSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_a9e71d848b81c8f8], a0.this$, a1.this$);
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
          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self);
          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg);
          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args);
          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data);
          static PyGetSetDef t_GatheringSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_GatheringSubscriber, generatedMeasurements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GatheringSubscriber__methods_[] = {
            DECLARE_METHOD(t_GatheringSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, getGeneratedMeasurements, METH_NOARGS),
            DECLARE_METHOD(t_GatheringSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GatheringSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GatheringSubscriber)[] = {
            { Py_tp_methods, t_GatheringSubscriber__methods_ },
            { Py_tp_init, (void *) t_GatheringSubscriber_init_ },
            { Py_tp_getset, t_GatheringSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GatheringSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GatheringSubscriber, t_GatheringSubscriber, GatheringSubscriber);

          void t_GatheringSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GatheringSubscriber), &PY_TYPE_DEF(GatheringSubscriber), module, "GatheringSubscriber", 0);
          }

          void t_GatheringSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "class_", make_descriptor(GatheringSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "wrapfn_", make_descriptor(t_GatheringSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GatheringSubscriber::initializeClass, 1)))
              return NULL;
            return t_GatheringSubscriber::wrap_Object(GatheringSubscriber(((t_GatheringSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GatheringSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds)
          {
            GatheringSubscriber object((jobject) NULL);

            INT_CALL(object = GatheringSubscriber());
            self->object = object;

            return 0;
          }

          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self)
          {
            ::java::util::SortedSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(result);
          }

          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data)
          {
            ::java::util::SortedSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodies::class$ = NULL;
      jmethodID *CelestialBodies::mids$ = NULL;
      bool CelestialBodies::live$ = false;

      jclass CelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBody_68e48076ef831536] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_624686a38a6b107c] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_624686a38a6b107c] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_624686a38a6b107c] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_624686a38a6b107c] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_624686a38a6b107c] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_624686a38a6b107c] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_624686a38a6b107c] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_624686a38a6b107c] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_624686a38a6b107c] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_624686a38a6b107c] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_624686a38a6b107c] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_624686a38a6b107c] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_624686a38a6b107c] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_68e48076ef831536], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_624686a38a6b107c]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_624686a38a6b107c]));
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
      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg);
      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data);
      static PyGetSetDef t_CelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodies, earth),
        DECLARE_GET_FIELD(t_CelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodies, mars),
        DECLARE_GET_FIELD(t_CelestialBodies, mercury),
        DECLARE_GET_FIELD(t_CelestialBodies, moon),
        DECLARE_GET_FIELD(t_CelestialBodies, neptune),
        DECLARE_GET_FIELD(t_CelestialBodies, pluto),
        DECLARE_GET_FIELD(t_CelestialBodies, saturn),
        DECLARE_GET_FIELD(t_CelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, sun),
        DECLARE_GET_FIELD(t_CelestialBodies, uranus),
        DECLARE_GET_FIELD(t_CelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodies__methods_[] = {
        DECLARE_METHOD(t_CelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_CelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodies)[] = {
        { Py_tp_methods, t_CelestialBodies__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodies, t_CelestialBodies, CelestialBodies);

      void t_CelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodies), &PY_TYPE_DEF(CelestialBodies), module, "CelestialBodies", 0);
      }

      void t_CelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "class_", make_descriptor(CelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "wrapfn_", make_descriptor(t_CelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodies::initializeClass, 1)))
          return NULL;
        return t_CelestialBodies::wrap_Object(CelestialBodies(((t_CelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPFitter.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFitter::class$ = NULL;
      jmethodID *EOPFitter::mids$ = NULL;
      bool EOPFitter::live$ = false;

      jclass EOPFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9d9d8b033335b2a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;)V");
          mids$[mid_fit_d67ac77b872f998f] = env->getMethodID(cls, "fit", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/frames/EOPFittedModel;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFitter::EOPFitter(const ::org::orekit::frames::SingleParameterFitter & a0, const ::org::orekit::frames::SingleParameterFitter & a1, const ::org::orekit::frames::SingleParameterFitter & a2, const ::org::orekit::frames::SingleParameterFitter & a3, const ::org::orekit::frames::SingleParameterFitter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9d9d8b033335b2a2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::frames::EOPFittedModel EOPFitter::fit(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::frames::EOPFittedModel(env->callObjectMethod(this$, mids$[mid_fit_d67ac77b872f998f], a0.this$));
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
      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg);

      static PyMethodDef t_EOPFitter__methods_[] = {
        DECLARE_METHOD(t_EOPFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFitter)[] = {
        { Py_tp_methods, t_EOPFitter__methods_ },
        { Py_tp_init, (void *) t_EOPFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFitter, t_EOPFitter, EOPFitter);

      void t_EOPFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFitter), &PY_TYPE_DEF(EOPFitter), module, "EOPFitter", 0);
      }

      void t_EOPFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "class_", make_descriptor(EOPFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "wrapfn_", make_descriptor(t_EOPFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFitter::initializeClass, 1)))
          return NULL;
        return t_EOPFitter::wrap_Object(EOPFitter(((t_EOPFitter *) arg)->object.this$));
      }
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::SingleParameterFitter a0((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a1((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a2((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a3((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a4((jobject) NULL);
        EOPFitter object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::frames::EOPFittedModel result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return ::org::orekit::frames::t_EOPFittedModel::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeCrossingDetector::class$ = NULL;
        jmethodID *LatitudeCrossingDetector::mids$ = NULL;
        bool LatitudeCrossingDetector::live$ = false;

        jclass LatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_48cd945bba9df75e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_a82b63c30b8dcbca] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_000d48aad6c74b0a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_dff5885c2c873297] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_49ba91fe06c9760f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeCrossingDetector::LatitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_48cd945bba9df75e, a0.this$, a1)) {}

        LatitudeCrossingDetector::LatitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a82b63c30b8dcbca, a0, a1, a2.this$, a3)) {}

        jdouble LatitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_000d48aad6c74b0a]));
        }

        jdouble LatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_dff5885c2c873297]);
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
        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args);
        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeCrossingDetector, t_LatitudeCrossingDetector, LatitudeCrossingDetector);
        PyObject *t_LatitudeCrossingDetector::wrap_Object(const LatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeCrossingDetector), &PY_TYPE_DEF(LatitudeCrossingDetector), module, "LatitudeCrossingDetector", 0);
        }

        void t_LatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "class_", make_descriptor(LatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "wrapfn_", make_descriptor(t_LatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeCrossingDetector::wrap_Object(LatitudeCrossingDetector(((t_LatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
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

        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesPhaseBuilder::class$ = NULL;
          jmethodID *InterSatellitesPhaseBuilder::mids$ = NULL;
          bool InterSatellitesPhaseBuilder::live$ = false;

          jclass InterSatellitesPhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_afc43a1ff8540c81] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;DDD)V");
              mids$[mid_build_85ffc4361f7cd885] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesPhase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseBuilder::InterSatellitesPhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jdouble a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_afc43a1ff8540c81, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase InterSatellitesPhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase(env->callObjectMethod(this$, mids$[mid_build_85ffc4361f7cd885], a0.this$, a1.this$));
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
          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseBuilder, t_InterSatellitesPhaseBuilder, InterSatellitesPhaseBuilder);
          PyObject *t_InterSatellitesPhaseBuilder::wrap_Object(const InterSatellitesPhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhaseBuilder *self = (t_InterSatellitesPhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseBuilder), &PY_TYPE_DEF(InterSatellitesPhaseBuilder), module, "InterSatellitesPhaseBuilder", 0);
          }

          void t_InterSatellitesPhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "class_", make_descriptor(InterSatellitesPhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "wrapfn_", make_descriptor(t_InterSatellitesPhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseBuilder::wrap_Object(InterSatellitesPhaseBuilder(((t_InterSatellitesPhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_of_(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhaseBuilder_init_(t_InterSatellitesPhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesPhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesPhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseBuilder_build(t_InterSatellitesPhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::InterSatellitesPhase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesPhase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesPhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesPhaseBuilder_get__parameters_(t_InterSatellitesPhaseBuilder *self, void *data)
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
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthShape::class$ = NULL;
        jmethodID *EarthShape::mids$ = NULL;
        bool EarthShape::live$ = false;

        jclass EarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEllipsoid_eead5b864957d48b] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::ReferenceEllipsoid EarthShape::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_eead5b864957d48b]));
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
        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self);
        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data);
        static PyGetSetDef t_EarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_EarthShape, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthShape__methods_[] = {
          DECLARE_METHOD(t_EarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, getEllipsoid, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthShape)[] = {
          { Py_tp_methods, t_EarthShape__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthShape)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::BodyShape),
          NULL
        };

        DEFINE_TYPE(EarthShape, t_EarthShape, EarthShape);

        void t_EarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthShape), &PY_TYPE_DEF(EarthShape), module, "EarthShape", 0);
        }

        void t_EarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "class_", make_descriptor(EarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "wrapfn_", make_descriptor(t_EarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthShape::initializeClass, 1)))
            return NULL;
          return t_EarthShape::wrap_Object(EarthShape(((t_EarthShape *) arg)->object.this$));
        }
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldTheta::class$ = NULL;
          jmethodID *FieldTheta::mids$ = NULL;
          bool FieldTheta::live$ = false;

          jclass FieldTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_eba8e72a22c984ac] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta2_eba8e72a22c984ac] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta3_eba8e72a22c984ac] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta4_eba8e72a22c984ac] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta1_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta2_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta3_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta4() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta4_eba8e72a22c984ac]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args);
          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self);
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data);
          static PyGetSetDef t_FieldTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTheta__methods_[] = {
            DECLARE_METHOD(t_FieldTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTheta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTheta)[] = {
            { Py_tp_methods, t_FieldTheta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTheta, t_FieldTheta, FieldTheta);
          PyObject *t_FieldTheta::wrap_Object(const FieldTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTheta), &PY_TYPE_DEF(FieldTheta), module, "FieldTheta", 0);
          }

          void t_FieldTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "class_", make_descriptor(FieldTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "wrapfn_", make_descriptor(t_FieldTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTheta::initializeClass, 1)))
              return NULL;
            return t_FieldTheta::wrap_Object(FieldTheta(((t_FieldTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data)
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
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {

          ::java::lang::Class *RinexFileType::class$ = NULL;
          jmethodID *RinexFileType::mids$ = NULL;
          bool RinexFileType::live$ = false;
          RinexFileType *RinexFileType::NAVIGATION = NULL;
          RinexFileType *RinexFileType::OBSERVATION = NULL;

          jclass RinexFileType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/RinexFileType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseRinexFileType_1ed01b18f4a5c98e] = env->getStaticMethodID(cls, "parseRinexFileType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_valueOf_1ed01b18f4a5c98e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_values_f7aae3d0a36f9141] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/utils/RinexFileType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NAVIGATION = new RinexFileType(env->getStaticObjectField(cls, "NAVIGATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              OBSERVATION = new RinexFileType(env->getStaticObjectField(cls, "OBSERVATION", "Lorg/orekit/files/rinex/utils/RinexFileType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexFileType RinexFileType::parseRinexFileType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_parseRinexFileType_1ed01b18f4a5c98e], a0.this$));
          }

          RinexFileType RinexFileType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexFileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1ed01b18f4a5c98e], a0.this$));
          }

          JArray< RinexFileType > RinexFileType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexFileType >(env->callStaticObjectMethod(cls, mids$[mid_values_f7aae3d0a36f9141]));
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
      namespace rinex {
        namespace utils {
          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args);
          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexFileType_values(PyTypeObject *type);
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data);
          static PyGetSetDef t_RinexFileType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexFileType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexFileType__methods_[] = {
            DECLARE_METHOD(t_RinexFileType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexFileType, parseRinexFileType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexFileType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexFileType)[] = {
            { Py_tp_methods, t_RinexFileType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexFileType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexFileType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexFileType, t_RinexFileType, RinexFileType);
          PyObject *t_RinexFileType::wrap_Object(const RinexFileType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexFileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexFileType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexFileType *self = (t_RinexFileType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexFileType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexFileType), &PY_TYPE_DEF(RinexFileType), module, "RinexFileType", 0);
          }

          void t_RinexFileType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "class_", make_descriptor(RinexFileType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "wrapfn_", make_descriptor(t_RinexFileType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexFileType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "NAVIGATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::NAVIGATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFileType), "OBSERVATION", make_descriptor(t_RinexFileType::wrap_Object(*RinexFileType::OBSERVATION)));
          }

          static PyObject *t_RinexFileType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexFileType::initializeClass, 1)))
              return NULL;
            return t_RinexFileType::wrap_Object(RinexFileType(((t_RinexFileType *) arg)->object.this$));
          }
          static PyObject *t_RinexFileType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexFileType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexFileType_of_(t_RinexFileType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexFileType_parseRinexFileType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::parseRinexFileType(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseRinexFileType", arg);
            return NULL;
          }

          static PyObject *t_RinexFileType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexFileType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::valueOf(a0));
              return t_RinexFileType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexFileType_values(PyTypeObject *type)
          {
            JArray< RinexFileType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::utils::RinexFileType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexFileType::wrap_jobject);
          }
          static PyObject *t_RinexFileType_get__parameters_(t_RinexFileType *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/TLEConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEConstants::class$ = NULL;
          jmethodID *TLEConstants::mids$ = NULL;
          bool TLEConstants::live$ = false;
          jdouble TLEConstants::A3OVK2 = (jdouble) 0;
          jdouble TLEConstants::C1L = (jdouble) 0;
          jdouble TLEConstants::C1SS = (jdouble) 0;
          jdouble TLEConstants::CK2 = (jdouble) 0;
          jdouble TLEConstants::CK4 = (jdouble) 0;
          jdouble TLEConstants::C_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::C_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::C_FASX2 = (jdouble) 0;
          jdouble TLEConstants::C_G22 = (jdouble) 0;
          jdouble TLEConstants::C_G32 = (jdouble) 0;
          jdouble TLEConstants::C_G44 = (jdouble) 0;
          jdouble TLEConstants::C_G52 = (jdouble) 0;
          jdouble TLEConstants::C_G54 = (jdouble) 0;
          jdouble TLEConstants::EARTH_RADIUS = (jdouble) 0;
          jdouble TLEConstants::MINUTES_PER_DAY = (jdouble) 0;
          jdouble TLEConstants::MU = (jdouble) 0;
          jdouble TLEConstants::NORMALIZED_EQUATORIAL_RADIUS = (jdouble) 0;
          jdouble TLEConstants::ONE_THIRD = (jdouble) 0;
          jdouble TLEConstants::Q22 = (jdouble) 0;
          jdouble TLEConstants::Q31 = (jdouble) 0;
          jdouble TLEConstants::Q33 = (jdouble) 0;
          jdouble TLEConstants::QOMS2T = (jdouble) 0;
          jdouble TLEConstants::ROOT22 = (jdouble) 0;
          jdouble TLEConstants::ROOT32 = (jdouble) 0;
          jdouble TLEConstants::ROOT44 = (jdouble) 0;
          jdouble TLEConstants::ROOT52 = (jdouble) 0;
          jdouble TLEConstants::ROOT54 = (jdouble) 0;
          jdouble TLEConstants::S = (jdouble) 0;
          jdouble TLEConstants::S_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::S_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::S_FASX2 = (jdouble) 0;
          jdouble TLEConstants::S_G22 = (jdouble) 0;
          jdouble TLEConstants::S_G32 = (jdouble) 0;
          jdouble TLEConstants::S_G44 = (jdouble) 0;
          jdouble TLEConstants::S_G52 = (jdouble) 0;
          jdouble TLEConstants::S_G54 = (jdouble) 0;
          jdouble TLEConstants::THDT = (jdouble) 0;
          jdouble TLEConstants::TWO_THIRD = (jdouble) 0;
          jdouble TLEConstants::XJ2 = (jdouble) 0;
          jdouble TLEConstants::XJ3 = (jdouble) 0;
          jdouble TLEConstants::XJ4 = (jdouble) 0;
          jdouble TLEConstants::XKE = (jdouble) 0;
          jdouble TLEConstants::ZEL = (jdouble) 0;
          jdouble TLEConstants::ZES = (jdouble) 0;
          jdouble TLEConstants::ZNL = (jdouble) 0;
          jdouble TLEConstants::ZNS = (jdouble) 0;

          jclass TLEConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEConstants");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A3OVK2 = env->getStaticDoubleField(cls, "A3OVK2");
              C1L = env->getStaticDoubleField(cls, "C1L");
              C1SS = env->getStaticDoubleField(cls, "C1SS");
              CK2 = env->getStaticDoubleField(cls, "CK2");
              CK4 = env->getStaticDoubleField(cls, "CK4");
              C_2FASX4 = env->getStaticDoubleField(cls, "C_2FASX4");
              C_3FASX6 = env->getStaticDoubleField(cls, "C_3FASX6");
              C_FASX2 = env->getStaticDoubleField(cls, "C_FASX2");
              C_G22 = env->getStaticDoubleField(cls, "C_G22");
              C_G32 = env->getStaticDoubleField(cls, "C_G32");
              C_G44 = env->getStaticDoubleField(cls, "C_G44");
              C_G52 = env->getStaticDoubleField(cls, "C_G52");
              C_G54 = env->getStaticDoubleField(cls, "C_G54");
              EARTH_RADIUS = env->getStaticDoubleField(cls, "EARTH_RADIUS");
              MINUTES_PER_DAY = env->getStaticDoubleField(cls, "MINUTES_PER_DAY");
              MU = env->getStaticDoubleField(cls, "MU");
              NORMALIZED_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "NORMALIZED_EQUATORIAL_RADIUS");
              ONE_THIRD = env->getStaticDoubleField(cls, "ONE_THIRD");
              Q22 = env->getStaticDoubleField(cls, "Q22");
              Q31 = env->getStaticDoubleField(cls, "Q31");
              Q33 = env->getStaticDoubleField(cls, "Q33");
              QOMS2T = env->getStaticDoubleField(cls, "QOMS2T");
              ROOT22 = env->getStaticDoubleField(cls, "ROOT22");
              ROOT32 = env->getStaticDoubleField(cls, "ROOT32");
              ROOT44 = env->getStaticDoubleField(cls, "ROOT44");
              ROOT52 = env->getStaticDoubleField(cls, "ROOT52");
              ROOT54 = env->getStaticDoubleField(cls, "ROOT54");
              S = env->getStaticDoubleField(cls, "S");
              S_2FASX4 = env->getStaticDoubleField(cls, "S_2FASX4");
              S_3FASX6 = env->getStaticDoubleField(cls, "S_3FASX6");
              S_FASX2 = env->getStaticDoubleField(cls, "S_FASX2");
              S_G22 = env->getStaticDoubleField(cls, "S_G22");
              S_G32 = env->getStaticDoubleField(cls, "S_G32");
              S_G44 = env->getStaticDoubleField(cls, "S_G44");
              S_G52 = env->getStaticDoubleField(cls, "S_G52");
              S_G54 = env->getStaticDoubleField(cls, "S_G54");
              THDT = env->getStaticDoubleField(cls, "THDT");
              TWO_THIRD = env->getStaticDoubleField(cls, "TWO_THIRD");
              XJ2 = env->getStaticDoubleField(cls, "XJ2");
              XJ3 = env->getStaticDoubleField(cls, "XJ3");
              XJ4 = env->getStaticDoubleField(cls, "XJ4");
              XKE = env->getStaticDoubleField(cls, "XKE");
              ZEL = env->getStaticDoubleField(cls, "ZEL");
              ZES = env->getStaticDoubleField(cls, "ZES");
              ZNL = env->getStaticDoubleField(cls, "ZNL");
              ZNS = env->getStaticDoubleField(cls, "ZNS");
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_TLEConstants__methods_[] = {
            DECLARE_METHOD(t_TLEConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEConstants, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEConstants)[] = {
            { Py_tp_methods, t_TLEConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLEConstants, t_TLEConstants, TLEConstants);

          void t_TLEConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEConstants), &PY_TYPE_DEF(TLEConstants), module, "TLEConstants", 0);
          }

          void t_TLEConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "class_", make_descriptor(TLEConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "wrapfn_", make_descriptor(t_TLEConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLEConstants::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "A3OVK2", make_descriptor(TLEConstants::A3OVK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1L", make_descriptor(TLEConstants::C1L));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1SS", make_descriptor(TLEConstants::C1SS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK2", make_descriptor(TLEConstants::CK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK4", make_descriptor(TLEConstants::CK4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_2FASX4", make_descriptor(TLEConstants::C_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_3FASX6", make_descriptor(TLEConstants::C_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_FASX2", make_descriptor(TLEConstants::C_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G22", make_descriptor(TLEConstants::C_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G32", make_descriptor(TLEConstants::C_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G44", make_descriptor(TLEConstants::C_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G52", make_descriptor(TLEConstants::C_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G54", make_descriptor(TLEConstants::C_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "EARTH_RADIUS", make_descriptor(TLEConstants::EARTH_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MINUTES_PER_DAY", make_descriptor(TLEConstants::MINUTES_PER_DAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MU", make_descriptor(TLEConstants::MU));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "NORMALIZED_EQUATORIAL_RADIUS", make_descriptor(TLEConstants::NORMALIZED_EQUATORIAL_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ONE_THIRD", make_descriptor(TLEConstants::ONE_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q22", make_descriptor(TLEConstants::Q22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q31", make_descriptor(TLEConstants::Q31));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q33", make_descriptor(TLEConstants::Q33));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "QOMS2T", make_descriptor(TLEConstants::QOMS2T));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT22", make_descriptor(TLEConstants::ROOT22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT32", make_descriptor(TLEConstants::ROOT32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT44", make_descriptor(TLEConstants::ROOT44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT52", make_descriptor(TLEConstants::ROOT52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT54", make_descriptor(TLEConstants::ROOT54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S", make_descriptor(TLEConstants::S));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_2FASX4", make_descriptor(TLEConstants::S_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_3FASX6", make_descriptor(TLEConstants::S_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_FASX2", make_descriptor(TLEConstants::S_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G22", make_descriptor(TLEConstants::S_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G32", make_descriptor(TLEConstants::S_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G44", make_descriptor(TLEConstants::S_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G52", make_descriptor(TLEConstants::S_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G54", make_descriptor(TLEConstants::S_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "THDT", make_descriptor(TLEConstants::THDT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "TWO_THIRD", make_descriptor(TLEConstants::TWO_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ2", make_descriptor(TLEConstants::XJ2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ3", make_descriptor(TLEConstants::XJ3));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ4", make_descriptor(TLEConstants::XJ4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XKE", make_descriptor(TLEConstants::XKE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZEL", make_descriptor(TLEConstants::ZEL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZES", make_descriptor(TLEConstants::ZES));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNL", make_descriptor(TLEConstants::ZNL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNS", make_descriptor(TLEConstants::ZNS));
          }

          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEConstants::initializeClass, 1)))
              return NULL;
            return t_TLEConstants::wrap_Object(TLEConstants(((t_TLEConstants *) arg)->object.this$));
          }
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEConstants::initializeClass, 0))
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
            mids$[mid_init$_7fc09ec54f0c2c65] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;)V");
            mids$[mid_init$_93f03c613a5bd189] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_init$_edb30f98cbc69717] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Ljava/lang/String;Z)V");
            mids$[mid_getLowerLimit_eba8e72a22c984ac] = env->getMethodID(cls, "getLowerLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getProbabilityOfCollisionMethodName_11b109bd155ca898] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_eba8e72a22c984ac] = env->getMethodID(cls, "getUpperLimit", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_eba8e72a22c984ac] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_isMaxProbability_b108b35ef48e27bd] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7fc09ec54f0c2c65, a0.this$, a1.this$)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_93f03c613a5bd189, a0.this$, a1.this$, a2)) {}

        FieldProbabilityOfCollision::FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edb30f98cbc69717, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getLowerLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLowerLimit_eba8e72a22c984ac]));
        }

        ::java::lang::String FieldProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_11b109bd155ca898]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getUpperLimit() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUpperLimit_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement FieldProbabilityOfCollision::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_eba8e72a22c984ac]));
        }

        jboolean FieldProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_b108b35ef48e27bd]);
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/Enum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumConsumer::mids$ = NULL;
            bool ParseToken$EnumConsumer::live$ = false;

            jclass ParseToken$EnumConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_f248cf346085f11b] = env->getMethodID(cls, "accept", "(Ljava/lang/Enum;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumConsumer::accept(const ::java::lang::Enum & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_f248cf346085f11b], a0.this$);
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
            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumConsumer, t_ParseToken$EnumConsumer, ParseToken$EnumConsumer);
            PyObject *t_ParseToken$EnumConsumer::wrap_Object(const ParseToken$EnumConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumConsumer), &PY_TYPE_DEF(ParseToken$EnumConsumer), module, "ParseToken$EnumConsumer", 0);
            }

            void t_ParseToken$EnumConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "class_", make_descriptor(ParseToken$EnumConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumConsumer::wrap_Object(ParseToken$EnumConsumer(((t_ParseToken$EnumConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data)
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
#include "org/orekit/frames/PythonLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonLOF::class$ = NULL;
      jmethodID *PythonLOF::mids$ = NULL;
      bool PythonLOF::live$ = false;

      jclass PythonLOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonLOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_rotationFromInertial_475182fd71c6851b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_076f35c1feeb36b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLOF::PythonLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonLOF::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonLOF::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonLOF::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self);
      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args);
      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data);
      static PyGetSetDef t_PythonLOF__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLOF, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLOF__methods_[] = {
        DECLARE_METHOD(t_PythonLOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLOF, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLOF)[] = {
        { Py_tp_methods, t_PythonLOF__methods_ },
        { Py_tp_init, (void *) t_PythonLOF_init_ },
        { Py_tp_getset, t_PythonLOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLOF, t_PythonLOF, PythonLOF);

      void t_PythonLOF::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLOF), &PY_TYPE_DEF(PythonLOF), module, "PythonLOF", 1);
      }

      void t_PythonLOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "class_", make_descriptor(PythonLOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "wrapfn_", make_descriptor(t_PythonLOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLOF::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonLOF_getName0 },
          { "pythonDecRef", "()V", (void *) t_PythonLOF_pythonDecRef1 },
          { "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonLOF_rotationFromInertial2 },
          { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonLOF_rotationFromInertial3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLOF::initializeClass, 1)))
          return NULL;
        return t_PythonLOF::wrap_Object(PythonLOF(((t_PythonLOF *) arg)->object.this$));
      }
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds)
      {
        PythonLOF object((jobject) NULL);

        INT_CALL(object = PythonLOF());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args)
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

      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data)
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
#include "org/hipparchus/distribution/continuous/LaplaceDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LaplaceDistribution::class$ = NULL;
        jmethodID *LaplaceDistribution::mids$ = NULL;
        bool LaplaceDistribution::live$ = false;

        jclass LaplaceDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LaplaceDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_dff5885c2c873297] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaplaceDistribution::LaplaceDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble LaplaceDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble LaplaceDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble LaplaceDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_dff5885c2c873297]);
        }

        jdouble LaplaceDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble LaplaceDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble LaplaceDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble LaplaceDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble LaplaceDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble LaplaceDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean LaplaceDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
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
        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data);
        static PyGetSetDef t_LaplaceDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LaplaceDistribution, location),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LaplaceDistribution, scale),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaplaceDistribution__methods_[] = {
          DECLARE_METHOD(t_LaplaceDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaplaceDistribution)[] = {
          { Py_tp_methods, t_LaplaceDistribution__methods_ },
          { Py_tp_init, (void *) t_LaplaceDistribution_init_ },
          { Py_tp_getset, t_LaplaceDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaplaceDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LaplaceDistribution, t_LaplaceDistribution, LaplaceDistribution);

        void t_LaplaceDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LaplaceDistribution), &PY_TYPE_DEF(LaplaceDistribution), module, "LaplaceDistribution", 0);
        }

        void t_LaplaceDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "class_", make_descriptor(LaplaceDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "wrapfn_", make_descriptor(t_LaplaceDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaplaceDistribution::initializeClass, 1)))
            return NULL;
          return t_LaplaceDistribution::wrap_Object(LaplaceDistribution(((t_LaplaceDistribution *) arg)->object.this$));
        }
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaplaceDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LaplaceDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LaplaceDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmConstituent::class$ = NULL;
          jmethodID *NdmConstituent::mids$ = NULL;
          bool NdmConstituent::live$ = false;

          jclass NdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_60f9ded87ab7ca4c] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_0b7cf48ee6a922ee] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_0e1b4a5061fb71d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_setHeader_023fa04bd3c493a9] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ccsds/section/Header;)V");
              mids$[mid_setSegments_de3e021e7266b71e] = env->getMethodID(cls, "setSegments", "(Ljava/util/List;)V");
              mids$[mid_validate_0fa09c18fee449d5] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions NdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_60f9ded87ab7ca4c]));
          }

          ::org::orekit::data::DataContext NdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_0b7cf48ee6a922ee]));
          }

          ::org::orekit::files::ccsds::section::Header NdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_0e1b4a5061fb71d6]));
          }

          ::java::util::List NdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
          }

          void NdmConstituent::setHeader(const ::org::orekit::files::ccsds::section::Header & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHeader_023fa04bd3c493a9], a0.this$);
          }

          void NdmConstituent::setSegments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSegments_de3e021e7266b71e], a0.this$);
          }

          void NdmConstituent::validate() const
          {
            env->callVoidMethod(this$, mids$[mid_validate_0fa09c18fee449d5]);
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
          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args);
          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data);
          static PyGetSetDef t_NdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_NdmConstituent, conventions),
            DECLARE_GET_FIELD(t_NdmConstituent, dataContext),
            DECLARE_GETSET_FIELD(t_NdmConstituent, header),
            DECLARE_GETSET_FIELD(t_NdmConstituent, segments),
            DECLARE_GET_FIELD(t_NdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmConstituent__methods_[] = {
            DECLARE_METHOD(t_NdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmConstituent, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getHeader, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, setHeader, METH_O),
            DECLARE_METHOD(t_NdmConstituent, setSegments, METH_O),
            DECLARE_METHOD(t_NdmConstituent, validate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmConstituent)[] = {
            { Py_tp_methods, t_NdmConstituent__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmConstituent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmConstituent, t_NdmConstituent, NdmConstituent);
          PyObject *t_NdmConstituent::wrap_Object(const NdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_NdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_NdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmConstituent), &PY_TYPE_DEF(NdmConstituent), module, "NdmConstituent", 0);
          }

          void t_NdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "class_", make_descriptor(NdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "wrapfn_", make_descriptor(t_NdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmConstituent::initializeClass, 1)))
              return NULL;
            return t_NdmConstituent::wrap_Object(NdmConstituent(((t_NdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
            OBJ_CALL(result = self->object.getHeader());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
          }

          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setSegments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSegments", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self)
          {
            OBJ_CALL(self->object.validate());
            Py_RETURN_NONE;
          }
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            OBJ_CALL(value = self->object.getHeader());
            return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
          }
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                INT_CALL(self->object.setHeader(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "header", arg);
            return -1;
          }

          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setSegments(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "segments", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCategory::class$ = NULL;
              jmethodID *OrbitCategory::mids$ = NULL;
              bool OrbitCategory::live$ = false;
              OrbitCategory *OrbitCategory::EGO = NULL;
              OrbitCategory *OrbitCategory::ESO = NULL;
              OrbitCategory *OrbitCategory::GEO = NULL;
              OrbitCategory *OrbitCategory::GHO = NULL;
              OrbitCategory *OrbitCategory::GSO = NULL;
              OrbitCategory *OrbitCategory::GTO = NULL;
              OrbitCategory *OrbitCategory::HAO = NULL;
              OrbitCategory *OrbitCategory::HEO = NULL;
              OrbitCategory *OrbitCategory::IGO = NULL;
              OrbitCategory *OrbitCategory::LEO = NULL;
              OrbitCategory *OrbitCategory::LMO = NULL;
              OrbitCategory *OrbitCategory::MEO = NULL;
              OrbitCategory *OrbitCategory::MGO = NULL;
              OrbitCategory *OrbitCategory::NSO = NULL;
              OrbitCategory *OrbitCategory::UFO = NULL;

              jclass OrbitCategory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_10c7682884230d50] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_values_3a3282b8d9862ca3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EGO = new OrbitCategory(env->getStaticObjectField(cls, "EGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  ESO = new OrbitCategory(env->getStaticObjectField(cls, "ESO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GEO = new OrbitCategory(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GHO = new OrbitCategory(env->getStaticObjectField(cls, "GHO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GSO = new OrbitCategory(env->getStaticObjectField(cls, "GSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GTO = new OrbitCategory(env->getStaticObjectField(cls, "GTO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HAO = new OrbitCategory(env->getStaticObjectField(cls, "HAO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HEO = new OrbitCategory(env->getStaticObjectField(cls, "HEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  IGO = new OrbitCategory(env->getStaticObjectField(cls, "IGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LEO = new OrbitCategory(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LMO = new OrbitCategory(env->getStaticObjectField(cls, "LMO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MEO = new OrbitCategory(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MGO = new OrbitCategory(env->getStaticObjectField(cls, "MGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  NSO = new OrbitCategory(env->getStaticObjectField(cls, "NSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  UFO = new OrbitCategory(env->getStaticObjectField(cls, "UFO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OrbitCategory::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
              }

              OrbitCategory OrbitCategory::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCategory(env->callStaticObjectMethod(cls, mids$[mid_valueOf_10c7682884230d50], a0.this$));
              }

              JArray< OrbitCategory > OrbitCategory::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCategory >(env->callStaticObjectMethod(cls, mids$[mid_values_3a3282b8d9862ca3]));
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
              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCategory_values(PyTypeObject *type);
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data);
              static PyGetSetDef t_OrbitCategory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCategory, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCategory__methods_[] = {
                DECLARE_METHOD(t_OrbitCategory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCategory)[] = {
                { Py_tp_methods, t_OrbitCategory__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCategory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCategory)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCategory, t_OrbitCategory, OrbitCategory);
              PyObject *t_OrbitCategory::wrap_Object(const OrbitCategory& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCategory::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCategory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCategory), &PY_TYPE_DEF(OrbitCategory), module, "OrbitCategory", 0);
              }

              void t_OrbitCategory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "class_", make_descriptor(OrbitCategory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "wrapfn_", make_descriptor(t_OrbitCategory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCategory::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "EGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::EGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "ESO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::ESO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GHO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GHO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GTO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GTO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HAO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HAO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "IGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::IGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LMO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LMO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "NSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::NSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "UFO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::UFO)));
              }

              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCategory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCategory::wrap_Object(OrbitCategory(((t_OrbitCategory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCategory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitCategory), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCategory result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::valueOf(a0));
                  return t_OrbitCategory::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCategory_values(PyTypeObject *type)
              {
                JArray< OrbitCategory > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCategory::wrap_jobject);
              }
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data)
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
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/SignalCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SignalCode::class$ = NULL;
      jmethodID *SignalCode::mids$ = NULL;
      bool SignalCode::live$ = false;
      SignalCode *SignalCode::A = NULL;
      SignalCode *SignalCode::B = NULL;
      SignalCode *SignalCode::C = NULL;
      SignalCode *SignalCode::CODELESS = NULL;
      SignalCode *SignalCode::D = NULL;
      SignalCode *SignalCode::E = NULL;
      SignalCode *SignalCode::I = NULL;
      SignalCode *SignalCode::L = NULL;
      SignalCode *SignalCode::M = NULL;
      SignalCode *SignalCode::N = NULL;
      SignalCode *SignalCode::P = NULL;
      SignalCode *SignalCode::Q = NULL;
      SignalCode *SignalCode::S = NULL;
      SignalCode *SignalCode::W = NULL;
      SignalCode *SignalCode::X = NULL;
      SignalCode *SignalCode::Y = NULL;
      SignalCode *SignalCode::Z = NULL;

      jclass SignalCode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SignalCode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_aa53d09c54227551] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SignalCode;");
          mids$[mid_values_17c9460f60a2a46d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SignalCode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new SignalCode(env->getStaticObjectField(cls, "A", "Lorg/orekit/gnss/SignalCode;"));
          B = new SignalCode(env->getStaticObjectField(cls, "B", "Lorg/orekit/gnss/SignalCode;"));
          C = new SignalCode(env->getStaticObjectField(cls, "C", "Lorg/orekit/gnss/SignalCode;"));
          CODELESS = new SignalCode(env->getStaticObjectField(cls, "CODELESS", "Lorg/orekit/gnss/SignalCode;"));
          D = new SignalCode(env->getStaticObjectField(cls, "D", "Lorg/orekit/gnss/SignalCode;"));
          E = new SignalCode(env->getStaticObjectField(cls, "E", "Lorg/orekit/gnss/SignalCode;"));
          I = new SignalCode(env->getStaticObjectField(cls, "I", "Lorg/orekit/gnss/SignalCode;"));
          L = new SignalCode(env->getStaticObjectField(cls, "L", "Lorg/orekit/gnss/SignalCode;"));
          M = new SignalCode(env->getStaticObjectField(cls, "M", "Lorg/orekit/gnss/SignalCode;"));
          N = new SignalCode(env->getStaticObjectField(cls, "N", "Lorg/orekit/gnss/SignalCode;"));
          P = new SignalCode(env->getStaticObjectField(cls, "P", "Lorg/orekit/gnss/SignalCode;"));
          Q = new SignalCode(env->getStaticObjectField(cls, "Q", "Lorg/orekit/gnss/SignalCode;"));
          S = new SignalCode(env->getStaticObjectField(cls, "S", "Lorg/orekit/gnss/SignalCode;"));
          W = new SignalCode(env->getStaticObjectField(cls, "W", "Lorg/orekit/gnss/SignalCode;"));
          X = new SignalCode(env->getStaticObjectField(cls, "X", "Lorg/orekit/gnss/SignalCode;"));
          Y = new SignalCode(env->getStaticObjectField(cls, "Y", "Lorg/orekit/gnss/SignalCode;"));
          Z = new SignalCode(env->getStaticObjectField(cls, "Z", "Lorg/orekit/gnss/SignalCode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SignalCode SignalCode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SignalCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aa53d09c54227551], a0.this$));
      }

      JArray< SignalCode > SignalCode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SignalCode >(env->callStaticObjectMethod(cls, mids$[mid_values_17c9460f60a2a46d]));
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
      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args);
      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SignalCode_values(PyTypeObject *type);
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data);
      static PyGetSetDef t_SignalCode__fields_[] = {
        DECLARE_GET_FIELD(t_SignalCode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SignalCode__methods_[] = {
        DECLARE_METHOD(t_SignalCode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, of_, METH_VARARGS),
        DECLARE_METHOD(t_SignalCode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SignalCode)[] = {
        { Py_tp_methods, t_SignalCode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SignalCode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SignalCode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SignalCode, t_SignalCode, SignalCode);
      PyObject *t_SignalCode::wrap_Object(const SignalCode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SignalCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SignalCode::install(PyObject *module)
      {
        installType(&PY_TYPE(SignalCode), &PY_TYPE_DEF(SignalCode), module, "SignalCode", 0);
      }

      void t_SignalCode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "class_", make_descriptor(SignalCode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "wrapfn_", make_descriptor(t_SignalCode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "boxfn_", make_descriptor(boxObject));
        env->getClass(SignalCode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "A", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "B", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "C", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "CODELESS", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::CODELESS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "D", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "E", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "I", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "L", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "M", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "N", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "P", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Q", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "S", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "W", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "X", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Y", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Z", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Z)));
      }

      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SignalCode::initializeClass, 1)))
          return NULL;
        return t_SignalCode::wrap_Object(SignalCode(((t_SignalCode *) arg)->object.this$));
      }
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SignalCode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SignalCode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SignalCode::valueOf(a0));
          return t_SignalCode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SignalCode_values(PyTypeObject *type)
      {
        JArray< SignalCode > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SignalCode::values());
        return JArray<jobject>(result.this$).wrap(t_SignalCode::wrap_jobject);
      }
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Attitude::class$ = NULL;
      jmethodID *Attitude::mids$ = NULL;
      bool Attitude::live$ = false;

      jclass Attitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Attitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_dea257300c01aa24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_548f5fe1e94cd245] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_deeadd030b9b683a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOrientation_b8bfd7046d8ee6f7] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_de86c7efc42eac14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_d52645e0d4c07563] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSpin_d52645e0d4c07563] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_97390777173603db] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_4b6ab70a25936a1a] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Attitude::Attitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dea257300c01aa24, a0.this$, a1.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_548f5fe1e94cd245, a0.this$, a1.this$, a2.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_deeadd030b9b683a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate Attitude::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      ::org::orekit::utils::TimeStampedAngularCoordinates Attitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_b8bfd7046d8ee6f7]));
      }

      ::org::orekit::frames::Frame Attitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Attitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_de86c7efc42eac14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSpin_d52645e0d4c07563]));
      }

      Attitude Attitude::shiftedBy(jdouble a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_97390777173603db], a0));
      }

      Attitude Attitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_4b6ab70a25936a1a], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Attitude_getDate(t_Attitude *self);
      static PyObject *t_Attitude_getOrientation(t_Attitude *self);
      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self);
      static PyObject *t_Attitude_getRotation(t_Attitude *self);
      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self);
      static PyObject *t_Attitude_getSpin(t_Attitude *self);
      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data);
      static PyGetSetDef t_Attitude__fields_[] = {
        DECLARE_GET_FIELD(t_Attitude, date),
        DECLARE_GET_FIELD(t_Attitude, orientation),
        DECLARE_GET_FIELD(t_Attitude, referenceFrame),
        DECLARE_GET_FIELD(t_Attitude, rotation),
        DECLARE_GET_FIELD(t_Attitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_Attitude, spin),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Attitude__methods_[] = {
        DECLARE_METHOD(t_Attitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, shiftedBy, METH_O),
        DECLARE_METHOD(t_Attitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Attitude)[] = {
        { Py_tp_methods, t_Attitude__methods_ },
        { Py_tp_init, (void *) t_Attitude_init_ },
        { Py_tp_getset, t_Attitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Attitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Attitude, t_Attitude, Attitude);

      void t_Attitude::install(PyObject *module)
      {
        installType(&PY_TYPE(Attitude), &PY_TYPE_DEF(Attitude), module, "Attitude", 0);
      }

      void t_Attitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "class_", make_descriptor(Attitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "wrapfn_", make_descriptor(t_Attitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Attitude::initializeClass, 1)))
          return NULL;
        return t_Attitude::wrap_Object(Attitude(((t_Attitude *) arg)->object.this$));
      }
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Attitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Attitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Attitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Attitude(a0, a1, a2, a3, a4));
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

      static PyObject *t_Attitude_getDate(t_Attitude *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Attitude_getOrientation(t_Attitude *self)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotation(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_getSpin(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg)
      {
        jdouble a0;
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }

      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FiniteDifferencesDifferentiator::class$ = NULL;
        jmethodID *FiniteDifferencesDifferentiator::mids$ = NULL;
        bool FiniteDifferencesDifferentiator::live$ = false;

        jclass FiniteDifferencesDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_differentiate_0f70e8683b12e576] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
            mids$[mid_differentiate_b4b7f37a2e968eae] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");
            mids$[mid_differentiate_e7252c9501d50f30] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");
            mids$[mid_getNbPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbPoints", "()I");
            mids$[mid_getStepSize_dff5885c2c873297] = env->getMethodID(cls, "getStepSize", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_0f70e8683b12e576], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_b4b7f37a2e968eae], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_e7252c9501d50f30], a0.this$));
        }

        jint FiniteDifferencesDifferentiator::getNbPoints() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPoints_570ce0828f81a2c1]);
        }

        jdouble FiniteDifferencesDifferentiator::getStepSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStepSize_dff5885c2c873297]);
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
        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args);
        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyGetSetDef t_FiniteDifferencesDifferentiator__fields_[] = {
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, nbPoints),
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, stepSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FiniteDifferencesDifferentiator__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getNbPoints, METH_NOARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getStepSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencesDifferentiator)[] = {
          { Py_tp_methods, t_FiniteDifferencesDifferentiator__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencesDifferentiator_init_ },
          { Py_tp_getset, t_FiniteDifferencesDifferentiator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencesDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencesDifferentiator, t_FiniteDifferencesDifferentiator, FiniteDifferencesDifferentiator);

        void t_FiniteDifferencesDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencesDifferentiator), &PY_TYPE_DEF(FiniteDifferencesDifferentiator), module, "FiniteDifferencesDifferentiator", 0);
        }

        void t_FiniteDifferencesDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "class_", make_descriptor(FiniteDifferencesDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "wrapfn_", make_descriptor(t_FiniteDifferencesDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencesDifferentiator::wrap_Object(FiniteDifferencesDifferentiator(((t_FiniteDifferencesDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1, a2, a3));
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

        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPoints());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStepSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPoints());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStepSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Boolean.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Boolean::class$ = NULL;
    jmethodID *Boolean::mids$ = NULL;
    bool Boolean::live$ = false;
    Boolean *Boolean::FALSE = NULL;
    Boolean *Boolean::TRUE = NULL;
    ::java::lang::Class *Boolean::TYPE = NULL;

    jclass Boolean::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Boolean");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
        mids$[mid_booleanValue_b108b35ef48e27bd] = env->getMethodID(cls, "booleanValue", "()Z");
        mids$[mid_compare_7ed409398a180de9] = env->getStaticMethodID(cls, "compare", "(ZZ)I");
        mids$[mid_compareTo_9f5a8345831e07bc] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Boolean;)I");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBoolean_7edad2c2f64f4d68] = env->getStaticMethodID(cls, "getBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_a81a99bc85c7f236] = env->getStaticMethodID(cls, "hashCode", "(Z)I");
        mids$[mid_logicalAnd_9e431b345e2a150d] = env->getStaticMethodID(cls, "logicalAnd", "(ZZ)Z");
        mids$[mid_logicalOr_9e431b345e2a150d] = env->getStaticMethodID(cls, "logicalOr", "(ZZ)Z");
        mids$[mid_logicalXor_9e431b345e2a150d] = env->getStaticMethodID(cls, "logicalXor", "(ZZ)Z");
        mids$[mid_parseBoolean_7edad2c2f64f4d68] = env->getStaticMethodID(cls, "parseBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_924df160f5ad43c5] = env->getStaticMethodID(cls, "toString", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_479c229037ba55b6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;");
        mids$[mid_valueOf_61540e48ad79fc1d] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/Boolean;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FALSE = new Boolean(env->getStaticObjectField(cls, "FALSE", "Ljava/lang/Boolean;"));
        TRUE = new Boolean(env->getStaticObjectField(cls, "TRUE", "Ljava/lang/Boolean;"));
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Boolean::Boolean(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    Boolean::Boolean(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

    jboolean Boolean::booleanValue() const
    {
      return env->callBooleanMethod(this$, mids$[mid_booleanValue_b108b35ef48e27bd]);
    }

    jint Boolean::compare(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_7ed409398a180de9], a0, a1);
    }

    jint Boolean::compareTo(const Boolean & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_9f5a8345831e07bc], a0.this$);
    }

    jboolean Boolean::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jboolean Boolean::getBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_getBoolean_7edad2c2f64f4d68], a0.this$);
    }

    jint Boolean::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Boolean::hashCode(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_a81a99bc85c7f236], a0);
    }

    jboolean Boolean::logicalAnd(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalAnd_9e431b345e2a150d], a0, a1);
    }

    jboolean Boolean::logicalOr(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalOr_9e431b345e2a150d], a0, a1);
    }

    jboolean Boolean::logicalXor(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalXor_9e431b345e2a150d], a0, a1);
    }

    jboolean Boolean::parseBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_parseBoolean_7edad2c2f64f4d68], a0.this$);
    }

    ::java::lang::String Boolean::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Boolean::toString(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_924df160f5ad43c5], a0));
    }

    Boolean Boolean::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_479c229037ba55b6], a0.this$));
    }

    Boolean Boolean::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_61540e48ad79fc1d], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Boolean_booleanValue(t_Boolean *self);
    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg);
    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Boolean__methods_[] = {
      DECLARE_METHOD(t_Boolean, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, booleanValue, METH_NOARGS),
      DECLARE_METHOD(t_Boolean, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, compareTo, METH_O),
      DECLARE_METHOD(t_Boolean, equals, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, getBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalAnd, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalOr, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalXor, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, parseBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, toString, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Boolean)[] = {
      { Py_tp_methods, t_Boolean__methods_ },
      { Py_tp_init, (void *) t_Boolean_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Boolean)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Boolean, t_Boolean, Boolean);

    void t_Boolean::install(PyObject *module)
    {
      installType(&PY_TYPE(Boolean), &PY_TYPE_DEF(Boolean), module, "Boolean", 0);
    }

    void t_Boolean::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "class_", make_descriptor(Boolean::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "wrapfn_", make_descriptor(unboxBoolean));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "boxfn_", make_descriptor(boxBoolean));
      env->getClass(Boolean::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "FALSE", make_descriptor(t_Boolean::wrap_Object(*Boolean::FALSE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TRUE", make_descriptor(t_Boolean::wrap_Object(*Boolean::TRUE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Boolean::TYPE)));
    }

    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Boolean::initializeClass, 1)))
        return NULL;
      return t_Boolean::wrap_Object(Boolean(((t_Boolean *) arg)->object.this$));
    }
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Boolean::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Boolean(a0));
            self->object = object;
            break;
          }
        }
        {
          jboolean a0;
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = Boolean(a0));
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

    static PyObject *t_Boolean_booleanValue(t_Boolean *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.booleanValue());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jint result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg)
    {
      Boolean a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::getBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "getBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jint result;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalAnd(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalAnd", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalOr(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalOr", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalXor(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalXor", args);
      return NULL;
    }

    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::parseBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "parseBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/util/List.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView::class$ = NULL;
        jmethodID *PolygonalFieldOfView::mids$ = NULL;
        bool PolygonalFieldOfView::live$ = false;

        jclass PolygonalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_991a5885d40d9dc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_d0c690fdba21c866] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
            mids$[mid_getFootprint_d179f90e70a637c1] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getZone_5a6ba0b36fb0268c] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_offsetFromBoundary_92bc6ba59ebf6937] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_d0fe714ef34714f7] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_991a5885d40d9dc2, a0.this$, a1)) {}

        PolygonalFieldOfView::PolygonalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jint a4, jdouble a5) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_d0c690fdba21c866, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

        ::java::util::List PolygonalFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_d179f90e70a637c1], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet PolygonalFieldOfView::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_5a6ba0b36fb0268c]));
        }

        jdouble PolygonalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_92bc6ba59ebf6937], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolygonalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_d0fe714ef34714f7], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self);
        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView, zone),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, getZone, METH_NOARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PolygonalFieldOfView_init_ },
          { Py_tp_getset, t_PolygonalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView, t_PolygonalFieldOfView, PolygonalFieldOfView);

        void t_PolygonalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView), &PY_TYPE_DEF(PolygonalFieldOfView), module, "PolygonalFieldOfView", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "DefiningConeType", make_descriptor(&PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType)));
        }

        void t_PolygonalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "class_", make_descriptor(PolygonalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "wrapfn_", make_descriptor(t_PolygonalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolygonalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView::wrap_Object(PolygonalFieldOfView(((t_PolygonalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolygonalFieldOfView_init_(t_PolygonalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "KD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jint a4;
              jdouble a5;
              PolygonalFieldOfView object((jobject) NULL);

              if (!parseArgs(args, "kKkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::geometry::fov::t_PolygonalFieldOfView$DefiningConeType::parameters_, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PolygonalFieldOfView(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PolygonalFieldOfView_getFootprint(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_getZone(t_PolygonalFieldOfView *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_PolygonalFieldOfView_offsetFromBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_projectToBoundary(t_PolygonalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PolygonalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView_get__zone(t_PolygonalFieldOfView *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseral::class$ = NULL;
            jmethodID *DSSTTesseral::mids$ = NULL;
            bool DSSTTesseral::live$ = false;
            ::java::lang::String *DSSTTesseral::CM_COEFFICIENTS = NULL;
            ::java::lang::String *DSSTTesseral::SHORT_PERIOD_PREFIX = NULL;
            ::java::lang::String *DSSTTesseral::SM_COEFFICIENTS = NULL;

            jclass DSSTTesseral::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ce30000f990c2d1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_40c2326f14ad3a2d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;IIIIIII)V");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "CM_COEFFICIENTS", "Ljava/lang/String;"));
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "SM_COEFFICIENTS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ce30000f990c2d1, a0.this$, a1, a2.this$)) {}

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_40c2326f14ad3a2d, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_c0df8831049775b0], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5dbca2d049b16b82], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743], a0.this$, a1.this$, a2.this$));
            }

            void DSSTTesseral::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_3cff7c75ea06698c], a0.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda], a0.this$, a1.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9748e634dd1c969], a0.this$, a1.this$);
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
            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self);
            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg);
            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data);
            static PyGetSetDef t_DSSTTesseral__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseral, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseral__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseral, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseral, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTTesseral, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseral)[] = {
              { Py_tp_methods, t_DSSTTesseral__methods_ },
              { Py_tp_init, (void *) t_DSSTTesseral_init_ },
              { Py_tp_getset, t_DSSTTesseral__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseral)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTTesseral, t_DSSTTesseral, DSSTTesseral);

            void t_DSSTTesseral::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseral), &PY_TYPE_DEF(DSSTTesseral), module, "DSSTTesseral", 0);
            }

            void t_DSSTTesseral::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "class_", make_descriptor(DSSTTesseral::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "wrapfn_", make_descriptor(t_DSSTTesseral::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTTesseral::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "CM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::CM_COEFFICIENTS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTTesseral::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::SM_COEFFICIENTS)));
            }

            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseral::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseral::wrap_Object(DSSTTesseral(((t_DSSTTesseral *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseral::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 10:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  jint a3;
                  jint a4;
                  jint a5;
                  jint a6;
                  jint a7;
                  jint a8;
                  jint a9;
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDkIIIIIII", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *LocalizedODEFormats::class$ = NULL;
      jmethodID *LocalizedODEFormats::mids$ = NULL;
      bool LocalizedODEFormats::live$ = false;
      LocalizedODEFormats *LocalizedODEFormats::FIND_ROOT = NULL;
      LocalizedODEFormats *LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES = NULL;
      LocalizedODEFormats *LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY = NULL;
      LocalizedODEFormats *LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH = NULL;
      LocalizedODEFormats *LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNKNOWN_PARAMETER = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET = NULL;

      jclass LocalizedODEFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/LocalizedODEFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_bb9b0255062d9cfe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/LocalizedODEFormats;");
          mids$[mid_values_eaec6d7dcb2ab4f2] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/LocalizedODEFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FIND_ROOT = new LocalizedODEFormats(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          HOLE_BETWEEN_MODELS_TIME_RANGES = new LocalizedODEFormats(env->getStaticObjectField(cls, "HOLE_BETWEEN_MODELS_TIME_RANGES", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = new LocalizedODEFormats(env->getStaticObjectField(cls, "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MULTISTEP_STARTER_STOPPED_EARLY = new LocalizedODEFormats(env->getStaticObjectField(cls, "MULTISTEP_STARTER_STOPPED_EARLY", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          NAN_APPEARING_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "NAN_APPEARING_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          PROPAGATION_DIRECTION_MISMATCH = new LocalizedODEFormats(env->getStaticObjectField(cls, "PROPAGATION_DIRECTION_MISMATCH", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          TOO_SMALL_INTEGRATION_INTERVAL = new LocalizedODEFormats(env->getStaticObjectField(cls, "TOO_SMALL_INTEGRATION_INTERVAL", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNKNOWN_PARAMETER = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNKNOWN_PARAMETER", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNMATCHED_ODE_IN_EXPANDED_SET = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNMATCHED_ODE_IN_EXPANDED_SET", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedODEFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String LocalizedODEFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }

      LocalizedODEFormats LocalizedODEFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedODEFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bb9b0255062d9cfe], a0.this$));
      }

      JArray< LocalizedODEFormats > LocalizedODEFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedODEFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_eaec6d7dcb2ab4f2]));
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
      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args);
      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self);
      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data);
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data);
      static PyGetSetDef t_LocalizedODEFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedODEFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedODEFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedODEFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedODEFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedODEFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedODEFormats)[] = {
        { Py_tp_methods, t_LocalizedODEFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedODEFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedODEFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedODEFormats, t_LocalizedODEFormats, LocalizedODEFormats);
      PyObject *t_LocalizedODEFormats::wrap_Object(const LocalizedODEFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedODEFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedODEFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedODEFormats), &PY_TYPE_DEF(LocalizedODEFormats), module, "LocalizedODEFormats", 0);
      }

      void t_LocalizedODEFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "class_", make_descriptor(LocalizedODEFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "wrapfn_", make_descriptor(t_LocalizedODEFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedODEFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "FIND_ROOT", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "HOLE_BETWEEN_MODELS_TIME_RANGES", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MULTISTEP_STARTER_STOPPED_EARLY", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "NAN_APPEARING_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "PROPAGATION_DIRECTION_MISMATCH", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "TOO_SMALL_INTEGRATION_INTERVAL", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNKNOWN_PARAMETER", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNKNOWN_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNMATCHED_ODE_IN_EXPANDED_SET", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET)));
      }

      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedODEFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedODEFormats::wrap_Object(LocalizedODEFormats(((t_LocalizedODEFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedODEFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedODEFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::valueOf(a0));
          return t_LocalizedODEFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedODEFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedODEFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *PivotSelectionRule::class$ = NULL;
        jmethodID *PivotSelectionRule::mids$ = NULL;
        bool PivotSelectionRule::live$ = false;
        PivotSelectionRule *PivotSelectionRule::BLAND = NULL;
        PivotSelectionRule *PivotSelectionRule::DANTZIG = NULL;

        jclass PivotSelectionRule::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/PivotSelectionRule");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_ceb4d2f3b9368851] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/PivotSelectionRule;");
            mids$[mid_values_5d2b5b6326ef5a10] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/PivotSelectionRule;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BLAND = new PivotSelectionRule(env->getStaticObjectField(cls, "BLAND", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            DANTZIG = new PivotSelectionRule(env->getStaticObjectField(cls, "DANTZIG", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PivotSelectionRule PivotSelectionRule::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PivotSelectionRule(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ceb4d2f3b9368851], a0.this$));
        }

        JArray< PivotSelectionRule > PivotSelectionRule::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PivotSelectionRule >(env->callStaticObjectMethod(cls, mids$[mid_values_5d2b5b6326ef5a10]));
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
      namespace linear {
        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args);
        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type);
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data);
        static PyGetSetDef t_PivotSelectionRule__fields_[] = {
          DECLARE_GET_FIELD(t_PivotSelectionRule, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PivotSelectionRule__methods_[] = {
          DECLARE_METHOD(t_PivotSelectionRule, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, of_, METH_VARARGS),
          DECLARE_METHOD(t_PivotSelectionRule, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PivotSelectionRule)[] = {
          { Py_tp_methods, t_PivotSelectionRule__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PivotSelectionRule__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PivotSelectionRule)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PivotSelectionRule, t_PivotSelectionRule, PivotSelectionRule);
        PyObject *t_PivotSelectionRule::wrap_Object(const PivotSelectionRule& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PivotSelectionRule::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PivotSelectionRule::install(PyObject *module)
        {
          installType(&PY_TYPE(PivotSelectionRule), &PY_TYPE_DEF(PivotSelectionRule), module, "PivotSelectionRule", 0);
        }

        void t_PivotSelectionRule::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "class_", make_descriptor(PivotSelectionRule::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "wrapfn_", make_descriptor(t_PivotSelectionRule::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "boxfn_", make_descriptor(boxObject));
          env->getClass(PivotSelectionRule::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "BLAND", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::BLAND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "DANTZIG", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::DANTZIG)));
        }

        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PivotSelectionRule::initializeClass, 1)))
            return NULL;
          return t_PivotSelectionRule::wrap_Object(PivotSelectionRule(((t_PivotSelectionRule *) arg)->object.this$));
        }
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PivotSelectionRule::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PivotSelectionRule result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::valueOf(a0));
            return t_PivotSelectionRule::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type)
        {
          JArray< PivotSelectionRule > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::values());
          return JArray<jobject>(result.this$).wrap(t_PivotSelectionRule::wrap_jobject);
        }
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RRQRDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RRQRDecomposition::class$ = NULL;
      jmethodID *RRQRDecomposition::mids$ = NULL;
      bool RRQRDecomposition::live$ = false;

      jclass RRQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RRQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_21a79182f4dd9085] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_688b496048ff947b] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRank_4508852644846c83] = env->getMethodID(cls, "getRank", "(D)I");
          mids$[mid_getSolver_6b396ee5bc11943f] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_a0befc7f3dc19e41] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_3ca2bf5de9b54389] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_21a79182f4dd9085, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix RRQRDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_688b496048ff947b]));
      }

      jint RRQRDecomposition::getRank(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_4508852644846c83], a0);
      }

      ::org::hipparchus::linear::DecompositionSolver RRQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6b396ee5bc11943f]));
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
      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self);
      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg);
      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args);
      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data);
      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data);
      static PyGetSetDef t_RRQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RRQRDecomposition, p),
        DECLARE_GET_FIELD(t_RRQRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RRQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_RRQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RRQRDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_RRQRDecomposition, getRank, METH_O),
        DECLARE_METHOD(t_RRQRDecomposition, getSolver, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RRQRDecomposition)[] = {
        { Py_tp_methods, t_RRQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_RRQRDecomposition_init_ },
        { Py_tp_getset, t_RRQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RRQRDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::QRDecomposition),
        NULL
      };

      DEFINE_TYPE(RRQRDecomposition, t_RRQRDecomposition, RRQRDecomposition);

      void t_RRQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RRQRDecomposition), &PY_TYPE_DEF(RRQRDecomposition), module, "RRQRDecomposition", 0);
      }

      void t_RRQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "class_", make_descriptor(RRQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "wrapfn_", make_descriptor(t_RRQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RRQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RRQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RRQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_RRQRDecomposition::wrap_Object(RRQRDecomposition(((t_RRQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RRQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RRQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RRQRDecomposition_init_(t_RRQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RRQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RRQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RRQRDecomposition(a0, a1));
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

      static PyObject *t_RRQRDecomposition_getP(t_RRQRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RRQRDecomposition_getRank(t_RRQRDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRank(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRank", arg);
        return NULL;
      }

      static PyObject *t_RRQRDecomposition_getSolver(t_RRQRDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        return callSuper(PY_TYPE(RRQRDecomposition), (PyObject *) self, "getSolver", args, 2);
      }

      static PyObject *t_RRQRDecomposition_get__p(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_RRQRDecomposition_get__solver(t_RRQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldUnivariateIntegrator::class$ = NULL;
        jmethodID *FieldUnivariateIntegrator::mids$ = NULL;
        bool FieldUnivariateIntegrator::live$ = false;

        jclass FieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_9be354262fab8bf3] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_dff5885c2c873297]);
        }

        jint FieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        jint FieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
        }

        jint FieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_570ce0828f81a2c1]);
        }

        jint FieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_570ce0828f81a2c1]);
        }

        jdouble FieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_dff5885c2c873297]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_9be354262fab8bf3], a0, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_FieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_FieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateIntegrator, t_FieldUnivariateIntegrator, FieldUnivariateIntegrator);
        PyObject *t_FieldUnivariateIntegrator::wrap_Object(const FieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateIntegrator), &PY_TYPE_DEF(FieldUnivariateIntegrator), module, "FieldUnivariateIntegrator", 0);
        }

        void t_FieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "class_", make_descriptor(FieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateIntegrator::wrap_Object(FieldUnivariateIntegrator(((t_FieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTle::class$ = NULL;
              jmethodID *OmmTle::mids$ = NULL;
              bool OmmTle::live$ = false;
              jint OmmTle::EPHEMERIS_TYPE_PPT3 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4_XP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = (jint) 0;

              jclass OmmTle::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTle");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAGoM_dff5885c2c873297] = env->getMethodID(cls, "getAGoM", "()D");
                  mids$[mid_getBStar_dff5885c2c873297] = env->getMethodID(cls, "getBStar", "()D");
                  mids$[mid_getBTerm_dff5885c2c873297] = env->getMethodID(cls, "getBTerm", "()D");
                  mids$[mid_getClassificationType_7818f5b58320cd1f] = env->getMethodID(cls, "getClassificationType", "()C");
                  mids$[mid_getElementSetNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getElementSetNumber", "()I");
                  mids$[mid_getEphemerisType_570ce0828f81a2c1] = env->getMethodID(cls, "getEphemerisType", "()I");
                  mids$[mid_getMeanMotionDot_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotionDot", "()D");
                  mids$[mid_getMeanMotionDotDot_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotionDotDot", "()D");
                  mids$[mid_getNoradID_570ce0828f81a2c1] = env->getMethodID(cls, "getNoradID", "()I");
                  mids$[mid_getRevAtEpoch_570ce0828f81a2c1] = env->getMethodID(cls, "getRevAtEpoch", "()I");
                  mids$[mid_setAGoM_17db3a65980d3441] = env->getMethodID(cls, "setAGoM", "(D)V");
                  mids$[mid_setBStar_17db3a65980d3441] = env->getMethodID(cls, "setBStar", "(D)V");
                  mids$[mid_setBTerm_17db3a65980d3441] = env->getMethodID(cls, "setBTerm", "(D)V");
                  mids$[mid_setClassificationType_636c0bbb96cab723] = env->getMethodID(cls, "setClassificationType", "(C)V");
                  mids$[mid_setElementSetNo_99803b0791f320ff] = env->getMethodID(cls, "setElementSetNo", "(I)V");
                  mids$[mid_setEphemerisType_99803b0791f320ff] = env->getMethodID(cls, "setEphemerisType", "(I)V");
                  mids$[mid_setMeanMotionDot_17db3a65980d3441] = env->getMethodID(cls, "setMeanMotionDot", "(D)V");
                  mids$[mid_setMeanMotionDotDot_17db3a65980d3441] = env->getMethodID(cls, "setMeanMotionDotDot", "(D)V");
                  mids$[mid_setNoradID_99803b0791f320ff] = env->getMethodID(cls, "setNoradID", "(I)V");
                  mids$[mid_setRevAtEpoch_99803b0791f320ff] = env->getMethodID(cls, "setRevAtEpoch", "(I)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EPHEMERIS_TYPE_PPT3 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_PPT3");
                  EPHEMERIS_TYPE_SGP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP");
                  EPHEMERIS_TYPE_SGP4 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4");
                  EPHEMERIS_TYPE_SGP4_XP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4_XP");
                  EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmTle::OmmTle() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble OmmTle::getAGoM() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAGoM_dff5885c2c873297]);
              }

              jdouble OmmTle::getBStar() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBStar_dff5885c2c873297]);
              }

              jdouble OmmTle::getBTerm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBTerm_dff5885c2c873297]);
              }

              jchar OmmTle::getClassificationType() const
              {
                return env->callCharMethod(this$, mids$[mid_getClassificationType_7818f5b58320cd1f]);
              }

              jint OmmTle::getElementSetNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getElementSetNumber_570ce0828f81a2c1]);
              }

              jint OmmTle::getEphemerisType() const
              {
                return env->callIntMethod(this$, mids$[mid_getEphemerisType_570ce0828f81a2c1]);
              }

              jdouble OmmTle::getMeanMotionDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDot_dff5885c2c873297]);
              }

              jdouble OmmTle::getMeanMotionDotDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDotDot_dff5885c2c873297]);
              }

              jint OmmTle::getNoradID() const
              {
                return env->callIntMethod(this$, mids$[mid_getNoradID_570ce0828f81a2c1]);
              }

              jint OmmTle::getRevAtEpoch() const
              {
                return env->callIntMethod(this$, mids$[mid_getRevAtEpoch_570ce0828f81a2c1]);
              }

              void OmmTle::setAGoM(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAGoM_17db3a65980d3441], a0);
              }

              void OmmTle::setBStar(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBStar_17db3a65980d3441], a0);
              }

              void OmmTle::setBTerm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBTerm_17db3a65980d3441], a0);
              }

              void OmmTle::setClassificationType(jchar a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClassificationType_636c0bbb96cab723], a0);
              }

              void OmmTle::setElementSetNo(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setElementSetNo_99803b0791f320ff], a0);
              }

              void OmmTle::setEphemerisType(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEphemerisType_99803b0791f320ff], a0);
              }

              void OmmTle::setMeanMotionDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDot_17db3a65980d3441], a0);
              }

              void OmmTle::setMeanMotionDotDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDotDot_17db3a65980d3441], a0);
              }

              void OmmTle::setNoradID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNoradID_99803b0791f320ff], a0);
              }

              void OmmTle::setRevAtEpoch(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRevAtEpoch_99803b0791f320ff], a0);
              }

              void OmmTle::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            namespace omm {
              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self);
              static PyObject *t_OmmTle_getBStar(t_OmmTle *self);
              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self);
              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self);
              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self);
              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self);
              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self);
              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args);
              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data);
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data);
              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data);
              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data);
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data);
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmTle__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmTle, aGoM),
                DECLARE_GETSET_FIELD(t_OmmTle, bStar),
                DECLARE_GETSET_FIELD(t_OmmTle, bTerm),
                DECLARE_GETSET_FIELD(t_OmmTle, classificationType),
                DECLARE_SET_FIELD(t_OmmTle, elementSetNo),
                DECLARE_GET_FIELD(t_OmmTle, elementSetNumber),
                DECLARE_GETSET_FIELD(t_OmmTle, ephemerisType),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDot),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDotDot),
                DECLARE_GETSET_FIELD(t_OmmTle, noradID),
                DECLARE_GETSET_FIELD(t_OmmTle, revAtEpoch),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTle__methods_[] = {
                DECLARE_METHOD(t_OmmTle, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, getAGoM, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBStar, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBTerm, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getClassificationType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getElementSetNumber, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getEphemerisType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDotDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getNoradID, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getRevAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, setAGoM, METH_O),
                DECLARE_METHOD(t_OmmTle, setBStar, METH_O),
                DECLARE_METHOD(t_OmmTle, setBTerm, METH_O),
                DECLARE_METHOD(t_OmmTle, setClassificationType, METH_O),
                DECLARE_METHOD(t_OmmTle, setElementSetNo, METH_O),
                DECLARE_METHOD(t_OmmTle, setEphemerisType, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDotDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setNoradID, METH_O),
                DECLARE_METHOD(t_OmmTle, setRevAtEpoch, METH_O),
                DECLARE_METHOD(t_OmmTle, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTle)[] = {
                { Py_tp_methods, t_OmmTle__methods_ },
                { Py_tp_init, (void *) t_OmmTle_init_ },
                { Py_tp_getset, t_OmmTle__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTle)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OmmTle, t_OmmTle, OmmTle);

              void t_OmmTle::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTle), &PY_TYPE_DEF(OmmTle), module, "OmmTle", 0);
              }

              void t_OmmTle::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "class_", make_descriptor(OmmTle::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "wrapfn_", make_descriptor(t_OmmTle::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTle::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_PPT3", make_descriptor(OmmTle::EPHEMERIS_TYPE_PPT3));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4_XP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4_XP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS", make_descriptor(OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS));
              }

              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTle::initializeClass, 1)))
                  return NULL;
                return t_OmmTle::wrap_Object(OmmTle(((t_OmmTle *) arg)->object.this$));
              }
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTle::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds)
              {
                OmmTle object((jobject) NULL);

                INT_CALL(object = OmmTle());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAGoM());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBStar(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBTerm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self)
              {
                jchar result;
                OBJ_CALL(result = self->object.getClassificationType());
                return c2p(result);
              }

              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getElementSetNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEphemerisType());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNoradID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAGoM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAGoM", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBStar(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBStar", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBTerm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBTerm", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg)
              {
                jchar a0;

                if (!parseArg(arg, "C", &a0))
                {
                  OBJ_CALL(self->object.setClassificationType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClassificationType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setElementSetNo(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElementSetNo", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEphemerisType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEphemerisType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDotDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDotDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNoradID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNoradID", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setRevAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRevAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmTle), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAGoM());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAGoM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "aGoM", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBStar());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBStar(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bStar", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBTerm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBTerm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bTerm", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data)
              {
                jchar value;
                OBJ_CALL(value = self->object.getClassificationType());
                return c2p(value);
              }
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jchar value;
                  if (!parseArg(arg, "C", &value))
                  {
                    INT_CALL(self->object.setClassificationType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "classificationType", arg);
                return -1;
              }

              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setElementSetNo(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "elementSetNo", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getElementSetNumber());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEphemerisType());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEphemerisType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ephemerisType", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDotDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDotDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNoradID());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNoradID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "noradID", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setRevAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "revAtEpoch", arg);
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
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary::class$ = NULL;
      jmethodID *DoubleArrayDictionary::mids$ = NULL;
      bool DoubleArrayDictionary::live$ = false;

      jclass DoubleArrayDictionary::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_db8de8bc54857165] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
          mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_get_f87e5f45128c2827] = env->getMethodID(cls, "get", "(Ljava/lang/String;)[D");
          mids$[mid_getData_2afa36052df4765d] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
          mids$[mid_getEntry_d37496364a361361] = env->getMethodID(cls, "getEntry", "(Ljava/lang/String;)Lorg/orekit/utils/DoubleArrayDictionary$Entry;");
          mids$[mid_put_3468fcb7793f51a9] = env->getMethodID(cls, "put", "(Ljava/lang/String;[D)V");
          mids$[mid_putAll_ad36dd55657c3ef8] = env->getMethodID(cls, "putAll", "(Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_putAll_db8de8bc54857165] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
          mids$[mid_remove_7edad2c2f64f4d68] = env->getMethodID(cls, "remove", "(Ljava/lang/String;)Z");
          mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
          mids$[mid_toMap_6f5a75ccd8c04465] = env->getMethodID(cls, "toMap", "()Ljava/util/Map;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_unmodifiableView_17e5408138fe3169] = env->getMethodID(cls, "unmodifiableView", "()Lorg/orekit/utils/DoubleArrayDictionary;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DoubleArrayDictionary::DoubleArrayDictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      DoubleArrayDictionary::DoubleArrayDictionary(const ::java::util::Map & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db8de8bc54857165, a0.this$)) {}

      void DoubleArrayDictionary::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
      }

      JArray< jdouble > DoubleArrayDictionary::get$(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_get_f87e5f45128c2827], a0.this$));
      }

      ::java::util::List DoubleArrayDictionary::getData() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_2afa36052df4765d]));
      }

      ::org::orekit::utils::DoubleArrayDictionary$Entry DoubleArrayDictionary::getEntry(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::DoubleArrayDictionary$Entry(env->callObjectMethod(this$, mids$[mid_getEntry_d37496364a361361], a0.this$));
      }

      void DoubleArrayDictionary::put(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_put_3468fcb7793f51a9], a0.this$, a1.this$);
      }

      void DoubleArrayDictionary::putAll(const DoubleArrayDictionary & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_ad36dd55657c3ef8], a0.this$);
      }

      void DoubleArrayDictionary::putAll(const ::java::util::Map & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_putAll_db8de8bc54857165], a0.this$);
      }

      jboolean DoubleArrayDictionary::remove(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_remove_7edad2c2f64f4d68], a0.this$);
      }

      jint DoubleArrayDictionary::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
      }

      ::java::util::Map DoubleArrayDictionary::toMap() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_toMap_6f5a75ccd8c04465]));
      }

      ::java::lang::String DoubleArrayDictionary::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      DoubleArrayDictionary DoubleArrayDictionary::unmodifiableView() const
      {
        return DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_unmodifiableView_17e5408138fe3169]));
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
      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self);
      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary, data),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary, clear, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, get, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, getData, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, getEntry, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, put, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, putAll, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, remove, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toMap, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, toString, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary, unmodifiableView, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary__methods_ },
        { Py_tp_init, (void *) t_DoubleArrayDictionary_init_ },
        { Py_tp_getset, t_DoubleArrayDictionary__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary, t_DoubleArrayDictionary, DoubleArrayDictionary);

      void t_DoubleArrayDictionary::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary), &PY_TYPE_DEF(DoubleArrayDictionary), module, "DoubleArrayDictionary", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "Entry", make_descriptor(&PY_TYPE_DEF(DoubleArrayDictionary$Entry)));
      }

      void t_DoubleArrayDictionary::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "class_", make_descriptor(DoubleArrayDictionary::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "wrapfn_", make_descriptor(t_DoubleArrayDictionary::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary::wrap_Object(DoubleArrayDictionary(((t_DoubleArrayDictionary *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DoubleArrayDictionary_init_(t_DoubleArrayDictionary *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DoubleArrayDictionary object((jobject) NULL);

            INT_CALL(object = DoubleArrayDictionary());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            DoubleArrayDictionary object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              INT_CALL(object = DoubleArrayDictionary(a0));
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

      static PyObject *t_DoubleArrayDictionary_clear(t_DoubleArrayDictionary *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary_get(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_getData(t_DoubleArrayDictionary *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(DoubleArrayDictionary$Entry));
      }

      static PyObject *t_DoubleArrayDictionary_getEntry(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary$Entry result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return ::org::orekit::utils::t_DoubleArrayDictionary$Entry::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_put(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.put(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_putAll(t_DoubleArrayDictionary *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DoubleArrayDictionary a0((jobject) NULL);

            if (!parseArgs(args, "k", DoubleArrayDictionary::initializeClass, &a0))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(self->object.putAll(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "putAll", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_remove(t_DoubleArrayDictionary *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary_size(t_DoubleArrayDictionary *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary_toMap(t_DoubleArrayDictionary *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.toMap());
        return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_DoubleArrayDictionary_toString(t_DoubleArrayDictionary *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DoubleArrayDictionary), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DoubleArrayDictionary_unmodifiableView(t_DoubleArrayDictionary *self)
      {
        DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.unmodifiableView());
        return t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_DoubleArrayDictionary_get__data(t_DoubleArrayDictionary *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStamped::class$ = NULL;
      jmethodID *TimeStamped::mids$ = NULL;
      bool TimeStamped::live$ = false;

      jclass TimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_ea2b3148acebf68c] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/TimeStamped;)D");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeStamped::durationFrom(const TimeStamped & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_ea2b3148acebf68c], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate TimeStamped::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
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
      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg);
      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self);
      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data);
      static PyGetSetDef t_TimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStamped, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStamped__methods_[] = {
        DECLARE_METHOD(t_TimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_TimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStamped)[] = {
        { Py_tp_methods, t_TimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStamped, t_TimeStamped, TimeStamped);

      void t_TimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStamped), &PY_TYPE_DEF(TimeStamped), module, "TimeStamped", 0);
      }

      void t_TimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "class_", make_descriptor(TimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "wrapfn_", make_descriptor(t_TimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStamped::initializeClass, 1)))
          return NULL;
        return t_TimeStamped::wrap_Object(TimeStamped(((t_TimeStamped *) arg)->object.this$));
      }
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg)
      {
        TimeStamped a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
