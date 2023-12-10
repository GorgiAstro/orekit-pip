#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegratorFactory::class$ = NULL;
          jmethodID *GaussIntegratorFactory::mids$ = NULL;
          bool GaussIntegratorFactory::live$ = false;
          jint GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS = (jint) 0;

          jclass GaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_hermite_830656c80cf146dd] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator;");
              mids$[mid_laguerre_b2e8bb1b2ea19d27] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_b2e8bb1b2ea19d27] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_263dc40e2b7a4882] = env->getMethodID(cls, "legendre", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_b2e8bb1b2ea19d27] = env->getMethodID(cls, "legendreHighPrecision", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_263dc40e2b7a4882] = env->getMethodID(cls, "legendreHighPrecision", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_DECIMAL_DIGITS = env->getStaticIntField(cls, "DEFAULT_DECIMAL_DIGITS");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegratorFactory::GaussIntegratorFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          GaussIntegratorFactory::GaussIntegratorFactory(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator GaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_830656c80cf146dd], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_b2e8bb1b2ea19d27], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_b2e8bb1b2ea19d27], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_263dc40e2b7a4882], a0, a1, a2));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_b2e8bb1b2ea19d27], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_263dc40e2b7a4882], a0, a1, a2));
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
          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args);

          static PyMethodDef t_GaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_GaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendre, METH_VARARGS),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendreHighPrecision, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegratorFactory)[] = {
            { Py_tp_methods, t_GaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_GaussIntegratorFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegratorFactory, t_GaussIntegratorFactory, GaussIntegratorFactory);

          void t_GaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegratorFactory), &PY_TYPE_DEF(GaussIntegratorFactory), module, "GaussIntegratorFactory", 0);
          }

          void t_GaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "class_", make_descriptor(GaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "wrapfn_", make_descriptor(t_GaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GaussIntegratorFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "DEFAULT_DECIMAL_DIGITS", make_descriptor(GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS));
          }

          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_GaussIntegratorFactory::wrap_Object(GaussIntegratorFactory(((t_GaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GaussIntegratorFactory object((jobject) NULL);

                INT_CALL(object = GaussIntegratorFactory());
                self->object = object;
                break;
              }
             case 1:
              {
                jint a0;
                GaussIntegratorFactory object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = GaussIntegratorFactory(a0));
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

          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricGaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendreHighPrecision", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FirstOrderConverter.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FirstOrderConverter::class$ = NULL;
      jmethodID *FirstOrderConverter::mids$ = NULL;
      bool FirstOrderConverter::live$ = false;

      jclass FirstOrderConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FirstOrderConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_94350f72e874e484] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/SecondOrderODE;)V");
          mids$[mid_computeDerivatives_7b8ea6f669f90156] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FirstOrderConverter::FirstOrderConverter(const ::org::hipparchus::ode::SecondOrderODE & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94350f72e874e484, a0.this$)) {}

      JArray< jdouble > FirstOrderConverter::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_7b8ea6f669f90156], a0, a1.this$));
      }

      jint FirstOrderConverter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
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
      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args);
      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self);
      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data);
      static PyGetSetDef t_FirstOrderConverter__fields_[] = {
        DECLARE_GET_FIELD(t_FirstOrderConverter, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FirstOrderConverter__methods_[] = {
        DECLARE_METHOD(t_FirstOrderConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FirstOrderConverter, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FirstOrderConverter)[] = {
        { Py_tp_methods, t_FirstOrderConverter__methods_ },
        { Py_tp_init, (void *) t_FirstOrderConverter_init_ },
        { Py_tp_getset, t_FirstOrderConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FirstOrderConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FirstOrderConverter, t_FirstOrderConverter, FirstOrderConverter);

      void t_FirstOrderConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(FirstOrderConverter), &PY_TYPE_DEF(FirstOrderConverter), module, "FirstOrderConverter", 0);
      }

      void t_FirstOrderConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "class_", make_descriptor(FirstOrderConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "wrapfn_", make_descriptor(t_FirstOrderConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FirstOrderConverter::initializeClass, 1)))
          return NULL;
        return t_FirstOrderConverter::wrap_Object(FirstOrderConverter(((t_FirstOrderConverter *) arg)->object.this$));
      }
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FirstOrderConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::SecondOrderODE a0((jobject) NULL);
        FirstOrderConverter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::SecondOrderODE::initializeClass, &a0))
        {
          INT_CALL(object = FirstOrderConverter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args)
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

      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/MersenneTwister.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *MersenneTwister::class$ = NULL;
      jmethodID *MersenneTwister::mids$ = NULL;
      bool MersenneTwister::live$ = false;

      jclass MersenneTwister::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/MersenneTwister");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeed", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MersenneTwister::MersenneTwister() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      MersenneTwister::MersenneTwister(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      MersenneTwister::MersenneTwister(jint a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      MersenneTwister::MersenneTwister(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint MersenneTwister::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      void MersenneTwister::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
      }

      void MersenneTwister::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_0a2a1ac2721c0336], a0);
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
      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args);
      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args);
      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data);
      static PyGetSetDef t_MersenneTwister__fields_[] = {
        DECLARE_SET_FIELD(t_MersenneTwister, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MersenneTwister__methods_[] = {
        DECLARE_METHOD(t_MersenneTwister, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_MersenneTwister, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MersenneTwister)[] = {
        { Py_tp_methods, t_MersenneTwister__methods_ },
        { Py_tp_init, (void *) t_MersenneTwister_init_ },
        { Py_tp_getset, t_MersenneTwister__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MersenneTwister)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(MersenneTwister, t_MersenneTwister, MersenneTwister);

      void t_MersenneTwister::install(PyObject *module)
      {
        installType(&PY_TYPE(MersenneTwister), &PY_TYPE_DEF(MersenneTwister), module, "MersenneTwister", 0);
      }

      void t_MersenneTwister::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "class_", make_descriptor(MersenneTwister::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "wrapfn_", make_descriptor(t_MersenneTwister::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MersenneTwister::initializeClass, 1)))
          return NULL;
        return t_MersenneTwister::wrap_Object(MersenneTwister(((t_MersenneTwister *) arg)->object.this$));
      }
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MersenneTwister::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MersenneTwister object((jobject) NULL);

            INT_CALL(object = MersenneTwister());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
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

      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args)
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
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data)
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
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonPVCoordinatesProvider::mids$ = NULL;
      bool PythonPVCoordinatesProvider::live$ = false;

      jclass PythonPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPVCoordinatesProvider::PythonPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self);
      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPVCoordinatesProvider, t_PythonPVCoordinatesProvider, PythonPVCoordinatesProvider);

      void t_PythonPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPVCoordinatesProvider), &PY_TYPE_DEF(PythonPVCoordinatesProvider), module, "PythonPVCoordinatesProvider", 1);
      }

      void t_PythonPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "class_", make_descriptor(PythonPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonPVCoordinatesProvider::wrap_Object(PythonPVCoordinatesProvider(((t_PythonPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPVCoordinatesProvider_init_(t_PythonPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPVCoordinatesProvider_finalize(t_PythonPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPVCoordinatesProvider_pythonExtension(t_PythonPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static void JNICALL t_PythonPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonPVCoordinatesProvider_get__self(t_PythonPVCoordinatesProvider *self, void *data)
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
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayFieldVector::class$ = NULL;
      jmethodID *ArrayFieldVector::mids$ = NULL;
      bool ArrayFieldVector::live$ = false;

      jclass ArrayFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_191170fc417b1ede] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_de2baf890d40c799] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_cd177bbf1030e8f0] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_1cb2de56c89f4b52] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_730d25935931438e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_80cbde2b1ba274bb] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_9a9642a8eac68e90] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayFieldVector;Z)V");
          mids$[mid_init$_977c7685fba60df6] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_a69d58691b2f6a42] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_9dd724c9bf212c41] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_2caece97f0ac0be6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_335112f3625cf774] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_4e929eb1d19366a2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_f76d03b2a71066f2] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_init$_0fee8a6e36e39351] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_add_c2cbada2fab61aaf] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_add_585261c47f8bb8c7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_c2cbada2fab61aaf] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_append_8c3ffd19fe76e82d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_585261c47f8bb8c7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_cb1d9a131d5e5e35] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_f01ee40a16838c43] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_dotProduct_05ce3f5e63fb7e2e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_c2cbada2fab61aaf] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeDivide_585261c47f8bb8c7] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_c2cbada2fab61aaf] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeMultiply_585261c47f8bb8c7] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_394dfc39c31419fa] = env->getMethodID(cls, "getDataRef", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_5e30662bac3edb02] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_0e35505a51eda123] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_cb1d9a131d5e5e35] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_cb1d9a131d5e5e35] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_8c3ffd19fe76e82d] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_7847734e8a11af6c] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_d2259a595105558d] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_c2cbada2fab61aaf] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_projection_585261c47f8bb8c7] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_d517a7265f416cee] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_set_867b7f18c7fee68a] = env->getMethodID(cls, "set", "(ILorg/hipparchus/linear/ArrayFieldVector;)V");
          mids$[mid_setEntry_9dd724c9bf212c41] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_c2cbada2fab61aaf] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_subtract_585261c47f8bb8c7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_394dfc39c31419fa] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_648bcdf08fddb790] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_0f7840d9f7bdbccc] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_b9f5757f8273f2da] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_47b54617593d4460] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_648bcdf08fddb790] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_0f7840d9f7bdbccc] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_b9f5757f8273f2da] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_47b54617593d4460] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_0a2a1ac2721c0336] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkVectorDimensions_de2baf890d40c799] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/FieldVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_191170fc417b1ede, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de2baf890d40c799, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd177bbf1030e8f0, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cb2de56c89f4b52, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_730d25935931438e, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_80cbde2b1ba274bb, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const ArrayFieldVector & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a9642a8eac68e90, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_977c7685fba60df6, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a69d58691b2f6a42, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(jint a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9dd724c9bf212c41, a0, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2caece97f0ac0be6, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, const JArray< ::org::hipparchus::FieldElement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_335112f3625cf774, a0.this$, a1.this$, a2.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4e929eb1d19366a2, a0.this$, a1.this$, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f76d03b2a71066f2, a0.this$, a1, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fee8a6e36e39351, a0.this$, a1.this$, a2, a3)) {}

      ArrayFieldVector ArrayFieldVector::add(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_add_c2cbada2fab61aaf], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_585261c47f8bb8c7], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::append(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_append_c2cbada2fab61aaf], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_585261c47f8bb8c7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_cb1d9a131d5e5e35]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_f01ee40a16838c43], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_05ce3f5e63fb7e2e], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeDivide(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_c2cbada2fab61aaf], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_585261c47f8bb8c7], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeMultiply(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_c2cbada2fab61aaf], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_585261c47f8bb8c7], a0.this$));
      }

      jboolean ArrayFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::getDataRef() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getDataRef_394dfc39c31419fa]));
      }

      jint ArrayFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_5e30662bac3edb02], a0));
      }

      ::org::hipparchus::Field ArrayFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_0e35505a51eda123], a0, a1));
      }

      jint ArrayFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_cb1d9a131d5e5e35]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_cb1d9a131d5e5e35]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_7847734e8a11af6c], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_d2259a595105558d], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::projection(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_projection_c2cbada2fab61aaf], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_585261c47f8bb8c7], a0.this$));
      }

      void ArrayFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_d517a7265f416cee], a0.this$);
      }

      void ArrayFieldVector::set(jint a0, const ArrayFieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_set_867b7f18c7fee68a], a0, a1.this$);
      }

      void ArrayFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_9dd724c9bf212c41], a0, a1.this$);
      }

      void ArrayFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      ArrayFieldVector ArrayFieldVector::subtract(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_c2cbada2fab61aaf], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_585261c47f8bb8c7], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_394dfc39c31419fa]));
      }

      ::java::lang::String ArrayFieldVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_648bcdf08fddb790], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_0f7840d9f7bdbccc], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_b9f5757f8273f2da], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_47b54617593d4460], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_648bcdf08fddb790], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_0f7840d9f7bdbccc], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_b9f5757f8273f2da], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_47b54617593d4460], a0.this$, a1, a2));
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
      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args);
      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data);
      static PyGetSetDef t_ArrayFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayFieldVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayFieldVector, dimension),
        DECLARE_GET_FIELD(t_ArrayFieldVector, field),
        DECLARE_GET_FIELD(t_ArrayFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayFieldVector__methods_[] = {
        DECLARE_METHOD(t_ArrayFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, projection, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayFieldVector)[] = {
        { Py_tp_methods, t_ArrayFieldVector__methods_ },
        { Py_tp_init, (void *) t_ArrayFieldVector_init_ },
        { Py_tp_getset, t_ArrayFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArrayFieldVector, t_ArrayFieldVector, ArrayFieldVector);
      PyObject *t_ArrayFieldVector::wrap_Object(const ArrayFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ArrayFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ArrayFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayFieldVector), &PY_TYPE_DEF(ArrayFieldVector), module, "ArrayFieldVector", 0);
      }

      void t_ArrayFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "class_", make_descriptor(ArrayFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "wrapfn_", make_descriptor(t_ArrayFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayFieldVector::initializeClass, 1)))
          return NULL;
        return t_ArrayFieldVector::wrap_Object(ArrayFieldVector(((t_ArrayFieldVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KZ", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::FieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KII", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2, a3));
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

      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projection", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.set(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jint a0;
            ArrayFieldVector a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ArrayFieldVector::initializeClass, &a0, &a1, &p1, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(self->object.set(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "set", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data)
      {
        JArray< ::org::hipparchus::FieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *PowerTerm::class$ = NULL;
        jmethodID *PowerTerm::mids$ = NULL;
        bool PowerTerm::live$ = false;

        jclass PowerTerm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/PowerTerm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getBase_5be7b837bd1d6514] = env->getMethodID(cls, "getBase", "()Ljava/lang/CharSequence;");
            mids$[mid_getExponent_7847eacc50504e7f] = env->getMethodID(cls, "getExponent", "()Lorg/hipparchus/fraction/Fraction;");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::CharSequence PowerTerm::getBase() const
        {
          return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_getBase_5be7b837bd1d6514]));
        }

        ::org::hipparchus::fraction::Fraction PowerTerm::getExponent() const
        {
          return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getExponent_7847eacc50504e7f]));
        }

        jdouble PowerTerm::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
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
        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self);
        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self);
        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data);
        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data);
        static PyGetSetDef t_PowerTerm__fields_[] = {
          DECLARE_GET_FIELD(t_PowerTerm, base),
          DECLARE_GET_FIELD(t_PowerTerm, exponent),
          DECLARE_GET_FIELD(t_PowerTerm, scale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PowerTerm__methods_[] = {
          DECLARE_METHOD(t_PowerTerm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PowerTerm, getBase, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_PowerTerm, getScale, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PowerTerm)[] = {
          { Py_tp_methods, t_PowerTerm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PowerTerm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PowerTerm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PowerTerm, t_PowerTerm, PowerTerm);

        void t_PowerTerm::install(PyObject *module)
        {
          installType(&PY_TYPE(PowerTerm), &PY_TYPE_DEF(PowerTerm), module, "PowerTerm", 0);
        }

        void t_PowerTerm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "class_", make_descriptor(PowerTerm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "wrapfn_", make_descriptor(t_PowerTerm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PowerTerm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PowerTerm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PowerTerm::initializeClass, 1)))
            return NULL;
          return t_PowerTerm::wrap_Object(PowerTerm(((t_PowerTerm *) arg)->object.this$));
        }
        static PyObject *t_PowerTerm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PowerTerm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PowerTerm_getBase(t_PowerTerm *self)
        {
          ::java::lang::CharSequence result((jobject) NULL);
          OBJ_CALL(result = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getExponent(t_PowerTerm *self)
        {
          ::org::hipparchus::fraction::Fraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        static PyObject *t_PowerTerm_getScale(t_PowerTerm *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PowerTerm_get__base(t_PowerTerm *self, void *data)
        {
          ::java::lang::CharSequence value((jobject) NULL);
          OBJ_CALL(value = self->object.getBase());
          return ::java::lang::t_CharSequence::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__exponent(t_PowerTerm *self, void *data)
        {
          ::org::hipparchus::fraction::Fraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getExponent());
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
        }

        static PyObject *t_PowerTerm_get__scale(t_PowerTerm *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1::class$ = NULL;
        jmethodID *UnivariateDerivative1::mids$ = NULL;
        bool UnivariateDerivative1::live$ = false;
        UnivariateDerivative1 *UnivariateDerivative1::PI = NULL;

        jclass UnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d50646f27571013a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_abs_d8e02a4df001f4b7] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acos_d8e02a4df001f4b7] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acosh_d8e02a4df001f4b7] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_9b0fef2e4e8387ca] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_a575e2fb041b441c] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asin_d8e02a4df001f4b7] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asinh_d8e02a4df001f4b7] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan_d8e02a4df001f4b7] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan2_9b0fef2e4e8387ca] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atanh_d8e02a4df001f4b7] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cbrt_d8e02a4df001f4b7] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ceil_d8e02a4df001f4b7] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_compareTo_27558d450992cbec] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)I");
            mids$[mid_compose_9b1225d4ec61b929] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_9b0fef2e4e8387ca] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_a575e2fb041b441c] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cos_d8e02a4df001f4b7] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cosh_d8e02a4df001f4b7] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_9b0fef2e4e8387ca] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_a575e2fb041b441c] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_d8e02a4df001f4b7] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_expm1_d8e02a4df001f4b7] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_floor_d8e02a4df001f4b7] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getDerivative_b772323fc98b7293] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_2f31d09ea5bf5b80] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_456d9a2f64d6b28d] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_d8e02a4df001f4b7] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_9b0fef2e4e8387ca] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_c92a98d770fa203e] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_b84d4c9340091e38] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_f19cad201224b337] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_b1478aecd3a83d75] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_3a41da6fe1ffca03] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_a0ba888cf9a7d1b3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_f36d93366dfb0605] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_d7f1aabfc6bb19a4] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log_d8e02a4df001f4b7] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log10_d8e02a4df001f4b7] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log1p_d8e02a4df001f4b7] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_9b0fef2e4e8387ca] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_a575e2fb041b441c] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_34d7b37d06c8946d] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_negate_d8e02a4df001f4b7] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_newInstance_a575e2fb041b441c] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_9b0fef2e4e8387ca] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_a575e2fb041b441c] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_34d7b37d06c8946d] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_cb6763063359a113] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_reciprocal_d8e02a4df001f4b7] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_9b0fef2e4e8387ca] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_a575e2fb041b441c] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rint_d8e02a4df001f4b7] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rootN_34d7b37d06c8946d] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_scalb_34d7b37d06c8946d] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sign_d8e02a4df001f4b7] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sin_d8e02a4df001f4b7] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_d8e02a4df001f4b7] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_d8e02a4df001f4b7] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_9b0fef2e4e8387ca] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_a575e2fb041b441c] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tan_d8e02a4df001f4b7] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tanh_d8e02a4df001f4b7] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_taylor_0ba5fed9597b693e] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_d8e02a4df001f4b7] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_d8e02a4df001f4b7] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ulp_d8e02a4df001f4b7] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative1(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative1::UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d50646f27571013a, a0.this$)) {}

        UnivariateDerivative1::UnivariateDerivative1(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        UnivariateDerivative1 UnivariateDerivative1::abs() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_a575e2fb041b441c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::asin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::asinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan2(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::atanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cbrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ceil() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_d8e02a4df001f4b7]));
        }

        jint UnivariateDerivative1::compareTo(const UnivariateDerivative1 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_27558d450992cbec], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_9b1225d4ec61b929], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_a575e2fb041b441c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::cos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_a575e2fb041b441c], a0));
        }

        jboolean UnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::exp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::expm1() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::floor() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_d8e02a4df001f4b7]));
        }

        jdouble UnivariateDerivative1::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_b772323fc98b7293], a0);
        }

        jint UnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field UnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_2f31d09ea5bf5b80]));
        }

        jdouble UnivariateDerivative1::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_456d9a2f64d6b28d]);
        }

        jint UnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        UnivariateDerivative1 UnivariateDerivative1::getPi() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_d8e02a4df001f4b7]));
        }

        jdouble UnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        jdouble UnivariateDerivative1::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
        }

        jint UnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        UnivariateDerivative1 UnivariateDerivative1::hypot(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_c92a98d770fa203e], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< UnivariateDerivative1 > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_b84d4c9340091e38], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_f19cad201224b337], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_b1478aecd3a83d75], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_3a41da6fe1ffca03], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_a0ba888cf9a7d1b3], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5, const UnivariateDerivative1 & a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_f36d93366dfb0605], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5, jdouble a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_d7f1aabfc6bb19a4], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::log() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log10() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log1p() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_a575e2fb041b441c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_34d7b37d06c8946d], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::negate() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::newInstance(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_a575e2fb041b441c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_a575e2fb041b441c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_34d7b37d06c8946d], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0, const UnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_cb6763063359a113], a0, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::reciprocal() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_a575e2fb041b441c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::rint() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::rootN(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_34d7b37d06c8946d], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::scalb(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_34d7b37d06c8946d], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::sign() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_d8e02a4df001f4b7]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_d8e02a4df001f4b7]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sqrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_9b0fef2e4e8387ca], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_a575e2fb041b441c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::tan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::tanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_d8e02a4df001f4b7]));
        }

        jdouble UnivariateDerivative1::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_0ba5fed9597b693e], a0);
        }

        UnivariateDerivative1 UnivariateDerivative1::toDegrees() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_d8e02a4df001f4b7]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_c8ca2097cc2fbc0a]));
        }

        UnivariateDerivative1 UnivariateDerivative1::toRadians() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_d8e02a4df001f4b7]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ulp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_d8e02a4df001f4b7]));
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
        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args);
        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self);
        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1)[] = {
          { Py_tp_methods, t_UnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative1_init_ },
          { Py_tp_getset, t_UnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1, t_UnivariateDerivative1, UnivariateDerivative1);
        PyObject *t_UnivariateDerivative1::wrap_Object(const UnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1), &PY_TYPE_DEF(UnivariateDerivative1), module, "UnivariateDerivative1", 0);
        }

        void t_UnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "class_", make_descriptor(UnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "wrapfn_", make_descriptor(t_UnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative1::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "PI", make_descriptor(t_UnivariateDerivative1::wrap_Object(*UnivariateDerivative1::PI)));
        }

        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1::wrap_Object(UnivariateDerivative1(((t_UnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative1(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UnivariateDerivative1(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
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

        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &p6, t_UnivariateDerivative1::parameters_, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1::pow(a0, a1));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data)
        {
          UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractODEDetector::class$ = NULL;
        jmethodID *AbstractODEDetector::mids$ = NULL;
        bool AbstractODEDetector::live$ = false;
        jdouble AbstractODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_3b8f73a4d2dddc4a] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_91daffcf18e93821] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_3c6e49cd9bc6c1c8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_26f10bd8188f2feb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_60ce6abb4deacb75] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_560c22f5ff551d53] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_aaf7e0457681d7e5] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/AdaptableInterval;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxIter_1e567b9b84e3c31a] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withSolver_9b8704de139cf6ff] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withThreshold_560c22f5ff551d53] = env->getMethodID(cls, "withThreshold", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_create_1ad2c706c2225c33] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractODEDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_3b8f73a4d2dddc4a], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler AbstractODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_91daffcf18e93821]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval AbstractODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_3c6e49cd9bc6c1c8]));
        }

        jint AbstractODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver AbstractODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_26f10bd8188f2feb]));
        }

        void AbstractODEDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
        }

        jboolean AbstractODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        AbstractODEDetector AbstractODEDetector::withHandler(const ::org::hipparchus::ode::events::ODEEventHandler & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_60ce6abb4deacb75], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_560c22f5ff551d53], a0));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::AdaptableInterval & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_aaf7e0457681d7e5], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxIter(jint a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_1e567b9b84e3c31a], a0));
        }

        AbstractODEDetector AbstractODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_9b8704de139cf6ff], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withThreshold(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_560c22f5ff551d53], a0));
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
      namespace events {
        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data);
        static PyGetSetDef t_AbstractODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEDetector)[] = {
          { Py_tp_methods, t_AbstractODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEDetector, t_AbstractODEDetector, AbstractODEDetector);
        PyObject *t_AbstractODEDetector::wrap_Object(const AbstractODEDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEDetector), &PY_TYPE_DEF(AbstractODEDetector), module, "AbstractODEDetector", 0);
        }

        void t_AbstractODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "class_", make_descriptor(AbstractODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "wrapfn_", make_descriptor(t_AbstractODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractODEDetector::wrap_Object(AbstractODEDetector(((t_AbstractODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::ODEEventHandler a0((jobject) NULL);
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::AdaptableInterval a0((jobject) NULL);
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldEquationsMapper::class$ = NULL;
      jmethodID *FieldEquationsMapper::mids$ = NULL;
      bool FieldEquationsMapper::live$ = false;

      jclass FieldEquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldEquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_6a395cf74bc91949] = env->getMethodID(cls, "extractEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNumberOfEquations_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_f2f64475e4580546] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_1bca860cd4ddad5c] = env->getMethodID(cls, "insertEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapStateAndDerivative_5a1444b79d27dc95] = env->getMethodID(cls, "mapStateAndDerivative", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldEquationsMapper::extractEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractEquationData_6a395cf74bc91949], a0, a1.this$));
      }

      jint FieldEquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_f2f64475e4580546]);
      }

      jint FieldEquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_f2f64475e4580546]);
      }

      void FieldEquationsMapper::insertEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_1bca860cd4ddad5c], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldEquationsMapper::mapStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_5a1444b79d27dc95], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data);
      static PyGetSetDef t_FieldEquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, totalDimension),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquationsMapper__methods_[] = {
        DECLARE_METHOD(t_FieldEquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquationsMapper)[] = {
        { Py_tp_methods, t_FieldEquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEquationsMapper, t_FieldEquationsMapper, FieldEquationsMapper);
      PyObject *t_FieldEquationsMapper::wrap_Object(const FieldEquationsMapper& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquationsMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquationsMapper), &PY_TYPE_DEF(FieldEquationsMapper), module, "FieldEquationsMapper", 0);
      }

      void t_FieldEquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "class_", make_descriptor(FieldEquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "wrapfn_", make_descriptor(t_FieldEquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquationsMapper::initializeClass, 1)))
          return NULL;
        return t_FieldEquationsMapper::wrap_Object(FieldEquationsMapper(((t_FieldEquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "I[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *PythonSBASOrbitalElements::class$ = NULL;
            jmethodID *PythonSBASOrbitalElements::mids$ = NULL;
            bool PythonSBASOrbitalElements::live$ = false;

            jclass PythonSBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAGf0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIODN_f2f64475e4580546] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_f2f64475e4580546] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_456d9a2f64d6b28d] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_f2f64475e4580546] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonSBASOrbitalElements::PythonSBASOrbitalElements() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonSBASOrbitalElements::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonSBASOrbitalElements::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonSBASOrbitalElements::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self);
            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data);
            static PyGetSetDef t_PythonSBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_PythonSBASOrbitalElements, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonSBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_PythonSBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonSBASOrbitalElements)[] = {
              { Py_tp_methods, t_PythonSBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) t_PythonSBASOrbitalElements_init_ },
              { Py_tp_getset, t_PythonSBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonSBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonSBASOrbitalElements, t_PythonSBASOrbitalElements, PythonSBASOrbitalElements);

            void t_PythonSBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonSBASOrbitalElements), &PY_TYPE_DEF(PythonSBASOrbitalElements), module, "PythonSBASOrbitalElements", 1);
            }

            void t_PythonSBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "class_", make_descriptor(PythonSBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "wrapfn_", make_descriptor(t_PythonSBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonSBASOrbitalElements::initializeClass);
              JNINativeMethod methods[] = {
                { "getAGf0", "()D", (void *) t_PythonSBASOrbitalElements_getAGf00 },
                { "getAGf1", "()D", (void *) t_PythonSBASOrbitalElements_getAGf11 },
                { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSBASOrbitalElements_getDate2 },
                { "getIODN", "()I", (void *) t_PythonSBASOrbitalElements_getIODN3 },
                { "getPRN", "()I", (void *) t_PythonSBASOrbitalElements_getPRN4 },
                { "getTime", "()D", (void *) t_PythonSBASOrbitalElements_getTime5 },
                { "getToc", "()D", (void *) t_PythonSBASOrbitalElements_getToc6 },
                { "getWeek", "()I", (void *) t_PythonSBASOrbitalElements_getWeek7 },
                { "getX", "()D", (void *) t_PythonSBASOrbitalElements_getX8 },
                { "getXDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDot9 },
                { "getXDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDotDot10 },
                { "getY", "()D", (void *) t_PythonSBASOrbitalElements_getY11 },
                { "getYDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDot12 },
                { "getYDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDotDot13 },
                { "getZ", "()D", (void *) t_PythonSBASOrbitalElements_getZ14 },
                { "getZDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDot15 },
                { "getZDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDotDot16 },
                { "pythonDecRef", "()V", (void *) t_PythonSBASOrbitalElements_pythonDecRef17 },
              };
              env->registerNatives(cls, methods, 18);
            }

            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonSBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_PythonSBASOrbitalElements::wrap_Object(PythonSBASOrbitalElements(((t_PythonSBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonSBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds)
            {
              PythonSBASOrbitalElements object((jobject) NULL);

              INT_CALL(object = PythonSBASOrbitalElements());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args)
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

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf0", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf0", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf1", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf1", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getDate", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                throwTypeError("getDate", result);
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

            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getIODN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getIODN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getPRN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getPRN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getTime", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getTime", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getToc", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getToc", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getWeek", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getWeek", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getX", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getX", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getY", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getY", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZ", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZ", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XmlSubStructureKey::class$ = NULL;
            jmethodID *XmlSubStructureKey::mids$ = NULL;
            bool XmlSubStructureKey::live$ = false;
            XmlSubStructureKey *XmlSubStructureKey::COMMENT = NULL;
            XmlSubStructureKey *XmlSubStructureKey::additionalParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::covarianceMatrix = NULL;
            XmlSubStructureKey *XmlSubStructureKey::odParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeMetadataData = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeStateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::segment = NULL;
            XmlSubStructureKey *XmlSubStructureKey::stateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::userDefinedParameters = NULL;

            jclass XmlSubStructureKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_10a767a8a3b44977] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)Z");
                mids$[mid_valueOf_da1f397a445254fd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");
                mids$[mid_values_5573586c1584ad2b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new XmlSubStructureKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                additionalParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "additionalParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                covarianceMatrix = new XmlSubStructureKey(env->getStaticObjectField(cls, "covarianceMatrix", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                odParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "odParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeMetadataData = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeMetadataData", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeStateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeStateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                segment = new XmlSubStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                stateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "stateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                userDefinedParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "userDefinedParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XmlSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_10a767a8a3b44977], a0.this$, a1.this$);
            }

            XmlSubStructureKey XmlSubStructureKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XmlSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_da1f397a445254fd], a0.this$));
            }

            JArray< XmlSubStructureKey > XmlSubStructureKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XmlSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5573586c1584ad2b]));
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
            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type);
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data);
            static PyGetSetDef t_XmlSubStructureKey__fields_[] = {
              DECLARE_GET_FIELD(t_XmlSubStructureKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlSubStructureKey__methods_[] = {
              DECLARE_METHOD(t_XmlSubStructureKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlSubStructureKey)[] = {
              { Py_tp_methods, t_XmlSubStructureKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XmlSubStructureKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlSubStructureKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XmlSubStructureKey, t_XmlSubStructureKey, XmlSubStructureKey);
            PyObject *t_XmlSubStructureKey::wrap_Object(const XmlSubStructureKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XmlSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XmlSubStructureKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlSubStructureKey), &PY_TYPE_DEF(XmlSubStructureKey), module, "XmlSubStructureKey", 0);
            }

            void t_XmlSubStructureKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "class_", make_descriptor(XmlSubStructureKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "wrapfn_", make_descriptor(t_XmlSubStructureKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlSubStructureKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "COMMENT", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "additionalParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::additionalParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "covarianceMatrix", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::covarianceMatrix)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "odParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::odParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeMetadataData", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeMetadataData)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeStateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeStateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "segment", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::segment)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "stateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::stateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "userDefinedParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::userDefinedParameters)));
            }

            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlSubStructureKey::initializeClass, 1)))
                return NULL;
              return t_XmlSubStructureKey::wrap_Object(XmlSubStructureKey(((t_XmlSubStructureKey *) arg)->object.this$));
            }
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlSubStructureKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                OBJ_CALL(result = self->object.process(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XmlSubStructureKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::valueOf(a0));
                return t_XmlSubStructureKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type)
            {
              JArray< XmlSubStructureKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::values());
              return JArray<jobject>(result.this$).wrap(t_XmlSubStructureKey::wrap_jobject);
            }
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataKey::class$ = NULL;
            jmethodID *CdmMetadataKey::mids$ = NULL;
            bool CdmMetadataKey::live$ = false;
            CdmMetadataKey *CdmMetadataKey::ADM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::ATMOSPHERIC_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::CATALOG_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_METHOD = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_SOURCE = NULL;
            CdmMetadataKey *CdmMetadataKey::EARTH_TIDES = NULL;
            CdmMetadataKey *CdmMetadataKey::EPHEMERIS_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::GRAVITY_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::INTRACK_THRUST = NULL;
            CdmMetadataKey *CdmMetadataKey::MANEUVERABLE = NULL;
            CdmMetadataKey *CdmMetadataKey::N_BODY_PERTURBATIONS = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE = NULL;
            CdmMetadataKey *CdmMetadataKey::ODM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_CONTACT_POSITION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_EMAIL = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_ORGANIZATION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_PHONE = NULL;
            CdmMetadataKey *CdmMetadataKey::ORBIT_CENTER = NULL;
            CdmMetadataKey *CdmMetadataKey::REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::SOLAR_RAD_PRESSURE = NULL;

            jclass CdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_543d285ae7379c6b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)Z");
                mids$[mid_valueOf_e33128010d8746ce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");
                mids$[mid_values_7928cf2c67a1d1cb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ADM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ATMOSPHERIC_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                CATALOG_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_METHOD = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_SOURCE = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EARTH_TIDES = new CdmMetadataKey(env->getStaticObjectField(cls, "EARTH_TIDES", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EPHEMERIS_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                GRAVITY_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTERNATIONAL_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTRACK_THRUST = new CdmMetadataKey(env->getStaticObjectField(cls, "INTRACK_THRUST", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                MANEUVERABLE = new CdmMetadataKey(env->getStaticObjectField(cls, "MANEUVERABLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                N_BODY_PERTURBATIONS = new CdmMetadataKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBS_BEFORE_NEXT_MESSAGE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBS_BEFORE_NEXT_MESSAGE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ODM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_CONTACT_POSITION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_CONTACT_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_EMAIL = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_ORGANIZATION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_ORGANIZATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_PHONE = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ORBIT_CENTER = new CdmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CENTER", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                SOLAR_RAD_PRESSURE = new CdmMetadataKey(env->getStaticObjectField(cls, "SOLAR_RAD_PRESSURE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_543d285ae7379c6b], a0.this$, a1.this$, a2.this$);
            }

            CdmMetadataKey CdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e33128010d8746ce], a0.this$));
            }

            JArray< CdmMetadataKey > CdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7928cf2c67a1d1cb]));
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
            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data);
            static PyGetSetDef t_CdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataKey)[] = {
              { Py_tp_methods, t_CdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmMetadataKey, t_CdmMetadataKey, CdmMetadataKey);
            PyObject *t_CdmMetadataKey::wrap_Object(const CdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataKey), &PY_TYPE_DEF(CdmMetadataKey), module, "CdmMetadataKey", 0);
            }

            void t_CdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "class_", make_descriptor(CdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "wrapfn_", make_descriptor(t_CdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ADM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ATMOSPHERIC_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ATMOSPHERIC_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "CATALOG_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::CATALOG_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_METHOD", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_SOURCE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_SOURCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EARTH_TIDES", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EARTH_TIDES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EPHEMERIS_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EPHEMERIS_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "GRAVITY_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::GRAVITY_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTERNATIONAL_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTRACK_THRUST", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTRACK_THRUST)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "MANEUVERABLE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::MANEUVERABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "N_BODY_PERTURBATIONS", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::N_BODY_PERTURBATIONS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBS_BEFORE_NEXT_MESSAGE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ODM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_CONTACT_POSITION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_CONTACT_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_EMAIL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_EMAIL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_ORGANIZATION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_ORGANIZATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_PHONE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_PHONE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ORBIT_CENTER", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ORBIT_CENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "SOLAR_RAD_PRESSURE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::SOLAR_RAD_PRESSURE)));
            }

            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataKey::wrap_Object(CdmMetadataKey(((t_CdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::valueOf(a0));
                return t_CdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data)
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
#include "org/orekit/gnss/metric/parser/RtcmMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessagesParser::class$ = NULL;
          jmethodID *RtcmMessagesParser::mids$ = NULL;
          bool RtcmMessagesParser::live$ = false;

          jclass RtcmMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_4283240abc98cbf5] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_e9602b3a0b12bc96] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessagesParser::RtcmMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}
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
          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_RtcmMessagesParser__methods_[] = {
            DECLARE_METHOD(t_RtcmMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessagesParser)[] = {
            { Py_tp_methods, t_RtcmMessagesParser__methods_ },
            { Py_tp_init, (void *) t_RtcmMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(RtcmMessagesParser, t_RtcmMessagesParser, RtcmMessagesParser);

          void t_RtcmMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessagesParser), &PY_TYPE_DEF(RtcmMessagesParser), module, "RtcmMessagesParser", 0);
          }

          void t_RtcmMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "class_", make_descriptor(RtcmMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "wrapfn_", make_descriptor(t_RtcmMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessagesParser::initializeClass, 1)))
              return NULL;
            return t_RtcmMessagesParser::wrap_Object(RtcmMessagesParser(((t_RtcmMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            RtcmMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = RtcmMessagesParser(a0));
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
#include "org/hipparchus/ode/nonstiff/EulerFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerFieldIntegrator::class$ = NULL;
        jmethodID *EulerFieldIntegrator::mids$ = NULL;
        bool EulerFieldIntegrator::live$ = false;

        jclass EulerFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_15e7459be7ec40d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_6bddfbb86ad6a1a3] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegrator::EulerFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_15e7459be7ec40d8, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > EulerFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
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
        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args);
        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data);
        static PyGetSetDef t_EulerFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, a),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, b),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, c),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegrator)[] = {
          { Py_tp_methods, t_EulerFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegrator_init_ },
          { Py_tp_getset, t_EulerFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegrator, t_EulerFieldIntegrator, EulerFieldIntegrator);
        PyObject *t_EulerFieldIntegrator::wrap_Object(const EulerFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegrator), &PY_TYPE_DEF(EulerFieldIntegrator), module, "EulerFieldIntegrator", 0);
        }

        void t_EulerFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "class_", make_descriptor(EulerFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "wrapfn_", make_descriptor(t_EulerFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegrator::wrap_Object(EulerFieldIntegrator(((t_EulerFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          EulerFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = EulerFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
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
          mids$[mid_getStaticTransform_96493aacdf1acda1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_490485462b5938a0] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::StaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_96493aacdf1acda1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_490485462b5938a0], a0.this$));
      }

      ::org::orekit::frames::Transform TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
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
#include "org/orekit/propagation/events/AdapterDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdapterDetector::class$ = NULL;
        jmethodID *AdapterDetector::mids$ = NULL;
        bool AdapterDetector::live$ = false;

        jclass AdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ef30a2ad40caceb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_27b528e7858202ed] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getHandler_d450688ba8c3949b] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_5b5c68574977d620] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterDetector::AdapterDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ef30a2ad40caceb, a0.this$)) {}

        jdouble AdapterDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector AdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_27b528e7858202ed]));
        }

        ::org::orekit::propagation::events::handlers::EventHandler AdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_d450688ba8c3949b]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_5b5c68574977d620]));
        }

        jint AdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        jdouble AdapterDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_456d9a2f64d6b28d]);
        }

        void AdapterDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg);
        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args);
        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data);
        static PyGetSetDef t_AdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterDetector, detector),
          DECLARE_GET_FIELD(t_AdapterDetector, handler),
          DECLARE_GET_FIELD(t_AdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AdapterDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterDetector__methods_[] = {
          DECLARE_METHOD(t_AdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, g, METH_O),
          DECLARE_METHOD(t_AdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterDetector)[] = {
          { Py_tp_methods, t_AdapterDetector__methods_ },
          { Py_tp_init, (void *) t_AdapterDetector_init_ },
          { Py_tp_getset, t_AdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterDetector, t_AdapterDetector, AdapterDetector);

        void t_AdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterDetector), &PY_TYPE_DEF(AdapterDetector), module, "AdapterDetector", 0);
        }

        void t_AdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "class_", make_descriptor(AdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "wrapfn_", make_descriptor(t_AdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterDetector::initializeClass, 1)))
            return NULL;
          return t_AdapterDetector::wrap_Object(AdapterDetector(((t_AdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          AdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = AdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args)
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

        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultRealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultRealMatrixPreservingVisitor::live$ = false;

      jclass DefaultRealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_456d9a2f64d6b28d] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_78e41e7b5124a628] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixPreservingVisitor::DefaultRealMatrixPreservingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      jdouble DefaultRealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_456d9a2f64d6b28d]);
      }

      void DefaultRealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      void DefaultRealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_78e41e7b5124a628], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixPreservingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixPreservingVisitor, t_DefaultRealMatrixPreservingVisitor, DefaultRealMatrixPreservingVisitor);

      void t_DefaultRealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultRealMatrixPreservingVisitor), module, "DefaultRealMatrixPreservingVisitor", 0);
      }

      void t_DefaultRealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "class_", make_descriptor(DefaultRealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixPreservingVisitor::wrap_Object(DefaultRealMatrixPreservingVisitor(((t_DefaultRealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixPreservingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixPreservingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractWindUp::class$ = NULL;
          jmethodID *AbstractWindUp::mids$ = NULL;
          bool AbstractWindUp::live$ = false;

          jclass AbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_emitterToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractWindUp::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void AbstractWindUp::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args);
          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self);
          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg);
          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data);
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data);
          static PyGetSetDef t_AbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractWindUp, parametersDrivers),
            DECLARE_GET_FIELD(t_AbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_AbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractWindUp, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractWindUp, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWindUp)[] = {
            { Py_tp_methods, t_AbstractWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWindUp)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWindUp, t_AbstractWindUp, AbstractWindUp);
          PyObject *t_AbstractWindUp::wrap_Object(const AbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWindUp), &PY_TYPE_DEF(AbstractWindUp), module, "AbstractWindUp", 0);
          }

          void t_AbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "class_", make_descriptor(AbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "wrapfn_", make_descriptor(t_AbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_AbstractWindUp::wrap_Object(AbstractWindUp(((t_AbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg)
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
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01Data::class$ = NULL;
              jmethodID *SsrIgm01Data::mids$ = NULL;
              bool SsrIgm01Data::live$ = false;

              jclass SsrIgm01Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_f2f64475e4580546] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_7cd8e64b85aa1635] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_0a2a1ac2721c0336] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_d62793cb3669987a] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01Data::SsrIgm01Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint SsrIgm01Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_f2f64475e4580546]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm01Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_7cd8e64b85aa1635]));
              }

              void SsrIgm01Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_0a2a1ac2721c0336], a0);
              }

              void SsrIgm01Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_d62793cb3669987a], a0.this$);
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
              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self);
              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg);
              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data);
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm01Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm01Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm01Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm01Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01Data)[] = {
                { Py_tp_methods, t_SsrIgm01Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01Data_init_ },
                { Py_tp_getset, t_SsrIgm01Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm01Data, t_SsrIgm01Data, SsrIgm01Data);

              void t_SsrIgm01Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01Data), &PY_TYPE_DEF(SsrIgm01Data), module, "SsrIgm01Data", 0);
              }

              void t_SsrIgm01Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "class_", make_descriptor(SsrIgm01Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "wrapfn_", make_descriptor(t_SsrIgm01Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01Data::wrap_Object(SsrIgm01Data(((t_SsrIgm01Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm01Data_init_(t_SsrIgm01Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm01Data object((jobject) NULL);

                INT_CALL(object = SsrIgm01Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm01Data_getGnssIod(t_SsrIgm01Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm01Data_getOrbitCorrection(t_SsrIgm01Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm01Data_setGnssIod(t_SsrIgm01Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_setOrbitCorrection(t_SsrIgm01Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm01Data_get__gnssIod(t_SsrIgm01Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm01Data_set__gnssIod(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm01Data_get__orbitCorrection(t_SsrIgm01Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm01Data_set__orbitCorrection(t_SsrIgm01Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/hipparchus/linear/RRQRDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_27ff5cf8ba76b4fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_7116bbecdd8ceb21] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRank_12ebab281ee35c98] = env->getMethodID(cls, "getRank", "(D)I");
          mids$[mid_getSolver_73ddb95911119e87] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_d660c7a97bf55272] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_d2ec2a370d571745] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      RRQRDecomposition::RRQRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::org::hipparchus::linear::QRDecomposition(env->newObject(initializeClass, &mids$, mid_init$_27ff5cf8ba76b4fe, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix RRQRDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_7116bbecdd8ceb21]));
      }

      jint RRQRDecomposition::getRank(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_12ebab281ee35c98], a0);
      }

      ::org::hipparchus::linear::DecompositionSolver RRQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_73ddb95911119e87]));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
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

              ::java::lang::Class *OpsStatus::class$ = NULL;
              jmethodID *OpsStatus::mids$ = NULL;
              bool OpsStatus::live$ = false;
              OpsStatus *OpsStatus::BACKUP = NULL;
              OpsStatus *OpsStatus::DECAYED = NULL;
              OpsStatus *OpsStatus::EXTENDED_MISSION = NULL;
              OpsStatus *OpsStatus::NONOPERATIONAL = NULL;
              OpsStatus *OpsStatus::OPERATIONAL = NULL;
              OpsStatus *OpsStatus::PARTIALLY_OPERATIONAL = NULL;
              OpsStatus *OpsStatus::REENTRY_MODE = NULL;
              OpsStatus *OpsStatus::STANBY = NULL;
              OpsStatus *OpsStatus::UNKNOWN = NULL;

              jclass OpsStatus::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_648002f00fb5afea] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");
                  mids$[mid_values_e3f0aeab70fdfe5a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  BACKUP = new OpsStatus(env->getStaticObjectField(cls, "BACKUP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  DECAYED = new OpsStatus(env->getStaticObjectField(cls, "DECAYED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  EXTENDED_MISSION = new OpsStatus(env->getStaticObjectField(cls, "EXTENDED_MISSION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  NONOPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "NONOPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  PARTIALLY_OPERATIONAL = new OpsStatus(env->getStaticObjectField(cls, "PARTIALLY_OPERATIONAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  REENTRY_MODE = new OpsStatus(env->getStaticObjectField(cls, "REENTRY_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  STANBY = new OpsStatus(env->getStaticObjectField(cls, "STANBY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  UNKNOWN = new OpsStatus(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OpsStatus;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OpsStatus::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
              }

              OpsStatus OpsStatus::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OpsStatus(env->callStaticObjectMethod(cls, mids$[mid_valueOf_648002f00fb5afea], a0.this$));
              }

              JArray< OpsStatus > OpsStatus::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OpsStatus >(env->callStaticObjectMethod(cls, mids$[mid_values_e3f0aeab70fdfe5a]));
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
              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args);
              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OpsStatus_values(PyTypeObject *type);
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data);
              static PyGetSetDef t_OpsStatus__fields_[] = {
                DECLARE_GET_FIELD(t_OpsStatus, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpsStatus__methods_[] = {
                DECLARE_METHOD(t_OpsStatus, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, of_, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, toString, METH_VARARGS),
                DECLARE_METHOD(t_OpsStatus, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OpsStatus, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpsStatus)[] = {
                { Py_tp_methods, t_OpsStatus__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OpsStatus__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpsStatus)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OpsStatus, t_OpsStatus, OpsStatus);
              PyObject *t_OpsStatus::wrap_Object(const OpsStatus& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OpsStatus::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OpsStatus::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpsStatus *self = (t_OpsStatus *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OpsStatus::install(PyObject *module)
              {
                installType(&PY_TYPE(OpsStatus), &PY_TYPE_DEF(OpsStatus), module, "OpsStatus", 0);
              }

              void t_OpsStatus::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "class_", make_descriptor(OpsStatus::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "wrapfn_", make_descriptor(t_OpsStatus::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpsStatus::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "BACKUP", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::BACKUP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "DECAYED", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::DECAYED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "EXTENDED_MISSION", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::EXTENDED_MISSION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "NONOPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::NONOPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "PARTIALLY_OPERATIONAL", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::PARTIALLY_OPERATIONAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "REENTRY_MODE", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::REENTRY_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "STANBY", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::STANBY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpsStatus), "UNKNOWN", make_descriptor(t_OpsStatus::wrap_Object(*OpsStatus::UNKNOWN)));
              }

              static PyObject *t_OpsStatus_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpsStatus::initializeClass, 1)))
                  return NULL;
                return t_OpsStatus::wrap_Object(OpsStatus(((t_OpsStatus *) arg)->object.this$));
              }
              static PyObject *t_OpsStatus_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpsStatus::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpsStatus_of_(t_OpsStatus *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OpsStatus_toString(t_OpsStatus *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OpsStatus), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OpsStatus_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OpsStatus result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::valueOf(a0));
                  return t_OpsStatus::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OpsStatus_values(PyTypeObject *type)
              {
                JArray< OpsStatus > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus::values());
                return JArray<jobject>(result.this$).wrap(t_OpsStatus::wrap_jobject);
              }
              static PyObject *t_OpsStatus_get__parameters_(t_OpsStatus *self, void *data)
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
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationTimeScale::class$ = NULL;
      jmethodID *ObservationTimeScale::mids$ = NULL;
      bool ObservationTimeScale::live$ = false;
      ObservationTimeScale *ObservationTimeScale::BDT = NULL;
      ObservationTimeScale *ObservationTimeScale::GAL = NULL;
      ObservationTimeScale *ObservationTimeScale::GLO = NULL;
      ObservationTimeScale *ObservationTimeScale::GPS = NULL;
      ObservationTimeScale *ObservationTimeScale::IRN = NULL;
      ObservationTimeScale *ObservationTimeScale::QZS = NULL;

      jclass ObservationTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getTimeScale_f8bc26f48dbcde4b] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_valueOf_ed3fc9dd517bf832] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_values_06ced374976446a7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationTimeScale;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BDT = new ObservationTimeScale(env->getStaticObjectField(cls, "BDT", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GAL = new ObservationTimeScale(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GLO = new ObservationTimeScale(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GPS = new ObservationTimeScale(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          IRN = new ObservationTimeScale(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/gnss/ObservationTimeScale;"));
          QZS = new ObservationTimeScale(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeScale ObservationTimeScale::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_f8bc26f48dbcde4b], a0.this$));
      }

      ObservationTimeScale ObservationTimeScale::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationTimeScale(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed3fc9dd517bf832], a0.this$));
      }

      JArray< ObservationTimeScale > ObservationTimeScale::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationTimeScale >(env->callStaticObjectMethod(cls, mids$[mid_values_06ced374976446a7]));
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
      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args);
      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg);
      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type);
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data);
      static PyGetSetDef t_ObservationTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationTimeScale, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationTimeScale__methods_[] = {
        DECLARE_METHOD(t_ObservationTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationTimeScale, getTimeScale, METH_O),
        DECLARE_METHOD(t_ObservationTimeScale, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationTimeScale)[] = {
        { Py_tp_methods, t_ObservationTimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationTimeScale, t_ObservationTimeScale, ObservationTimeScale);
      PyObject *t_ObservationTimeScale::wrap_Object(const ObservationTimeScale& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationTimeScale::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationTimeScale), &PY_TYPE_DEF(ObservationTimeScale), module, "ObservationTimeScale", 0);
      }

      void t_ObservationTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "class_", make_descriptor(ObservationTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "wrapfn_", make_descriptor(t_ObservationTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationTimeScale::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "BDT", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::BDT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GAL", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GLO", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GLO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GPS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "IRN", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::IRN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "QZS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::QZS)));
      }

      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationTimeScale::initializeClass, 1)))
          return NULL;
        return t_ObservationTimeScale::wrap_Object(ObservationTimeScale(((t_ObservationTimeScale *) arg)->object.this$));
      }
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationTimeScale result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::valueOf(a0));
          return t_ObservationTimeScale::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type)
      {
        JArray< ObservationTimeScale > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationTimeScale::wrap_jobject);
      }
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAngularCoordinates::class$ = NULL;
      jmethodID *FieldAngularCoordinates::mids$ = NULL;
      bool FieldAngularCoordinates::live$ = false;

      jclass FieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f8f94b8019a86187] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_66871659c3e0bfb2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_3c4f2f18d0303b84] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_6ac368b443d4f180] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_561a148bb3fca15e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_4bfc5bd74ac720b5] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_applyTo_dc7eea29a4d4ad51] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_e42117f6acaa0604] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_32f08c76ddea4935] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_bdfc1809fc8a7def] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_12e5bbdb204422f8] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_estimateRate_0c5dd53b4f41dc79] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_estimateRate_0f1070a3f1d3a0b3] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_baf57d554bbf8cbc] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getModifiedRodrigues_150723b2a6519ce9] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRotation_ac4489fdef1c3aef] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_5791f80683b5227e] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_5791f80683b5227e] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_revert_60e0de9a41eb35da] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_rotationShiftedBy_d07ea2a19a5215cb] = env->getMethodID(cls, "rotationShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_shiftedBy_5a1bf28e9397fdaa] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_shiftedBy_c0afe8dc9dafe168] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_subtractOffset_4bfc5bd74ac720b5] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_toAngularCoordinates_eb0542756098e24f] = env->getMethodID(cls, "toAngularCoordinates", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_4293e15d24113072] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_ac4489fdef1c3aef] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_ac4489fdef1c3aef] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8f94b8019a86187, a0.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_66871659c3e0bfb2, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c4f2f18d0303b84, a0.this$, a1.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ac368b443d4f180, a0.this$, a1.this$, a2.this$)) {}

      FieldAngularCoordinates::FieldAngularCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_561a148bb3fca15e, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      FieldAngularCoordinates FieldAngularCoordinates::addOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_4bfc5bd74ac720b5], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_dc7eea29a4d4ad51], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_e42117f6acaa0604], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_32f08c76ddea4935], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldAngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_bdfc1809fc8a7def], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_12e5bbdb204422f8], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_0c5dd53b4f41dc79], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_0f1070a3f1d3a0b3], a0.this$, a1.this$, a2.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_baf57d554bbf8cbc], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldAngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_150723b2a6519ce9], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_ac4489fdef1c3aef]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_5791f80683b5227e]));
      }

      FieldAngularCoordinates FieldAngularCoordinates::revert() const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_60e0de9a41eb35da]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::rotationShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_d07ea2a19a5215cb], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_5a1bf28e9397fdaa], a0));
      }

      FieldAngularCoordinates FieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_c0afe8dc9dafe168], a0.this$));
      }

      FieldAngularCoordinates FieldAngularCoordinates::subtractOffset(const FieldAngularCoordinates & a0) const
      {
        return FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_4bfc5bd74ac720b5], a0.this$));
      }

      ::org::orekit::utils::AngularCoordinates FieldAngularCoordinates::toAngularCoordinates() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngularCoordinates_eb0542756098e24f]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_4293e15d24113072], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_ac4489fdef1c3aef]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_ac4489fdef1c3aef]));
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
      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args);
      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self);
      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data);
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_FieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, rotationRate),
        DECLARE_GET_FIELD(t_FieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toAngularCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAngularCoordinates)[] = {
        { Py_tp_methods, t_FieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAngularCoordinates_init_ },
        { Py_tp_getset, t_FieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAngularCoordinates, t_FieldAngularCoordinates, FieldAngularCoordinates);
      PyObject *t_FieldAngularCoordinates::wrap_Object(const FieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAngularCoordinates *self = (t_FieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAngularCoordinates), &PY_TYPE_DEF(FieldAngularCoordinates), module, "FieldAngularCoordinates", 0);
      }

      void t_FieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "class_", make_descriptor(FieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "wrapfn_", make_descriptor(t_FieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAngularCoordinates::wrap_Object(FieldAngularCoordinates(((t_FieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAngularCoordinates_of_(t_FieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAngularCoordinates_init_(t_FieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKD", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4))
            {
              INT_CALL(object = FieldAngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldAngularCoordinates_addOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_applyTo(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::createFromModifiedRodrigues(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::estimateRate(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldAngularCoordinates::getIdentity(a0));
          return t_FieldAngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getModifiedRodrigues(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_getRotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationAcceleration(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_getRotationRate(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_revert(t_FieldAngularCoordinates *self)
      {
        FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAngularCoordinates_rotationShiftedBy(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_shiftedBy(t_FieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_subtractOffset(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldAngularCoordinates::initializeClass, &a0, &p0, t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toAngularCoordinates(t_FieldAngularCoordinates *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAngularCoordinates());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toDerivativeStructureRotation(t_FieldAngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative1Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }

      static PyObject *t_FieldAngularCoordinates_toUnivariateDerivative2Rotation(t_FieldAngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
      }
      static PyObject *t_FieldAngularCoordinates_get__parameters_(t_FieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAngularCoordinates_get__rotation(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationAcceleration(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAngularCoordinates_get__rotationRate(t_FieldAngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/TwoDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *TwoDVariation::class$ = NULL;
        jmethodID *TwoDVariation::mids$ = NULL;
        bool TwoDVariation::live$ = false;

        jclass TwoDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/TwoDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_744e97af41a6f7ed] = env->getMethodID(cls, "<init>", "(DDD[[D)V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TwoDVariation::TwoDVariation(jdouble a0, jdouble a1, jdouble a2, const JArray< JArray< jdouble > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_744e97af41a6f7ed, a0, a1, a2, a3.this$)) {}

        jdouble TwoDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
      namespace antenna {
        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args);

        static PyMethodDef t_TwoDVariation__methods_[] = {
          DECLARE_METHOD(t_TwoDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TwoDVariation)[] = {
          { Py_tp_methods, t_TwoDVariation__methods_ },
          { Py_tp_init, (void *) t_TwoDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TwoDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TwoDVariation, t_TwoDVariation, TwoDVariation);

        void t_TwoDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(TwoDVariation), &PY_TYPE_DEF(TwoDVariation), module, "TwoDVariation", 0);
        }

        void t_TwoDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "class_", make_descriptor(TwoDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "wrapfn_", make_descriptor(t_TwoDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TwoDVariation::initializeClass, 1)))
            return NULL;
          return t_TwoDVariation::wrap_Object(TwoDVariation(((t_TwoDVariation *) arg)->object.this$));
        }
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TwoDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          JArray< JArray< jdouble > > a3((jobject) NULL);
          TwoDVariation object((jobject) NULL);

          if (!parseArgs(args, "DDD[[D", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = TwoDVariation(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args)
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
#include "org/hipparchus/stat/inference/InferenceTestUtils.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *InferenceTestUtils::class$ = NULL;
        jmethodID *InferenceTestUtils::mids$ = NULL;
        bool InferenceTestUtils::live$ = false;

        jclass InferenceTestUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/InferenceTestUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_approximateP_fc76f5003eb574a8] = env->getStaticMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_chiSquare_04b1c4593e0336da] = env->getStaticMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_bea0e17cbbf5365f] = env->getStaticMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_84aeba7caf131216] = env->getStaticMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_04b1c4593e0336da] = env->getStaticMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_bea0e17cbbf5365f] = env->getStaticMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_766218494e6ad3c9] = env->getStaticMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_1663c18e69b1b60e] = env->getStaticMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_84aeba7caf131216] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_c7887040a8242925] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_exactP_850e235f3bde160c] = env->getStaticMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_g_bea0e17cbbf5365f] = env->getStaticMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_84aeba7caf131216] = env->getStaticMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_bea0e17cbbf5365f] = env->getStaticMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_1663c18e69b1b60e] = env->getStaticMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_84aeba7caf131216] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_c7887040a8242925] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_bea0e17cbbf5365f] = env->getStaticMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_homoscedasticT_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_7e6cb2d20813e226] = env->getStaticMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_7e6cb2d20813e226] = env->getStaticMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_c2fc7bc0a4bc40d1] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_kolmogorovSmirnovStatistic_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_a02fd79302bea67f] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_a02fd79302bea67f] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_6379f5334de861c2] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_942dd14b61b4a3a3] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_206773e96c9fbd6d] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_oneWayAnovaFValue_a00f51a898ec07ff] = env->getStaticMethodID(cls, "oneWayAnovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaPValue_a00f51a898ec07ff] = env->getStaticMethodID(cls, "oneWayAnovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaTest_489eee1f8c6850cc] = env->getStaticMethodID(cls, "oneWayAnovaTest", "(Ljava/util/Collection;D)Z");
            mids$[mid_pairedT_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_c2fc7bc0a4bc40d1] = env->getStaticMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_rootLogLikelihoodRatio_076d964adec38696] = env->getStaticMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");
            mids$[mid_t_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_618a40a0b95154fa] = env->getStaticMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_eac47427cc058468] = env->getStaticMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_7e6cb2d20813e226] = env->getStaticMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_618a40a0b95154fa] = env->getStaticMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_eac47427cc058468] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_7e6cb2d20813e226] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_c2fc7bc0a4bc40d1] = env->getStaticMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_44e7d76275f3c148] = env->getStaticMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_290296050888289c] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_d1075db52bf9375e] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble InferenceTestUtils::approximateP(jdouble a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_approximateP_fc76f5003eb574a8], a0, a1, a2);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_04b1c4593e0336da], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_04b1c4593e0336da], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_766218494e6ad3c9], a0.this$, a1);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_1663c18e69b1b60e], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_c7887040a8242925], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::exactP(jdouble a0, jint a1, jint a2, jboolean a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_exactP_850e235f3bde160c], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::g(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_g_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTest_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTest_1663c18e69b1b60e], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTestDataSetsComparison_c7887040a8242925], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestIntrinsic_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_homoscedasticTTest_c2fc7bc0a4bc40d1], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_a02fd79302bea67f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_a02fd79302bea67f], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_6379f5334de861c2], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_942dd14b61b4a3a3], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_kolmogorovSmirnovTest_206773e96c9fbd6d], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::oneWayAnovaFValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaFValue_a00f51a898ec07ff], a0.this$);
        }

        jdouble InferenceTestUtils::oneWayAnovaPValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaPValue_a00f51a898ec07ff], a0.this$);
        }

        jboolean InferenceTestUtils::oneWayAnovaTest(const ::java::util::Collection & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_oneWayAnovaTest_489eee1f8c6850cc], a0.this$, a1);
        }

        jdouble InferenceTestUtils::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedT_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedTTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_pairedTTest_c2fc7bc0a4bc40d1], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_rootLogLikelihoodRatio_076d964adec38696], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_618a40a0b95154fa], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_eac47427cc058468], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_618a40a0b95154fa], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_eac47427cc058468], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_7e6cb2d20813e226], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_c2fc7bc0a4bc40d1], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_44e7d76275f3c148], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_290296050888289c], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_d1075db52bf9375e], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_InferenceTestUtils__methods_[] = {
          DECLARE_METHOD(t_InferenceTestUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, approximateP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquare, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, exactP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, g, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestIntrinsic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovStatistic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaFValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaPValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, rootLogLikelihoodRatio, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, t, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, tTest, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InferenceTestUtils)[] = {
          { Py_tp_methods, t_InferenceTestUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InferenceTestUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InferenceTestUtils, t_InferenceTestUtils, InferenceTestUtils);

        void t_InferenceTestUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(InferenceTestUtils), &PY_TYPE_DEF(InferenceTestUtils), module, "InferenceTestUtils", 0);
        }

        void t_InferenceTestUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "class_", make_descriptor(InferenceTestUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "wrapfn_", make_descriptor(t_InferenceTestUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InferenceTestUtils::initializeClass, 1)))
            return NULL;
          return t_InferenceTestUtils::wrap_Object(InferenceTestUtils(((t_InferenceTestUtils *) arg)->object.this$));
        }
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InferenceTestUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "approximateP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "exactP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "g", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaFValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaPValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaPValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "pairedT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "rootLogLikelihoodRatio", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "t", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00$FieldOutput::class$ = NULL;
          jmethodID *NRLMSISE00$FieldOutput::mids$ = NULL;
          bool NRLMSISE00$FieldOutput::live$ = false;

          jclass NRLMSISE00$FieldOutput::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_d0960d09d84b1c1d] = env->getMethodID(cls, "getDensity", "(I)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement NRLMSISE00$FieldOutput::getDensity(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_d0960d09d84b1c1d], a0));
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
          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args);
          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data);
          static PyGetSetDef t_NRLMSISE00$FieldOutput__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00$FieldOutput, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00$FieldOutput__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, of_, METH_VARARGS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, getDensity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00$FieldOutput)[] = {
            { Py_tp_methods, t_NRLMSISE00$FieldOutput__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00$FieldOutput__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00$FieldOutput)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00$FieldOutput, t_NRLMSISE00$FieldOutput, NRLMSISE00$FieldOutput);
          PyObject *t_NRLMSISE00$FieldOutput::wrap_Object(const NRLMSISE00$FieldOutput& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NRLMSISE00$FieldOutput::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NRLMSISE00$FieldOutput::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00$FieldOutput), &PY_TYPE_DEF(NRLMSISE00$FieldOutput), module, "NRLMSISE00$FieldOutput", 0);
          }

          void t_NRLMSISE00$FieldOutput::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "class_", make_descriptor(NRLMSISE00$FieldOutput::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "wrapfn_", make_descriptor(t_NRLMSISE00$FieldOutput::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00$FieldOutput::wrap_Object(NRLMSISE00$FieldOutput(((t_NRLMSISE00$FieldOutput *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getDensity(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", arg);
            return NULL;
          }
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data)
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
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
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
            mids$[mid_getIndicator_f2f64475e4580546] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_getRangeType_08f453ea9aee7402] = env->getStaticMethodID(cls, "getRangeType", "(I)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_valueOf_e4c323ef50a956ef] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_values_f5b9405a28e50710] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$RangeType;");

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
          return env->callIntMethod(this$, mids$[mid_getIndicator_f2f64475e4580546]);
        }

        CRDHeader$RangeType CRDHeader$RangeType::getRangeType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_getRangeType_08f453ea9aee7402], a0));
        }

        CRDHeader$RangeType CRDHeader$RangeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$RangeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e4c323ef50a956ef], a0.this$));
        }

        JArray< CRDHeader$RangeType > CRDHeader$RangeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$RangeType >(env->callStaticObjectMethod(cls, mids$[mid_values_f5b9405a28e50710]));
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
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance::class$ = NULL;
          jmethodID *SemiVariance::mids$ = NULL;
          bool SemiVariance::live$ = false;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::DOWNSIDE_VARIANCE = NULL;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::UPSIDE_VARIANCE = NULL;

          jclass SemiVariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_92366230b4333eba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_60d69a885caa54d9] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_copy_6f47ac504c7cf84d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_evaluate_fccab85ed8fabb8f] = env->getMethodID(cls, "evaluate", "([DLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_926a8b9763aa0b21] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_cd8eecfd17ecafce] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_eed160687649204b] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;ZII)D");
              mids$[mid_getVarianceDirection_8dd91916d87a48f4] = env->getMethodID(cls, "getVarianceDirection", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_isBiasCorrected_e470b6d9e0d979db] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrected_7b2868bea83ac0f4] = env->getMethodID(cls, "withBiasCorrected", "(Z)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_withVarianceDirection_4162e2d5716d03fc] = env->getMethodID(cls, "withVarianceDirection", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance::SemiVariance() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          SemiVariance::SemiVariance(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_92366230b4333eba, a0.this$)) {}

          SemiVariance::SemiVariance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

          SemiVariance::SemiVariance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_60d69a885caa54d9, a0, a1.this$)) {}

          SemiVariance SemiVariance::copy() const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_copy_6f47ac504c7cf84d]));
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_fccab85ed8fabb8f], a0.this$, a1.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_926a8b9763aa0b21], a0.this$, a1);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_cd8eecfd17ecafce], a0.this$, a1, a2.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2, jboolean a3, jint a4, jint a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_eed160687649204b], a0.this$, a1, a2.this$, a3, a4, a5);
          }

          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction SemiVariance::getVarianceDirection() const
          {
            return ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->callObjectMethod(this$, mids$[mid_getVarianceDirection_8dd91916d87a48f4]));
          }

          jboolean SemiVariance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_e470b6d9e0d979db]);
          }

          SemiVariance SemiVariance::withBiasCorrected(jboolean a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withBiasCorrected_7b2868bea83ac0f4], a0));
          }

          SemiVariance SemiVariance::withVarianceDirection(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withVarianceDirection_4162e2d5716d03fc], a0.this$));
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
          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self);
          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self);
          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data);
          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data);
          static PyGetSetDef t_SemiVariance__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance, biasCorrected),
            DECLARE_GET_FIELD(t_SemiVariance, varianceDirection),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance__methods_[] = {
            DECLARE_METHOD(t_SemiVariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, copy, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, getVarianceDirection, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, withBiasCorrected, METH_O),
            DECLARE_METHOD(t_SemiVariance, withVarianceDirection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance)[] = {
            { Py_tp_methods, t_SemiVariance__methods_ },
            { Py_tp_init, (void *) t_SemiVariance_init_ },
            { Py_tp_getset, t_SemiVariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SemiVariance, t_SemiVariance, SemiVariance);

          void t_SemiVariance::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance), &PY_TYPE_DEF(SemiVariance), module, "SemiVariance", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "Direction", make_descriptor(&PY_TYPE_DEF(SemiVariance$Direction)));
          }

          void t_SemiVariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "class_", make_descriptor(SemiVariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "wrapfn_", make_descriptor(t_SemiVariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "DOWNSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::DOWNSIDE_VARIANCE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "UPSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::UPSIDE_VARIANCE)));
          }

          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance::initializeClass, 1)))
              return NULL;
            return t_SemiVariance::wrap_Object(SemiVariance(((t_SemiVariance *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SemiVariance object((jobject) NULL);

                INT_CALL(object = SemiVariance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
                PyTypeObject **p0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "ZK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0, a1));
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

          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args)
          {
            SemiVariance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SemiVariance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble result;

                if (!parseArgs(args, "[DK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble result;

                if (!parseArgs(args, "[DDK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
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
              }
              break;
             case 6:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jboolean a3;
                jint a4;
                jint a5;
                jdouble result;

                if (!parseArgs(args, "[DDKZII", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction result((jobject) NULL);
            OBJ_CALL(result = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(result);
          }

          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg)
          {
            jboolean a0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrected(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrected", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
            PyTypeObject **p0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
            {
              OBJ_CALL(result = self->object.withVarianceDirection(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withVarianceDirection", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction value((jobject) NULL);
            OBJ_CALL(value = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIA.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIA::class$ = NULL;
        jmethodID *GPSBlockIIA::mids$ = NULL;
        bool GPSBlockIIA::live$ = false;
        jdouble GPSBlockIIA::DEFAULT_YAW_BIAS = (jdouble) 0;

        jclass GPSBlockIIA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c437373602d18db] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_getDefaultYawRate_b772323fc98b7293] = env->getStaticMethodID(cls, "getDefaultYawRate", "(I)D");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIA::GPSBlockIIA(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_3c437373602d18db, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jdouble GPSBlockIIA::getDefaultYawRate(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDefaultYawRate_b772323fc98b7293], a0);
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
      namespace attitude {
        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_GPSBlockIIA__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, getDefaultYawRate, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIA)[] = {
          { Py_tp_methods, t_GPSBlockIIA__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIA_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIA)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIA, t_GPSBlockIIA, GPSBlockIIA);

        void t_GPSBlockIIA::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIA), &PY_TYPE_DEF(GPSBlockIIA), module, "GPSBlockIIA", 0);
        }

        void t_GPSBlockIIA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "class_", make_descriptor(GPSBlockIIA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "wrapfn_", make_descriptor(t_GPSBlockIIA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIA::DEFAULT_YAW_BIAS));
        }

        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIA::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIA::wrap_Object(GPSBlockIIA(((t_GPSBlockIIA *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIA object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIA(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::attitude::GPSBlockIIA::getDefaultYawRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDefaultYawRate", arg);
          return NULL;
        }
      }
    }
  }
}
