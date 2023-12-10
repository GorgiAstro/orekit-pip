#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *Theta::class$ = NULL;
          jmethodID *Theta::mids$ = NULL;
          bool Theta::live$ = false;

          jclass Theta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/Theta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_a6784e0b89dedf02] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta2_a6784e0b89dedf02] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta3_a6784e0b89dedf02] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta4_a6784e0b89dedf02] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/complex/Complex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex Theta::theta1() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta1_a6784e0b89dedf02]));
          }

          ::org::hipparchus::complex::Complex Theta::theta2() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta2_a6784e0b89dedf02]));
          }

          ::org::hipparchus::complex::Complex Theta::theta3() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta3_a6784e0b89dedf02]));
          }

          ::org::hipparchus::complex::Complex Theta::theta4() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta4_a6784e0b89dedf02]));
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
          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_theta1(t_Theta *self);
          static PyObject *t_Theta_theta2(t_Theta *self);
          static PyObject *t_Theta_theta3(t_Theta *self);
          static PyObject *t_Theta_theta4(t_Theta *self);

          static PyMethodDef t_Theta__methods_[] = {
            DECLARE_METHOD(t_Theta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Theta)[] = {
            { Py_tp_methods, t_Theta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Theta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Theta, t_Theta, Theta);

          void t_Theta::install(PyObject *module)
          {
            installType(&PY_TYPE(Theta), &PY_TYPE_DEF(Theta), module, "Theta", 0);
          }

          void t_Theta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "class_", make_descriptor(Theta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "wrapfn_", make_descriptor(t_Theta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Theta::initializeClass, 1)))
              return NULL;
            return t_Theta::wrap_Object(Theta(((t_Theta *) arg)->object.this$));
          }
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Theta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Theta_theta1(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta2(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta3(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta4(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogNormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogNormalDistribution::class$ = NULL;
        jmethodID *LogNormalDistribution::mids$ = NULL;
        bool LogNormalDistribution::live$ = false;

        jclass LogNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_dff5885c2c873297] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getShape_dff5885c2c873297] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_86ffecc08a63eff0] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogNormalDistribution::LogNormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble LogNormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble LogNormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble LogNormalDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_dff5885c2c873297]);
        }

        jdouble LogNormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble LogNormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble LogNormalDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_dff5885c2c873297]);
        }

        jdouble LogNormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble LogNormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean LogNormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble LogNormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
        }

        jdouble LogNormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data);
        static PyGetSetDef t_LogNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogNormalDistribution, location),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogNormalDistribution, shape),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_LogNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogNormalDistribution)[] = {
          { Py_tp_methods, t_LogNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_LogNormalDistribution_init_ },
          { Py_tp_getset, t_LogNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogNormalDistribution, t_LogNormalDistribution, LogNormalDistribution);

        void t_LogNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogNormalDistribution), &PY_TYPE_DEF(LogNormalDistribution), module, "LogNormalDistribution", 0);
        }

        void t_LogNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "class_", make_descriptor(LogNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "wrapfn_", make_descriptor(t_LogNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_LogNormalDistribution::wrap_Object(LogNormalDistribution(((t_LogNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LogNormalDistribution object((jobject) NULL);

              INT_CALL(object = LogNormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1));
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
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1, a2));
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

        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data)
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
#include "org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *HolmesFeatherstoneAttractionModel::class$ = NULL;
        jmethodID *HolmesFeatherstoneAttractionModel::mids$ = NULL;
        bool HolmesFeatherstoneAttractionModel::live$ = false;

        jclass HolmesFeatherstoneAttractionModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_42c0b505a2daeafd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getMu_bf1d7732f1acb697] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
            mids$[mid_gradient_6677da9044a1cae1] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_gradient_0f32a827e3dcb556] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");
            mids$[mid_nonCentralPart_7f2dc7ef92d08c2a] = env->getMethodID(cls, "nonCentralPart", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");
            mids$[mid_value_7f2dc7ef92d08c2a] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HolmesFeatherstoneAttractionModel::HolmesFeatherstoneAttractionModel(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_42c0b505a2daeafd, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean HolmesFeatherstoneAttractionModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_bf1d7732f1acb697], a0.this$);
        }

        ::java::util::List HolmesFeatherstoneAttractionModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        ::org::orekit::forces::gravity::potential::TideSystem HolmesFeatherstoneAttractionModel::getTideSystem() const
        {
          return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_c68abf1ca1fc273e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_gradient_6677da9044a1cae1], a0.this$, a1.this$, a2.this$));
        }

        JArray< jdouble > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_0f32a827e3dcb556], a0.this$, a1.this$, a2));
        }

        jdouble HolmesFeatherstoneAttractionModel::nonCentralPart(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_nonCentralPart_7f2dc7ef92d08c2a], a0.this$, a1.this$, a2);
        }

        jdouble HolmesFeatherstoneAttractionModel::value(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7f2dc7ef92d08c2a], a0.this$, a1.this$, a2);
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
        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyGetSetDef t_HolmesFeatherstoneAttractionModel__fields_[] = {
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, mu),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, parametersDrivers),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, tideSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HolmesFeatherstoneAttractionModel__methods_[] = {
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getMu, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getTideSystem, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, nonCentralPart, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HolmesFeatherstoneAttractionModel)[] = {
          { Py_tp_methods, t_HolmesFeatherstoneAttractionModel__methods_ },
          { Py_tp_init, (void *) t_HolmesFeatherstoneAttractionModel_init_ },
          { Py_tp_getset, t_HolmesFeatherstoneAttractionModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HolmesFeatherstoneAttractionModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HolmesFeatherstoneAttractionModel, t_HolmesFeatherstoneAttractionModel, HolmesFeatherstoneAttractionModel);

        void t_HolmesFeatherstoneAttractionModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HolmesFeatherstoneAttractionModel), &PY_TYPE_DEF(HolmesFeatherstoneAttractionModel), module, "HolmesFeatherstoneAttractionModel", 0);
        }

        void t_HolmesFeatherstoneAttractionModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "class_", make_descriptor(HolmesFeatherstoneAttractionModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "wrapfn_", make_descriptor(t_HolmesFeatherstoneAttractionModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 1)))
            return NULL;
          return t_HolmesFeatherstoneAttractionModel::wrap_Object(HolmesFeatherstoneAttractionModel(((t_HolmesFeatherstoneAttractionModel *) arg)->object.this$));
        }
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a1((jobject) NULL);
          HolmesFeatherstoneAttractionModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = HolmesFeatherstoneAttractionModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return result.wrap();
              }
            }
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.nonCentralPart(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "nonCentralPart", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateVectorFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *FieldUnivariateVectorFunction::mids$ = NULL;
      bool FieldUnivariateVectorFunction::live$ = false;

      jclass FieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateVectorFunction_dae87adbde51705f] = env->getMethodID(cls, "toCalculusFieldUnivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateVectorFunction;");
          mids$[mid_value_30c819b09170a025] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction FieldUnivariateVectorFunction::toCalculusFieldUnivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateVectorFunction_dae87adbde51705f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_30c819b09170a025], a0.this$));
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
      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, toCalculusFieldUnivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateVectorFunction, t_FieldUnivariateVectorFunction, FieldUnivariateVectorFunction);

      void t_FieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateVectorFunction), &PY_TYPE_DEF(FieldUnivariateVectorFunction), module, "FieldUnivariateVectorFunction", 0);
      }

      void t_FieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "class_", make_descriptor(FieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateVectorFunction::wrap_Object(FieldUnivariateVectorFunction(((t_FieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedRealFieldUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedRealFieldUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedRealFieldUnivariateSolver$Interval::live$ = false;

        jclass BracketedRealFieldUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f70e12a452183042] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getLeftAbscissa_eba8e72a22c984ac] = env->getMethodID(cls, "getLeftAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getLeftValue_eba8e72a22c984ac] = env->getMethodID(cls, "getLeftValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightAbscissa_eba8e72a22c984ac] = env->getMethodID(cls, "getRightAbscissa", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getRightValue_eba8e72a22c984ac] = env->getMethodID(cls, "getRightValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getSide_37d28a7f2b2ee383] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedRealFieldUnivariateSolver$Interval::BracketedRealFieldUnivariateSolver$Interval(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f70e12a452183042, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftAbscissa_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getLeftValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeftValue_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightAbscissa() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAbscissa_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getRightValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightValue_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement BracketedRealFieldUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSide_37d28a7f2b2ee383], a0.this$));
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
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedRealFieldUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedRealFieldUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedRealFieldUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedRealFieldUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedRealFieldUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedRealFieldUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedRealFieldUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedRealFieldUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedRealFieldUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedRealFieldUnivariateSolver$Interval, t_BracketedRealFieldUnivariateSolver$Interval, BracketedRealFieldUnivariateSolver$Interval);
        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(const BracketedRealFieldUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedRealFieldUnivariateSolver$Interval *self = (t_BracketedRealFieldUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedRealFieldUnivariateSolver$Interval), module, "BracketedRealFieldUnivariateSolver$Interval", 0);
        }

        void t_BracketedRealFieldUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "class_", make_descriptor(BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedRealFieldUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedRealFieldUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(BracketedRealFieldUnivariateSolver$Interval(((t_BracketedRealFieldUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedRealFieldUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_of_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedRealFieldUnivariateSolver$Interval_init_(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          BracketedRealFieldUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = BracketedRealFieldUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getLeftValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getLeftValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightAbscissa());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getRightValue(t_BracketedRealFieldUnivariateSolver$Interval *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRightValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_getSide(t_BracketedRealFieldUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__parameters_(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__leftValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getLeftValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightAbscissa(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightAbscissa());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_BracketedRealFieldUnivariateSolver$Interval_get__rightValue(t_BracketedRealFieldUnivariateSolver$Interval *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRightValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldMidPointIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldMidPointIntegrator::class$ = NULL;
        jmethodID *FieldMidPointIntegrator::mids$ = NULL;
        bool FieldMidPointIntegrator::live$ = false;
        jint FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldMidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldMidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_b63dedd7ffb51c0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_eba8e72a22c984ac] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b63dedd7ffb51c0c, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args);
        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data);
        static PyGetSetDef t_FieldMidPointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldMidPointIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldMidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldMidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldMidPointIntegrator)[] = {
          { Py_tp_methods, t_FieldMidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldMidPointIntegrator_init_ },
          { Py_tp_getset, t_FieldMidPointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldMidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldMidPointIntegrator, t_FieldMidPointIntegrator, FieldMidPointIntegrator);
        PyObject *t_FieldMidPointIntegrator::wrap_Object(const FieldMidPointIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldMidPointIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldMidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldMidPointIntegrator), &PY_TYPE_DEF(FieldMidPointIntegrator), module, "FieldMidPointIntegrator", 0);
        }

        void t_FieldMidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "class_", make_descriptor(FieldMidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "wrapfn_", make_descriptor(t_FieldMidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldMidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldMidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldMidPointIntegrator::wrap_Object(FieldMidPointIntegrator(((t_FieldMidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldMidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUpFactory::class$ = NULL;
          jmethodID *InterSatellitesWindUpFactory::mids$ = NULL;
          bool InterSatellitesWindUpFactory::live$ = false;

          jclass InterSatellitesWindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_fa7048f68d3cf24a] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesWindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesWindUpFactory::InterSatellitesWindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp InterSatellitesWindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::estimation::measurements::gnss::Dipole & a5) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_fa7048f68d3cf24a], a0.this$, a1, a2.this$, a3.this$, a4, a5.this$));
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
          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args);

          static PyMethodDef t_InterSatellitesWindUpFactory__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUpFactory)[] = {
            { Py_tp_methods, t_InterSatellitesWindUpFactory__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesWindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUpFactory, t_InterSatellitesWindUpFactory, InterSatellitesWindUpFactory);

          void t_InterSatellitesWindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUpFactory), &PY_TYPE_DEF(InterSatellitesWindUpFactory), module, "InterSatellitesWindUpFactory", 0);
          }

          void t_InterSatellitesWindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "class_", make_descriptor(InterSatellitesWindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "wrapfn_", make_descriptor(t_InterSatellitesWindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUpFactory::wrap_Object(InterSatellitesWindUpFactory(((t_InterSatellitesWindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            InterSatellitesWindUpFactory object((jobject) NULL);

            INT_CALL(object = InterSatellitesWindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            jint a4;
            ::org::orekit::estimation::measurements::gnss::Dipole a5((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp result((jobject) NULL);

            if (!parseArgs(args, "KIkKIk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesWindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineDatation::class$ = NULL;
        jmethodID *LineDatation::mids$ = NULL;
        bool LineDatation::live$ = false;

        jclass LineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_149a9211a037d799] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_bf1d7732f1acb697] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_dcbc7ce2902fa136] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate LineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_149a9211a037d799], a0));
        }

        jdouble LineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_bf1d7732f1acb697], a0.this$);
        }

        jdouble LineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_dcbc7ce2902fa136], a0);
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
    namespace rugged {
      namespace linesensor {
        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg);

        static PyMethodDef t_LineDatation__methods_[] = {
          DECLARE_METHOD(t_LineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineDatation)[] = {
          { Py_tp_methods, t_LineDatation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineDatation, t_LineDatation, LineDatation);

        void t_LineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LineDatation), &PY_TYPE_DEF(LineDatation), module, "LineDatation", 0);
        }

        void t_LineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "class_", make_descriptor(LineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "wrapfn_", make_descriptor(t_LineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineDatation::initializeClass, 1)))
            return NULL;
          return t_LineDatation::wrap_Object(LineDatation(((t_LineDatation *) arg)->object.this$));
        }
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSegment::class$ = NULL;
              jmethodID *AemSegment::mids$ = NULL;
              bool AemSegment::live$ = false;

              jclass AemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8c9ac597189a8a73] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/ndm/adm/aem/AemData;)V");
                  mids$[mid_getAngularCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_f95b60a986adb964] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_11b109bd155ca898] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSegment::AemSegment(const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_8c9ac597189a8a73, a0.this$, a1.this$)) {}

              ::java::util::List AemSegment::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_2afa36052df4765d]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AemSegment::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_f95b60a986adb964]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c]));
              }

              ::java::lang::String AemSegment::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_11b109bd155ca898]));
              }

              jint AemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
              }

              ::org::orekit::frames::Frame AemSegment::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args);
              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self);
              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self);
              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self);
              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self);
              static PyObject *t_AemSegment_getStart(t_AemSegment *self);
              static PyObject *t_AemSegment_getStop(t_AemSegment *self);
              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data);
              static PyGetSetDef t_AemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_AemSegment, angularCoordinates),
                DECLARE_GET_FIELD(t_AemSegment, attitudeProvider),
                DECLARE_GET_FIELD(t_AemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_AemSegment, interpolationMethod),
                DECLARE_GET_FIELD(t_AemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_AemSegment, referenceFrame),
                DECLARE_GET_FIELD(t_AemSegment, start),
                DECLARE_GET_FIELD(t_AemSegment, stop),
                DECLARE_GET_FIELD(t_AemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSegment__methods_[] = {
                DECLARE_METHOD(t_AemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemSegment, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSegment)[] = {
                { Py_tp_methods, t_AemSegment__methods_ },
                { Py_tp_init, (void *) t_AemSegment_init_ },
                { Py_tp_getset, t_AemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(AemSegment, t_AemSegment, AemSegment);
              PyObject *t_AemSegment::wrap_Object(const AemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSegment), &PY_TYPE_DEF(AemSegment), module, "AemSegment", 0);
              }

              void t_AemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "class_", make_descriptor(AemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "wrapfn_", make_descriptor(t_AemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSegment::initializeClass, 1)))
                  return NULL;
                return t_AemSegment::wrap_Object(AemSegment(((t_AemSegment *) arg)->object.this$));
              }
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemData a1((jobject) NULL);
                AemSegment object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = AemSegment(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStart(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStop(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data)
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
#include "org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonFieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonFieldTimeDerivativesEquations::mids$ = NULL;
        bool PythonFieldTimeDerivativesEquations::live$ = false;

        jclass PythonFieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_072c8635f2164db9] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_072c8635f2164db9] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_c79ed286e3615fed] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldTimeDerivativesEquations::PythonFieldTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldTimeDerivativesEquations::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self);
        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonFieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, self),
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonFieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonFieldTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonFieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldTimeDerivativesEquations, t_PythonFieldTimeDerivativesEquations, PythonFieldTimeDerivativesEquations);
        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_Object(const PythonFieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldTimeDerivativesEquations), &PY_TYPE_DEF(PythonFieldTimeDerivativesEquations), module, "PythonFieldTimeDerivativesEquations", 1);
        }

        void t_PythonFieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "class_", make_descriptor(PythonFieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonFieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V", (void *) t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonFieldTimeDerivativesEquations::wrap_Object(PythonFieldTimeDerivativesEquations(((t_PythonFieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonFieldTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data)
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
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelType::class$ = NULL;
          jmethodID *ViennaModelType::mids$ = NULL;
          bool ViennaModelType::live$ = false;
          ViennaModelType *ViennaModelType::VIENNA_ONE = NULL;
          ViennaModelType *ViennaModelType::VIENNA_THREE = NULL;

          jclass ViennaModelType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_51501743bc0e5c45] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/troposphere/ViennaModelType;");
              mids$[mid_values_7308b2239f73e0de] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/troposphere/ViennaModelType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VIENNA_ONE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_ONE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              VIENNA_THREE = new ViennaModelType(env->getStaticObjectField(cls, "VIENNA_THREE", "Lorg/orekit/models/earth/troposphere/ViennaModelType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelType ViennaModelType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ViennaModelType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_51501743bc0e5c45], a0.this$));
          }

          JArray< ViennaModelType > ViennaModelType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ViennaModelType >(env->callStaticObjectMethod(cls, mids$[mid_values_7308b2239f73e0de]));
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
          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args);
          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ViennaModelType_values(PyTypeObject *type);
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data);
          static PyGetSetDef t_ViennaModelType__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelType__methods_[] = {
            DECLARE_METHOD(t_ViennaModelType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, of_, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelType)[] = {
            { Py_tp_methods, t_ViennaModelType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ViennaModelType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ViennaModelType, t_ViennaModelType, ViennaModelType);
          PyObject *t_ViennaModelType::wrap_Object(const ViennaModelType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ViennaModelType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ViennaModelType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ViennaModelType *self = (t_ViennaModelType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ViennaModelType::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelType), &PY_TYPE_DEF(ViennaModelType), module, "ViennaModelType", 0);
          }

          void t_ViennaModelType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "class_", make_descriptor(ViennaModelType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "wrapfn_", make_descriptor(t_ViennaModelType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_ONE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelType), "VIENNA_THREE", make_descriptor(t_ViennaModelType::wrap_Object(*ViennaModelType::VIENNA_THREE)));
          }

          static PyObject *t_ViennaModelType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelType::initializeClass, 1)))
              return NULL;
            return t_ViennaModelType::wrap_Object(ViennaModelType(((t_ViennaModelType *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ViennaModelType_of_(t_ViennaModelType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ViennaModelType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ViennaModelType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::valueOf(a0));
              return t_ViennaModelType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ViennaModelType_values(PyTypeObject *type)
          {
            JArray< ViennaModelType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::ViennaModelType::values());
            return JArray<jobject>(result.this$).wrap(t_ViennaModelType::wrap_jobject);
          }
          static PyObject *t_ViennaModelType_get__parameters_(t_ViennaModelType *self, void *data)
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
#include "org/orekit/frames/PythonEOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPBasedTransformProvider::class$ = NULL;
      jmethodID *PythonEOPBasedTransformProvider::mids$ = NULL;
      bool PythonEOPBasedTransformProvider::live$ = false;

      jclass PythonEOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_a75a6d9d92c81a5e] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_8ac98ab37841bf77] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPBasedTransformProvider::PythonEOPBasedTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonEOPBasedTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonEOPBasedTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonEOPBasedTransformProvider::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self);
      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_PythonEOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPBasedTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPBasedTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_PythonEOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonEOPBasedTransformProvider_init_ },
        { Py_tp_getset, t_PythonEOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPBasedTransformProvider, t_PythonEOPBasedTransformProvider, PythonEOPBasedTransformProvider);

      void t_PythonEOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPBasedTransformProvider), &PY_TYPE_DEF(PythonEOPBasedTransformProvider), module, "PythonEOPBasedTransformProvider", 1);
      }

      void t_PythonEOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "class_", make_descriptor(PythonEOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "wrapfn_", make_descriptor(t_PythonEOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPBasedTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;", (void *) t_PythonEOPBasedTransformProvider_getEOPHistory0 },
          { "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;", (void *) t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1 },
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonEOPBasedTransformProvider_getTransform2 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonEOPBasedTransformProvider_getTransform3 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPBasedTransformProvider_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonEOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonEOPBasedTransformProvider::wrap_Object(PythonEOPBasedTransformProvider(((t_PythonEOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPBasedTransformProvider_init_(t_PythonEOPBasedTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPBasedTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonEOPBasedTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_finalize(t_PythonEOPBasedTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPBasedTransformProvider_pythonExtension(t_PythonEOPBasedTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getEOPHistory0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getNonInterpolatingProvider1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPBasedTransformProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNonInterpolatingProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPBasedTransformProvider::initializeClass, &value))
        {
          throwTypeError("getNonInterpolatingProvider", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonEOPBasedTransformProvider_getTransform3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonEOPBasedTransformProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPBasedTransformProvider_get__self(t_PythonEOPBasedTransformProvider *self, void *data)
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
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixel::class$ = NULL;
        jmethodID *SensorPixel::mids$ = NULL;
        bool SensorPixel::live$ = false;

        jclass SensorPixel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLineNumber_dff5885c2c873297] = env->getMethodID(cls, "getLineNumber", "()D");
            mids$[mid_getPixelNumber_dff5885c2c873297] = env->getMethodID(cls, "getPixelNumber", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixel::SensorPixel(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble SensorPixel::getLineNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLineNumber_dff5885c2c873297]);
        }

        jdouble SensorPixel::getPixelNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPixelNumber_dff5885c2c873297]);
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
    namespace rugged {
      namespace linesensor {
        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data);
        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data);
        static PyGetSetDef t_SensorPixel__fields_[] = {
          DECLARE_GET_FIELD(t_SensorPixel, lineNumber),
          DECLARE_GET_FIELD(t_SensorPixel, pixelNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorPixel__methods_[] = {
          DECLARE_METHOD(t_SensorPixel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, getLineNumber, METH_NOARGS),
          DECLARE_METHOD(t_SensorPixel, getPixelNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixel)[] = {
          { Py_tp_methods, t_SensorPixel__methods_ },
          { Py_tp_init, (void *) t_SensorPixel_init_ },
          { Py_tp_getset, t_SensorPixel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixel, t_SensorPixel, SensorPixel);

        void t_SensorPixel::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixel), &PY_TYPE_DEF(SensorPixel), module, "SensorPixel", 0);
        }

        void t_SensorPixel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "class_", make_descriptor(SensorPixel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "wrapfn_", make_descriptor(t_SensorPixel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixel::initializeClass, 1)))
            return NULL;
          return t_SensorPixel::wrap_Object(SensorPixel(((t_SensorPixel *) arg)->object.this$));
        }
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          SensorPixel object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = SensorPixel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLineNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLineNumber());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateOptimizer::class$ = NULL;
        jmethodID *UnivariateOptimizer::mids$ = NULL;
        bool UnivariateOptimizer::live$ = false;

        jclass UnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getGoalType_5759ced222da2ae0] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_dff5885c2c873297] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_optimize_46d3687072fb1da8] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_computeObjectiveValue_dcbc7ce2902fa136] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::scalar::GoalType UnivariateOptimizer::getGoalType() const
        {
          return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_5759ced222da2ae0]));
        }

        jdouble UnivariateOptimizer::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
        }

        jdouble UnivariateOptimizer::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
        }

        jdouble UnivariateOptimizer::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_dff5885c2c873297]);
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair UnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_46d3687072fb1da8], a0.this$));
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
      namespace univariate {
        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data);
        static PyGetSetDef t_UnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateOptimizer, goalType),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, max),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, min),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, startValue),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_UnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getGoalType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMax, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMin, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateOptimizer)[] = {
          { Py_tp_methods, t_UnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
          NULL
        };

        DEFINE_TYPE(UnivariateOptimizer, t_UnivariateOptimizer, UnivariateOptimizer);
        PyObject *t_UnivariateOptimizer::wrap_Object(const UnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateOptimizer), &PY_TYPE_DEF(UnivariateOptimizer), module, "UnivariateOptimizer", 0);
        }

        void t_UnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "class_", make_descriptor(UnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "wrapfn_", make_descriptor(t_UnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_UnivariateOptimizer::wrap_Object(UnivariateOptimizer(((t_UnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
          OBJ_CALL(result = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
        }

        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
          OBJ_CALL(value = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
        }

        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFileParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFileParser::class$ = NULL;
        jmethodID *STKEphemerisFileParser::mids$ = NULL;
        bool STKEphemerisFileParser::live$ = false;

        jclass STKEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bcb88fa617e71744] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/time/UTCScale;Ljava/util/Map;)V");
            mids$[mid_parse_635b8cf5ba56f2d3] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/stk/STKEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFileParser::STKEphemerisFileParser(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::time::UTCScale & a2, const ::java::util::Map & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcb88fa617e71744, a0.this$, a1, a2.this$, a3.this$)) {}

        ::org::orekit::files::stk::STKEphemerisFile STKEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::stk::STKEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_635b8cf5ba56f2d3], a0.this$));
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
      namespace stk {
        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg);

        static PyMethodDef t_STKEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFileParser)[] = {
          { Py_tp_methods, t_STKEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFileParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFileParser, t_STKEphemerisFileParser, STKEphemerisFileParser);

        void t_STKEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFileParser), &PY_TYPE_DEF(STKEphemerisFileParser), module, "STKEphemerisFileParser", 0);
        }

        void t_STKEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "class_", make_descriptor(STKEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "wrapfn_", make_descriptor(t_STKEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFileParser::wrap_Object(STKEphemerisFileParser(((t_STKEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::UTCScale a2((jobject) NULL);
          ::java::util::Map a3((jobject) NULL);
          PyTypeObject **p3;
          STKEphemerisFileParser object((jobject) NULL);

          if (!parseArgs(args, "sDkK", ::org::orekit::time::UTCScale::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = STKEphemerisFileParser(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::stk::t_STKEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovariance::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovariance::mids$ = NULL;
            bool SigmaEigenvectorsCovariance::live$ = false;

            jclass SigmaEigenvectorsCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_getCsig3eigvec3_60c7040667a7dc5c] = env->getMethodID(cls, "getCsig3eigvec3", "()[D");
                mids$[mid_isAltCovFlagSet_b108b35ef48e27bd] = env->getMethodID(cls, "isAltCovFlagSet", "()Z");
                mids$[mid_setCsig3eigvec3_fa9d415d19f69361] = env->getMethodID(cls, "setCsig3eigvec3", "([D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SigmaEigenvectorsCovariance::SigmaEigenvectorsCovariance(jboolean a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

            JArray< jdouble > SigmaEigenvectorsCovariance::getCsig3eigvec3() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCsig3eigvec3_60c7040667a7dc5c]));
            }

            jboolean SigmaEigenvectorsCovariance::isAltCovFlagSet() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isAltCovFlagSet_b108b35ef48e27bd]);
            }

            void SigmaEigenvectorsCovariance::setCsig3eigvec3(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCsig3eigvec3_fa9d415d19f69361], a0.this$);
            }

            void SigmaEigenvectorsCovariance::validate(jdouble a0) const
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
            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self);
            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data);
            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data);
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovariance, altCovFlagSet),
              DECLARE_GETSET_FIELD(t_SigmaEigenvectorsCovariance, csig3eigvec3),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovariance__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, getCsig3eigvec3, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, isAltCovFlagSet, METH_NOARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, setCsig3eigvec3, METH_O),
              DECLARE_METHOD(t_SigmaEigenvectorsCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovariance)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovariance__methods_ },
              { Py_tp_init, (void *) t_SigmaEigenvectorsCovariance_init_ },
              { Py_tp_getset, t_SigmaEigenvectorsCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovariance, t_SigmaEigenvectorsCovariance, SigmaEigenvectorsCovariance);

            void t_SigmaEigenvectorsCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovariance), &PY_TYPE_DEF(SigmaEigenvectorsCovariance), module, "SigmaEigenvectorsCovariance", 0);
            }

            void t_SigmaEigenvectorsCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "class_", make_descriptor(SigmaEigenvectorsCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SigmaEigenvectorsCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovariance::wrap_Object(SigmaEigenvectorsCovariance(((t_SigmaEigenvectorsCovariance *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SigmaEigenvectorsCovariance_init_(t_SigmaEigenvectorsCovariance *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              SigmaEigenvectorsCovariance object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = SigmaEigenvectorsCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_getCsig3eigvec3(t_SigmaEigenvectorsCovariance *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCsig3eigvec3());
              return result.wrap();
            }

            static PyObject *t_SigmaEigenvectorsCovariance_isAltCovFlagSet(t_SigmaEigenvectorsCovariance *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_setCsig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setCsig3eigvec3(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCsig3eigvec3", arg);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovariance_validate(t_SigmaEigenvectorsCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SigmaEigenvectorsCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__altCovFlagSet(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isAltCovFlagSet());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SigmaEigenvectorsCovariance_get__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCsig3eigvec3());
              return value.wrap();
            }
            static int t_SigmaEigenvectorsCovariance_set__csig3eigvec3(t_SigmaEigenvectorsCovariance *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setCsig3eigvec3(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "csig3eigvec3", arg);
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
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
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
          mids$[mid_valueOf_0a9f35836add7b7d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_values_3b07e553554ce971] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/PositionAngleType;");

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
        return PositionAngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0a9f35836add7b7d], a0.this$));
      }

      JArray< PositionAngleType > PositionAngleType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PositionAngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_3b07e553554ce971]));
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
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularCoordinates::class$ = NULL;
      jmethodID *AngularCoordinates::mids$ = NULL;
      bool AngularCoordinates::live$ = false;
      AngularCoordinates *AngularCoordinates::IDENTITY = NULL;

      jclass AngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_36678dbdedc42376] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_80a55d93aa5ecb9e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_c67728c7f4a764b5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ab85b25be4476a0e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_7b92f603fecfaf2b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_e11bf4825866d52b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_1677a311e39de502] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_applyTo_2c604bfeb0a28a2f] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_fe87e6eba6ef42f9] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_applyTo_f76646e67e6a0632] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_44abf30654d86934] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_ec287fbe4bf97234] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_estimateRate_5497a219643496d9] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getModifiedRodrigues_a1f5c9dbe0a195af] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[D");
          mids$[mid_getRotation_de86c7efc42eac14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_d52645e0d4c07563] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_d52645e0d4c07563] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_revert_8a604053f4d4c39e] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_rotationShiftedBy_ce9226ab7f6f56df] = env->getMethodID(cls, "rotationShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_shiftedBy_3ab5c08186f27feb] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_subtractOffset_1677a311e39de502] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_371facd070e18d41] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_1d339a2ee3a3323a] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_1d339a2ee3a3323a] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new AngularCoordinates(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/AngularCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularCoordinates::AngularCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36678dbdedc42376, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_80a55d93aa5ecb9e, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67728c7f4a764b5, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab85b25be4476a0e, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b92f603fecfaf2b, a0.this$, a1.this$, a2.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e11bf4825866d52b, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      AngularCoordinates AngularCoordinates::addOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_1677a311e39de502], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_2c604bfeb0a28a2f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_fe87e6eba6ef42f9], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_f76646e67e6a0632], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_44abf30654d86934], a0.this$));
      }

      AngularCoordinates AngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_ec287fbe4bf97234], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_5497a219643496d9], a0.this$, a1.this$, a2));
      }

      JArray< JArray< jdouble > > AngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_a1f5c9dbe0a195af], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_de86c7efc42eac14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_d52645e0d4c07563]));
      }

      AngularCoordinates AngularCoordinates::revert() const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_8a604053f4d4c39e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::rotationShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_ce9226ab7f6f56df], a0));
      }

      AngularCoordinates AngularCoordinates::shiftedBy(jdouble a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_3ab5c08186f27feb], a0));
      }

      AngularCoordinates AngularCoordinates::subtractOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_1677a311e39de502], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_371facd070e18d41], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_1d339a2ee3a3323a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_1d339a2ee3a3323a]));
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
      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args);
      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data);
      static PyGetSetDef t_AngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_AngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_AngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularCoordinates)[] = {
        { Py_tp_methods, t_AngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_AngularCoordinates_init_ },
        { Py_tp_getset, t_AngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AngularCoordinates, t_AngularCoordinates, AngularCoordinates);

      void t_AngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularCoordinates), &PY_TYPE_DEF(AngularCoordinates), module, "AngularCoordinates", 0);
      }

      void t_AngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "class_", make_descriptor(AngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "wrapfn_", make_descriptor(t_AngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "IDENTITY", make_descriptor(t_AngularCoordinates::wrap_Object(*AngularCoordinates::IDENTITY)));
      }

      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_AngularCoordinates::wrap_Object(AngularCoordinates(((t_AngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AngularCoordinates object((jobject) NULL);

            INT_CALL(object = AngularCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            jdouble a4;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args)
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
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::createFromModifiedRodrigues(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::estimateRate(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self)
      {
        AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeBuilder::class$ = NULL;
      jmethodID *AttitudeBuilder::mids$ = NULL;
      bool AttitudeBuilder::live$ = false;

      jclass AttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_build_32e9a4ac991f1702] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_54b3b52d9ecd9e48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_32e9a4ac991f1702], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_54b3b52d9ecd9e48], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args);

      static PyMethodDef t_AttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_AttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeBuilder)[] = {
        { Py_tp_methods, t_AttitudeBuilder__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeBuilder, t_AttitudeBuilder, AttitudeBuilder);

      void t_AttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeBuilder), &PY_TYPE_DEF(AttitudeBuilder), module, "AttitudeBuilder", 0);
      }

      void t_AttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "class_", make_descriptor(AttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "wrapfn_", make_descriptor(t_AttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_AttitudeBuilder::wrap_Object(AttitudeBuilder(((t_AttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/String.h"
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
          mids$[mid_init$_80ebadfaa96c5ac9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_0be9bb25c5e386d0] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_0be9bb25c5e386d0] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_0f554c95baa6eac9] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_0fa09c18fee449d5] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getEOPHistory_f7b9f8d7c24d861d] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_17db3a65980d3441] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedFrames::LazyLoadedFrames(const ::org::orekit::frames::LazyLoadedEop & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::bodies::CelestialBodies & a2) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_80ebadfaa96c5ac9, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedFrames::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_0be9bb25c5e386d0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_0be9bb25c5e386d0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_0f554c95baa6eac9], a0.this$, a1.this$);
      }

      void LazyLoadedFrames::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_0fa09c18fee449d5]);
      }

      ::org::orekit::frames::EOPHistory LazyLoadedFrames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_f7b9f8d7c24d861d], a0.this$, a1));
      }

      void LazyLoadedFrames::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_17db3a65980d3441], a0);
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
#include "org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GraggBulirschStoerIntegrator::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegrator::mids$ = NULL;
        bool GraggBulirschStoerIntegrator::live$ = false;

        jclass GraggBulirschStoerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36e977212374ff6b] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_integrate_3c1cc820e563e3e9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setControlFactors_b0a935b68e41d65a] = env->getMethodID(cls, "setControlFactors", "(DDDD)V");
            mids$[mid_setInterpolationControl_4e8bfd776ac72344] = env->getMethodID(cls, "setInterpolationControl", "(ZI)V");
            mids$[mid_setOrderControl_07bf81310115068c] = env->getMethodID(cls, "setOrderControl", "(IDD)V");
            mids$[mid_setStabilityCheck_ddfb2ccab8f58347] = env->getMethodID(cls, "setStabilityCheck", "(ZIID)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_36e977212374ff6b, a0, a1, a2.this$, a3.this$)) {}

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative GraggBulirschStoerIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3c1cc820e563e3e9], a0.this$, a1.this$, a2));
        }

        void GraggBulirschStoerIntegrator::setControlFactors(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setControlFactors_b0a935b68e41d65a], a0, a1, a2, a3);
        }

        void GraggBulirschStoerIntegrator::setInterpolationControl(jboolean a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationControl_4e8bfd776ac72344], a0, a1);
        }

        void GraggBulirschStoerIntegrator::setOrderControl(jint a0, jdouble a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrderControl_07bf81310115068c], a0, a1, a2);
        }

        void GraggBulirschStoerIntegrator::setStabilityCheck(jboolean a0, jint a1, jint a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStabilityCheck_ddfb2ccab8f58347], a0, a1, a2, a3);
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
        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegrator__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setControlFactors, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setInterpolationControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setOrderControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setStabilityCheck, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegrator)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegrator__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegrator, t_GraggBulirschStoerIntegrator, GraggBulirschStoerIntegrator);

        void t_GraggBulirschStoerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegrator), &PY_TYPE_DEF(GraggBulirschStoerIntegrator), module, "GraggBulirschStoerIntegrator", 0);
        }

        void t_GraggBulirschStoerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "class_", make_descriptor(GraggBulirschStoerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegrator::wrap_Object(GraggBulirschStoerIntegrator(((t_GraggBulirschStoerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
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

        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GraggBulirschStoerIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setControlFactors(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setControlFactors", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(self->object.setInterpolationControl(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setOrderControl(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrderControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "ZIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setStabilityCheck(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStabilityCheck", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedStringConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedStringConsumer::mids$ = NULL;
            bool ParseToken$IndexedStringConsumer::live$ = false;

            jclass ParseToken$IndexedStringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_eb545b81bcb6baba] = env->getMethodID(cls, "accept", "(ILjava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedStringConsumer::accept(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_eb545b81bcb6baba], a0, a1.this$);
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
            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedStringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedStringConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedStringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedStringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedStringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedStringConsumer, t_ParseToken$IndexedStringConsumer, ParseToken$IndexedStringConsumer);

            void t_ParseToken$IndexedStringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedStringConsumer), &PY_TYPE_DEF(ParseToken$IndexedStringConsumer), module, "ParseToken$IndexedStringConsumer", 0);
            }

            void t_ParseToken$IndexedStringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "class_", make_descriptor(ParseToken$IndexedStringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedStringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedStringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedStringConsumer::wrap_Object(ParseToken$IndexedStringConsumer(((t_ParseToken$IndexedStringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedStringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedStringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedStringConsumer_accept(t_ParseToken$IndexedStringConsumer *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$FieldSumAndResidual::class$ = NULL;
      jmethodID *MathUtils$FieldSumAndResidual::mids$ = NULL;
      bool MathUtils$FieldSumAndResidual::live$ = false;

      jclass MathUtils$FieldSumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$FieldSumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_99097cb60cf2d774] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getSum_99097cb60cf2d774] = env->getMethodID(cls, "getSum", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getResidual() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getResidual_99097cb60cf2d774]));
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getSum() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getSum_99097cb60cf2d774]));
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
      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args);
      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$FieldSumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, sum),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$FieldSumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$FieldSumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$FieldSumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$FieldSumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$FieldSumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$FieldSumAndResidual, t_MathUtils$FieldSumAndResidual, MathUtils$FieldSumAndResidual);
      PyObject *t_MathUtils$FieldSumAndResidual::wrap_Object(const MathUtils$FieldSumAndResidual& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathUtils$FieldSumAndResidual::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathUtils$FieldSumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$FieldSumAndResidual), &PY_TYPE_DEF(MathUtils$FieldSumAndResidual), module, "MathUtils$FieldSumAndResidual", 0);
      }

      void t_MathUtils$FieldSumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "class_", make_descriptor(MathUtils$FieldSumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$FieldSumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$FieldSumAndResidual::wrap_Object(MathUtils$FieldSumAndResidual(((t_MathUtils$FieldSumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSum());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSum());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PoleCorrection::class$ = NULL;
      jmethodID *PoleCorrection::mids$ = NULL;
      bool PoleCorrection::live$ = false;
      PoleCorrection *PoleCorrection::NULL_CORRECTION = NULL;

      jclass PoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_getXp_dff5885c2c873297] = env->getMethodID(cls, "getXp", "()D");
          mids$[mid_getYp_dff5885c2c873297] = env->getMethodID(cls, "getYp", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NULL_CORRECTION = new PoleCorrection(env->getStaticObjectField(cls, "NULL_CORRECTION", "Lorg/orekit/frames/PoleCorrection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoleCorrection::PoleCorrection(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

      jdouble PoleCorrection::getXp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXp_dff5885c2c873297]);
      }

      jdouble PoleCorrection::getYp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYp_dff5885c2c873297]);
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
      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data);
      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data);
      static PyGetSetDef t_PoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_PoleCorrection, xp),
        DECLARE_GET_FIELD(t_PoleCorrection, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoleCorrection__methods_[] = {
        DECLARE_METHOD(t_PoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_PoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoleCorrection)[] = {
        { Py_tp_methods, t_PoleCorrection__methods_ },
        { Py_tp_init, (void *) t_PoleCorrection_init_ },
        { Py_tp_getset, t_PoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoleCorrection, t_PoleCorrection, PoleCorrection);

      void t_PoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(PoleCorrection), &PY_TYPE_DEF(PoleCorrection), module, "PoleCorrection", 0);
      }

      void t_PoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "class_", make_descriptor(PoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "wrapfn_", make_descriptor(t_PoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "boxfn_", make_descriptor(boxObject));
        env->getClass(PoleCorrection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "NULL_CORRECTION", make_descriptor(t_PoleCorrection::wrap_Object(*PoleCorrection::NULL_CORRECTION)));
      }

      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoleCorrection::initializeClass, 1)))
          return NULL;
        return t_PoleCorrection::wrap_Object(PoleCorrection(((t_PoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        PoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = PoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXp());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYp());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$LaserConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$LaserConfiguration::mids$ = NULL;
        bool CRDConfiguration$LaserConfiguration::live$ = false;

        jclass CRDConfiguration$LaserConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBeamDivergence_dff5885c2c873297] = env->getMethodID(cls, "getBeamDivergence", "()D");
            mids$[mid_getLaserId_11b109bd155ca898] = env->getMethodID(cls, "getLaserId", "()Ljava/lang/String;");
            mids$[mid_getLaserType_11b109bd155ca898] = env->getMethodID(cls, "getLaserType", "()Ljava/lang/String;");
            mids$[mid_getNominalFireRate_dff5885c2c873297] = env->getMethodID(cls, "getNominalFireRate", "()D");
            mids$[mid_getPrimaryWavelength_dff5885c2c873297] = env->getMethodID(cls, "getPrimaryWavelength", "()D");
            mids$[mid_getPulseEnergy_dff5885c2c873297] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getPulseInOutgoingSemiTrain_570ce0828f81a2c1] = env->getMethodID(cls, "getPulseInOutgoingSemiTrain", "()I");
            mids$[mid_getPulseWidth_dff5885c2c873297] = env->getMethodID(cls, "getPulseWidth", "()D");
            mids$[mid_setBeamDivergence_17db3a65980d3441] = env->getMethodID(cls, "setBeamDivergence", "(D)V");
            mids$[mid_setLaserId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setLaserId", "(Ljava/lang/String;)V");
            mids$[mid_setLaserType_d0bc48d5b00dc40c] = env->getMethodID(cls, "setLaserType", "(Ljava/lang/String;)V");
            mids$[mid_setNominalFireRate_17db3a65980d3441] = env->getMethodID(cls, "setNominalFireRate", "(D)V");
            mids$[mid_setPrimaryWavelength_17db3a65980d3441] = env->getMethodID(cls, "setPrimaryWavelength", "(D)V");
            mids$[mid_setPulseEnergy_17db3a65980d3441] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setPulseInOutgoingSemiTrain_99803b0791f320ff] = env->getMethodID(cls, "setPulseInOutgoingSemiTrain", "(I)V");
            mids$[mid_setPulseWidth_17db3a65980d3441] = env->getMethodID(cls, "setPulseWidth", "(D)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$LaserConfiguration::CRDConfiguration$LaserConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble CRDConfiguration$LaserConfiguration::getBeamDivergence() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeamDivergence_dff5885c2c873297]);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserId_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserType_11b109bd155ca898]));
        }

        jdouble CRDConfiguration$LaserConfiguration::getNominalFireRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNominalFireRate_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPrimaryWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrimaryWavelength_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_dff5885c2c873297]);
        }

        jint CRDConfiguration$LaserConfiguration::getPulseInOutgoingSemiTrain() const
        {
          return env->callIntMethod(this$, mids$[mid_getPulseInOutgoingSemiTrain_570ce0828f81a2c1]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseWidth_dff5885c2c873297]);
        }

        void CRDConfiguration$LaserConfiguration::setBeamDivergence(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBeamDivergence_17db3a65980d3441], a0);
        }

        void CRDConfiguration$LaserConfiguration::setLaserId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserId_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setLaserType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserType_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setNominalFireRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNominalFireRate_17db3a65980d3441], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPrimaryWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrimaryWavelength_17db3a65980d3441], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_17db3a65980d3441], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseInOutgoingSemiTrain(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseInOutgoingSemiTrain_99803b0791f320ff], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseWidth_17db3a65980d3441], a0);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data);
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$LaserConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, beamDivergence),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, laserType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, nominalFireRate),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, primaryWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseInOutgoingSemiTrain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$LaserConfiguration, pulseWidth),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$LaserConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getBeamDivergence, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getLaserType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getNominalFireRate, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPrimaryWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseInOutgoingSemiTrain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, getPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setBeamDivergence, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setLaserType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setNominalFireRate, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPrimaryWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseInOutgoingSemiTrain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, setPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$LaserConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$LaserConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$LaserConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$LaserConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$LaserConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$LaserConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$LaserConfiguration, t_CRDConfiguration$LaserConfiguration, CRDConfiguration$LaserConfiguration);

        void t_CRDConfiguration$LaserConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$LaserConfiguration), &PY_TYPE_DEF(CRDConfiguration$LaserConfiguration), module, "CRDConfiguration$LaserConfiguration", 0);
        }

        void t_CRDConfiguration$LaserConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "class_", make_descriptor(CRDConfiguration$LaserConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$LaserConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$LaserConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$LaserConfiguration::wrap_Object(CRDConfiguration$LaserConfiguration(((t_CRDConfiguration$LaserConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$LaserConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$LaserConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$LaserConfiguration_init_(t_CRDConfiguration$LaserConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$LaserConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$LaserConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getBeamDivergence(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserId(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getLaserType(t_CRDConfiguration$LaserConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLaserType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getNominalFireRate(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseEnergy(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_getPulseWidth(t_CRDConfiguration$LaserConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setBeamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setBeamDivergence(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBeamDivergence", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setLaserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLaserType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLaserType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setNominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setNominalFireRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNominalFireRate", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPrimaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrimaryWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrimaryWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
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

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setPulseInOutgoingSemiTrain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseInOutgoingSemiTrain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_setPulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toCrdString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_toString(t_CRDConfiguration$LaserConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$LaserConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeamDivergence());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__beamDivergence(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setBeamDivergence(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "beamDivergence", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserId(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserId());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserId(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__laserType(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLaserType());
          return j2p(value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__laserType(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLaserType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "laserType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNominalFireRate());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__nominalFireRate(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setNominalFireRate(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "nominalFireRate", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrimaryWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__primaryWavelength(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrimaryWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "primaryWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseEnergy(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
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

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPulseInOutgoingSemiTrain());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseInOutgoingSemiTrain(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setPulseInOutgoingSemiTrain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseInOutgoingSemiTrain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$LaserConfiguration_get__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$LaserConfiguration_set__pulseWidth(t_CRDConfiguration$LaserConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseWidth", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;
      Frequency *Frequency::B01 = NULL;
      Frequency *Frequency::B02 = NULL;
      Frequency *Frequency::B03 = NULL;
      Frequency *Frequency::B08 = NULL;
      Frequency *Frequency::B1A = NULL;
      Frequency *Frequency::B1C = NULL;
      Frequency *Frequency::B2A = NULL;
      Frequency *Frequency::B2B = NULL;
      Frequency *Frequency::B3A = NULL;
      Frequency *Frequency::C01 = NULL;
      Frequency *Frequency::C02 = NULL;
      Frequency *Frequency::C05 = NULL;
      Frequency *Frequency::C06 = NULL;
      Frequency *Frequency::C07 = NULL;
      Frequency *Frequency::C08 = NULL;
      Frequency *Frequency::E01 = NULL;
      Frequency *Frequency::E05 = NULL;
      Frequency *Frequency::E06 = NULL;
      Frequency *Frequency::E07 = NULL;
      Frequency *Frequency::E08 = NULL;
      jdouble Frequency::F0 = (jdouble) 0;
      Frequency *Frequency::G01 = NULL;
      Frequency *Frequency::G02 = NULL;
      Frequency *Frequency::G05 = NULL;
      Frequency *Frequency::I05 = NULL;
      Frequency *Frequency::I09 = NULL;
      Frequency *Frequency::J01 = NULL;
      Frequency *Frequency::J02 = NULL;
      Frequency *Frequency::J05 = NULL;
      Frequency *Frequency::J06 = NULL;
      Frequency *Frequency::R01 = NULL;
      Frequency *Frequency::R02 = NULL;
      Frequency *Frequency::R03 = NULL;
      Frequency *Frequency::R04 = NULL;
      Frequency *Frequency::R06 = NULL;
      Frequency *Frequency::S01 = NULL;
      Frequency *Frequency::S05 = NULL;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMHzFrequency_dff5885c2c873297] = env->getMethodID(cls, "getMHzFrequency", "()D");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getRatio_dff5885c2c873297] = env->getMethodID(cls, "getRatio", "()D");
          mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getWavelength_dff5885c2c873297] = env->getMethodID(cls, "getWavelength", "()D");
          mids$[mid_valueOf_2192d0dab4622314] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_values_8c105a5d2fb680c7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/Frequency;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          B01 = new Frequency(env->getStaticObjectField(cls, "B01", "Lorg/orekit/gnss/Frequency;"));
          B02 = new Frequency(env->getStaticObjectField(cls, "B02", "Lorg/orekit/gnss/Frequency;"));
          B03 = new Frequency(env->getStaticObjectField(cls, "B03", "Lorg/orekit/gnss/Frequency;"));
          B08 = new Frequency(env->getStaticObjectField(cls, "B08", "Lorg/orekit/gnss/Frequency;"));
          B1A = new Frequency(env->getStaticObjectField(cls, "B1A", "Lorg/orekit/gnss/Frequency;"));
          B1C = new Frequency(env->getStaticObjectField(cls, "B1C", "Lorg/orekit/gnss/Frequency;"));
          B2A = new Frequency(env->getStaticObjectField(cls, "B2A", "Lorg/orekit/gnss/Frequency;"));
          B2B = new Frequency(env->getStaticObjectField(cls, "B2B", "Lorg/orekit/gnss/Frequency;"));
          B3A = new Frequency(env->getStaticObjectField(cls, "B3A", "Lorg/orekit/gnss/Frequency;"));
          C01 = new Frequency(env->getStaticObjectField(cls, "C01", "Lorg/orekit/gnss/Frequency;"));
          C02 = new Frequency(env->getStaticObjectField(cls, "C02", "Lorg/orekit/gnss/Frequency;"));
          C05 = new Frequency(env->getStaticObjectField(cls, "C05", "Lorg/orekit/gnss/Frequency;"));
          C06 = new Frequency(env->getStaticObjectField(cls, "C06", "Lorg/orekit/gnss/Frequency;"));
          C07 = new Frequency(env->getStaticObjectField(cls, "C07", "Lorg/orekit/gnss/Frequency;"));
          C08 = new Frequency(env->getStaticObjectField(cls, "C08", "Lorg/orekit/gnss/Frequency;"));
          E01 = new Frequency(env->getStaticObjectField(cls, "E01", "Lorg/orekit/gnss/Frequency;"));
          E05 = new Frequency(env->getStaticObjectField(cls, "E05", "Lorg/orekit/gnss/Frequency;"));
          E06 = new Frequency(env->getStaticObjectField(cls, "E06", "Lorg/orekit/gnss/Frequency;"));
          E07 = new Frequency(env->getStaticObjectField(cls, "E07", "Lorg/orekit/gnss/Frequency;"));
          E08 = new Frequency(env->getStaticObjectField(cls, "E08", "Lorg/orekit/gnss/Frequency;"));
          F0 = env->getStaticDoubleField(cls, "F0");
          G01 = new Frequency(env->getStaticObjectField(cls, "G01", "Lorg/orekit/gnss/Frequency;"));
          G02 = new Frequency(env->getStaticObjectField(cls, "G02", "Lorg/orekit/gnss/Frequency;"));
          G05 = new Frequency(env->getStaticObjectField(cls, "G05", "Lorg/orekit/gnss/Frequency;"));
          I05 = new Frequency(env->getStaticObjectField(cls, "I05", "Lorg/orekit/gnss/Frequency;"));
          I09 = new Frequency(env->getStaticObjectField(cls, "I09", "Lorg/orekit/gnss/Frequency;"));
          J01 = new Frequency(env->getStaticObjectField(cls, "J01", "Lorg/orekit/gnss/Frequency;"));
          J02 = new Frequency(env->getStaticObjectField(cls, "J02", "Lorg/orekit/gnss/Frequency;"));
          J05 = new Frequency(env->getStaticObjectField(cls, "J05", "Lorg/orekit/gnss/Frequency;"));
          J06 = new Frequency(env->getStaticObjectField(cls, "J06", "Lorg/orekit/gnss/Frequency;"));
          R01 = new Frequency(env->getStaticObjectField(cls, "R01", "Lorg/orekit/gnss/Frequency;"));
          R02 = new Frequency(env->getStaticObjectField(cls, "R02", "Lorg/orekit/gnss/Frequency;"));
          R03 = new Frequency(env->getStaticObjectField(cls, "R03", "Lorg/orekit/gnss/Frequency;"));
          R04 = new Frequency(env->getStaticObjectField(cls, "R04", "Lorg/orekit/gnss/Frequency;"));
          R06 = new Frequency(env->getStaticObjectField(cls, "R06", "Lorg/orekit/gnss/Frequency;"));
          S01 = new Frequency(env->getStaticObjectField(cls, "S01", "Lorg/orekit/gnss/Frequency;"));
          S05 = new Frequency(env->getStaticObjectField(cls, "S05", "Lorg/orekit/gnss/Frequency;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Frequency::getMHzFrequency() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMHzFrequency_dff5885c2c873297]);
      }

      ::java::lang::String Frequency::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble Frequency::getRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRatio_dff5885c2c873297]);
      }

      ::org::orekit::gnss::SatelliteSystem Frequency::getSatelliteSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
      }

      jdouble Frequency::getWavelength() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWavelength_dff5885c2c873297]);
      }

      Frequency Frequency::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Frequency(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2192d0dab4622314], a0.this$));
      }

      JArray< Frequency > Frequency::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Frequency >(env->callStaticObjectMethod(cls, mids$[mid_values_8c105a5d2fb680c7]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self);
      static PyObject *t_Frequency_getName(t_Frequency *self);
      static PyObject *t_Frequency_getRatio(t_Frequency *self);
      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self);
      static PyObject *t_Frequency_getWavelength(t_Frequency *self);
      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frequency_values(PyTypeObject *type);
      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mHzFrequency),
        DECLARE_GET_FIELD(t_Frequency, name),
        DECLARE_GET_FIELD(t_Frequency, ratio),
        DECLARE_GET_FIELD(t_Frequency, satelliteSystem),
        DECLARE_GET_FIELD(t_Frequency, wavelength),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getMHzFrequency, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getRatio, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getSatelliteSystem, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getWavelength, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Frequency, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
        env->getClass(Frequency::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B01", make_descriptor(t_Frequency::wrap_Object(*Frequency::B01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B02", make_descriptor(t_Frequency::wrap_Object(*Frequency::B02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B03", make_descriptor(t_Frequency::wrap_Object(*Frequency::B03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B08", make_descriptor(t_Frequency::wrap_Object(*Frequency::B08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1C", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2B", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B3A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B3A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C01", make_descriptor(t_Frequency::wrap_Object(*Frequency::C01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C02", make_descriptor(t_Frequency::wrap_Object(*Frequency::C02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C05", make_descriptor(t_Frequency::wrap_Object(*Frequency::C05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C06", make_descriptor(t_Frequency::wrap_Object(*Frequency::C06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C07", make_descriptor(t_Frequency::wrap_Object(*Frequency::C07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C08", make_descriptor(t_Frequency::wrap_Object(*Frequency::C08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E01", make_descriptor(t_Frequency::wrap_Object(*Frequency::E01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E05", make_descriptor(t_Frequency::wrap_Object(*Frequency::E05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E06", make_descriptor(t_Frequency::wrap_Object(*Frequency::E06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E07", make_descriptor(t_Frequency::wrap_Object(*Frequency::E07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E08", make_descriptor(t_Frequency::wrap_Object(*Frequency::E08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "F0", make_descriptor(Frequency::F0));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G01", make_descriptor(t_Frequency::wrap_Object(*Frequency::G01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G02", make_descriptor(t_Frequency::wrap_Object(*Frequency::G02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G05", make_descriptor(t_Frequency::wrap_Object(*Frequency::G05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I05", make_descriptor(t_Frequency::wrap_Object(*Frequency::I05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I09", make_descriptor(t_Frequency::wrap_Object(*Frequency::I09)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J01", make_descriptor(t_Frequency::wrap_Object(*Frequency::J01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J02", make_descriptor(t_Frequency::wrap_Object(*Frequency::J02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J05", make_descriptor(t_Frequency::wrap_Object(*Frequency::J05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J06", make_descriptor(t_Frequency::wrap_Object(*Frequency::J06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R01", make_descriptor(t_Frequency::wrap_Object(*Frequency::R01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R02", make_descriptor(t_Frequency::wrap_Object(*Frequency::R02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R03", make_descriptor(t_Frequency::wrap_Object(*Frequency::R03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R04", make_descriptor(t_Frequency::wrap_Object(*Frequency::R04)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R06", make_descriptor(t_Frequency::wrap_Object(*Frequency::R06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S01", make_descriptor(t_Frequency::wrap_Object(*Frequency::S01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S05", make_descriptor(t_Frequency::wrap_Object(*Frequency::S05)));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getName(t_Frequency *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frequency_getRatio(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_Frequency_getWavelength(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWavelength());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Frequency result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::Frequency::valueOf(a0));
          return t_Frequency::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Frequency_values(PyTypeObject *type)
      {
        JArray< Frequency > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::Frequency::values());
        return JArray<jobject>(result.this$).wrap(t_Frequency::wrap_jobject);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWavelength());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "java/lang/String.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation$Predefined::class$ = NULL;
      jmethodID *HelmertTransformation$Predefined::mids$ = NULL;
      bool HelmertTransformation$Predefined::live$ = false;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014 = NULL;

      jclass HelmertTransformation$Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation$Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createTransformedITRF_2ae8d85140934fc6] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_createTransformedITRF_a59321555618994b] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getDestination_8a73c81b6e5084ce] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_8a73c81b6e5084ce] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getTransformation_96690571c4117dfd] = env->getMethodID(cls, "getTransformation", "()Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_getTransformation_027e4f0a93ad8af6] = env->getMethodID(cls, "getTransformation", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_selectPredefined_0ebc8b7060e8137f] = env->getStaticMethodID(cls, "selectPredefined", "(II)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_valueOf_204519afaba60499] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_values_0aa77d79c86b7d08] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/HelmertTransformation$Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_2008_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2014 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2014", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_2ae8d85140934fc6], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_a59321555618994b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_8a73c81b6e5084ce]));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_8a73c81b6e5084ce]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation() const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_96690571c4117dfd]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_027e4f0a93ad8af6], a0.this$));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::selectPredefined(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_selectPredefined_0ebc8b7060e8137f], a0, a1));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_204519afaba60499], a0.this$));
      }

      JArray< HelmertTransformation$Predefined > HelmertTransformation$Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< HelmertTransformation$Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_0aa77d79c86b7d08]));
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
      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type);
      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data);
      static PyGetSetDef t_HelmertTransformation$Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, destination),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, origin),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, transformation),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation$Predefined__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation$Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, createTransformedITRF, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getTransformation, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, selectPredefined, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation$Predefined)[] = {
        { Py_tp_methods, t_HelmertTransformation$Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_HelmertTransformation$Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation$Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation$Predefined, t_HelmertTransformation$Predefined, HelmertTransformation$Predefined);
      PyObject *t_HelmertTransformation$Predefined::wrap_Object(const HelmertTransformation$Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_HelmertTransformation$Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_HelmertTransformation$Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation$Predefined), &PY_TYPE_DEF(HelmertTransformation$Predefined), module, "HelmertTransformation$Predefined", 0);
      }

      void t_HelmertTransformation$Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "class_", make_descriptor(HelmertTransformation$Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "wrapfn_", make_descriptor(t_HelmertTransformation$Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(HelmertTransformation$Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2014", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014)));
      }

      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation$Predefined::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation$Predefined::wrap_Object(HelmertTransformation$Predefined(((t_HelmertTransformation$Predefined *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation$Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ksk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "createTransformedITRF", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransformation());
            return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransformation(a0));
              return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformation", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::selectPredefined(a0, a1));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "selectPredefined", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::valueOf(a0));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type)
      {
        JArray< HelmertTransformation$Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_HelmertTransformation$Predefined::wrap_jobject);
      }
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::HelmertTransformation value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformation());
        return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficientsBLQFactory::class$ = NULL;
          jmethodID *OceanLoadingCoefficientsBLQFactory::mids$ = NULL;
          bool OceanLoadingCoefficientsBLQFactory::live$ = false;
          ::java::lang::String *OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES = NULL;

          jclass OceanLoadingCoefficientsBLQFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getCoefficients_ac62575948893c94] = env->getMethodID(cls, "getCoefficients", "(Ljava/lang/String;)Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;");
              mids$[mid_getSites_2afa36052df4765d] = env->getMethodID(cls, "getSites", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_BLQ_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_BLQ_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}

          ::org::orekit::models::earth::displacement::OceanLoadingCoefficients OceanLoadingCoefficientsBLQFactory::getCoefficients(const ::java::lang::String & a0) const
          {
            return ::org::orekit::models::earth::displacement::OceanLoadingCoefficients(env->callObjectMethod(this$, mids$[mid_getCoefficients_ac62575948893c94], a0.this$));
          }

          ::java::util::List OceanLoadingCoefficientsBLQFactory::getSites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSites_2afa36052df4765d]));
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
        namespace displacement {
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficientsBLQFactory__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficientsBLQFactory, sites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficientsBLQFactory__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getCoefficients, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getSites, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficientsBLQFactory)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficientsBLQFactory__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficientsBLQFactory_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficientsBLQFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficientsBLQFactory)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficientsBLQFactory, t_OceanLoadingCoefficientsBLQFactory, OceanLoadingCoefficientsBLQFactory);

          void t_OceanLoadingCoefficientsBLQFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficientsBLQFactory), &PY_TYPE_DEF(OceanLoadingCoefficientsBLQFactory), module, "OceanLoadingCoefficientsBLQFactory", 0);
          }

          void t_OceanLoadingCoefficientsBLQFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "class_", make_descriptor(OceanLoadingCoefficientsBLQFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "wrapfn_", make_descriptor(t_OceanLoadingCoefficientsBLQFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadingCoefficientsBLQFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "DEFAULT_BLQ_SUPPORTED_NAMES", make_descriptor(j2p(*OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES)));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficientsBLQFactory::wrap_Object(OceanLoadingCoefficientsBLQFactory(((t_OceanLoadingCoefficientsBLQFactory *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0, a1));
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

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.getCoefficients(a0));
              return ::org::orekit::models::earth::displacement::t_OceanLoadingCoefficients::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getCoefficients", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSites());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *Atmosphere::class$ = NULL;
          jmethodID *Atmosphere::mids$ = NULL;
          bool Atmosphere::live$ = false;

          jclass Atmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/Atmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_b79d75c1a8af7374] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_f7d7785230311c38] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_417ea3d5e6de26e5] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getVelocity_b4b015cfdb3a2ead] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement Atmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b79d75c1a8af7374], a0.this$, a1.this$, a2.this$));
          }

          jdouble Atmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_f7d7785230311c38], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame Atmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Atmosphere::getVelocity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_417ea3d5e6de26e5], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Atmosphere::getVelocity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_b4b015cfdb3a2ead], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self);
          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args);
          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data);
          static PyGetSetDef t_Atmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_Atmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Atmosphere__methods_[] = {
            DECLARE_METHOD(t_Atmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Atmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_Atmosphere, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_Atmosphere, getVelocity, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Atmosphere)[] = {
            { Py_tp_methods, t_Atmosphere__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Atmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Atmosphere)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(Atmosphere, t_Atmosphere, Atmosphere);

          void t_Atmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(Atmosphere), &PY_TYPE_DEF(Atmosphere), module, "Atmosphere", 0);
          }

          void t_Atmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "class_", make_descriptor(Atmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "wrapfn_", make_descriptor(t_Atmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Atmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Atmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Atmosphere::initializeClass, 1)))
              return NULL;
            return t_Atmosphere::wrap_Object(Atmosphere(((t_Atmosphere *) arg)->object.this$));
          }
          static PyObject *t_Atmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Atmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Atmosphere_getDensity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_getFrame(t_Atmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_Atmosphere_getVelocity(t_Atmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getVelocity(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getVelocity", args);
            return NULL;
          }

          static PyObject *t_Atmosphere_get__frame(t_Atmosphere *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
