#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *BistaticRangeRateBuilder::class$ = NULL;
          jmethodID *BistaticRangeRateBuilder::mids$ = NULL;
          bool BistaticRangeRateBuilder::live$ = false;

          jclass BistaticRangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_feb9739fac37e84c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_7f3cb68a18f1e2ff] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateBuilder::BistaticRangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_feb9739fac37e84c, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRangeRate BistaticRangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRangeRate(env->callObjectMethod(this$, mids$[mid_build_7f3cb68a18f1e2ff], a0.this$, a1.this$));
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
          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args);
          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateBuilder, t_BistaticRangeRateBuilder, BistaticRangeRateBuilder);
          PyObject *t_BistaticRangeRateBuilder::wrap_Object(const BistaticRangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateBuilder), &PY_TYPE_DEF(BistaticRangeRateBuilder), module, "BistaticRangeRateBuilder", 0);
          }

          void t_BistaticRangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "class_", make_descriptor(BistaticRangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "wrapfn_", make_descriptor(t_BistaticRangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateBuilder::wrap_Object(BistaticRangeRateBuilder(((t_BistaticRangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeRateBuilder(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data)
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
#include "org/hipparchus/analysis/integration/RombergIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *RombergIntegrator::class$ = NULL;
        jmethodID *RombergIntegrator::mids$ = NULL;
        bool RombergIntegrator::live$ = false;
        jint RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass RombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/RombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_8ceb2936471aec5d] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_557b8123390d8d0c] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RombergIntegrator::RombergIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        RombergIntegrator::RombergIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

        RombergIntegrator::RombergIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ceb2936471aec5d, a0, a1, a2, a3)) {}
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
        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_RombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_RombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RombergIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RombergIntegrator)[] = {
          { Py_tp_methods, t_RombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_RombergIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(RombergIntegrator, t_RombergIntegrator, RombergIntegrator);

        void t_RombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RombergIntegrator), &PY_TYPE_DEF(RombergIntegrator), module, "RombergIntegrator", 0);
        }

        void t_RombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "class_", make_descriptor(RombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "wrapfn_", make_descriptor(t_RombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(RombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_RombergIntegrator::wrap_Object(RombergIntegrator(((t_RombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RombergIntegrator object((jobject) NULL);

              INT_CALL(object = RombergIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = RombergIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = RombergIntegrator(a0, a1, a2, a3));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AdditionalStateProvider::class$ = NULL;
      jmethodID *AdditionalStateProvider::mids$ = NULL;
      bool AdditionalStateProvider::live$ = false;

      jclass AdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_abdf3beb789bbd4e] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > AdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_2a145999b8c9a41d], a0.this$));
      }

      ::java::lang::String AdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      void AdditionalStateProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
      }

      jboolean AdditionalStateProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_abdf3beb789bbd4e], a0.this$);
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
      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self);
      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args);
      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data);
      static PyGetSetDef t_AdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AdditionalStateProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_AdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_AdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AdditionalStateProvider)[] = {
        { Py_tp_methods, t_AdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AdditionalStateProvider, t_AdditionalStateProvider, AdditionalStateProvider);

      void t_AdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AdditionalStateProvider), &PY_TYPE_DEF(AdditionalStateProvider), module, "AdditionalStateProvider", 0);
      }

      void t_AdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "class_", make_descriptor(AdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "wrapfn_", make_descriptor(t_AdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_AdditionalStateProvider::wrap_Object(AdditionalStateProvider(((t_AdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yields(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yields", arg);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data)
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
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CR3BPDifferentialCorrection::class$ = NULL;
      jmethodID *CR3BPDifferentialCorrection::mids$ = NULL;
      bool CR3BPDifferentialCorrection::live$ = false;

      jclass CR3BPDifferentialCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CR3BPDifferentialCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f03eba65c494143] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/bodies/CR3BPSystem;D)V");
          mids$[mid_compute_27f12804cfd1d93f] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/LibrationOrbitType;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunov_77bd7b3cdab2713e] = env->getMethodID(cls, "computeLyapunov", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_557b8123390d8d0c] = env->getMethodID(cls, "getOrbitalPeriod", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPDifferentialCorrection::CR3BPDifferentialCorrection(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::bodies::CR3BPSystem & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f03eba65c494143, a0.this$, a1.this$, a2)) {}

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::compute(const ::org::orekit::orbits::LibrationOrbitType & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_compute_27f12804cfd1d93f], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::computeLyapunov() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunov_77bd7b3cdab2713e]));
      }

      jdouble CR3BPDifferentialCorrection::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_557b8123390d8d0c]);
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
      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data);
      static PyGetSetDef t_CR3BPDifferentialCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPDifferentialCorrection, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPDifferentialCorrection__methods_[] = {
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, compute, METH_O),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, computeLyapunov, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPDifferentialCorrection)[] = {
        { Py_tp_methods, t_CR3BPDifferentialCorrection__methods_ },
        { Py_tp_init, (void *) t_CR3BPDifferentialCorrection_init_ },
        { Py_tp_getset, t_CR3BPDifferentialCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPDifferentialCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPDifferentialCorrection, t_CR3BPDifferentialCorrection, CR3BPDifferentialCorrection);

      void t_CR3BPDifferentialCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPDifferentialCorrection), &PY_TYPE_DEF(CR3BPDifferentialCorrection), module, "CR3BPDifferentialCorrection", 0);
      }

      void t_CR3BPDifferentialCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "class_", make_descriptor(CR3BPDifferentialCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "wrapfn_", make_descriptor(t_CR3BPDifferentialCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 1)))
          return NULL;
        return t_CR3BPDifferentialCorrection::wrap_Object(CR3BPDifferentialCorrection(((t_CR3BPDifferentialCorrection *) arg)->object.this$));
      }
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem a1((jobject) NULL);
        jdouble a2;
        CR3BPDifferentialCorrection object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPDifferentialCorrection(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg)
      {
        ::org::orekit::orbits::LibrationOrbitType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::LibrationOrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_LibrationOrbitType::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.computeLyapunov());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonManeuverTriggersResetter::mids$ = NULL;
          bool PythonManeuverTriggersResetter::live$ = false;

          jclass PythonManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_45bf76e836befe86] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_2c4cc16b11f79a6c] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggersResetter::PythonManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          void PythonManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_45bf76e836befe86], a0.this$, a1);
          }

          jlong PythonManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonManeuverTriggersResetter::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self);
          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggersResetter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggersResetter, t_PythonManeuverTriggersResetter, PythonManeuverTriggersResetter);

          void t_PythonManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggersResetter), &PY_TYPE_DEF(PythonManeuverTriggersResetter), module, "PythonManeuverTriggersResetter", 1);
          }

          void t_PythonManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "class_", make_descriptor(PythonManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggersResetter_pythonDecRef0 },
              { "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonManeuverTriggersResetter_resetState1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggersResetter::wrap_Object(PythonManeuverTriggersResetter(((t_PythonManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data)
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
#include "org/hipparchus/fitting/AbstractCurveFitter.h"
#include "java/util/Collection.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *AbstractCurveFitter::class$ = NULL;
      jmethodID *AbstractCurveFitter::mids$ = NULL;
      bool AbstractCurveFitter::live$ = false;

      jclass AbstractCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/AbstractCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fit_b9db3c3b8b3696c0] = env->getMethodID(cls, "fit", "(Ljava/util/Collection;)[D");
          mids$[mid_getProblem_cf073573d4101d89] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
          mids$[mid_getOptimizer_7e2fe2387b2795bd] = env->getMethodID(cls, "getOptimizer", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractCurveFitter::AbstractCurveFitter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      JArray< jdouble > AbstractCurveFitter::fit(const ::java::util::Collection & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_fit_b9db3c3b8b3696c0], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg);

      static PyMethodDef t_AbstractCurveFitter__methods_[] = {
        DECLARE_METHOD(t_AbstractCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractCurveFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractCurveFitter)[] = {
        { Py_tp_methods, t_AbstractCurveFitter__methods_ },
        { Py_tp_init, (void *) t_AbstractCurveFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractCurveFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractCurveFitter, t_AbstractCurveFitter, AbstractCurveFitter);

      void t_AbstractCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractCurveFitter), &PY_TYPE_DEF(AbstractCurveFitter), module, "AbstractCurveFitter", 0);
      }

      void t_AbstractCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "class_", make_descriptor(AbstractCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "wrapfn_", make_descriptor(t_AbstractCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractCurveFitter::initializeClass, 1)))
          return NULL;
        return t_AbstractCurveFitter::wrap_Object(AbstractCurveFitter(((t_AbstractCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_AbstractCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractCurveFitter_init_(t_AbstractCurveFitter *self, PyObject *args, PyObject *kwds)
      {
        AbstractCurveFitter object((jobject) NULL);

        INT_CALL(object = AbstractCurveFitter());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractCurveFitter_fit(t_AbstractCurveFitter *self, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/PythonEventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonEventHandler::class$ = NULL;
          jmethodID *PythonEventHandler::mids$ = NULL;
          bool PythonEventHandler::live$ = false;

          jclass PythonEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_e0491fcf7b1e4288] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_ce9bc9b3806ce3d4] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEventHandler::PythonEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonEventHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self);
          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data);
          static PyGetSetDef t_PythonEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEventHandler, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEventHandler)[] = {
            { Py_tp_methods, t_PythonEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonEventHandler_init_ },
            { Py_tp_getset, t_PythonEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEventHandler, t_PythonEventHandler, PythonEventHandler);

          void t_PythonEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEventHandler), &PY_TYPE_DEF(PythonEventHandler), module, "PythonEventHandler", 1);
          }

          void t_PythonEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "class_", make_descriptor(PythonEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "wrapfn_", make_descriptor(t_PythonEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonEventHandler::wrap_Object(PythonEventHandler(((t_PythonEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEventHandler_init_(t_PythonEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonEventHandler object((jobject) NULL);

            INT_CALL(object = PythonEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEventHandler_finalize(t_PythonEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEventHandler_pythonExtension(t_PythonEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEventHandler::mids$[PythonEventHandler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonEventHandler_get__self(t_PythonEventHandler *self, void *data)
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
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FunctionalDetector::class$ = NULL;
        jmethodID *FunctionalDetector::mids$ = NULL;
        bool FunctionalDetector::live$ = false;

        jclass FunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_0e4ff63693df6596] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FunctionalDetector::FunctionalDetector() : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble FunctionalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
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
        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args);
        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args);
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data);
        static PyGetSetDef t_FunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FunctionalDetector)[] = {
          { Py_tp_methods, t_FunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FunctionalDetector_init_ },
          { Py_tp_getset, t_FunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FunctionalDetector, t_FunctionalDetector, FunctionalDetector);
        PyObject *t_FunctionalDetector::wrap_Object(const FunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FunctionalDetector), &PY_TYPE_DEF(FunctionalDetector), module, "FunctionalDetector", 0);
        }

        void t_FunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "class_", make_descriptor(FunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "wrapfn_", make_descriptor(t_FunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FunctionalDetector::wrap_Object(FunctionalDetector(((t_FunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          FunctionalDetector object((jobject) NULL);

          INT_CALL(object = FunctionalDetector());
          self->object = object;
          self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FunctionalDetector);

          return 0;
        }

        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frames.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *Propagator::class$ = NULL;
      jmethodID *Propagator::mids$ = NULL;
      bool Propagator::live$ = false;
      jdouble Propagator::DEFAULT_MASS = (jdouble) 0;

      jclass Propagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/Propagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_8af102d28e19f725] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_2e2dfaf38ed50d1d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_0640e6acf969ed28] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getDefaultLaw_347a56c6b495e64d] = env->getStaticMethodID(cls, "getDefaultLaw", "(Lorg/orekit/frames/Frames;)Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_6a3edfe13bcee780] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_82f3fa0ddb2ba923] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_15e0d02372b1347b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_b96c0d97a162784d] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_94f65743c8fc9296] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setStepHandler_53f2c5a5fdcdc0f4] = env->getMethodID(cls, "setStepHandler", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
          mids$[mid_setupMatricesComputation_31c2066d459d0537] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Propagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_8af102d28e19f725], a0.this$);
      }

      void Propagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_2e2dfaf38ed50d1d], a0.this$);
      }

      void Propagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0640e6acf969ed28]);
      }

      void Propagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0640e6acf969ed28]);
      }

      ::java::util::List Propagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_6df6b78ab9377151]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getDefaultLaw(const ::org::orekit::frames::Frames & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_getDefaultLaw_347a56c6b495e64d], a0.this$));
      }

      ::org::orekit::propagation::EphemerisGenerator Propagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_6a3edfe13bcee780]));
      }

      ::java::util::Collection Propagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_12ee61573a18f417]));
      }

      ::org::orekit::frames::Frame Propagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_15e85d5301b90ef8]));
      }

      JArray< ::java::lang::String > Propagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_5d7d8c500345981d]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer Propagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_82f3fa0ddb2ba923]));
      }

      jboolean Propagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_15e0d02372b1347b], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_b96c0d97a162784d], a0.this$, a1.this$));
      }

      void Propagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
      }

      void Propagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
      }

      void Propagator::setStepHandler(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_94f65743c8fc9296], a0.this$);
      }

      void Propagator::setStepHandler(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_53f2c5a5fdcdc0f4], a0, a1.this$);
      }

      ::org::orekit::propagation::MatricesHarvester Propagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_31c2066d459d0537], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self);
      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self);
      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self);
      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self);
      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_getFrame(t_Propagator *self);
      static PyObject *t_Propagator_getInitialState(t_Propagator *self);
      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self);
      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self);
      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data);
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data);
      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data);
      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data);
      static PyGetSetDef t_Propagator__fields_[] = {
        DECLARE_GET_FIELD(t_Propagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_Propagator, attitudeProvider),
        DECLARE_GET_FIELD(t_Propagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_Propagator, eventsDetectors),
        DECLARE_GET_FIELD(t_Propagator, frame),
        DECLARE_GET_FIELD(t_Propagator, initialState),
        DECLARE_GET_FIELD(t_Propagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_Propagator, multiplexer),
        DECLARE_SET_FIELD(t_Propagator, stepHandler),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Propagator__methods_[] = {
        DECLARE_METHOD(t_Propagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_Propagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_Propagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getDefaultLaw, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_Propagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_Propagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_Propagator, setStepHandler, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Propagator)[] = {
        { Py_tp_methods, t_Propagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Propagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Propagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(Propagator, t_Propagator, Propagator);

      void t_Propagator::install(PyObject *module)
      {
        installType(&PY_TYPE(Propagator), &PY_TYPE_DEF(Propagator), module, "Propagator", 0);
      }

      void t_Propagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "class_", make_descriptor(Propagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "wrapfn_", make_descriptor(t_Propagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(Propagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "DEFAULT_MASS", make_descriptor(Propagator::DEFAULT_MASS));
      }

      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Propagator::initializeClass, 1)))
          return NULL;
        return t_Propagator::wrap_Object(Propagator(((t_Propagator *) arg)->object.this$));
      }
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Propagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frames a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::Propagator::getDefaultLaw(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getDefaultLaw", arg);
        return NULL;
      }

      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self)
      {
        ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
      }

      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_Propagator_getFrame(t_Propagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Propagator_getInitialState(t_Propagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }

      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::OrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &value))
          {
            INT_CALL(self->object.setStepHandler(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "stepHandler", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
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

          ::java::lang::Class *RecordAndContinue::class$ = NULL;
          jmethodID *RecordAndContinue::mids$ = NULL;
          bool RecordAndContinue::live$ = false;

          jclass RecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_0d9551367f7ecdef] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordAndContinue::RecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          RecordAndContinue::RecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

          void RecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          ::org::hipparchus::ode::events::Action RecordAndContinue::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c85ac59cb25f2670], a0.this$, a1.this$, a2));
          }

          ::java::util::List RecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_0d9551367f7ecdef]));
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
          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args);
          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data);
          static PyGetSetDef t_RecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue, events),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_RecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue)[] = {
            { Py_tp_methods, t_RecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_RecordAndContinue_init_ },
            { Py_tp_getset, t_RecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue, t_RecordAndContinue, RecordAndContinue);

          void t_RecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue), &PY_TYPE_DEF(RecordAndContinue), module, "RecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(RecordAndContinue$Event)));
          }

          void t_RecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "class_", make_descriptor(RecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "wrapfn_", make_descriptor(t_RecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue::wrap_Object(RecordAndContinue(((t_RecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RecordAndContinue object((jobject) NULL);

                INT_CALL(object = RecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                RecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RecordAndContinue(a0));
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

          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args)
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

          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(RecordAndContinue$Event));
          }

          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldChronologicalComparator.h"
#include "java/util/Comparator.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldChronologicalComparator::class$ = NULL;
      jmethodID *FieldChronologicalComparator::mids$ = NULL;
      bool FieldChronologicalComparator::live$ = false;

      jclass FieldChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_ecf43d2794524973] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldChronologicalComparator::FieldChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      jint FieldChronologicalComparator::compare(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_ecf43d2794524973], a0.this$, a1.this$);
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
      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args);
      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args);
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data);
      static PyGetSetDef t_FieldChronologicalComparator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldChronologicalComparator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_FieldChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldChronologicalComparator)[] = {
        { Py_tp_methods, t_FieldChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_FieldChronologicalComparator_init_ },
        { Py_tp_getset, t_FieldChronologicalComparator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldChronologicalComparator, t_FieldChronologicalComparator, FieldChronologicalComparator);
      PyObject *t_FieldChronologicalComparator::wrap_Object(const FieldChronologicalComparator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldChronologicalComparator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldChronologicalComparator), &PY_TYPE_DEF(FieldChronologicalComparator), module, "FieldChronologicalComparator", 0);
      }

      void t_FieldChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "class_", make_descriptor(FieldChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "wrapfn_", make_descriptor(t_FieldChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_FieldChronologicalComparator::wrap_Object(FieldChronologicalComparator(((t_FieldChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        FieldChronologicalComparator object((jobject) NULL);

        INT_CALL(object = FieldChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jint result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateTimeComponents::class$ = NULL;
      jmethodID *DateTimeComponents::mids$ = NULL;
      bool DateTimeComponents::live$ = false;
      DateTimeComponents *DateTimeComponents::JULIAN_EPOCH = NULL;

      jclass DateTimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateTimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_97334b4cde36fee4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)V");
          mids$[mid_init$_353be96736eb4a0e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;D)V");
          mids$[mid_init$_c01975213386f6a3] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_3796b665437eba81] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_init$_3b45da7a278589bc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIID)V");
          mids$[mid_init$_053a596a1809d580] = env->getMethodID(cls, "<init>", "(IIIIID)V");
          mids$[mid_compareTo_0b255e184011a8ea] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateTimeComponents;)I");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDate_ef81839d8717cc3a] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getTime_6230b16c2680001d] = env->getMethodID(cls, "getTime", "()Lorg/orekit/time/TimeComponents;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_offsetFrom_9e85e6d4a4eee270] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/DateTimeComponents;)D");
          mids$[mid_parseDateTime_3d71e8ecdce2fb61] = env->getStaticMethodID(cls, "parseDateTime", "(Ljava/lang/String;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_roundIfNeeded_3765068295c1bb88] = env->getMethodID(cls, "roundIfNeeded", "(II)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_0f10d4a5e06f61c0] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_637f0334ff6ee92d] = env->getMethodID(cls, "toString", "(II)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_3cffd47377eca18a] = env->getMethodID(cls, "toStringRfc3339", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_3cffd47377eca18a] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_637f0334ff6ee92d] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(II)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          JULIAN_EPOCH = new DateTimeComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateTimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateTimeComponents::DateTimeComponents(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_97334b4cde36fee4, a0.this$, a1.this$)) {}

      DateTimeComponents::DateTimeComponents(const DateTimeComponents & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_353be96736eb4a0e, a0.this$, a1)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c01975213386f6a3, a0, a1.this$, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3796b665437eba81, a0, a1, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b45da7a278589bc, a0, a1.this$, a2, a3, a4, a5)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_053a596a1809d580, a0, a1, a2, a3, a4, a5)) {}

      jint DateTimeComponents::compareTo(const DateTimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_0b255e184011a8ea], a0.this$);
      }

      jboolean DateTimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ::org::orekit::time::DateComponents DateTimeComponents::getDate() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getDate_ef81839d8717cc3a]));
      }

      ::org::orekit::time::TimeComponents DateTimeComponents::getTime() const
      {
        return ::org::orekit::time::TimeComponents(env->callObjectMethod(this$, mids$[mid_getTime_6230b16c2680001d]));
      }

      jint DateTimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jdouble DateTimeComponents::offsetFrom(const DateTimeComponents & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_9e85e6d4a4eee270], a0.this$);
      }

      DateTimeComponents DateTimeComponents::parseDateTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateTimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDateTime_3d71e8ecdce2fb61], a0.this$));
      }

      DateTimeComponents DateTimeComponents::roundIfNeeded(jint a0, jint a1) const
      {
        return DateTimeComponents(env->callObjectMethod(this$, mids$[mid_roundIfNeeded_3765068295c1bb88], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0f10d4a5e06f61c0], a0));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_637f0334ff6ee92d], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toStringRfc3339() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_3cffd47377eca18a]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_3cffd47377eca18a]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_637f0334ff6ee92d], a0, a1));
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
      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data);
      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data);
      static PyGetSetDef t_DateTimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateTimeComponents, date),
        DECLARE_GET_FIELD(t_DateTimeComponents, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateTimeComponents__methods_[] = {
        DECLARE_METHOD(t_DateTimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, getTime, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, offsetFrom, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, parseDateTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, roundIfNeeded, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringRfc3339, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateTimeComponents)[] = {
        { Py_tp_methods, t_DateTimeComponents__methods_ },
        { Py_tp_init, (void *) t_DateTimeComponents_init_ },
        { Py_tp_getset, t_DateTimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateTimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateTimeComponents, t_DateTimeComponents, DateTimeComponents);

      void t_DateTimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateTimeComponents), &PY_TYPE_DEF(DateTimeComponents), module, "DateTimeComponents", 0);
      }

      void t_DateTimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "class_", make_descriptor(DateTimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "wrapfn_", make_descriptor(t_DateTimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateTimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "JULIAN_EPOCH", make_descriptor(t_DateTimeComponents::wrap_Object(*DateTimeComponents::JULIAN_EPOCH)));
      }

      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateTimeComponents::initializeClass, 1)))
          return NULL;
        return t_DateTimeComponents::wrap_Object(DateTimeComponents(((t_DateTimeComponents *) arg)->object.this$));
      }
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateTimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            DateTimeComponents a0((jobject) NULL);
            jdouble a1;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kD", DateTimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKIIID", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self)
      {
        ::org::orekit::time::TimeComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateTimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateTimeComponents::parseDateTime(a0));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDateTime", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args)
      {
        jint a0;
        jint a1;
        DateTimeComponents result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.roundIfNeeded(a0, a1));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "roundIfNeeded", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringRfc3339());
        return j2p(result);
      }

      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
            return j2p(result);
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }

      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::TimeComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_8d65f6d089410d57] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_a97116b9f853f824] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_6a1647523266017e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8d65f6d089410d57, a0, a1.this$)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a97116b9f853f824, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedFieldAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_c2e9b2b1c0db39b3]));
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
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, TimeStampedFieldAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinatesHermiteInterpolator), module, "TimeStampedFieldAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldAngularCoordinatesHermiteInterpolator(((t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/SpacecraftStateInterpolator.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/util/Optional.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftStateInterpolator::class$ = NULL;
      jmethodID *SpacecraftStateInterpolator::mids$ = NULL;
      bool SpacecraftStateInterpolator::live$ = false;

      jclass SpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_03d00ffd0ee81fe0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_e69fe3991d4122f6] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_3eb98fb434e9f71a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_93057eaba5c5145b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_046c155e813ab99f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_checkSampleAndInterpolatorConsistency_9f392c0fc938feab] = env->getStaticMethodID(cls, "checkSampleAndInterpolatorConsistency", "(Ljava/util/List;ZZ)V");
          mids$[mid_checkStatesDefinitionsConsistency_4ccaedadb068bdeb] = env->getStaticMethodID(cls, "checkStatesDefinitionsConsistency", "(Ljava/util/List;)V");
          mids$[mid_getAbsPVAInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_a72036e732076565] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_interpolate_a8fed498836089d5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_03d00ffd0ee81fe0, a0, a1.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_e69fe3991d4122f6, a0, a1.this$, a2.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_3eb98fb434e9f71a, a0, a1, a2.this$, a3.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_93057eaba5c5145b, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::time::TimeInterpolator & a4, const ::org::orekit::time::TimeInterpolator & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_046c155e813ab99f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      void SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(const ::java::util::List & a0, jboolean a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSampleAndInterpolatorConsistency_9f392c0fc938feab], a0.this$, a1, a2);
      }

      void SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkStatesDefinitionsConsistency_4ccaedadb068bdeb], a0.this$);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_d0ccac9b4c6bdd55]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_d0ccac9b4c6bdd55]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_d0ccac9b4c6bdd55]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_d0ccac9b4c6bdd55]));
      }

      jint SpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_412668abc8d889e9]);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_d0ccac9b4c6bdd55]));
      }

      ::org::orekit::frames::Frame SpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_6c9bc0a928c56d4e]));
      }

      ::java::util::List SpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_0d9551367f7ecdef]));
      }

      ::org::orekit::propagation::SpacecraftState SpacecraftStateInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_a72036e732076565], a0.this$, a1.this$));
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
      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args);
      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_SpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_SpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkSampleAndInterpolatorConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkStatesDefinitionsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_SpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_SpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_SpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(SpacecraftStateInterpolator, t_SpacecraftStateInterpolator, SpacecraftStateInterpolator);
      PyObject *t_SpacecraftStateInterpolator::wrap_Object(const SpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftStateInterpolator), &PY_TYPE_DEF(SpacecraftStateInterpolator), module, "SpacecraftStateInterpolator", 0);
      }

      void t_SpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "class_", make_descriptor(SpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_SpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_SpacecraftStateInterpolator::wrap_Object(SpacecraftStateInterpolator(((t_SpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::TimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::TimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_TimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_TimeInterpolator::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
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

      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        jboolean a2;

        if (!parseArgs(args, "KZZ", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSampleAndInterpolatorConsistency", args);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkStatesDefinitionsConsistency", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataKey::class$ = NULL;
            jmethodID *CommonMetadataKey::mids$ = NULL;
            bool CommonMetadataKey::live$ = false;
            CommonMetadataKey *CommonMetadataKey::CENTER_NAME = NULL;
            CommonMetadataKey *CommonMetadataKey::OBJECT_ID = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME = NULL;
            CommonMetadataKey *CommonMetadataKey::REF_FRAME_EPOCH = NULL;

            jclass CommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_ed0894e4f39ba1e9] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;)Z");
                mids$[mid_valueOf_f0a630142e41faf7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");
                mids$[mid_values_6a84328aebdf684c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new CommonMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                OBJECT_ID = new CommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                REF_FRAME_EPOCH = new CommonMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/CommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_ed0894e4f39ba1e9], a0.this$, a1.this$, a2.this$);
            }

            CommonMetadataKey CommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f0a630142e41faf7], a0.this$));
            }

            JArray< CommonMetadataKey > CommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6a84328aebdf684c]));
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
            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args);
            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data);
            static PyGetSetDef t_CommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataKey)[] = {
              { Py_tp_methods, t_CommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CommonMetadataKey, t_CommonMetadataKey, CommonMetadataKey);
            PyObject *t_CommonMetadataKey::wrap_Object(const CommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CommonMetadataKey *self = (t_CommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataKey), &PY_TYPE_DEF(CommonMetadataKey), module, "CommonMetadataKey", 0);
            }

            void t_CommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "class_", make_descriptor(CommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "wrapfn_", make_descriptor(t_CommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "CENTER_NAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "OBJECT_ID", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::OBJECT_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataKey), "REF_FRAME_EPOCH", make_descriptor(t_CommonMetadataKey::wrap_Object(*CommonMetadataKey::REF_FRAME_EPOCH)));
            }

            static PyObject *t_CommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataKey::wrap_Object(CommonMetadataKey(((t_CommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CommonMetadataKey_of_(t_CommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CommonMetadataKey_process(t_CommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::valueOf(a0));
                return t_CommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< CommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::CommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_CommonMetadataKey_get__parameters_(t_CommonMetadataKey *self, void *data)
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
#include "org/hipparchus/ode/Parameterizable.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *Parameterizable::class$ = NULL;
      jmethodID *Parameterizable::mids$ = NULL;
      bool Parameterizable::live$ = false;

      jclass Parameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/Parameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParametersNames_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_fd2162b8a05a22fe] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List Parameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_0d9551367f7ecdef]));
      }

      jboolean Parameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_fd2162b8a05a22fe], a0.this$);
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
      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self);
      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg);
      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data);
      static PyGetSetDef t_Parameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_Parameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Parameterizable__methods_[] = {
        DECLARE_METHOD(t_Parameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_Parameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Parameterizable)[] = {
        { Py_tp_methods, t_Parameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Parameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Parameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Parameterizable, t_Parameterizable, Parameterizable);

      void t_Parameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Parameterizable), &PY_TYPE_DEF(Parameterizable), module, "Parameterizable", 0);
      }

      void t_Parameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "class_", make_descriptor(Parameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "wrapfn_", make_descriptor(t_Parameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Parameterizable::initializeClass, 1)))
          return NULL;
        return t_Parameterizable::wrap_Object(Parameterizable(((t_Parameterizable *) arg)->object.this$));
      }
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Parameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldAbstractGaussianContributionContext::class$ = NULL;
            jmethodID *FieldAbstractGaussianContributionContext::mids$ = NULL;
            bool FieldAbstractGaussianContributionContext::live$ = false;

            jclass FieldAbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_613c8f46c659f636] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_613c8f46c659f636] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOA_613c8f46c659f636] = env->getMethodID(cls, "getOOA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOAB_613c8f46c659f636] = env->getMethodID(cls, "getOOAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoBpo_613c8f46c659f636] = env->getMethodID(cls, "getOoBpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoMU_613c8f46c659f636] = env->getMethodID(cls, "getOoMU", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTon2a_613c8f46c659f636] = env->getMethodID(cls, "getTon2a", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMu() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOAB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoBpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoBpo_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoMU() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoMU_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getTon2a() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTon2a_613c8f46c659f636]));
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
            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args);
            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_FieldAbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ton2a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_FieldAbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldAbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldAbstractGaussianContributionContext, t_FieldAbstractGaussianContributionContext, FieldAbstractGaussianContributionContext);
            PyObject *t_FieldAbstractGaussianContributionContext::wrap_Object(const FieldAbstractGaussianContributionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAbstractGaussianContributionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAbstractGaussianContributionContext), &PY_TYPE_DEF(FieldAbstractGaussianContributionContext), module, "FieldAbstractGaussianContributionContext", 0);
            }

            void t_FieldAbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "class_", make_descriptor(FieldAbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_FieldAbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_FieldAbstractGaussianContributionContext::wrap_Object(FieldAbstractGaussianContributionContext(((t_FieldAbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMu());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoBpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoMU());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTon2a());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMu());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoBpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoMU());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTon2a());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *AbstractIntegerDistribution::class$ = NULL;
        jmethodID *AbstractIntegerDistribution::mids$ = NULL;
        bool AbstractIntegerDistribution::live$ = false;

        jclass AbstractIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/AbstractIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_inverseCumulativeProbability_abbeb9db7144ca23] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_21b81d54c06b64b0] = env->getMethodID(cls, "probability", "(II)D");
            mids$[mid_solveInverseCumulativeProbability_fcd4fd665c5a481d] = env->getMethodID(cls, "solveInverseCumulativeProbability", "(DII)I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractIntegerDistribution::AbstractIntegerDistribution() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jint AbstractIntegerDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_abbeb9db7144ca23], a0);
        }

        jdouble AbstractIntegerDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
        }

        jdouble AbstractIntegerDistribution::probability(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_21b81d54c06b64b0], a0, a1);
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
      namespace discrete {
        static PyObject *t_AbstractIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractIntegerDistribution_init_(t_AbstractIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractIntegerDistribution_inverseCumulativeProbability(t_AbstractIntegerDistribution *self, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_logProbability(t_AbstractIntegerDistribution *self, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_probability(t_AbstractIntegerDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegerDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractIntegerDistribution, logProbability, METH_O),
          DECLARE_METHOD(t_AbstractIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegerDistribution)[] = {
          { Py_tp_methods, t_AbstractIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_AbstractIntegerDistribution_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegerDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegerDistribution, t_AbstractIntegerDistribution, AbstractIntegerDistribution);

        void t_AbstractIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegerDistribution), &PY_TYPE_DEF(AbstractIntegerDistribution), module, "AbstractIntegerDistribution", 0);
        }

        void t_AbstractIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "class_", make_descriptor(AbstractIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "wrapfn_", make_descriptor(t_AbstractIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegerDistribution::wrap_Object(AbstractIntegerDistribution(((t_AbstractIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractIntegerDistribution_init_(t_AbstractIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          AbstractIntegerDistribution object((jobject) NULL);

          INT_CALL(object = AbstractIntegerDistribution());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractIntegerDistribution_inverseCumulativeProbability(t_AbstractIntegerDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegerDistribution_logProbability(t_AbstractIntegerDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegerDistribution_probability(t_AbstractIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *InterpolatingMicrosphere::class$ = NULL;
        jmethodID *InterpolatingMicrosphere::mids$ = NULL;
        bool InterpolatingMicrosphere::live$ = false;

        jclass InterpolatingMicrosphere::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/InterpolatingMicrosphere");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f411c87cf5f815c1] = env->getMethodID(cls, "<init>", "(IIDDDLorg/hipparchus/random/UnitSphereRandomVectorGenerator;)V");
            mids$[mid_copy_8d04df50e5d7067d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/analysis/interpolation/InterpolatingMicrosphere;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getSize_412668abc8d889e9] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_value_c089c9c00fccb9ee] = env->getMethodID(cls, "value", "([D[[D[DDD)D");
            mids$[mid_add_bdd4888f749f6b83] = env->getMethodID(cls, "add", "([DZ)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterpolatingMicrosphere::InterpolatingMicrosphere(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::random::UnitSphereRandomVectorGenerator & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f411c87cf5f815c1, a0, a1, a2, a3, a4, a5.this$)) {}

        InterpolatingMicrosphere InterpolatingMicrosphere::copy() const
        {
          return InterpolatingMicrosphere(env->callObjectMethod(this$, mids$[mid_copy_8d04df50e5d7067d]));
        }

        jint InterpolatingMicrosphere::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        jint InterpolatingMicrosphere::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_412668abc8d889e9]);
        }

        jdouble InterpolatingMicrosphere::value(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< jdouble > & a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_c089c9c00fccb9ee], a0.this$, a1.this$, a2.this$, a3, a4);
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
      namespace interpolation {
        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self);
        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args);
        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data);
        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data);
        static PyGetSetDef t_InterpolatingMicrosphere__fields_[] = {
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, dimension),
          DECLARE_GET_FIELD(t_InterpolatingMicrosphere, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterpolatingMicrosphere__methods_[] = {
          DECLARE_METHOD(t_InterpolatingMicrosphere, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, copy, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, getSize, METH_NOARGS),
          DECLARE_METHOD(t_InterpolatingMicrosphere, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterpolatingMicrosphere)[] = {
          { Py_tp_methods, t_InterpolatingMicrosphere__methods_ },
          { Py_tp_init, (void *) t_InterpolatingMicrosphere_init_ },
          { Py_tp_getset, t_InterpolatingMicrosphere__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterpolatingMicrosphere)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InterpolatingMicrosphere, t_InterpolatingMicrosphere, InterpolatingMicrosphere);

        void t_InterpolatingMicrosphere::install(PyObject *module)
        {
          installType(&PY_TYPE(InterpolatingMicrosphere), &PY_TYPE_DEF(InterpolatingMicrosphere), module, "InterpolatingMicrosphere", 0);
        }

        void t_InterpolatingMicrosphere::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "class_", make_descriptor(InterpolatingMicrosphere::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "wrapfn_", make_descriptor(t_InterpolatingMicrosphere::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingMicrosphere), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterpolatingMicrosphere_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterpolatingMicrosphere::initializeClass, 1)))
            return NULL;
          return t_InterpolatingMicrosphere::wrap_Object(InterpolatingMicrosphere(((t_InterpolatingMicrosphere *) arg)->object.this$));
        }
        static PyObject *t_InterpolatingMicrosphere_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterpolatingMicrosphere::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterpolatingMicrosphere_init_(t_InterpolatingMicrosphere *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::random::UnitSphereRandomVectorGenerator a5((jobject) NULL);
          InterpolatingMicrosphere object((jobject) NULL);

          if (!parseArgs(args, "IIDDDk", ::org::hipparchus::random::UnitSphereRandomVectorGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = InterpolatingMicrosphere(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterpolatingMicrosphere_copy(t_InterpolatingMicrosphere *self)
        {
          InterpolatingMicrosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_InterpolatingMicrosphere::wrap_Object(result);
        }

        static PyObject *t_InterpolatingMicrosphere_getDimension(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_getSize(t_InterpolatingMicrosphere *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_InterpolatingMicrosphere_value(t_InterpolatingMicrosphere *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble result;

          if (!parseArgs(args, "[D[[D[DDD", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2, a3, a4));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_InterpolatingMicrosphere_get__dimension(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_InterpolatingMicrosphere_get__size(t_InterpolatingMicrosphere *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/ISAACRandom.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ISAACRandom::class$ = NULL;
      jmethodID *ISAACRandom::mids$ = NULL;
      bool ISAACRandom::live$ = false;

      jclass ISAACRandom::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ISAACRandom");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ISAACRandom::ISAACRandom() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ISAACRandom::ISAACRandom(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      ISAACRandom::ISAACRandom(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint ISAACRandom::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      void ISAACRandom::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
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
      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args);
      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args);
      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data);
      static PyGetSetDef t_ISAACRandom__fields_[] = {
        DECLARE_SET_FIELD(t_ISAACRandom, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ISAACRandom__methods_[] = {
        DECLARE_METHOD(t_ISAACRandom, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ISAACRandom, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ISAACRandom)[] = {
        { Py_tp_methods, t_ISAACRandom__methods_ },
        { Py_tp_init, (void *) t_ISAACRandom_init_ },
        { Py_tp_getset, t_ISAACRandom__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ISAACRandom)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(ISAACRandom, t_ISAACRandom, ISAACRandom);

      void t_ISAACRandom::install(PyObject *module)
      {
        installType(&PY_TYPE(ISAACRandom), &PY_TYPE_DEF(ISAACRandom), module, "ISAACRandom", 0);
      }

      void t_ISAACRandom::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "class_", make_descriptor(ISAACRandom::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "wrapfn_", make_descriptor(t_ISAACRandom::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ISAACRandom::initializeClass, 1)))
          return NULL;
        return t_ISAACRandom::wrap_Object(ISAACRandom(((t_ISAACRandom *) arg)->object.this$));
      }
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ISAACRandom::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ISAACRandom object((jobject) NULL);

            INT_CALL(object = ISAACRandom());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
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

      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
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
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolver::class$ = NULL;
        jmethodID *UnivariateSolver::mids$ = NULL;
        bool UnivariateSolver::live$ = false;

        jclass UnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace solvers {
        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolver)[] = {
          { Py_tp_methods, t_UnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateSolver, t_UnivariateSolver, UnivariateSolver);

        void t_UnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolver), &PY_TYPE_DEF(UnivariateSolver), module, "UnivariateSolver", 0);
        }

        void t_UnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "class_", make_descriptor(UnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "wrapfn_", make_descriptor(t_UnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolver::wrap_Object(UnivariateSolver(((t_UnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EcksteinHechlerPropagatorBuilder::class$ = NULL;
        jmethodID *EcksteinHechlerPropagatorBuilder::mids$ = NULL;
        bool EcksteinHechlerPropagatorBuilder::live$ = false;

        jclass EcksteinHechlerPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_23f5f76d05add5ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_cae68c54ce4b2fd0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_4075f501d5fbb493] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_5ad9cbd11735eecd] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_8997f3f06dd892ce] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_23f5f76d05add5ec, a0.this$, a1.this$, a2.this$, a3)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_cae68c54ce4b2fd0, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        EcksteinHechlerPropagatorBuilder::EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::orbits::OrbitType & a9, const ::org::orekit::orbits::PositionAngleType & a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_4075f501d5fbb493, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8, a9.this$, a10.this$, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EcksteinHechlerPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EcksteinHechlerPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_5ad9cbd11735eecd], a0.this$));
        }

        EcksteinHechlerPropagatorBuilder EcksteinHechlerPropagatorBuilder::copy() const
        {
          return EcksteinHechlerPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_8997f3f06dd892ce]));
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
        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EcksteinHechlerPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagatorBuilder)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagatorBuilder, t_EcksteinHechlerPropagatorBuilder, EcksteinHechlerPropagatorBuilder);

        void t_EcksteinHechlerPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagatorBuilder), &PY_TYPE_DEF(EcksteinHechlerPropagatorBuilder), module, "EcksteinHechlerPropagatorBuilder", 0);
        }

        void t_EcksteinHechlerPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "class_", make_descriptor(EcksteinHechlerPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagatorBuilder::wrap_Object(EcksteinHechlerPropagatorBuilder(((t_EcksteinHechlerPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagatorBuilder_init_(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::orbits::OrbitType a9((jobject) NULL);
              PyTypeObject **p9;
              ::org::orekit::orbits::PositionAngleType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              EcksteinHechlerPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDDKKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::orbits::t_OrbitType::parameters_, &a10, &p10, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a11))
              {
                INT_CALL(object = EcksteinHechlerPropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildLeastSquaresModel(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_buildPropagator(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagatorBuilder_copy(t_EcksteinHechlerPropagatorBuilder *self, PyObject *args)
        {
          EcksteinHechlerPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EcksteinHechlerPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/VariationalEquation.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation::class$ = NULL;
      jmethodID *VariationalEquation::mids$ = NULL;
      bool VariationalEquation::live$ = false;

      jclass VariationalEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_615efab84e355fff] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEJacobiansProvider;)V");
          mids$[mid_init$_e1734deb8e540c22] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/OrdinaryDifferentialEquation;[DLorg/hipparchus/ode/ParametersController;[Lorg/hipparchus/ode/ParameterConfiguration;)V");
          mids$[mid_extractMainSetJacobian_cb9443542c288f33] = env->getMethodID(cls, "extractMainSetJacobian", "(Lorg/hipparchus/ode/ODEState;)[[D");
          mids$[mid_extractParameterJacobian_ad3e88544b6640ff] = env->getMethodID(cls, "extractParameterJacobian", "(Lorg/hipparchus/ode/ODEState;Ljava/lang/String;)[D");
          mids$[mid_setInitialMainStateJacobian_edb361bfdd1ad9ae] = env->getMethodID(cls, "setInitialMainStateJacobian", "([[D)V");
          mids$[mid_setInitialParameterJacobian_7d8c14f144e3f080] = env->getMethodID(cls, "setInitialParameterJacobian", "(Ljava/lang/String;[D)V");
          mids$[mid_setUpInitialState_14e0148c007bcf61] = env->getMethodID(cls, "setUpInitialState", "(Lorg/hipparchus/ode/ODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEJacobiansProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_615efab84e355fff, a0.this$, a1.this$)) {}

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ParametersController & a3, const JArray< ::org::hipparchus::ode::ParameterConfiguration > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1734deb8e540c22, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< JArray< jdouble > > VariationalEquation::extractMainSetJacobian(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_extractMainSetJacobian_cb9443542c288f33], a0.this$));
      }

      JArray< jdouble > VariationalEquation::extractParameterJacobian(const ::org::hipparchus::ode::ODEState & a0, const ::java::lang::String & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameterJacobian_ad3e88544b6640ff], a0.this$, a1.this$));
      }

      void VariationalEquation::setInitialMainStateJacobian(const JArray< JArray< jdouble > > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialMainStateJacobian_edb361bfdd1ad9ae], a0.this$);
      }

      void VariationalEquation::setInitialParameterJacobian(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialParameterJacobian_7d8c14f144e3f080], a0.this$, a1.this$);
      }

      ::org::hipparchus::ode::ODEState VariationalEquation::setUpInitialState(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_setUpInitialState_14e0148c007bcf61], a0.this$));
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
      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg);
      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data);
      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data);
      static PyGetSetDef t_VariationalEquation__fields_[] = {
        DECLARE_SET_FIELD(t_VariationalEquation, initialMainStateJacobian),
        DECLARE_SET_FIELD(t_VariationalEquation, upInitialState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VariationalEquation__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, extractMainSetJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, extractParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setInitialMainStateJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, setInitialParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setUpInitialState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation)[] = {
        { Py_tp_methods, t_VariationalEquation__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation_init_ },
        { Py_tp_getset, t_VariationalEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VariationalEquation, t_VariationalEquation, VariationalEquation);

      void t_VariationalEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation), &PY_TYPE_DEF(VariationalEquation), module, "VariationalEquation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "MismatchedEquations", make_descriptor(&PY_TYPE_DEF(VariationalEquation$MismatchedEquations)));
      }

      void t_VariationalEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "class_", make_descriptor(VariationalEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "wrapfn_", make_descriptor(t_VariationalEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation::wrap_Object(VariationalEquation(((t_VariationalEquation *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::ODEJacobiansProvider a1((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEJacobiansProvider::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VariationalEquation(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::ode::ParametersController a3((jobject) NULL);
            JArray< ::org::hipparchus::ode::ParameterConfiguration > a4((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk[Dk[k", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ParametersController::initializeClass, ::org::hipparchus::ode::ParameterConfiguration::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = VariationalEquation(a0, a1, a2, a3, a4));
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

      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.extractMainSetJacobian(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "extractMainSetJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "ks", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractParameterJacobian(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(self->object.setInitialMainStateJacobian(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialMainStateJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setInitialParameterJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::org::hipparchus::ode::ODEState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.setUpInitialState(a0));
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setUpInitialState", arg);
        return NULL;
      }

      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          if (!parseArg(arg, "[[D", &value))
          {
            INT_CALL(self->object.setInitialMainStateJacobian(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "initialMainStateJacobian", arg);
        return -1;
      }

      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &value))
          {
            INT_CALL(self->object.setUpInitialState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "upInitialState", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *GeometricMean::class$ = NULL;
          jmethodID *GeometricMean::mids$ = NULL;
          bool GeometricMean::live$ = false;

          jclass GeometricMean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/GeometricMean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_6a62c6cf36c34733] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_aggregate_b7317f18b8318562] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/GeometricMean;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_942e62182ea7f28a] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/GeometricMean;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometricMean::GeometricMean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          GeometricMean::GeometricMean(const ::org::hipparchus::stat::descriptive::summary::SumOfLogs & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_6a62c6cf36c34733, a0.this$)) {}

          void GeometricMean::aggregate(const GeometricMean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_b7317f18b8318562], a0.this$);
          }

          void GeometricMean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          GeometricMean GeometricMean::copy() const
          {
            return GeometricMean(env->callObjectMethod(this$, mids$[mid_copy_942e62182ea7f28a]));
          }

          jdouble GeometricMean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jlong GeometricMean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble GeometricMean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void GeometricMean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg);
          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data);
          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data);
          static PyGetSetDef t_GeometricMean__fields_[] = {
            DECLARE_GET_FIELD(t_GeometricMean, n),
            DECLARE_GET_FIELD(t_GeometricMean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GeometricMean__methods_[] = {
            DECLARE_METHOD(t_GeometricMean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, aggregate, METH_O),
            DECLARE_METHOD(t_GeometricMean, clear, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, copy, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getN, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometricMean)[] = {
            { Py_tp_methods, t_GeometricMean__methods_ },
            { Py_tp_init, (void *) t_GeometricMean_init_ },
            { Py_tp_getset, t_GeometricMean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometricMean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(GeometricMean, t_GeometricMean, GeometricMean);

          void t_GeometricMean::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometricMean), &PY_TYPE_DEF(GeometricMean), module, "GeometricMean", 0);
          }

          void t_GeometricMean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "class_", make_descriptor(GeometricMean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "wrapfn_", make_descriptor(t_GeometricMean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometricMean::initializeClass, 1)))
              return NULL;
            return t_GeometricMean::wrap_Object(GeometricMean(((t_GeometricMean *) arg)->object.this$));
          }
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometricMean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GeometricMean object((jobject) NULL);

                INT_CALL(object = GeometricMean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::summary::SumOfLogs a0((jobject) NULL);
                GeometricMean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::summary::SumOfLogs::initializeClass, &a0))
                {
                  INT_CALL(object = GeometricMean(a0));
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

          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg)
          {
            GeometricMean a0((jobject) NULL);

            if (!parseArg(arg, "k", GeometricMean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args)
          {
            GeometricMean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_GeometricMean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagatorBuilder::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagatorBuilder::mids$ = NULL;
          bool GLONASSAnalyticalPropagatorBuilder::live$ = false;

          jclass GLONASSAnalyticalPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_288e58e8962e6403] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;)V");
              mids$[mid_init$_4f0bf06544a648db] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/data/DataContext;)V");
              mids$[mid_attitudeProvider_f2b07e16ed5ef284] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_build_2bdec6e86d80c4e6] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
              mids$[mid_dataContext_7e49273d33bbb3c6] = env->getMethodID(cls, "dataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_ecef_c84e8cca474e689b] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_eci_c84e8cca474e689b] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_mass_422d3e2b895a53cd] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_288e58e8962e6403, a0.this$)) {}

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0, const ::org::orekit::data::DataContext & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f0bf06544a648db, a0.this$, a1.this$)) {}

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_f2b07e16ed5ef284], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAnalyticalPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_build_2bdec6e86d80c4e6]));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::dataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_dataContext_7e49273d33bbb3c6], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_c84e8cca474e689b], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_c84e8cca474e689b], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::mass(jdouble a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_422d3e2b895a53cd], a0));
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
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GLONASSAnalyticalPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, dataContext, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagatorBuilder)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GLONASSAnalyticalPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagatorBuilder, t_GLONASSAnalyticalPropagatorBuilder, GLONASSAnalyticalPropagatorBuilder);

          void t_GLONASSAnalyticalPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagatorBuilder), &PY_TYPE_DEF(GLONASSAnalyticalPropagatorBuilder), module, "GLONASSAnalyticalPropagatorBuilder", 0);
          }

          void t_GLONASSAnalyticalPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "class_", make_descriptor(GLONASSAnalyticalPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(GLONASSAnalyticalPropagatorBuilder(((t_GLONASSAnalyticalPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0, a1));
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

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.dataContext(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "dataContext", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedCoreFormats::class$ = NULL;
      jmethodID *LocalizedCoreFormats::mids$ = NULL;
      bool LocalizedCoreFormats::live$ = false;
      LocalizedCoreFormats *LocalizedCoreFormats::ARITHMETIC_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BANDWIDTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BASE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COLUMN_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONSTRAINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONVERGENCE_FAILED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DEGREES_OF_FREEDOM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIGEST_NOT_INITIALIZED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_BRACKETING = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_DECOMPOSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_FRACTION_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FUNCTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILLEGAL_STATE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::IMAGINARY_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_LARGER_THAN_MAX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INTERNAL_ERROR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INVALID_MAX_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LENGTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MAX_COUNT_EXCEEDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MEAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SYMMETRIC_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_INFINITE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_BRACKETING_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_FINITE_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_DATA$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESSES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_TRIALS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_LEFT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_ADDITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_EXCEEDS_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POLYNOMIAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::REAL_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROBUSTNESS_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROW_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SHAPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SIMPLE_MESSAGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::STANDARD_DEVIATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNKNOWN_MODE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNSUPPORTED_OPERATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::URL_CONTAINS_NO_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::USER_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WHOLE_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_STATE_SIZE = NULL;

      jclass LocalizedCoreFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedCoreFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_30ae7f322f00437e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/exception/LocalizedCoreFormats;");
          mids$[mid_values_55f7aeabb1f44e95] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/exception/LocalizedCoreFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARITHMETIC_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARITHMETIC_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SUMS_TO_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SUMS_TO_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BANDWIDTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BANDWIDTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BASE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BASE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_BAD_ARGUMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_BAD_ARGUMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_FAILED_CONVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_FAILED_CONVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_INVALID_PARAMETERS_ORDER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_INVALID_PARAMETERS_ORDER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_INSTANCE_AS_COMPLEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_OBJECT_TO_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_OBJECT_TO_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE_AS_TYPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE_AS_TYPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COLUMN_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COLUMN_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONSTRAINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONSTRAINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_INFINITY_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_INFINITY_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_NAN_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_NAN_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONVERGENCE_FAILED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONVERGENCE_FAILED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DEGREES_OF_FREEDOM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DEGREES_OF_FREEDOM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DERIVATION_ORDER_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DERIVATION_ORDER_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIFFERENT_ROWS_LENGTHS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIFFERENT_ROWS_LENGTHS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIGEST_NOT_INITIALIZED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIGEST_NOT_INITIALIZED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH_2x2 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH_2x2", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISTRIBUTION_NOT_LOADED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISTRIBUTION_NOT_LOADED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_INTERPOLATION_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_INTERPOLATION_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_COLUMN_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_ROW_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_ROW_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ENDPOINTS_NOT_AN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ENDPOINTS_NOT_AN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPANSION_FACTOR_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPANSION_FACTOR_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FACTORIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FACTORIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_BRACKETING = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_BRACKETING", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_DECOMPOSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_DECOMPOSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_FRACTION_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_FRACTION_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_COLUMNS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_COLUMNS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_ROWS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_ROWS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION_CONVERSION_OVERFLOW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION_CONVERSION_OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FUNCTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FUNCTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILLEGAL_STATE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILL_CONDITIONED_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILL_CONDITIONED_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          IMAGINARY_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "IMAGINARY_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_LARGER_THAN_MAX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_LARGER_THAN_MAX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_CAPACITY_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_CAPACITY_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_COLUMN_AFTER_FINAL_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_COLUMN_AFTER_FINAL_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_ROW_AFTER_FINAL_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_ROW_AFTER_FINAL_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_ROWS_AND_COLUMNS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_ROWS_AND_COLUMNS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INTERNAL_ERROR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INVALID_MAX_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INVALID_MAX_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LENGTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LENGTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_BOUND_NOT_BELOW_UPPER_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MAX_COUNT_EXCEEDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MAX_COUNT_EXCEEDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MEAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MEAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_COMPLEX_MODULE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_COMPLEX_MODULE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_CONVERGENT_CONTINUED_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_CONVERGENT_CONTINUED_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_POSITIVE_DEFINITE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_POSITIVE_DEFINITE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SELF_ADJOINT_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SELF_ADJOINT_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SYMMETRIC_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SYMMETRIC_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_INFINITE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_INFINITE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_BRACKETING_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_BRACKETING_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_FINITE_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_FINITE_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_WINDOW_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_WINDOW_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_CONVERGENCE_WITH_ANY_START_POINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_CONVERGENCE_WITH_ANY_START_POINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_DATA$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_OPTIMUM_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_OPTIMUM_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_INTERPOLATION_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_INTERPOLATION_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESSES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESSES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_TRIALS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_TRIALS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_OVERFLOW_AFTER_MULTIPLY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_LEFT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_LEFT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_SIMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_SIMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_ADDITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_ADDITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_MULTIPLICATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_MULTIPLICATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_SUBTRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_SUBTRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_EXCEEDS_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_EXCEEDS_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POLYNOMIAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POLYNOMIAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          REAL_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "REAL_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROBUSTNESS_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROBUSTNESS_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROOTS_OF_UNITY_NOT_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROOTS_OF_UNITY_NOT_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROW_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROW_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SHAPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SHAPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SIMPLE_MESSAGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SIMPLE_MESSAGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          STANDARD_DEVIATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "STANDARD_DEVIATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POINT_NOT_IN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POINT_NOT_IN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SUBARRAY_ENDS_AFTER_ARRAY_END = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SUBARRAY_ENDS_AFTER_ARRAY_END", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_LARGE_CUTOFF_SINGULAR_VALUE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_LARGE_CUTOFF_SINGULAR_VALUE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNKNOWN_MODE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNKNOWN_MODE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNSUPPORTED_OPERATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNSUPPORTED_OPERATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          URL_CONTAINS_NO_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "URL_CONTAINS_NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          USER_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "USER_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WEIGHT_AT_LEAST_ONE_NON_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WEIGHT_AT_LEAST_ONE_NON_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WHOLE_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WHOLE_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WRONG_NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WRONG_NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_FRACTION_TO_DIVIDE_BY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_FRACTION_TO_DIVIDE_BY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_STATE_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_STATE_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedCoreFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String LocalizedCoreFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }

      LocalizedCoreFormats LocalizedCoreFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedCoreFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_30ae7f322f00437e], a0.this$));
      }

      JArray< LocalizedCoreFormats > LocalizedCoreFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedCoreFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_55f7aeabb1f44e95]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self);
      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data);
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data);
      static PyGetSetDef t_LocalizedCoreFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedCoreFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedCoreFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedCoreFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedCoreFormats)[] = {
        { Py_tp_methods, t_LocalizedCoreFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedCoreFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedCoreFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedCoreFormats, t_LocalizedCoreFormats, LocalizedCoreFormats);
      PyObject *t_LocalizedCoreFormats::wrap_Object(const LocalizedCoreFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedCoreFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedCoreFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedCoreFormats), &PY_TYPE_DEF(LocalizedCoreFormats), module, "LocalizedCoreFormats", 0);
      }

      void t_LocalizedCoreFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "class_", make_descriptor(LocalizedCoreFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "wrapfn_", make_descriptor(t_LocalizedCoreFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedCoreFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARITHMETIC_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARITHMETIC_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SUMS_TO_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BANDWIDTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BANDWIDTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BASE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_BAD_ARGUMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_FAILED_CONVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_INVALID_PARAMETERS_ORDER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_OBJECT_TO_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE_AS_TYPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COLUMN_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COLUMN_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONSTRAINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONSTRAINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_INFINITY_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_NAN_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONVERGENCE_FAILED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONVERGENCE_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DEGREES_OF_FREEDOM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DEGREES_OF_FREEDOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DERIVATION_ORDER_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIFFERENT_ROWS_LENGTHS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIGEST_NOT_INITIALIZED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIGEST_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH_2x2", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISTRIBUTION_NOT_LOADED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_INTERPOLATION_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_ROW_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ENDPOINTS_NOT_AN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPANSION_FACTOR_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FACTORIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_BRACKETING", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_BRACKETING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_DECOMPOSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_DECOMPOSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_FRACTION_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_FRACTION_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_COLUMNS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_ROWS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION_CONVERSION_OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FUNCTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILLEGAL_STATE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILLEGAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILL_CONDITIONED_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "IMAGINARY_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::IMAGINARY_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_LARGER_THAN_MAX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_LARGER_THAN_MAX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_CAPACITY_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_COLUMN_AFTER_FINAL_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_ROW_AFTER_FINAL_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_ROWS_AND_COLUMNS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INTERNAL_ERROR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INVALID_MAX_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INVALID_MAX_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LENGTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LENGTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MAX_COUNT_EXCEEDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MAX_COUNT_EXCEEDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MEAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_COMPLEX_MODULE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_CONVERGENT_CONTINUED_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_POSITIVE_DEFINITE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SELF_ADJOINT_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SYMMETRIC_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SYMMETRIC_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_INFINITE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_INFINITE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_BRACKETING_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_BRACKETING_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_FINITE_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_FINITE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_WINDOW_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_CONVERGENCE_WITH_ANY_START_POINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_DATA$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_OPTIMUM_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_INTERPOLATION_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESSES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESSES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_TRIALS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_TRIALS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_LEFT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_LEFT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_SIMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_ADDITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_ADDITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_MULTIPLICATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_SUBTRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_EXCEEDS_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_EXCEEDS_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POLYNOMIAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POLYNOMIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "REAL_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::REAL_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROBUSTNESS_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROBUSTNESS_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROOTS_OF_UNITY_NOT_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROW_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROW_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SHAPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SHAPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SIMPLE_MESSAGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SIMPLE_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "STANDARD_DEVIATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::STANDARD_DEVIATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POINT_NOT_IN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SUBARRAY_ENDS_AFTER_ARRAY_END", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_LARGE_CUTOFF_SINGULAR_VALUE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNKNOWN_MODE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNKNOWN_MODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNSUPPORTED_OPERATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNSUPPORTED_OPERATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "URL_CONTAINS_NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::URL_CONTAINS_NO_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "USER_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::USER_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WEIGHT_AT_LEAST_ONE_NON_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WHOLE_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WHOLE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WRONG_NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_FRACTION_TO_DIVIDE_BY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_STATE_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_STATE_SIZE)));
      }

      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedCoreFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedCoreFormats::wrap_Object(LocalizedCoreFormats(((t_LocalizedCoreFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedCoreFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedCoreFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::valueOf(a0));
          return t_LocalizedCoreFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedCoreFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedCoreFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader$LineParameters::class$ = NULL;
            jmethodID *SOLFSMYDataLoader$LineParameters::mids$ = NULL;
            bool SOLFSMYDataLoader$LineParameters::live$ = false;

            jclass SOLFSMYDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5ca484248216f6c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDD)V");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getF10_557b8123390d8d0c] = env->getMethodID(cls, "getF10", "()D");
                mids$[mid_getF10B_557b8123390d8d0c] = env->getMethodID(cls, "getF10B", "()D");
                mids$[mid_getS10_557b8123390d8d0c] = env->getMethodID(cls, "getS10", "()D");
                mids$[mid_getS10B_557b8123390d8d0c] = env->getMethodID(cls, "getS10B", "()D");
                mids$[mid_getXM10_557b8123390d8d0c] = env->getMethodID(cls, "getXM10", "()D");
                mids$[mid_getXM10B_557b8123390d8d0c] = env->getMethodID(cls, "getXM10B", "()D");
                mids$[mid_getY10_557b8123390d8d0c] = env->getMethodID(cls, "getY10", "()D");
                mids$[mid_getY10B_557b8123390d8d0c] = env->getMethodID(cls, "getY10B", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader$LineParameters::SOLFSMYDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ca484248216f6c1, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader$LineParameters::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_557b8123390d8d0c]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getF10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_557b8123390d8d0c]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_557b8123390d8d0c]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getS10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_557b8123390d8d0c]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_557b8123390d8d0c]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getXM10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_557b8123390d8d0c]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_557b8123390d8d0c]);
            }

            jdouble SOLFSMYDataLoader$LineParameters::getY10B() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_557b8123390d8d0c]);
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
            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, date),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, f10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, s10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, xM10B),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader$LineParameters, y10B),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getF10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getS10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getXM10B, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader$LineParameters, getY10B, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader$LineParameters, t_SOLFSMYDataLoader$LineParameters, SOLFSMYDataLoader$LineParameters);

            void t_SOLFSMYDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader$LineParameters), &PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters), module, "SOLFSMYDataLoader$LineParameters", 0);
            }

            void t_SOLFSMYDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "class_", make_descriptor(SOLFSMYDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader$LineParameters::wrap_Object(SOLFSMYDataLoader$LineParameters(((t_SOLFSMYDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader$LineParameters_init_(t_SOLFSMYDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              SOLFSMYDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = SOLFSMYDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getDate(t_SOLFSMYDataLoader$LineParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getF10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getS10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getXM10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXM10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_getY10B(t_SOLFSMYDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY10B());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__date(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__f10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__s10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__xM10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXM10B());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SOLFSMYDataLoader$LineParameters_get__y10B(t_SOLFSMYDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY10B());
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_7917f8d0fe4dcee2] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_5bd7443246955087] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d4afe7edfd93d28b] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_54a027380ebb9f4f] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_51013759c7807d3e] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0fff86b0133b54f7] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonShortTermEncounter2DPOCMethod::PythonShortTermEncounter2DPOCMethod() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              void PythonShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
              }

              jlong PythonShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
              }

              void PythonShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj);
              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PythonShortTermEncounter2DPOCMethod, t_PythonShortTermEncounter2DPOCMethod, PythonShortTermEncounter2DPOCMethod);

              void t_PythonShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonShortTermEncounter2DPOCMethod), module, "PythonShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute1 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute2 },
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute3 },
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute4 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute5 },
                  { "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute6 },
                  { "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute7 },
                  { "getName", "()Ljava/lang/String;", (void *) t_PythonShortTermEncounter2DPOCMethod_getName8 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonShortTermEncounter2DPOCMethod_getType9 },
                  { "isAMaximumProbabilityOfCollisionMethod", "()Z", (void *) t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10 },
                  { "pythonDecRef", "()V", (void *) t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11 },
                };
                env->registerNatives(cls, methods, 12);
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonShortTermEncounter2DPOCMethod::wrap_Object(PythonShortTermEncounter2DPOCMethod(((t_PythonShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                PythonShortTermEncounter2DPOCMethod object((jobject) NULL);

                INT_CALL(object = PythonShortTermEncounter2DPOCMethod());
                self->object = object;

                Py_INCREF((PyObject *) self);
                self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

                return 0;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOd", o0, o1, (double) a2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOd", o0, o1, o2, o3, o4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a3));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOdd", o0, o1, o2, o3, (double) a4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jboolean value;
                PyObject *result = PyObject_CallMethod(obj, "isAMaximumProbabilityOfCollisionMethod", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "Z", &value))
                {
                  throwTypeError("isAMaximumProbabilityOfCollisionMethod", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jboolean) 0;
              }

              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data)
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
                mids$[mid_compareTo_2ef76e9305253641] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getAp_557b8123390d8d0c] = env->getMethodID(cls, "getAp", "()D");
                mids$[mid_getF107_557b8123390d8d0c] = env->getMethodID(cls, "getF107", "()D");
                mids$[mid_getFileDate_ef81839d8717cc3a] = env->getMethodID(cls, "getFileDate", "()Lorg/orekit/time/DateComponents;");
                mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_2ef76e9305253641], a0.this$);
            }

            jboolean MarshallSolarActivityFutureEstimationLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getAp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAp_557b8123390d8d0c]);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getF107() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107_557b8123390d8d0c]);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimationLoader$LineParameters::getFileDate() const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_ef81839d8717cc3a]));
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *FieldShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *FieldShortTermEncounter2DDefinition::mids$ = NULL;
              bool FieldShortTermEncounter2DDefinition::live$ = false;

              jclass FieldShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d9f5ca49b22816bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_2cb9853012a21226] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_init$_d4b5116272f364f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_8fe564b16348fc31] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_e5e5b1755d0e9181] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_e5e5b1755d0e9181] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_613c8f46c659f636] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_613c8f46c659f636] = env->getMethodID(cls, "computeMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMahalanobisDistance_94d37e81a3238af8] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeMissDistance_613c8f46c659f636] = env->getMethodID(cls, "computeMissDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeOtherPositionInCollisionPlane_71d34b83d8e1fc5a] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_71d34b83d8e1fc5a] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_fd7065394a41d234] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_950575861e9716b3] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/FieldPVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_1d6b27621d7bea96] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_1d6b27621d7bea96] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_1d6b27621d7bea96] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_613c8f46c659f636] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_94d37e81a3238af8] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_1f7ef768a2ea78a9] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_computeSquaredMahalanobisDistance_b36bbc15a8c16f64] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getCombinedRadius_613c8f46c659f636] = env->getMethodID(cls, "getCombinedRadius", "()Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getEncounterFrame_ebfb39c00facd535] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_507d8b7ad2a799b5] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getOtherCovariance_e5e5b1755d0e9181] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getReferenceAtTCA_507d8b7ad2a799b5] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/FieldOrbit;");
                  mids$[mid_getReferenceCovariance_e5e5b1755d0e9181] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/FieldStateCovariance;");
                  mids$[mid_getTca_f1fe4daf77c66560] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/FieldAbsoluteDate;");
                  mids$[mid_toEncounter_00c5ec74f267cba9] = env->getMethodID(cls, "toEncounter", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9f5ca49b22816bb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2cb9853012a21226, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d4b5116272f364f5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              FieldShortTermEncounter2DDefinition::FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fe564b16348fc31, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7)) {}

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_e5e5b1755d0e9181]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_e5e5b1755d0e9181]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeCoppolaEncounterDuration_613c8f46c659f636]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_613c8f46c659f636]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMahalanobisDistance_94d37e81a3238af8], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeMissDistance_613c8f46c659f636]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_71d34b83d8e1fc5a]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_71d34b83d8e1fc5a]));
              }

              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_fd7065394a41d234], a0));
              }

              ::org::orekit::utils::FieldPVCoordinates FieldShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_950575861e9716b3]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_1d6b27621d7bea96]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_1d6b27621d7bea96]));
              }

              ::org::hipparchus::linear::FieldMatrix FieldShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_1d6b27621d7bea96]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_613c8f46c659f636]));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_94d37e81a3238af8], a0));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0, const ::org::hipparchus::linear::FieldMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_1f7ef768a2ea78a9], a0.this$, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_b36bbc15a8c16f64], a0.this$, a1.this$, a2.this$, a3.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCombinedRadius_613c8f46c659f636]));
              }

              ::org::orekit::frames::encounter::EncounterLOF FieldShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_ebfb39c00facd535]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_507d8b7ad2a799b5]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_e5e5b1755d0e9181]));
              }

              ::org::orekit::orbits::FieldOrbit FieldShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_507d8b7ad2a799b5]));
              }

              ::org::orekit::propagation::FieldStateCovariance FieldShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_e5e5b1755d0e9181]));
              }

              ::org::orekit::time::FieldAbsoluteDate FieldShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_f1fe4daf77c66560]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition FieldShortTermEncounter2DDefinition::toEncounter() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(env->callObjectMethod(this$, mids$[mid_toEncounter_00c5ec74f267cba9]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_FieldShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, tca),
                DECLARE_GET_FIELD(t_FieldShortTermEncounter2DDefinition, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                DECLARE_METHOD(t_FieldShortTermEncounter2DDefinition, toEncounter, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_FieldShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_FieldShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_FieldShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldShortTermEncounter2DDefinition, t_FieldShortTermEncounter2DDefinition, FieldShortTermEncounter2DDefinition);
              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_Object(const FieldShortTermEncounter2DDefinition& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldShortTermEncounter2DDefinition::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldShortTermEncounter2DDefinition::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldShortTermEncounter2DDefinition *self = (t_FieldShortTermEncounter2DDefinition *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldShortTermEncounter2DDefinition), &PY_TYPE_DEF(FieldShortTermEncounter2DDefinition), module, "FieldShortTermEncounter2DDefinition", 0);
              }

              void t_FieldShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "class_", make_descriptor(FieldShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_FieldShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_FieldShortTermEncounter2DDefinition::wrap_Object(FieldShortTermEncounter2DDefinition(((t_FieldShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_of_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldShortTermEncounter2DDefinition_init_(t_FieldShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    FieldShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = FieldShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeMissDistance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.computeMissDistance());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_FieldShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::FieldVector2D a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::initializeClass, ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                  break;
                 case 4:
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                    if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getCombinedRadius(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
                OBJ_CALL(result = self->object.getCombinedRadius());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getEncounterFrame(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getOtherCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceAtTCA(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getReferenceCovariance(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_getTca(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_toEncounter(t_FieldShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition result((jobject) NULL);
                OBJ_CALL(result = self->object.toEncounter());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(result);
              }
              static PyObject *t_FieldShortTermEncounter2DDefinition_get__parameters_(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__combinedRadius(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
                OBJ_CALL(value = self->object.getCombinedRadius());
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__encounterFrame(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__otherCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceAtTCA(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__referenceCovariance(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::FieldStateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(value);
              }

              static PyObject *t_FieldShortTermEncounter2DDefinition_get__tca(t_FieldShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
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
#include "org/orekit/utils/FieldLegendrePolynomials.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldLegendrePolynomials::class$ = NULL;
      jmethodID *FieldLegendrePolynomials::mids$ = NULL;
      bool FieldLegendrePolynomials::live$ = false;

      jclass FieldLegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldLegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1c8164bd91d5a690] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getPnm_f548ed78c2486137] = env->getMethodID(cls, "getPnm", "(II)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLegendrePolynomials::FieldLegendrePolynomials(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c8164bd91d5a690, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldLegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPnm_f548ed78c2486137], a0, a1));
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
      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args);
      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args);
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data);
      static PyGetSetDef t_FieldLegendrePolynomials__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLegendrePolynomials, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_FieldLegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLegendrePolynomials)[] = {
        { Py_tp_methods, t_FieldLegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_FieldLegendrePolynomials_init_ },
        { Py_tp_getset, t_FieldLegendrePolynomials__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLegendrePolynomials, t_FieldLegendrePolynomials, FieldLegendrePolynomials);
      PyObject *t_FieldLegendrePolynomials::wrap_Object(const FieldLegendrePolynomials& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLegendrePolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLegendrePolynomials), &PY_TYPE_DEF(FieldLegendrePolynomials), module, "FieldLegendrePolynomials", 0);
      }

      void t_FieldLegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "class_", make_descriptor(FieldLegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "wrapfn_", make_descriptor(t_FieldLegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_FieldLegendrePolynomials::wrap_Object(FieldLegendrePolynomials(((t_FieldLegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldLegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldLegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane$SplitSubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane$SplitSubHyperplane::mids$ = NULL;
        bool SubHyperplane$SplitSubHyperplane::live$ = false;

        jclass SubHyperplane$SplitSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1222fa23062278ba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/SubHyperplane;)V");
            mids$[mid_getMinus_0629297ff6ae927a] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlus_0629297ff6ae927a] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSide_65bf13475edb2de9] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane$SplitSubHyperplane::SubHyperplane$SplitSubHyperplane(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::SubHyperplane & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1222fa23062278ba, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getMinus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getMinus_0629297ff6ae927a]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getPlus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlus_0629297ff6ae927a]));
        }

        ::org::hipparchus::geometry::partitioning::Side SubHyperplane$SplitSubHyperplane::getSide() const
        {
          return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_65bf13475edb2de9]));
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
        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args);
        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane$SplitSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, minus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, plus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, side),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane$SplitSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getSide, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane$SplitSubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane$SplitSubHyperplane__methods_ },
          { Py_tp_init, (void *) t_SubHyperplane$SplitSubHyperplane_init_ },
          { Py_tp_getset, t_SubHyperplane$SplitSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane$SplitSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane$SplitSubHyperplane, t_SubHyperplane$SplitSubHyperplane, SubHyperplane$SplitSubHyperplane);
        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_Object(const SubHyperplane$SplitSubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane$SplitSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane$SplitSubHyperplane), &PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane), module, "SubHyperplane$SplitSubHyperplane", 0);
        }

        void t_SubHyperplane$SplitSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "class_", make_descriptor(SubHyperplane$SplitSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane$SplitSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane$SplitSubHyperplane::wrap_Object(SubHyperplane$SplitSubHyperplane(((t_SubHyperplane$SplitSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane a1((jobject) NULL);
          PyTypeObject **p1;
          SubHyperplane$SplitSubHyperplane object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            INT_CALL(object = SubHyperplane$SplitSubHyperplane(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
          OBJ_CALL(result = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
          OBJ_CALL(value = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
        }
      }
    }
  }
}
