#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/NevilleInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *NevilleInterpolator::class$ = NULL;
        jmethodID *NevilleInterpolator::mids$ = NULL;
        bool NevilleInterpolator::live$ = false;

        jclass NevilleInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/NevilleInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_7abb492defcdfce6] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NevilleInterpolator::NevilleInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm NevilleInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm(env->callObjectMethod(this$, mids$[mid_interpolate_7abb492defcdfce6], a0.this$, a1.this$));
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
        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args);

        static PyMethodDef t_NevilleInterpolator__methods_[] = {
          DECLARE_METHOD(t_NevilleInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NevilleInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NevilleInterpolator)[] = {
          { Py_tp_methods, t_NevilleInterpolator__methods_ },
          { Py_tp_init, (void *) t_NevilleInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NevilleInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NevilleInterpolator, t_NevilleInterpolator, NevilleInterpolator);

        void t_NevilleInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(NevilleInterpolator), &PY_TYPE_DEF(NevilleInterpolator), module, "NevilleInterpolator", 0);
        }

        void t_NevilleInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "class_", make_descriptor(NevilleInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "wrapfn_", make_descriptor(t_NevilleInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NevilleInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NevilleInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NevilleInterpolator::initializeClass, 1)))
            return NULL;
          return t_NevilleInterpolator::wrap_Object(NevilleInterpolator(((t_NevilleInterpolator *) arg)->object.this$));
        }
        static PyObject *t_NevilleInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NevilleInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NevilleInterpolator_init_(t_NevilleInterpolator *self, PyObject *args, PyObject *kwds)
        {
          NevilleInterpolator object((jobject) NULL);

          INT_CALL(object = NevilleInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_NevilleInterpolator_interpolate(t_NevilleInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionLagrangeForm::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader::class$ = NULL;
      jmethodID *JPLEphemeridesLoader::mids$ = NULL;
      bool JPLEphemeridesLoader::live$ = false;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES = NULL;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES = NULL;

      jclass JPLEphemeridesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7680e4f675d5ce38] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)V");
          mids$[mid_init$_58a957ea41d89c4d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getLoadedAstronomicalUnit_dff5885c2c873297] = env->getMethodID(cls, "getLoadedAstronomicalUnit", "()D");
          mids$[mid_getLoadedConstant_2ae203d757702f8f] = env->getMethodID(cls, "getLoadedConstant", "([Ljava/lang/String;)D");
          mids$[mid_getLoadedEarthMoonMassRatio_dff5885c2c873297] = env->getMethodID(cls, "getLoadedEarthMoonMassRatio", "()D");
          mids$[mid_getLoadedGravitationalCoefficient_7aef2115c46be48a] = env->getMethodID(cls, "getLoadedGravitationalCoefficient", "(Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)D");
          mids$[mid_getMaxChunksDuration_dff5885c2c873297] = env->getMethodID(cls, "getMaxChunksDuration", "()D");
          mids$[mid_loadCelestialBody_68e48076ef831536] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DE_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_DE_SUPPORTED_NAMES", "Ljava/lang/String;"));
          DEFAULT_INPOP_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INPOP_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_7680e4f675d5ce38, a0.this$, a1.this$)) {}

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_58a957ea41d89c4d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      jdouble JPLEphemeridesLoader::getLoadedAstronomicalUnit() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedAstronomicalUnit_dff5885c2c873297]);
      }

      jdouble JPLEphemeridesLoader::getLoadedConstant(const JArray< ::java::lang::String > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedConstant_2ae203d757702f8f], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getLoadedEarthMoonMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedEarthMoonMassRatio_dff5885c2c873297]);
      }

      jdouble JPLEphemeridesLoader::getLoadedGravitationalCoefficient(const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedGravitationalCoefficient_7aef2115c46be48a], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getMaxChunksDuration() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxChunksDuration_dff5885c2c873297]);
      }

      ::org::orekit::bodies::CelestialBody JPLEphemeridesLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_68e48076ef831536], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedAstronomicalUnit),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedEarthMoonMassRatio),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, maxChunksDuration),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedAstronomicalUnit, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedConstant, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedEarthMoonMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedGravitationalCoefficient, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getMaxChunksDuration, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader__methods_ },
        { Py_tp_init, (void *) t_JPLEphemeridesLoader_init_ },
        { Py_tp_getset, t_JPLEphemeridesLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader, t_JPLEphemeridesLoader, JPLEphemeridesLoader);

      void t_JPLEphemeridesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader), &PY_TYPE_DEF(JPLEphemeridesLoader), module, "JPLEphemeridesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "EphemerisType", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "RawPVProvider", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider)));
      }

      void t_JPLEphemeridesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "class_", make_descriptor(JPLEphemeridesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_DE_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_INPOP_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES)));
      }

      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader::wrap_Object(JPLEphemeridesLoader(((t_JPLEphemeridesLoader *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            ::org::orekit::frames::Frame a4((jobject) NULL);
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sKkkk", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_, &a2, &a3, &a4))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1, a2, a3, a4));
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

      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        JArray< ::java::lang::String > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[s", &a0))
        {
          OBJ_CALL(result = self->object.getLoadedConstant(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedConstant", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &p0, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
        {
          OBJ_CALL(result = self->object.getLoadedGravitationalCoefficient(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedGravitationalCoefficient", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeInterpolator::class$ = NULL;
      jmethodID *FieldTimeInterpolator::mids$ = NULL;
      bool FieldTimeInterpolator::live$ = false;

      jclass FieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_dff5885c2c873297] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_70830b2a3e9bc73c] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_bfec8f7d8bb341f8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_557eb4540302b61a] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_0b262a74531436b2] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_dff5885c2c873297]);
      }

      jint FieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1]);
      }

      ::java::util::List FieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_2afa36052df4765d]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_70830b2a3e9bc73c], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_bfec8f7d8bb341f8], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_557eb4540302b61a], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_0b262a74531436b2], a0.this$, a1.this$));
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
      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_FieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeInterpolator)[] = {
        { Py_tp_methods, t_FieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeInterpolator, t_FieldTimeInterpolator, FieldTimeInterpolator);
      PyObject *t_FieldTimeInterpolator::wrap_Object(const FieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeInterpolator), &PY_TYPE_DEF(FieldTimeInterpolator), module, "FieldTimeInterpolator", 0);
      }

      void t_FieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "class_", make_descriptor(FieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "wrapfn_", make_descriptor(t_FieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldTimeInterpolator::wrap_Object(FieldTimeInterpolator(((t_FieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data)
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
#include "org/orekit/propagation/integration/FieldIntegratedEphemeris.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
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
            mids$[mid_init$_f22820b10b676d9e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/integration/FieldStateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/FieldDenseOutputModel;Lorg/orekit/utils/FieldArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_02cea343d9f71933] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMaxDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getMinDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_propagateOrbit_3de5e0312fd3e848] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_getMass_2a5f05be83ff251d] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_33f1c56ea7775d4e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_updateAdditionalStates_25e81e971666cba6] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_basicPropagate_f6f1ea8aef3019eb] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldIntegratedEphemeris::FieldIntegratedEphemeris(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::propagation::integration::FieldStateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::FieldDenseOutputModel & a5, const ::org::orekit::utils::FieldArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f22820b10b676d9e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame FieldIntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldIntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_02cea343d9f71933]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_51da00d5b8a3b5df]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldIntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_51da00d5b8a3b5df]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldIntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
        }

        ::java::util::List FieldIntegratedEphemeris::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        void FieldIntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
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
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *WeatherModel::class$ = NULL;
          jmethodID *WeatherModel::mids$ = NULL;
          bool WeatherModel::live$ = false;

          jclass WeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/WeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_weatherParameters_a7786d9d355d3792] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void WeatherModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_a7786d9d355d3792], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args);

          static PyMethodDef t_WeatherModel__methods_[] = {
            DECLARE_METHOD(t_WeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WeatherModel)[] = {
            { Py_tp_methods, t_WeatherModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WeatherModel, t_WeatherModel, WeatherModel);

          void t_WeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(WeatherModel), &PY_TYPE_DEF(WeatherModel), module, "WeatherModel", 0);
          }

          void t_WeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "class_", make_descriptor(WeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "wrapfn_", make_descriptor(t_WeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WeatherModel::initializeClass, 1)))
              return NULL;
            return t_WeatherModel::wrap_Object(WeatherModel(((t_WeatherModel *) arg)->object.this$));
          }
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *DividedDifferenceInterpolator::class$ = NULL;
        jmethodID *DividedDifferenceInterpolator::mids$ = NULL;
        bool DividedDifferenceInterpolator::live$ = false;

        jclass DividedDifferenceInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_40ae0dc6172d15d3] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm;");
            mids$[mid_computeDividedDifference_96bbba26ca51c0d1] = env->getStaticMethodID(cls, "computeDividedDifference", "([D[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DividedDifferenceInterpolator::DividedDifferenceInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm DividedDifferenceInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm(env->callObjectMethod(this$, mids$[mid_interpolate_40ae0dc6172d15d3], a0.this$, a1.this$));
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
        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args);

        static PyMethodDef t_DividedDifferenceInterpolator__methods_[] = {
          DECLARE_METHOD(t_DividedDifferenceInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DividedDifferenceInterpolator)[] = {
          { Py_tp_methods, t_DividedDifferenceInterpolator__methods_ },
          { Py_tp_init, (void *) t_DividedDifferenceInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DividedDifferenceInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DividedDifferenceInterpolator, t_DividedDifferenceInterpolator, DividedDifferenceInterpolator);

        void t_DividedDifferenceInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(DividedDifferenceInterpolator), &PY_TYPE_DEF(DividedDifferenceInterpolator), module, "DividedDifferenceInterpolator", 0);
        }

        void t_DividedDifferenceInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "class_", make_descriptor(DividedDifferenceInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "wrapfn_", make_descriptor(t_DividedDifferenceInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DividedDifferenceInterpolator::initializeClass, 1)))
            return NULL;
          return t_DividedDifferenceInterpolator::wrap_Object(DividedDifferenceInterpolator(((t_DividedDifferenceInterpolator *) arg)->object.this$));
        }
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DividedDifferenceInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds)
        {
          DividedDifferenceInterpolator object((jobject) NULL);

          INT_CALL(object = DividedDifferenceInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionNewtonForm::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProvider::class$ = NULL;
      jmethodID *TransformProvider::mids$ = NULL;
      bool TransformProvider::live$ = false;

      jclass TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getStaticTransform_edee248bbd22a723] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_eae0db96fe973887] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::StaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_edee248bbd22a723], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_eae0db96fe973887], a0.this$));
      }

      ::org::orekit::frames::Transform TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
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
      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args);
      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args);

      static PyMethodDef t_TransformProvider__methods_[] = {
        DECLARE_METHOD(t_TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProvider)[] = {
        { Py_tp_methods, t_TransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProvider)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TransformProvider, t_TransformProvider, TransformProvider);

      void t_TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProvider), &PY_TYPE_DEF(TransformProvider), module, "TransformProvider", 0);
      }

      void t_TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "class_", make_descriptor(TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "wrapfn_", make_descriptor(t_TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProvider::initializeClass, 1)))
          return NULL;
        return t_TransformProvider::wrap_Object(TransformProvider(((t_TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProvider_getStaticTransform(t_TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_TransformProvider_getTransform(t_TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadata::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadata::mids$ = NULL;
            bool AdditionalCovarianceMetadata::live$ = false;

            jclass AdditionalCovarianceMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDcpSensitivityVectorPosition_60c7040667a7dc5c] = env->getMethodID(cls, "getDcpSensitivityVectorPosition", "()[D");
                mids$[mid_getDcpSensitivityVectorVelocity_60c7040667a7dc5c] = env->getMethodID(cls, "getDcpSensitivityVectorVelocity", "()[D");
                mids$[mid_getDensityForecastUncertainty_dff5885c2c873297] = env->getMethodID(cls, "getDensityForecastUncertainty", "()D");
                mids$[mid_getScreeningDataSource_11b109bd155ca898] = env->getMethodID(cls, "getScreeningDataSource", "()Ljava/lang/String;");
                mids$[mid_getcScaleFactor_dff5885c2c873297] = env->getMethodID(cls, "getcScaleFactor", "()D");
                mids$[mid_getcScaleFactorMax_dff5885c2c873297] = env->getMethodID(cls, "getcScaleFactorMax", "()D");
                mids$[mid_getcScaleFactorMin_dff5885c2c873297] = env->getMethodID(cls, "getcScaleFactorMin", "()D");
                mids$[mid_setDcpSensitivityVectorPosition_fa9d415d19f69361] = env->getMethodID(cls, "setDcpSensitivityVectorPosition", "([D)V");
                mids$[mid_setDcpSensitivityVectorVelocity_fa9d415d19f69361] = env->getMethodID(cls, "setDcpSensitivityVectorVelocity", "([D)V");
                mids$[mid_setDensityForecastUncertainty_17db3a65980d3441] = env->getMethodID(cls, "setDensityForecastUncertainty", "(D)V");
                mids$[mid_setScreeningDataSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setScreeningDataSource", "(Ljava/lang/String;)V");
                mids$[mid_setcScaleFactor_17db3a65980d3441] = env->getMethodID(cls, "setcScaleFactor", "(D)V");
                mids$[mid_setcScaleFactorMax_17db3a65980d3441] = env->getMethodID(cls, "setcScaleFactorMax", "(D)V");
                mids$[mid_setcScaleFactorMin_17db3a65980d3441] = env->getMethodID(cls, "setcScaleFactorMin", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalCovarianceMetadata::AdditionalCovarianceMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorPosition() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorPosition_60c7040667a7dc5c]));
            }

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorVelocity() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorVelocity_60c7040667a7dc5c]));
            }

            jdouble AdditionalCovarianceMetadata::getDensityForecastUncertainty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDensityForecastUncertainty_dff5885c2c873297]);
            }

            ::java::lang::String AdditionalCovarianceMetadata::getScreeningDataSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScreeningDataSource_11b109bd155ca898]));
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactor_dff5885c2c873297]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMax_dff5885c2c873297]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMin_dff5885c2c873297]);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorPosition(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorPosition_fa9d415d19f69361], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorVelocity(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorVelocity_fa9d415d19f69361], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDensityForecastUncertainty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDensityForecastUncertainty_17db3a65980d3441], a0);
            }

            void AdditionalCovarianceMetadata::setScreeningDataSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreeningDataSource_d0bc48d5b00dc40c], a0.this$);
            }

            void AdditionalCovarianceMetadata::setcScaleFactor(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactor_17db3a65980d3441], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMax_17db3a65980d3441], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMin_17db3a65980d3441], a0);
            }

            void AdditionalCovarianceMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactor),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMax),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMin),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorPosition),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorVelocity),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, densityForecastUncertainty),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, screeningDataSource),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadata__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorPosition, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorVelocity, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDensityForecastUncertainty, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getScreeningDataSource, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactor, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorPosition, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorVelocity, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDensityForecastUncertainty, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setScreeningDataSource, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactor, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMax, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMin, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadata)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadata__methods_ },
              { Py_tp_init, (void *) t_AdditionalCovarianceMetadata_init_ },
              { Py_tp_getset, t_AdditionalCovarianceMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadata, t_AdditionalCovarianceMetadata, AdditionalCovarianceMetadata);

            void t_AdditionalCovarianceMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadata), &PY_TYPE_DEF(AdditionalCovarianceMetadata), module, "AdditionalCovarianceMetadata", 0);
            }

            void t_AdditionalCovarianceMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "class_", make_descriptor(AdditionalCovarianceMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadata::wrap_Object(AdditionalCovarianceMetadata(((t_AdditionalCovarianceMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdditionalCovarianceMetadata object((jobject) NULL);

              INT_CALL(object = AdditionalCovarianceMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorPosition());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorVelocity());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreeningDataSource());
              return j2p(result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorPosition", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorVelocity(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorVelocity", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDensityForecastUncertainty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDensityForecastUncertainty", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setScreeningDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreeningDataSource", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactor", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalCovarianceMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactor", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorPosition());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorPosition", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorVelocity());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorVelocity(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorVelocity", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDensityForecastUncertainty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "densityForecastUncertainty", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreeningDataSource());
              return j2p(value);
            }
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setScreeningDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screeningDataSource", arg);
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
#include "org/hipparchus/analysis/function/Add.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Add::class$ = NULL;
        jmethodID *Add::mids$ = NULL;
        bool Add::live$ = false;

        jclass Add::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Add");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Add::Add() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Add::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Add_value(t_Add *self, PyObject *args);

        static PyMethodDef t_Add__methods_[] = {
          DECLARE_METHOD(t_Add, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Add)[] = {
          { Py_tp_methods, t_Add__methods_ },
          { Py_tp_init, (void *) t_Add_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Add)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Add, t_Add, Add);

        void t_Add::install(PyObject *module)
        {
          installType(&PY_TYPE(Add), &PY_TYPE_DEF(Add), module, "Add", 0);
        }

        void t_Add::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "class_", make_descriptor(Add::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "wrapfn_", make_descriptor(t_Add::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Add::initializeClass, 1)))
            return NULL;
          return t_Add::wrap_Object(Add(((t_Add *) arg)->object.this$));
        }
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Add::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds)
        {
          Add object((jobject) NULL);

          INT_CALL(object = Add());
          self->object = object;

          return 0;
        }

        static PyObject *t_Add_value(t_Add *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemData::class$ = NULL;
              jmethodID *OemData::mids$ = NULL;
              bool OemData::live$ = false;

              jclass OemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCovarianceMatrix_2ffc54e70be390a1] = env->getMethodID(cls, "addCovarianceMatrix", "(Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                  mids$[mid_addData_edd0506cee437c86] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Z)Z");
                  mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_2afa36052df4765d] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getEphemeridesDataLines_2afa36052df4765d] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemData::OemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              void OemData::addCovarianceMatrix(const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCovarianceMatrix_2ffc54e70be390a1], a0.this$);
              }

              jboolean OemData::addData(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, jboolean a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_edd0506cee437c86], a0.this$, a1);
              }

              ::org::orekit::utils::CartesianDerivativesFilter OemData::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
              }

              ::java::util::List OemData::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
              }

              ::java::util::List OemData::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_2afa36052df4765d]));
              }

              ::java::util::List OemData::getEphemeridesDataLines() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_2afa36052df4765d]));
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
            namespace oem {
              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg);
              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args);
              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self);
              static PyObject *t_OemData_getCoordinates(t_OemData *self);
              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self);
              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self);
              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data);
              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data);
              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data);
              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data);
              static PyGetSetDef t_OemData__fields_[] = {
                DECLARE_GET_FIELD(t_OemData, availableDerivatives),
                DECLARE_GET_FIELD(t_OemData, coordinates),
                DECLARE_GET_FIELD(t_OemData, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemData, ephemeridesDataLines),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemData__methods_[] = {
                DECLARE_METHOD(t_OemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, addCovarianceMatrix, METH_O),
                DECLARE_METHOD(t_OemData, addData, METH_VARARGS),
                DECLARE_METHOD(t_OemData, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getEphemeridesDataLines, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemData)[] = {
                { Py_tp_methods, t_OemData__methods_ },
                { Py_tp_init, (void *) t_OemData_init_ },
                { Py_tp_getset, t_OemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OemData, t_OemData, OemData);

              void t_OemData::install(PyObject *module)
              {
                installType(&PY_TYPE(OemData), &PY_TYPE_DEF(OemData), module, "OemData", 0);
              }

              void t_OemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "class_", make_descriptor(OemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "wrapfn_", make_descriptor(t_OemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemData::initializeClass, 1)))
                  return NULL;
                return t_OemData::wrap_Object(OemData(((t_OemData *) arg)->object.this$));
              }
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds)
              {
                OemData object((jobject) NULL);

                INT_CALL(object = OemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCovarianceMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCovarianceMatrix", arg);
                return NULL;
              }

              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                jboolean a1;
                jboolean result;

                if (!parseArgs(args, "kZ", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.addData(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", args);
                return NULL;
              }

              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemData_getCoordinates(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_6c8d6a54416e8567] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_79225f5888470847] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_74f88e50415a2d2a] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_75f8736a87b2cb54] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DDLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_acd6f33dacb379ff] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_194bff03a32ceae7] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_e3c65781d9915088] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_929c0efe5e3d40e0] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_6c8d6a54416e8567], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_79225f5888470847], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_184c2f4ec5889c74], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0ed38e7bbee7fafc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_74f88e50415a2d2a], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_75f8736a87b2cb54], a0.this$, a1, a2, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_acd6f33dacb379ff], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_194bff03a32ceae7], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_e3c65781d9915088], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7, a8));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_929c0efe5e3d40e0], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7, a8));
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
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);

              static PyMethodDef t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod, t_AbstractShortTermEncounter1DNumerical2DPOCMethod, AbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter1DNumerical2DPOCMethod), module, "AbstractShortTermEncounter1DNumerical2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(AbstractShortTermEncounter1DNumerical2DPOCMethod(((t_AbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a1((jobject) NULL);
                    PyTypeObject **p1;
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1, &p1, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a3((jobject) NULL);
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDDkID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a3((jobject) NULL);
                    PyTypeObject **p3;
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 7:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 9:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a6((jobject) NULL);
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDkID", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a6((jobject) NULL);
                    PyTypeObject **p6;
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKID", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), (PyObject *) self, "compute", args, 2);
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
#include "org/hipparchus/geometry/partitioning/RegionFactory.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *RegionFactory::class$ = NULL;
        jmethodID *RegionFactory::mids$ = NULL;
        bool RegionFactory::live$ = false;

        jclass RegionFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/RegionFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildConvex_b89c6c49bf0bd297] = env->getMethodID(cls, "buildConvex", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_difference_db20e259eb103bfe] = env->getMethodID(cls, "difference", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getComplement_90c3d7ed138008ce] = env->getMethodID(cls, "getComplement", "(Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_intersection_db20e259eb103bfe] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_union_db20e259eb103bfe] = env->getMethodID(cls, "union", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_xor_db20e259eb103bfe] = env->getMethodID(cls, "xor", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegionFactory::RegionFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::buildConvex(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_buildConvex_b89c6c49bf0bd297], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::difference(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_difference_db20e259eb103bfe], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::getComplement(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getComplement_90c3d7ed138008ce], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::intersection(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_intersection_db20e259eb103bfe], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::union$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_union_db20e259eb103bfe], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::xor$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_xor_db20e259eb103bfe], a0.this$, a1.this$));
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
        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args);
        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data);
        static PyGetSetDef t_RegionFactory__fields_[] = {
          DECLARE_GET_FIELD(t_RegionFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegionFactory__methods_[] = {
          DECLARE_METHOD(t_RegionFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, buildConvex, METH_O),
          DECLARE_METHOD(t_RegionFactory, difference, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, getComplement, METH_O),
          DECLARE_METHOD(t_RegionFactory, intersection, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, union, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, xor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegionFactory)[] = {
          { Py_tp_methods, t_RegionFactory__methods_ },
          { Py_tp_init, (void *) t_RegionFactory_init_ },
          { Py_tp_getset, t_RegionFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegionFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegionFactory, t_RegionFactory, RegionFactory);
        PyObject *t_RegionFactory::wrap_Object(const RegionFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegionFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegionFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(RegionFactory), &PY_TYPE_DEF(RegionFactory), module, "RegionFactory", 0);
        }

        void t_RegionFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "class_", make_descriptor(RegionFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "wrapfn_", make_descriptor(t_RegionFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegionFactory::initializeClass, 1)))
            return NULL;
          return t_RegionFactory::wrap_Object(RegionFactory(((t_RegionFactory *) arg)->object.this$));
        }
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegionFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds)
        {
          RegionFactory object((jobject) NULL);

          INT_CALL(object = RegionFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "[K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.buildConvex(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildConvex", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.difference(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "difference", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.getComplement(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getComplement", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.union$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "union", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.xor$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "xor", args);
          return NULL;
        }
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *FieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *FieldManeuverTriggersResetter::mids$ = NULL;
          bool FieldManeuverTriggersResetter::live$ = false;

          jclass FieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_maneuverTriggered_33f1c56ea7775d4e] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_resetState_25e81e971666cba6] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FieldManeuverTriggersResetter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
          }

          void FieldManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::FieldSpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_33f1c56ea7775d4e], a0.this$, a1);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldManeuverTriggersResetter::resetState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_25e81e971666cba6], a0.this$));
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
          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_FieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_FieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_FieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldManeuverTriggersResetter, t_FieldManeuverTriggersResetter, FieldManeuverTriggersResetter);
          PyObject *t_FieldManeuverTriggersResetter::wrap_Object(const FieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldManeuverTriggersResetter), &PY_TYPE_DEF(FieldManeuverTriggersResetter), module, "FieldManeuverTriggersResetter", 0);
          }

          void t_FieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "class_", make_descriptor(FieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_FieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_FieldManeuverTriggersResetter::wrap_Object(FieldManeuverTriggersResetter(((t_FieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;

            if (!parseArgs(args, "KZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data)
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
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIODEC_570ce0828f81a2c1] = env->getMethodID(cls, "getIODEC", "()I");
                mids$[mid_getSvHealth_dff5885c2c873297] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_getTGD_dff5885c2c873297] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_dff5885c2c873297] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setIODEC_17db3a65980d3441] = env->getMethodID(cls, "setIODEC", "(D)V");
                mids$[mid_setSvHealth_17db3a65980d3441] = env->getMethodID(cls, "setSvHealth", "(D)V");
                mids$[mid_setTGD_17db3a65980d3441] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setURA_17db3a65980d3441] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSNavigationMessage::IRNSSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint IRNSSNavigationMessage::getIODEC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODEC_570ce0828f81a2c1]);
            }

            jdouble IRNSSNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_dff5885c2c873297]);
            }

            jdouble IRNSSNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_dff5885c2c873297]);
            }

            jdouble IRNSSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_dff5885c2c873297]);
            }

            void IRNSSNavigationMessage::setIODEC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODEC_17db3a65980d3441], a0);
            }

            void IRNSSNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_17db3a65980d3441], a0);
            }

            void IRNSSNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_17db3a65980d3441], a0);
            }

            void IRNSSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_17db3a65980d3441], a0);
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
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagatorBuilder::class$ = NULL;
          jmethodID *GNSSPropagatorBuilder::mids$ = NULL;
          bool GNSSPropagatorBuilder::live$ = false;

          jclass GNSSPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_95c068f7789f9f41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;)V");
              mids$[mid_init$_37da3277b080f0fa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_6eb1a8219a109e62] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_build_6d7baa04e9d5997e] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
              mids$[mid_ecef_ed557929d63f77b1] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_eci_ed557929d63f77b1] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_mass_6ac915d03a72089c] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95c068f7789f9f41, a0.this$)) {}

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_37da3277b080f0fa, a0.this$, a1.this$)) {}

          GNSSPropagatorBuilder GNSSPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_6eb1a8219a109e62], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_build_6d7baa04e9d5997e]));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_ed557929d63f77b1], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_ed557929d63f77b1], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::mass(jdouble a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_6ac915d03a72089c], a0));
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
          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self);
          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GNSSPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagatorBuilder)[] = {
            { Py_tp_methods, t_GNSSPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GNSSPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GNSSPropagatorBuilder, t_GNSSPropagatorBuilder, GNSSPropagatorBuilder);

          void t_GNSSPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagatorBuilder), &PY_TYPE_DEF(GNSSPropagatorBuilder), module, "GNSSPropagatorBuilder", 0);
          }

          void t_GNSSPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "class_", make_descriptor(GNSSPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "wrapfn_", make_descriptor(t_GNSSPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagatorBuilder::wrap_Object(GNSSPropagatorBuilder(((t_GNSSPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0, a1));
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

          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
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
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileParser::class$ = NULL;
        jmethodID *EphemerisFileParser::mids$ = NULL;
        bool EphemerisFileParser::live$ = false;

        jclass EphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_71b778173c5a6704] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::EphemerisFile EphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::EphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_71b778173c5a6704], a0.this$));
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
        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args);
        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg);
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data);
        static PyGetSetDef t_EphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileParser)[] = {
          { Py_tp_methods, t_EphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileParser, t_EphemerisFileParser, EphemerisFileParser);
        PyObject *t_EphemerisFileParser::wrap_Object(const EphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileParser), &PY_TYPE_DEF(EphemerisFileParser), module, "EphemerisFileParser", 0);
        }

        void t_EphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "class_", make_descriptor(EphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "wrapfn_", make_descriptor(t_EphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileParser::wrap_Object(EphemerisFileParser(((t_EphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_EphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUtils.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUtils::class$ = NULL;
      jmethodID *ComplexUtils::mids$ = NULL;
      bool ComplexUtils::live$ = false;

      jclass ComplexUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToComplex_5ed73ec4da606630] = env->getStaticMethodID(cls, "convertToComplex", "([D)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_b9232ea66d045a31] = env->getStaticMethodID(cls, "polar2Complex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_7eb6ea04df70146c] = env->getStaticMethodID(cls, "polar2Complex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexUtils::convertToComplex(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::complex::Complex >(env->callStaticObjectMethod(cls, mids$[mid_convertToComplex_5ed73ec4da606630], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUtils::polar2Complex(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_b9232ea66d045a31], a0, a1));
      }

      ::org::hipparchus::complex::FieldComplex ComplexUtils::polar2Complex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_7eb6ea04df70146c], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ComplexUtils__methods_[] = {
        DECLARE_METHOD(t_ComplexUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, convertToComplex, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, polar2Complex, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUtils)[] = {
        { Py_tp_methods, t_ComplexUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUtils, t_ComplexUtils, ComplexUtils);

      void t_ComplexUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUtils), &PY_TYPE_DEF(ComplexUtils), module, "ComplexUtils", 0);
      }

      void t_ComplexUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "class_", make_descriptor(ComplexUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "wrapfn_", make_descriptor(t_ComplexUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUtils::initializeClass, 1)))
          return NULL;
        return t_ComplexUtils::wrap_Object(ComplexUtils(((t_ComplexUtils *) arg)->object.this$));
      }
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::convertToComplex(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError(type, "convertToComplex", arg);
        return NULL;
      }

      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "polar2Complex", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/BodyCenterPointing.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BodyCenterPointing::class$ = NULL;
      jmethodID *BodyCenterPointing::mids$ = NULL;
      bool BodyCenterPointing::live$ = false;

      jclass BodyCenterPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BodyCenterPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_23c858a05c2c176d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/Ellipsoid;)V");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodyCenterPointing::BodyCenterPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::Ellipsoid & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_23c858a05c2c176d, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedFieldPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_129d59e5c897146f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ad3e02e6f0d115f2], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args);

      static PyMethodDef t_BodyCenterPointing__methods_[] = {
        DECLARE_METHOD(t_BodyCenterPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyCenterPointing)[] = {
        { Py_tp_methods, t_BodyCenterPointing__methods_ },
        { Py_tp_init, (void *) t_BodyCenterPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyCenterPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(BodyCenterPointing, t_BodyCenterPointing, BodyCenterPointing);

      void t_BodyCenterPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyCenterPointing), &PY_TYPE_DEF(BodyCenterPointing), module, "BodyCenterPointing", 0);
      }

      void t_BodyCenterPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "class_", make_descriptor(BodyCenterPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "wrapfn_", make_descriptor(t_BodyCenterPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyCenterPointing::initializeClass, 1)))
          return NULL;
        return t_BodyCenterPointing::wrap_Object(BodyCenterPointing(((t_BodyCenterPointing *) arg)->object.this$));
      }
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyCenterPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::Ellipsoid a1((jobject) NULL);
        BodyCenterPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::Ellipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = BodyCenterPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonMeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonMeasurementCombination::class$ = NULL;
          jmethodID *PythonMeasurementCombination::mids$ = NULL;
          bool PythonMeasurementCombination::live$ = false;

          jclass PythonMeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonMeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_combine_38fa214a925f8e7a] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementCombination::PythonMeasurementCombination() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonMeasurementCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonMeasurementCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonMeasurementCombination::pythonExtension(jlong a0) const
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
        namespace gnss {
          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self);
          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args);
          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data);
          static PyGetSetDef t_PythonMeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementCombination)[] = {
            { Py_tp_methods, t_PythonMeasurementCombination__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementCombination_init_ },
            { Py_tp_getset, t_PythonMeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementCombination, t_PythonMeasurementCombination, PythonMeasurementCombination);

          void t_PythonMeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementCombination), &PY_TYPE_DEF(PythonMeasurementCombination), module, "PythonMeasurementCombination", 1);
          }

          void t_PythonMeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "class_", make_descriptor(PythonMeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "wrapfn_", make_descriptor(t_PythonMeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;", (void *) t_PythonMeasurementCombination_combine0 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonMeasurementCombination_getName1 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementCombination::wrap_Object(PythonMeasurementCombination(((t_PythonMeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementCombination object((jobject) NULL);

            INT_CALL(object = PythonMeasurementCombination());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args)
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

          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet value((jobject) NULL);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "combine", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet::initializeClass, &value))
            {
              throwTypeError("combine", result);
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

          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_492808a339bfa35f]);
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

          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data)
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
#include "org/orekit/propagation/sampling/MultisatStepNormalizer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultisatStepNormalizer::class$ = NULL;
        jmethodID *MultisatStepNormalizer::mids$ = NULL;
        bool MultisatStepNormalizer::live$ = false;

        jclass MultisatStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultisatStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f9ccce40f0a0ea38] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
            mids$[mid_finish_de3e021e7266b71e] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_getFixedStepHandler_b7499f537ca23947] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/MultiSatFixedStepHandler;");
            mids$[mid_getFixedTimeStep_dff5885c2c873297] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_de3e021e7266b71e] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_741f4d97cd6d356c] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultisatStepNormalizer::MultisatStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9ccce40f0a0ea38, a0, a1.this$)) {}

        void MultisatStepNormalizer::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_de3e021e7266b71e], a0.this$);
        }

        ::org::orekit::propagation::sampling::MultiSatFixedStepHandler MultisatStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::MultiSatFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_b7499f537ca23947]));
        }

        jdouble MultisatStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_dff5885c2c873297]);
        }

        void MultisatStepNormalizer::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_de3e021e7266b71e], a0.this$);
        }

        void MultisatStepNormalizer::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_741f4d97cd6d356c], a0.this$, a1.this$);
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
        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args);
        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data);
        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data);
        static PyGetSetDef t_MultisatStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultisatStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_MultisatStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultisatStepNormalizer)[] = {
          { Py_tp_methods, t_MultisatStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_MultisatStepNormalizer_init_ },
          { Py_tp_getset, t_MultisatStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultisatStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultisatStepNormalizer, t_MultisatStepNormalizer, MultisatStepNormalizer);

        void t_MultisatStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultisatStepNormalizer), &PY_TYPE_DEF(MultisatStepNormalizer), module, "MultisatStepNormalizer", 0);
        }

        void t_MultisatStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "class_", make_descriptor(MultisatStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "wrapfn_", make_descriptor(t_MultisatStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultisatStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_MultisatStepNormalizer::wrap_Object(MultisatStepNormalizer(((t_MultisatStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultisatStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a1((jobject) NULL);
          MultisatStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = MultisatStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/RyuDouble.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *RyuDouble::class$ = NULL;
      jmethodID *RyuDouble::mids$ = NULL;
      bool RyuDouble::live$ = false;
      jint RyuDouble::DEFAULT_HIGH_EXP = (jint) 0;
      jint RyuDouble::DEFAULT_LOW_EXP = (jint) 0;

      jclass RyuDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/RyuDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_doubleToString_e8f51f84167aafbd] = env->getStaticMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
          mids$[mid_doubleToString_16f320e164865244] = env->getStaticMethodID(cls, "doubleToString", "(DII)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_HIGH_EXP = env->getStaticIntField(cls, "DEFAULT_HIGH_EXP");
          DEFAULT_LOW_EXP = env->getStaticIntField(cls, "DEFAULT_LOW_EXP");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_e8f51f84167aafbd], a0));
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_16f320e164865244], a0, a1, a2));
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
      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_RyuDouble__methods_[] = {
        DECLARE_METHOD(t_RyuDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, doubleToString, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RyuDouble)[] = {
        { Py_tp_methods, t_RyuDouble__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RyuDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RyuDouble, t_RyuDouble, RyuDouble);

      void t_RyuDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(RyuDouble), &PY_TYPE_DEF(RyuDouble), module, "RyuDouble", 0);
      }

      void t_RyuDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "class_", make_descriptor(RyuDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "wrapfn_", make_descriptor(t_RyuDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "boxfn_", make_descriptor(boxObject));
        env->getClass(RyuDouble::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_HIGH_EXP", make_descriptor(RyuDouble::DEFAULT_HIGH_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_LOW_EXP", make_descriptor(RyuDouble::DEFAULT_LOW_EXP));
      }

      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RyuDouble::initializeClass, 1)))
          return NULL;
        return t_RyuDouble::wrap_Object(RyuDouble(((t_RyuDouble *) arg)->object.this$));
      }
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RyuDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jint a1;
            jint a2;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0, a1, a2));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "doubleToString", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory$DSField::class$ = NULL;
        jmethodID *DSFactory$DSField::mids$ = NULL;
        bool DSFactory$DSField::live$ = false;

        jclass DSFactory$DSField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory$DSField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_73e277cbd957031a] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getPi_73e277cbd957031a] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_73e277cbd957031a] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean DSFactory$DSField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_73e277cbd957031a]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_73e277cbd957031a]));
        }

        ::java::lang::Class DSFactory$DSField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_73e277cbd957031a]));
        }

        jint DSFactory$DSField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data);
        static PyGetSetDef t_DSFactory$DSField__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory$DSField, one),
          DECLARE_GET_FIELD(t_DSFactory$DSField, pi),
          DECLARE_GET_FIELD(t_DSFactory$DSField, runtimeClass),
          DECLARE_GET_FIELD(t_DSFactory$DSField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory$DSField__methods_[] = {
          DECLARE_METHOD(t_DSFactory$DSField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, equals, METH_VARARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory$DSField)[] = {
          { Py_tp_methods, t_DSFactory$DSField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSFactory$DSField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory$DSField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory$DSField, t_DSFactory$DSField, DSFactory$DSField);

        void t_DSFactory$DSField::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory$DSField), &PY_TYPE_DEF(DSFactory$DSField), module, "DSFactory$DSField", 0);
        }

        void t_DSFactory$DSField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "class_", make_descriptor(DSFactory$DSField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "wrapfn_", make_descriptor(t_DSFactory$DSField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory$DSField::initializeClass, 1)))
            return NULL;
          return t_DSFactory$DSField::wrap_Object(DSFactory$DSField(((t_DSFactory$DSField *) arg)->object.this$));
        }
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory$DSField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHullGenerator2D::class$ = NULL;
            jmethodID *ConvexHullGenerator2D::mids$ = NULL;
            bool ConvexHullGenerator2D::live$ = false;

            jclass ConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_031b48e42873ea77] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D ConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_031b48e42873ea77], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args);

            static PyMethodDef t_ConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHullGenerator2D, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_ConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::hull::ConvexHullGenerator),
              NULL
            };

            DEFINE_TYPE(ConvexHullGenerator2D, t_ConvexHullGenerator2D, ConvexHullGenerator2D);

            void t_ConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHullGenerator2D), &PY_TYPE_DEF(ConvexHullGenerator2D), module, "ConvexHullGenerator2D", 0);
            }

            void t_ConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "class_", make_descriptor(ConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "wrapfn_", make_descriptor(t_ConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHullGenerator2D::wrap_Object(ConvexHullGenerator2D(((t_ConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ConvexHullGenerator2D_generate(t_ConvexHullGenerator2D *self, PyObject *args)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              return callSuper(PY_TYPE(ConvexHullGenerator2D), (PyObject *) self, "generate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/DateDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *ParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool ParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass ParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_49db7ce395dde351] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_7d29df8e1e987e68] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDurationDriver_a25ed222178aa59f] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_3fcb2f6aa57e183e] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_3fcb2f6aa57e183e] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_3fcb2f6aa57e183e] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_4b6d24734e79941b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_49db7ce395dde351, a0.this$, a1.this$, a2.this$)) {}

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7d29df8e1e987e68, a0.this$, a1.this$, a2)) {}

        jdouble ParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_3fcb2f6aa57e183e]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_3fcb2f6aa57e183e]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_3fcb2f6aa57e183e]));
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
        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_ParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_ParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_ParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_ParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ParameterDrivenDateIntervalDetector, t_ParameterDrivenDateIntervalDetector, ParameterDrivenDateIntervalDetector);
        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_Object(const ParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(ParameterDrivenDateIntervalDetector), module, "ParameterDrivenDateIntervalDetector", 0);
        }

        void t_ParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "class_", make_descriptor(ParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_ParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(ParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_ParameterDrivenDateIntervalDetector::wrap_Object(ParameterDrivenDateIntervalDetector(((t_ParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreFieldGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreFieldGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreFieldGaussIntegrator::live$ = false;

        jclass IterativeLegendreFieldGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e90f16f4b52746fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD)V");
            mids$[mid_init$_6621086b060c801f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_init$_fa3a65d91b95cf89] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDII)V");
            mids$[mid_doIntegrate_eba8e72a22c984ac] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e90f16f4b52746fb, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6621086b060c801f, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jint a4, jint a5) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_fa3a65d91b95cf89, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args);
        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data);
        static PyGetSetDef t_IterativeLegendreFieldGaussIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_IterativeLegendreFieldGaussIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IterativeLegendreFieldGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreFieldGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreFieldGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreFieldGaussIntegrator_init_ },
          { Py_tp_getset, t_IterativeLegendreFieldGaussIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreFieldGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreFieldGaussIntegrator, t_IterativeLegendreFieldGaussIntegrator, IterativeLegendreFieldGaussIntegrator);
        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_Object(const IterativeLegendreFieldGaussIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IterativeLegendreFieldGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreFieldGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreFieldGaussIntegrator), module, "IterativeLegendreFieldGaussIntegrator", 0);
        }

        void t_IterativeLegendreFieldGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "class_", make_descriptor(IterativeLegendreFieldGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreFieldGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreFieldGaussIntegrator::wrap_Object(IterativeLegendreFieldGaussIntegrator(((t_IterativeLegendreFieldGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              jint a5;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderProcessingState::class$ = NULL;
            jmethodID *CdmHeaderProcessingState::mids$ = NULL;
            bool CdmHeaderProcessingState::live$ = false;

            jclass CdmHeaderProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_838d1aa1713cb425] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)V");
                mids$[mid_processToken_85d9863c57bc3b0c] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeaderProcessingState::CdmHeaderProcessingState(const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_838d1aa1713cb425, a0.this$)) {}

            jboolean CdmHeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_85d9863c57bc3b0c], a0.this$);
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
            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg);

            static PyMethodDef t_CdmHeaderProcessingState__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderProcessingState)[] = {
              { Py_tp_methods, t_CdmHeaderProcessingState__methods_ },
              { Py_tp_init, (void *) t_CdmHeaderProcessingState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmHeaderProcessingState, t_CdmHeaderProcessingState, CdmHeaderProcessingState);

            void t_CdmHeaderProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderProcessingState), &PY_TYPE_DEF(CdmHeaderProcessingState), module, "CdmHeaderProcessingState", 0);
            }

            void t_CdmHeaderProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "class_", make_descriptor(CdmHeaderProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "wrapfn_", make_descriptor(t_CdmHeaderProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderProcessingState::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderProcessingState::wrap_Object(CdmHeaderProcessingState(((t_CdmHeaderProcessingState *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a0((jobject) NULL);
              PyTypeObject **p0;
              CdmHeaderProcessingState object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                INT_CALL(object = CdmHeaderProcessingState(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
          mids$[mid_getAdditionalState_cb44069ef445f941] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_680f8463a473c3cb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > AdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_cb44069ef445f941], a0.this$));
      }

      ::java::lang::String AdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      void AdditionalStateProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
      }

      jboolean AdditionalStateProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_680f8463a473c3cb], a0.this$);
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
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEnablingPredicate::class$ = NULL;
        jmethodID *FieldEnablingPredicate::mids$ = NULL;
        bool FieldEnablingPredicate::live$ = false;

        jclass FieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_0d65b7645fead4e2] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldEnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_0d65b7645fead4e2], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_FieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_FieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEnablingPredicate)[] = {
          { Py_tp_methods, t_FieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEnablingPredicate, t_FieldEnablingPredicate, FieldEnablingPredicate);
        PyObject *t_FieldEnablingPredicate::wrap_Object(const FieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEnablingPredicate), &PY_TYPE_DEF(FieldEnablingPredicate), module, "FieldEnablingPredicate", 0);
        }

        void t_FieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "class_", make_descriptor(FieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "wrapfn_", make_descriptor(t_FieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_FieldEnablingPredicate::wrap_Object(FieldEnablingPredicate(((t_FieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/HessenbergTransformer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *HessenbergTransformer::class$ = NULL;
      jmethodID *HessenbergTransformer::mids$ = NULL;
      bool HessenbergTransformer::live$ = false;

      jclass HessenbergTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/HessenbergTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getH_688b496048ff947b] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_688b496048ff947b] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_688b496048ff947b] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HessenbergTransformer::HessenbergTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_688b496048ff947b]));
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
      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data);
      static PyGetSetDef t_HessenbergTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_HessenbergTransformer, h),
        DECLARE_GET_FIELD(t_HessenbergTransformer, p),
        DECLARE_GET_FIELD(t_HessenbergTransformer, pT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HessenbergTransformer__methods_[] = {
        DECLARE_METHOD(t_HessenbergTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, getH, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getPT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HessenbergTransformer)[] = {
        { Py_tp_methods, t_HessenbergTransformer__methods_ },
        { Py_tp_init, (void *) t_HessenbergTransformer_init_ },
        { Py_tp_getset, t_HessenbergTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HessenbergTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HessenbergTransformer, t_HessenbergTransformer, HessenbergTransformer);

      void t_HessenbergTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(HessenbergTransformer), &PY_TYPE_DEF(HessenbergTransformer), module, "HessenbergTransformer", 0);
      }

      void t_HessenbergTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "class_", make_descriptor(HessenbergTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "wrapfn_", make_descriptor(t_HessenbergTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HessenbergTransformer::initializeClass, 1)))
          return NULL;
        return t_HessenbergTransformer::wrap_Object(HessenbergTransformer(((t_HessenbergTransformer *) arg)->object.this$));
      }
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HessenbergTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        HessenbergTransformer object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = HessenbergTransformer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
