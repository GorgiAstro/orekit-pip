#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitType::class$ = NULL;
      jmethodID *LibrationOrbitType::mids$ = NULL;
      bool LibrationOrbitType::live$ = false;
      LibrationOrbitType *LibrationOrbitType::HALO = NULL;
      LibrationOrbitType *LibrationOrbitType::LYAPUNOV = NULL;

      jclass LibrationOrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_ec46fa3740e95c41] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitType;");
          mids$[mid_values_25a0d0b26c84a19a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HALO = new LibrationOrbitType(env->getStaticObjectField(cls, "HALO", "Lorg/orekit/orbits/LibrationOrbitType;"));
          LYAPUNOV = new LibrationOrbitType(env->getStaticObjectField(cls, "LYAPUNOV", "Lorg/orekit/orbits/LibrationOrbitType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitType LibrationOrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec46fa3740e95c41], a0.this$));
      }

      JArray< LibrationOrbitType > LibrationOrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_25a0d0b26c84a19a]));
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
      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args);
      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data);
      static PyGetSetDef t_LibrationOrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitType__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitType)[] = {
        { Py_tp_methods, t_LibrationOrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitType, t_LibrationOrbitType, LibrationOrbitType);
      PyObject *t_LibrationOrbitType::wrap_Object(const LibrationOrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitType *self = (t_LibrationOrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitType), &PY_TYPE_DEF(LibrationOrbitType), module, "LibrationOrbitType", 0);
      }

      void t_LibrationOrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "class_", make_descriptor(LibrationOrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "wrapfn_", make_descriptor(t_LibrationOrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "HALO", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::HALO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitType), "LYAPUNOV", make_descriptor(t_LibrationOrbitType::wrap_Object(*LibrationOrbitType::LYAPUNOV)));
      }

      static PyObject *t_LibrationOrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitType::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitType::wrap_Object(LibrationOrbitType(((t_LibrationOrbitType *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitType_of_(t_LibrationOrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::valueOf(a0));
          return t_LibrationOrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitType_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitType::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitType_get__parameters_(t_LibrationOrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *RegressionResults::class$ = NULL;
        jmethodID *RegressionResults::mids$ = NULL;
        bool RegressionResults::live$ = false;

        jclass RegressionResults::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/RegressionResults");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_38a4c1f2780f9e8e] = env->getMethodID(cls, "<init>", "([D[[DZJIDDDZZ)V");
            mids$[mid_getAdjustedRSquared_dff5885c2c873297] = env->getMethodID(cls, "getAdjustedRSquared", "()D");
            mids$[mid_getCovarianceOfParameters_dbbe5f05149dbf73] = env->getMethodID(cls, "getCovarianceOfParameters", "(II)D");
            mids$[mid_getErrorSumSquares_dff5885c2c873297] = env->getMethodID(cls, "getErrorSumSquares", "()D");
            mids$[mid_getMeanSquareError_dff5885c2c873297] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getNumberOfParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfParameters", "()I");
            mids$[mid_getParameterEstimate_46f85b53d9aedd96] = env->getMethodID(cls, "getParameterEstimate", "(I)D");
            mids$[mid_getParameterEstimates_60c7040667a7dc5c] = env->getMethodID(cls, "getParameterEstimates", "()[D");
            mids$[mid_getRSquared_dff5885c2c873297] = env->getMethodID(cls, "getRSquared", "()D");
            mids$[mid_getRegressionSumSquares_dff5885c2c873297] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getStdErrorOfEstimate_46f85b53d9aedd96] = env->getMethodID(cls, "getStdErrorOfEstimate", "(I)D");
            mids$[mid_getStdErrorOfEstimates_60c7040667a7dc5c] = env->getMethodID(cls, "getStdErrorOfEstimates", "()[D");
            mids$[mid_getTotalSumSquares_dff5885c2c873297] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_hasIntercept_b108b35ef48e27bd] = env->getMethodID(cls, "hasIntercept", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegressionResults::RegressionResults(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jboolean a2, jlong a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jboolean a8, jboolean a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_38a4c1f2780f9e8e, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        jdouble RegressionResults::getAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAdjustedRSquared_dff5885c2c873297]);
        }

        jdouble RegressionResults::getCovarianceOfParameters(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovarianceOfParameters_dbbe5f05149dbf73], a0, a1);
        }

        jdouble RegressionResults::getErrorSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getErrorSumSquares_dff5885c2c873297]);
        }

        jdouble RegressionResults::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_dff5885c2c873297]);
        }

        jlong RegressionResults::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jint RegressionResults::getNumberOfParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfParameters_570ce0828f81a2c1]);
        }

        jdouble RegressionResults::getParameterEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getParameterEstimate_46f85b53d9aedd96], a0);
        }

        JArray< jdouble > RegressionResults::getParameterEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterEstimates_60c7040667a7dc5c]));
        }

        jdouble RegressionResults::getRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquared_dff5885c2c873297]);
        }

        jdouble RegressionResults::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_dff5885c2c873297]);
        }

        jdouble RegressionResults::getStdErrorOfEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStdErrorOfEstimate_46f85b53d9aedd96], a0);
        }

        JArray< jdouble > RegressionResults::getStdErrorOfEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStdErrorOfEstimates_60c7040667a7dc5c]));
        }

        jdouble RegressionResults::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_dff5885c2c873297]);
        }

        jboolean RegressionResults::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_b108b35ef48e27bd]);
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
        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args);
        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getN(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self);
        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data);
        static PyGetSetDef t_RegressionResults__fields_[] = {
          DECLARE_GET_FIELD(t_RegressionResults, adjustedRSquared),
          DECLARE_GET_FIELD(t_RegressionResults, errorSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, meanSquareError),
          DECLARE_GET_FIELD(t_RegressionResults, n),
          DECLARE_GET_FIELD(t_RegressionResults, numberOfParameters),
          DECLARE_GET_FIELD(t_RegressionResults, parameterEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, rSquared),
          DECLARE_GET_FIELD(t_RegressionResults, regressionSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, stdErrorOfEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, totalSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegressionResults__methods_[] = {
          DECLARE_METHOD(t_RegressionResults, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, getAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getCovarianceOfParameters, METH_VARARGS),
          DECLARE_METHOD(t_RegressionResults, getErrorSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getN, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getNumberOfParameters, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, hasIntercept, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegressionResults)[] = {
          { Py_tp_methods, t_RegressionResults__methods_ },
          { Py_tp_init, (void *) t_RegressionResults_init_ },
          { Py_tp_getset, t_RegressionResults__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegressionResults)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegressionResults, t_RegressionResults, RegressionResults);

        void t_RegressionResults::install(PyObject *module)
        {
          installType(&PY_TYPE(RegressionResults), &PY_TYPE_DEF(RegressionResults), module, "RegressionResults", 0);
        }

        void t_RegressionResults::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "class_", make_descriptor(RegressionResults::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "wrapfn_", make_descriptor(t_RegressionResults::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegressionResults::initializeClass, 1)))
            return NULL;
          return t_RegressionResults::wrap_Object(RegressionResults(((t_RegressionResults *) arg)->object.this$));
        }
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegressionResults::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          jboolean a2;
          jlong a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jboolean a8;
          jboolean a9;
          RegressionResults object((jobject) NULL);

          if (!parseArgs(args, "[D[[DZJIDDDZZ", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = RegressionResults(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovarianceOfParameters(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovarianceOfParameters", args);
          return NULL;
        }

        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getN(t_RegressionResults *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getParameterEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParameterEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStdErrorOfEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStdErrorOfEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStdErrorOfEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParameterEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStdErrorOfEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularRaDec::class$ = NULL;
        jmethodID *AngularRaDec::mids$ = NULL;
        bool AngularRaDec::live$ = false;
        ::java::lang::String *AngularRaDec::MEASUREMENT_TYPE = NULL;

        jclass AngularRaDec::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularRaDec");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_895f80ea02a737c2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_e91e859b879f3586] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularRaDec::AngularRaDec(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_895f80ea02a737c2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularRaDec::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_e91e859b879f3586], a0.this$));
        }

        ::org::orekit::frames::Frame AngularRaDec::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
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
        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args);
        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg);
        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self);
        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data);
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data);
        static PyGetSetDef t_AngularRaDec__fields_[] = {
          DECLARE_GET_FIELD(t_AngularRaDec, referenceFrame),
          DECLARE_GET_FIELD(t_AngularRaDec, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularRaDec__methods_[] = {
          DECLARE_METHOD(t_AngularRaDec, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularRaDec, getObservedLineOfSight, METH_O),
          DECLARE_METHOD(t_AngularRaDec, getReferenceFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularRaDec)[] = {
          { Py_tp_methods, t_AngularRaDec__methods_ },
          { Py_tp_init, (void *) t_AngularRaDec_init_ },
          { Py_tp_getset, t_AngularRaDec__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularRaDec)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularRaDec, t_AngularRaDec, AngularRaDec);
        PyObject *t_AngularRaDec::wrap_Object(const AngularRaDec& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularRaDec::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularRaDec::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularRaDec), &PY_TYPE_DEF(AngularRaDec), module, "AngularRaDec", 0);
        }

        void t_AngularRaDec::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "class_", make_descriptor(AngularRaDec::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "wrapfn_", make_descriptor(t_AngularRaDec::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularRaDec::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularRaDec::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularRaDec::initializeClass, 1)))
            return NULL;
          return t_AngularRaDec::wrap_Object(AngularRaDec(((t_AngularRaDec *) arg)->object.this$));
        }
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularRaDec::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          JArray< jdouble > a5((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          AngularRaDec object((jobject) NULL);

          if (!parseArgs(args, "kkk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = AngularRaDec(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }

        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldLUDecomposition.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposition::class$ = NULL;
      jmethodID *FieldLUDecomposition::mids$ = NULL;
      bool FieldLUDecomposition::live$ = false;

      jclass FieldLUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c6edf548344b9f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_getDeterminant_99097cb60cf2d774] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getL_c992983685c753c5] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getP_c992983685c753c5] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getPivot_d0635cea09dc178c] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_6147c09efa4fa494] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_getU_c992983685c753c5] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLUDecomposition::FieldLUDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c6edf548344b9f0, a0.this$)) {}

      ::org::hipparchus::FieldElement FieldLUDecomposition::getDeterminant() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getDeterminant_99097cb60cf2d774]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getL_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getP_c992983685c753c5]));
      }

      JArray< jint > FieldLUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_d0635cea09dc178c]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6147c09efa4fa494]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getU_c992983685c753c5]));
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
      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args);
      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data);
      static PyGetSetDef t_FieldLUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposition, determinant),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, l),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, p),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, pivot),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, u),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposition)[] = {
        { Py_tp_methods, t_FieldLUDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldLUDecomposition_init_ },
        { Py_tp_getset, t_FieldLUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposition, t_FieldLUDecomposition, FieldLUDecomposition);
      PyObject *t_FieldLUDecomposition::wrap_Object(const FieldLUDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposition), &PY_TYPE_DEF(FieldLUDecomposition), module, "FieldLUDecomposition", 0);
      }

      void t_FieldLUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "class_", make_descriptor(FieldLUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "wrapfn_", make_descriptor(t_FieldLUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposition::wrap_Object(FieldLUDecomposition(((t_FieldLUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldLUDecomposition object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          INT_CALL(object = FieldLUDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFile::class$ = NULL;
        jmethodID *PythonEphemerisFile::mids$ = NULL;
        bool PythonEphemerisFile::live$ = false;

        jclass PythonEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFile::PythonEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEphemerisFile::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self);
        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFile)[] = {
          { Py_tp_methods, t_PythonEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFile_init_ },
          { Py_tp_getset, t_PythonEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFile, t_PythonEphemerisFile, PythonEphemerisFile);

        void t_PythonEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFile), &PY_TYPE_DEF(PythonEphemerisFile), module, "PythonEphemerisFile", 1);
        }

        void t_PythonEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "class_", make_descriptor(PythonEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "wrapfn_", make_descriptor(t_PythonEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFile::wrap_Object(PythonEphemerisFile(((t_PythonEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
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

        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data)
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
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEStepEndHandler::class$ = NULL;
        jmethodID *FieldODEStepEndHandler::mids$ = NULL;
        bool FieldODEStepEndHandler::live$ = false;

        jclass FieldODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetState_e4afa3dc8662b18a] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_stepEndOccurred_02e0a9f1fb7a6117] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepEndHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEStepEndHandler::resetState(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_e4afa3dc8662b18a], a0.this$));
        }

        ::org::hipparchus::ode::events::Action FieldODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_02e0a9f1fb7a6117], a0.this$, a1));
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
        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepEndHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepEndHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_FieldODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepEndHandler)[] = {
          { Py_tp_methods, t_FieldODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepEndHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepEndHandler, t_FieldODEStepEndHandler, FieldODEStepEndHandler);
        PyObject *t_FieldODEStepEndHandler::wrap_Object(const FieldODEStepEndHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepEndHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepEndHandler), &PY_TYPE_DEF(FieldODEStepEndHandler), module, "FieldODEStepEndHandler", 0);
        }

        void t_FieldODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "class_", make_descriptor(FieldODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "wrapfn_", make_descriptor(t_FieldODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepEndHandler::wrap_Object(FieldODEStepEndHandler(((t_FieldODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractPolynomialSolver::class$ = NULL;
        jmethodID *AbstractPolynomialSolver::mids$ = NULL;
        bool AbstractPolynomialSolver::live$ = false;

        jclass AbstractPolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractPolynomialSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCoefficients_60c7040667a7dc5c] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_setup_b0c582833ad20e05] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/polynomials/PolynomialFunction;DDD)V");

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
        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args);
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data);
        static PyGetSetDef t_AbstractPolynomialSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPolynomialSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractPolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPolynomialSolver)[] = {
          { Py_tp_methods, t_AbstractPolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPolynomialSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractPolynomialSolver, t_AbstractPolynomialSolver, AbstractPolynomialSolver);
        PyObject *t_AbstractPolynomialSolver::wrap_Object(const AbstractPolynomialSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractPolynomialSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractPolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPolynomialSolver), &PY_TYPE_DEF(AbstractPolynomialSolver), module, "AbstractPolynomialSolver", 0);
        }

        void t_AbstractPolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "class_", make_descriptor(AbstractPolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "wrapfn_", make_descriptor(t_AbstractPolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractPolynomialSolver::wrap_Object(AbstractPolynomialSolver(((t_AbstractPolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Min.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Min::class$ = NULL;
        jmethodID *Min::mids$ = NULL;
        bool Min::live$ = false;

        jclass Min::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Min");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Min::Min() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Min::value(jdouble a0, jdouble a1) const
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
        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Min_value(t_Min *self, PyObject *args);

        static PyMethodDef t_Min__methods_[] = {
          DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
          { Py_tp_methods, t_Min__methods_ },
          { Py_tp_init, (void *) t_Min_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Min)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Min, t_Min, Min);

        void t_Min::install(PyObject *module)
        {
          installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
        }

        void t_Min::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Min::initializeClass, 1)))
            return NULL;
          return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
        }
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Min::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
        {
          Min object((jobject) NULL);

          INT_CALL(object = Min());
          self->object = object;

          return 0;
        }

        static PyObject *t_Min_value(t_Min *self, PyObject *args)
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
#include "org/orekit/propagation/integration/PythonAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonAbstractIntegratedPropagator::live$ = false;

        jclass PythonAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab7da0e7cb0692d7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_2bea84b26b1efc07] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_e1fa3ce287fe2655] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractIntegratedPropagator::PythonAbstractIntegratedPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_ab7da0e7cb0692d7, a0.this$, a1.this$)) {}

        void PythonAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractIntegratedPropagator::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self);
        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractIntegratedPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractIntegratedPropagator, t_PythonAbstractIntegratedPropagator, PythonAbstractIntegratedPropagator);

        void t_PythonAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonAbstractIntegratedPropagator), module, "PythonAbstractIntegratedPropagator", 1);
        }

        void t_PythonAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "class_", make_descriptor(PythonAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;", (void *) t_PythonAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractIntegratedPropagator::wrap_Object(PythonAbstractIntegratedPropagator(((t_PythonAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractIntegratedPropagator_init_(t_PythonAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::PropagationType a1((jobject) NULL);
          PyTypeObject **p1;
          PythonAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonAbstractIntegratedPropagator(a0, a1));
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

        static PyObject *t_PythonAbstractIntegratedPropagator_finalize(t_PythonAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_pythonExtension(t_PythonAbstractIntegratedPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::StateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OdOOOO", o0, (double) a1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::StateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
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

        static jobject JNICALL t_PythonAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(::org::hipparchus::ode::ODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
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

        static void JNICALL t_PythonAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractIntegratedPropagator::mids$[PythonAbstractIntegratedPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractIntegratedPropagator_get__self(t_PythonAbstractIntegratedPropagator *self, void *data)
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
#include "org/orekit/estimation/iod/IodGibbs.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGibbs::class$ = NULL;
        jmethodID *IodGibbs::mids$ = NULL;
        bool IodGibbs::live$ = false;

        jclass IodGibbs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGibbs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_572a07e48137f16a] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_33ef19f1b7699b20] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_baa50281755c23af] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGibbs::IodGibbs(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::PV & a1, const ::org::orekit::estimation::measurements::PV & a2, const ::org::orekit::estimation::measurements::PV & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_572a07e48137f16a], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::Position & a1, const ::org::orekit::estimation::measurements::Position & a2, const ::org::orekit::estimation::measurements::Position & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_33ef19f1b7699b20], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_baa50281755c23af], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
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
      namespace iod {
        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args);

        static PyMethodDef t_IodGibbs__methods_[] = {
          DECLARE_METHOD(t_IodGibbs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGibbs)[] = {
          { Py_tp_methods, t_IodGibbs__methods_ },
          { Py_tp_init, (void *) t_IodGibbs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGibbs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGibbs, t_IodGibbs, IodGibbs);

        void t_IodGibbs::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGibbs), &PY_TYPE_DEF(IodGibbs), module, "IodGibbs", 0);
        }

        void t_IodGibbs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "class_", make_descriptor(IodGibbs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "wrapfn_", make_descriptor(t_IodGibbs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGibbs::initializeClass, 1)))
            return NULL;
          return t_IodGibbs::wrap_Object(IodGibbs(((t_IodGibbs *) arg)->object.this$));
        }
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGibbs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGibbs object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGibbs(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::PV a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::PV a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_PV::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_PV::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::Position a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::Position a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_Position::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_Position::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeRateModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeRateModifier::mids$ = NULL;
          bool RelativisticClockRangeRateModifier::live$ = false;

          jclass RelativisticClockRangeRateModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeRateModifier::RelativisticClockRangeRateModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::java::util::List RelativisticClockRangeRateModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticClockRangeRateModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self);
          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeRateModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeRateModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeRateModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeRateModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeRateModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeRateModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeRateModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeRateModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeRateModifier, t_RelativisticClockRangeRateModifier, RelativisticClockRangeRateModifier);

          void t_RelativisticClockRangeRateModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeRateModifier), &PY_TYPE_DEF(RelativisticClockRangeRateModifier), module, "RelativisticClockRangeRateModifier", 0);
          }

          void t_RelativisticClockRangeRateModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "class_", make_descriptor(RelativisticClockRangeRateModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeRateModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeRateModifier::wrap_Object(RelativisticClockRangeRateModifier(((t_RelativisticClockRangeRateModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            RelativisticClockRangeRateModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = RelativisticClockRangeRateModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region::class$ = NULL;
        jmethodID *Region::mids$ = NULL;
        bool Region::live$ = false;

        jclass Region::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildNew_017f430783bf20c2] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_checkPoint_50307f10d8b0681b] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_699b13c84f9f9ff1] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_b72f8ac992e26582] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getBarycenter_e164db6eb4ec1f00] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_dff5885c2c873297] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTree_4457617bb6ed0c9d] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_208a723630302f7b] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_06c832607c1f3329] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_b108b35ef48e27bd] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_06c832607c1f3329] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_e9baadaaf6c2e7eb] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region Region::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_buildNew_017f430783bf20c2], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location Region::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_50307f10d8b0681b], a0.this$));
        }

        jboolean Region::contains(const Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_699b13c84f9f9ff1], a0.this$);
        }

        Region Region::copySelf() const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_copySelf_b72f8ac992e26582]));
        }

        ::org::hipparchus::geometry::Point Region::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_e164db6eb4ec1f00]));
        }

        jdouble Region::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_dff5885c2c873297]);
        }

        jdouble Region::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree Region::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_4457617bb6ed0c9d], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Region::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_208a723630302f7b], a0.this$));
        }

        jboolean Region::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
        }

        jboolean Region::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_06c832607c1f3329], a0.this$);
        }

        jboolean Region::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_b108b35ef48e27bd]);
        }

        jboolean Region::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_06c832607c1f3329], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection Region::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_e9baadaaf6c2e7eb], a0.this$));
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
        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_of_(t_Region *self, PyObject *args);
        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg);
        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg);
        static PyObject *t_Region_contains(t_Region *self, PyObject *arg);
        static PyObject *t_Region_copySelf(t_Region *self);
        static PyObject *t_Region_getBarycenter(t_Region *self);
        static PyObject *t_Region_getBoundarySize(t_Region *self);
        static PyObject *t_Region_getSize(t_Region *self);
        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg);
        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg);
        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args);
        static PyObject *t_Region_isFull(t_Region *self, PyObject *args);
        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg);
        static PyObject *t_Region_get__barycenter(t_Region *self, void *data);
        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data);
        static PyObject *t_Region_get__empty(t_Region *self, void *data);
        static PyObject *t_Region_get__full(t_Region *self, void *data);
        static PyObject *t_Region_get__size(t_Region *self, void *data);
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data);
        static PyGetSetDef t_Region__fields_[] = {
          DECLARE_GET_FIELD(t_Region, barycenter),
          DECLARE_GET_FIELD(t_Region, boundarySize),
          DECLARE_GET_FIELD(t_Region, empty),
          DECLARE_GET_FIELD(t_Region, full),
          DECLARE_GET_FIELD(t_Region, size),
          DECLARE_GET_FIELD(t_Region, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region__methods_[] = {
          DECLARE_METHOD(t_Region, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region, buildNew, METH_O),
          DECLARE_METHOD(t_Region, checkPoint, METH_O),
          DECLARE_METHOD(t_Region, contains, METH_O),
          DECLARE_METHOD(t_Region, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getSize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getTree, METH_O),
          DECLARE_METHOD(t_Region, intersection, METH_O),
          DECLARE_METHOD(t_Region, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_Region, isFull, METH_VARARGS),
          DECLARE_METHOD(t_Region, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region)[] = {
          { Py_tp_methods, t_Region__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Region, t_Region, Region);
        PyObject *t_Region::wrap_Object(const Region& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region::install(PyObject *module)
        {
          installType(&PY_TYPE(Region), &PY_TYPE_DEF(Region), module, "Region", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "Location", make_descriptor(&PY_TYPE_DEF(Region$Location)));
        }

        void t_Region::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "class_", make_descriptor(Region::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "wrapfn_", make_descriptor(t_Region::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region::initializeClass, 1)))
            return NULL;
          return t_Region::wrap_Object(Region(((t_Region *) arg)->object.this$));
        }
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region_of_(t_Region *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.checkPoint(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
          return NULL;
        }

        static PyObject *t_Region_contains(t_Region *self, PyObject *arg)
        {
          Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Region::initializeClass, &a0, &p0, t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_Region_copySelf(t_Region *self)
        {
          Region result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBarycenter(t_Region *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBoundarySize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getSize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_Region_isFull(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Region_get__barycenter(t_Region *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Region_get__empty(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__full(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__size(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorBuilder::class$ = NULL;
        jmethodID *AbstractPropagatorBuilder::mids$ = NULL;
        bool AbstractPropagatorBuilder::live$ = false;

        jclass AbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_3192623a36e6dd4e] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_deselectDynamicParameters_0fa09c18fee449d5] = env->getMethodID(cls, "deselectDynamicParameters", "()V");
            mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_85703d13e302437e] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_bd51074bfd9d41da] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPositionScale_dff5885c2c873297] = env->getMethodID(cls, "getPositionScale", "()D");
            mids$[mid_getPropagationParametersDrivers_bd51074bfd9d41da] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_6219f6b430651d68] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_getAdditionalDerivativesProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_createInitialOrbit_cde5690bfa4f9649] = env->getMethodID(cls, "createInitialOrbit", "()Lorg/orekit/orbits/Orbit;");
            mids$[mid_addSupportedParameters_de3e021e7266b71e] = env->getMethodID(cls, "addSupportedParameters", "(Ljava/util/List;)V");
            mids$[mid_setParameters_fa9d415d19f69361] = env->getMethodID(cls, "setParameters", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractPropagatorBuilder::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_3192623a36e6dd4e], a0.this$);
        }

        void AbstractPropagatorBuilder::deselectDynamicParameters() const
        {
          env->callVoidMethod(this$, mids$[mid_deselectDynamicParameters_0fa09c18fee449d5]);
        }

        ::org::orekit::attitudes::AttitudeProvider AbstractPropagatorBuilder::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_a904f3d015a354a0]));
        }

        ::org::orekit::frames::Frame AbstractPropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::time::AbsoluteDate AbstractPropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_85703d13e302437e]));
        }

        jdouble AbstractPropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::orbits::OrbitType AbstractPropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_bd51074bfd9d41da]));
        }

        ::org::orekit::orbits::PositionAngleType AbstractPropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        jdouble AbstractPropagatorBuilder::getPositionScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPositionScale_dff5885c2c873297]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_bd51074bfd9d41da]));
        }

        JArray< jdouble > AbstractPropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_60c7040667a7dc5c]));
        }

        void AbstractPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_6219f6b430651d68], a0.this$);
        }

        void AbstractPropagatorBuilder::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
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
        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data);
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_AbstractPropagatorBuilder__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractPropagatorBuilder, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionScale),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, deselectDynamicParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionScale, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, resetOrbit, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_AbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorBuilder, t_AbstractPropagatorBuilder, AbstractPropagatorBuilder);

        void t_AbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorBuilder), &PY_TYPE_DEF(AbstractPropagatorBuilder), module, "AbstractPropagatorBuilder", 0);
        }

        void t_AbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "class_", make_descriptor(AbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_AbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorBuilder::wrap_Object(AbstractPropagatorBuilder(((t_AbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.deselectDynamicParameters());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPositionScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
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

        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data)
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

        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPositionScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeIonosphericDelayModifier::mids$ = NULL;
          bool RangeIonosphericDelayModifier::live$ = false;

          jclass RangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88af61602f29e4c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeIonosphericDelayModifier::RangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_88af61602f29e4c4, a0.this$, a1)) {}

          void RangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void RangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeIonosphericDelayModifier, t_RangeIonosphericDelayModifier, RangeIonosphericDelayModifier);

          void t_RangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeIonosphericDelayModifier), &PY_TYPE_DEF(RangeIonosphericDelayModifier), module, "RangeIonosphericDelayModifier", 0);
          }

          void t_RangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "class_", make_descriptor(RangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeIonosphericDelayModifier::wrap_Object(RangeIonosphericDelayModifier(((t_RangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            RangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ArithmeticUtils.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ArithmeticUtils::class$ = NULL;
      jmethodID *ArithmeticUtils::mids$ = NULL;
      bool ArithmeticUtils::live$ = false;

      jclass ArithmeticUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ArithmeticUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAndCheck_819f91eddf220c5b] = env->getStaticMethodID(cls, "addAndCheck", "(II)I");
          mids$[mid_addAndCheck_fe4804b67425641b] = env->getStaticMethodID(cls, "addAndCheck", "(JJ)J");
          mids$[mid_divideUnsigned_819f91eddf220c5b] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
          mids$[mid_divideUnsigned_fe4804b67425641b] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
          mids$[mid_gcd_819f91eddf220c5b] = env->getStaticMethodID(cls, "gcd", "(II)I");
          mids$[mid_gcd_fe4804b67425641b] = env->getStaticMethodID(cls, "gcd", "(JJ)J");
          mids$[mid_isPowerOfTwo_31b8f662f1e63743] = env->getStaticMethodID(cls, "isPowerOfTwo", "(J)Z");
          mids$[mid_lcm_819f91eddf220c5b] = env->getStaticMethodID(cls, "lcm", "(II)I");
          mids$[mid_lcm_fe4804b67425641b] = env->getStaticMethodID(cls, "lcm", "(JJ)J");
          mids$[mid_mulAndCheck_819f91eddf220c5b] = env->getStaticMethodID(cls, "mulAndCheck", "(II)I");
          mids$[mid_mulAndCheck_fe4804b67425641b] = env->getStaticMethodID(cls, "mulAndCheck", "(JJ)J");
          mids$[mid_pow_819f91eddf220c5b] = env->getStaticMethodID(cls, "pow", "(II)I");
          mids$[mid_pow_559895cd752223b6] = env->getStaticMethodID(cls, "pow", "(JI)J");
          mids$[mid_remainderUnsigned_819f91eddf220c5b] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
          mids$[mid_remainderUnsigned_fe4804b67425641b] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
          mids$[mid_subAndCheck_819f91eddf220c5b] = env->getStaticMethodID(cls, "subAndCheck", "(II)I");
          mids$[mid_subAndCheck_fe4804b67425641b] = env->getStaticMethodID(cls, "subAndCheck", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ArithmeticUtils::addAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addAndCheck_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::addAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addAndCheck_fe4804b67425641b], a0, a1);
      }

      jint ArithmeticUtils::divideUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::divideUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_fe4804b67425641b], a0, a1);
      }

      jint ArithmeticUtils::gcd(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_gcd_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::gcd(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_gcd_fe4804b67425641b], a0, a1);
      }

      jboolean ArithmeticUtils::isPowerOfTwo(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isPowerOfTwo_31b8f662f1e63743], a0);
      }

      jint ArithmeticUtils::lcm(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_lcm_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::lcm(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_lcm_fe4804b67425641b], a0, a1);
      }

      jint ArithmeticUtils::mulAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_mulAndCheck_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::mulAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_mulAndCheck_fe4804b67425641b], a0, a1);
      }

      jint ArithmeticUtils::pow(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_pow_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::pow(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_pow_559895cd752223b6], a0, a1);
      }

      jint ArithmeticUtils::remainderUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::remainderUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_fe4804b67425641b], a0, a1);
      }

      jint ArithmeticUtils::subAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subAndCheck_819f91eddf220c5b], a0, a1);
      }

      jlong ArithmeticUtils::subAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subAndCheck_fe4804b67425641b], a0, a1);
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
      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ArithmeticUtils__methods_[] = {
        DECLARE_METHOD(t_ArithmeticUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, addAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, divideUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, gcd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, isPowerOfTwo, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, lcm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, mulAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, remainderUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, subAndCheck, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArithmeticUtils)[] = {
        { Py_tp_methods, t_ArithmeticUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArithmeticUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArithmeticUtils, t_ArithmeticUtils, ArithmeticUtils);

      void t_ArithmeticUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ArithmeticUtils), &PY_TYPE_DEF(ArithmeticUtils), module, "ArithmeticUtils", 0);
      }

      void t_ArithmeticUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "class_", make_descriptor(ArithmeticUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "wrapfn_", make_descriptor(t_ArithmeticUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArithmeticUtils::initializeClass, 1)))
          return NULL;
        return t_ArithmeticUtils::wrap_Object(ArithmeticUtils(((t_ArithmeticUtils *) arg)->object.this$));
      }
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArithmeticUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "gcd", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jboolean result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::isPowerOfTwo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isPowerOfTwo", arg);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "lcm", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mulAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "remainderUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subAndCheck", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvider::class$ = NULL;
      jmethodID *DataProvider::mids$ = NULL;
      bool DataProvider::live$ = false;

      jclass DataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvider");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DataProvider__methods_[] = {
        DECLARE_METHOD(t_DataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvider, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvider)[] = {
        { Py_tp_methods, t_DataProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvider, t_DataProvider, DataProvider);

      void t_DataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvider), &PY_TYPE_DEF(DataProvider), module, "DataProvider", 0);
      }

      void t_DataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "class_", make_descriptor(DataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "wrapfn_", make_descriptor(t_DataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvider::initializeClass, 1)))
          return NULL;
        return t_DataProvider::wrap_Object(DataProvider(((t_DataProvider *) arg)->object.this$));
      }
      static PyObject *t_DataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEventDetector::class$ = NULL;
        jmethodID *PythonFieldEventDetector::mids$ = NULL;
        bool PythonFieldEventDetector::live$ = false;

        jclass PythonFieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_48965f0f9fa2ddf9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_69f9ee3154bea730] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_eba8e72a22c984ac] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEventDetector::PythonFieldEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldEventDetector::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args);
        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self);
        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args);
        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data);
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data);
        static PyGetSetDef t_PythonFieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, self),
          DECLARE_GET_FIELD(t_PythonFieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventDetector)[] = {
          { Py_tp_methods, t_PythonFieldEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEventDetector_init_ },
          { Py_tp_getset, t_PythonFieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEventDetector, t_PythonFieldEventDetector, PythonFieldEventDetector);
        PyObject *t_PythonFieldEventDetector::wrap_Object(const PythonFieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEventDetector *self = (t_PythonFieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEventDetector), &PY_TYPE_DEF(PythonFieldEventDetector), module, "PythonFieldEventDetector", 1);
        }

        void t_PythonFieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "class_", make_descriptor(PythonFieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "wrapfn_", make_descriptor(t_PythonFieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;", (void *) t_PythonFieldEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;", (void *) t_PythonFieldEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonFieldEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonFieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEventDetector::wrap_Object(PythonFieldEventDetector(((t_PythonFieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEventDetector_of_(t_PythonFieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEventDetector_init_(t_PythonFieldEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEventDetector object((jobject) NULL);

          INT_CALL(object = PythonFieldEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEventDetector_finalize(t_PythonFieldEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEventDetector_pythonExtension(t_PythonFieldEventDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("g", result);
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

        static jobject JNICALL t_PythonFieldEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonFieldEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonFieldEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonFieldEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getThreshold", result);
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

        static void JNICALL t_PythonFieldEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEventDetector::mids$[PythonFieldEventDetector::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEventDetector_get__self(t_PythonFieldEventDetector *self, void *data)
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
        static PyObject *t_PythonFieldEventDetector_get__parameters_(t_PythonFieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/J2DifferentialEffect.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *J2DifferentialEffect::class$ = NULL;
        jmethodID *J2DifferentialEffect::mids$ = NULL;
        bool J2DifferentialEffect::live$ = false;

        jclass J2DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/J2DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fd9074bf7267d323] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_7b91f935782f6673] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_86e49d3816ef81cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZDDD)V");
            mids$[mid_init$_d8dfb9363a119d99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZDDD)V");
            mids$[mid_apply_58efaeb159657907] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_f43130c50e9fafeb] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd9074bf7267d323, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b91f935782f6673, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86e49d3816ef81cb, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8dfb9363a119d99, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        ::org::orekit::orbits::Orbit J2DifferentialEffect::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_58efaeb159657907], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState J2DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_f43130c50e9fafeb], a0.this$));
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
        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds);
        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args);

        static PyMethodDef t_J2DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_J2DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(J2DifferentialEffect)[] = {
          { Py_tp_methods, t_J2DifferentialEffect__methods_ },
          { Py_tp_init, (void *) t_J2DifferentialEffect_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(J2DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(J2DifferentialEffect, t_J2DifferentialEffect, J2DifferentialEffect);

        void t_J2DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(J2DifferentialEffect), &PY_TYPE_DEF(J2DifferentialEffect), module, "J2DifferentialEffect", 0);
        }

        void t_J2DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "class_", make_descriptor(J2DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "wrapfn_", make_descriptor(t_J2DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, J2DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_J2DifferentialEffect::wrap_Object(J2DifferentialEffect(((t_J2DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, J2DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Subtract.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Subtract::class$ = NULL;
        jmethodID *Subtract::mids$ = NULL;
        bool Subtract::live$ = false;

        jclass Subtract::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Subtract");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Subtract::Subtract() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Subtract::value(jdouble a0, jdouble a1) const
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
        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args);

        static PyMethodDef t_Subtract__methods_[] = {
          DECLARE_METHOD(t_Subtract, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Subtract)[] = {
          { Py_tp_methods, t_Subtract__methods_ },
          { Py_tp_init, (void *) t_Subtract_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Subtract)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Subtract, t_Subtract, Subtract);

        void t_Subtract::install(PyObject *module)
        {
          installType(&PY_TYPE(Subtract), &PY_TYPE_DEF(Subtract), module, "Subtract", 0);
        }

        void t_Subtract::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "class_", make_descriptor(Subtract::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "wrapfn_", make_descriptor(t_Subtract::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Subtract::initializeClass, 1)))
            return NULL;
          return t_Subtract::wrap_Object(Subtract(((t_Subtract *) arg)->object.this$));
        }
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Subtract::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds)
        {
          Subtract object((jobject) NULL);

          INT_CALL(object = Subtract());
          self->object = object;

          return 0;
        }

        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args)
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
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ExtremumApproachDetector::class$ = NULL;
        jmethodID *ExtremumApproachDetector::mids$ = NULL;
        bool ExtremumApproachDetector::live$ = false;

        jclass ExtremumApproachDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ExtremumApproachDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36de6b722535732f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_computeDeltaPV_dc9882cd5637079b] = env->getMethodID(cls, "computeDeltaPV", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getSecondaryPVProvider_903aca6bb4523e29] = env->getMethodID(cls, "getSecondaryPVProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_14bbdf1253de117f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ExtremumApproachDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtremumApproachDetector::ExtremumApproachDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_36de6b722535732f, a0.this$)) {}

        ::org::orekit::utils::PVCoordinates ExtremumApproachDetector::computeDeltaPV(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeDeltaPV_dc9882cd5637079b], a0.this$));
        }

        jdouble ExtremumApproachDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider ExtremumApproachDetector::getSecondaryPVProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryPVProvider_903aca6bb4523e29]));
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
        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args);
        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args);
        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self);
        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data);
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data);
        static PyGetSetDef t_ExtremumApproachDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, secondaryPVProvider),
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExtremumApproachDetector__methods_[] = {
          DECLARE_METHOD(t_ExtremumApproachDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, computeDeltaPV, METH_O),
          DECLARE_METHOD(t_ExtremumApproachDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, getSecondaryPVProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtremumApproachDetector)[] = {
          { Py_tp_methods, t_ExtremumApproachDetector__methods_ },
          { Py_tp_init, (void *) t_ExtremumApproachDetector_init_ },
          { Py_tp_getset, t_ExtremumApproachDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtremumApproachDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ExtremumApproachDetector, t_ExtremumApproachDetector, ExtremumApproachDetector);
        PyObject *t_ExtremumApproachDetector::wrap_Object(const ExtremumApproachDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ExtremumApproachDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ExtremumApproachDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtremumApproachDetector), &PY_TYPE_DEF(ExtremumApproachDetector), module, "ExtremumApproachDetector", 0);
        }

        void t_ExtremumApproachDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "class_", make_descriptor(ExtremumApproachDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "wrapfn_", make_descriptor(t_ExtremumApproachDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtremumApproachDetector::initializeClass, 1)))
            return NULL;
          return t_ExtremumApproachDetector::wrap_Object(ExtremumApproachDetector(((t_ExtremumApproachDetector *) arg)->object.this$));
        }
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtremumApproachDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ExtremumApproachDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
          {
            INT_CALL(object = ExtremumApproachDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ExtremumApproachDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDeltaPV(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDeltaPV", arg);
          return NULL;
        }

        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExtremumApproachDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomVectorGenerator::class$ = NULL;
      jmethodID *RandomVectorGenerator::mids$ = NULL;
      bool RandomVectorGenerator::live$ = false;

      jclass RandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextVector_60c7040667a7dc5c] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > RandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_60c7040667a7dc5c]));
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
      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self);

      static PyMethodDef t_RandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomVectorGenerator)[] = {
        { Py_tp_methods, t_RandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomVectorGenerator, t_RandomVectorGenerator, RandomVectorGenerator);

      void t_RandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomVectorGenerator), &PY_TYPE_DEF(RandomVectorGenerator), module, "RandomVectorGenerator", 0);
      }

      void t_RandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "class_", make_descriptor(RandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "wrapfn_", make_descriptor(t_RandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomVectorGenerator::wrap_Object(RandomVectorGenerator(((t_RandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonThrustPropulsionModel::mids$ = NULL;
          bool PythonThrustPropulsionModel::live$ = false;

          jclass PythonThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getFlowRate_432f3d328c15ec82] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_8bdf60d5551eceaf] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_0b7191d207b9680f] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_abc43395638fd218] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b42ac4b5bfb80fab] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_8954761face5e1a7] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustPropulsionModel::PythonThrustPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          ::java::util::List PythonThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jlong PythonThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonThrustPropulsionModel::pythonExtension(jlong a0) const
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data);
          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustPropulsionModel, t_PythonThrustPropulsionModel, PythonThrustPropulsionModel);

          void t_PythonThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustPropulsionModel), &PY_TYPE_DEF(PythonThrustPropulsionModel), module, "PythonThrustPropulsionModel", 1);
          }

          void t_PythonThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "class_", make_descriptor(PythonThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonThrustPropulsionModel_getControl3DVectorCostType0 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonThrustPropulsionModel_getFlowRate3 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector4 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonThrustPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonThrustPropulsionModel::wrap_Object(PythonThrustPropulsionModel(((t_PythonThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonThrustPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data)
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

          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSatelliteEphemeris::class$ = NULL;
              jmethodID *AemSatelliteEphemeris::mids$ = NULL;
              bool AemSatelliteEphemeris::live$ = false;

              jclass AemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_91fd4e71827f714e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSatelliteEphemeris::AemSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91fd4e71827f714e, a0.this$, a1.this$)) {}

              ::java::lang::String AemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
              }

              ::java::util::List AemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStop() const
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
              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AemSatelliteEphemeris, t_AemSatelliteEphemeris, AemSatelliteEphemeris);

              void t_AemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSatelliteEphemeris), &PY_TYPE_DEF(AemSatelliteEphemeris), module, "AemSatelliteEphemeris", 0);
              }

              void t_AemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "class_", make_descriptor(AemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "wrapfn_", make_descriptor(t_AemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AemSatelliteEphemeris::wrap_Object(AemSatelliteEphemeris(((t_AemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AemSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment));
              }

              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data)
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
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *HeaderKey::class$ = NULL;
          jmethodID *HeaderKey::mids$ = NULL;
          bool HeaderKey::live$ = false;
          HeaderKey *HeaderKey::CLASSIFICATION = NULL;
          HeaderKey *HeaderKey::COMMENT = NULL;
          HeaderKey *HeaderKey::CREATION_DATE = NULL;
          HeaderKey *HeaderKey::MESSAGE_ID = NULL;
          HeaderKey *HeaderKey::ORIGINATOR = NULL;

          jclass HeaderKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/HeaderKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_5545cbf3fa7ee9e8] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Header;)Z");
              mids$[mid_valueOf_43f43b85463864dc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/HeaderKey;");
              mids$[mid_values_66a87168abb99d5f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/HeaderKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLASSIFICATION = new HeaderKey(env->getStaticObjectField(cls, "CLASSIFICATION", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              COMMENT = new HeaderKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              CREATION_DATE = new HeaderKey(env->getStaticObjectField(cls, "CREATION_DATE", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              MESSAGE_ID = new HeaderKey(env->getStaticObjectField(cls, "MESSAGE_ID", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              ORIGINATOR = new HeaderKey(env->getStaticObjectField(cls, "ORIGINATOR", "Lorg/orekit/files/ccsds/section/HeaderKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean HeaderKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::section::Header & a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_5545cbf3fa7ee9e8], a0.this$, a1.this$, a2.this$);
          }

          HeaderKey HeaderKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return HeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_43f43b85463864dc], a0.this$));
          }

          JArray< HeaderKey > HeaderKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< HeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_66a87168abb99d5f]));
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
          static PyObject *t_HeaderKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HeaderKey_of_(t_HeaderKey *self, PyObject *args);
          static PyObject *t_HeaderKey_process(t_HeaderKey *self, PyObject *args);
          static PyObject *t_HeaderKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_HeaderKey_values(PyTypeObject *type);
          static PyObject *t_HeaderKey_get__parameters_(t_HeaderKey *self, void *data);
          static PyGetSetDef t_HeaderKey__fields_[] = {
            DECLARE_GET_FIELD(t_HeaderKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HeaderKey__methods_[] = {
            DECLARE_METHOD(t_HeaderKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_HeaderKey, process, METH_VARARGS),
            DECLARE_METHOD(t_HeaderKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_HeaderKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HeaderKey)[] = {
            { Py_tp_methods, t_HeaderKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HeaderKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HeaderKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(HeaderKey, t_HeaderKey, HeaderKey);
          PyObject *t_HeaderKey::wrap_Object(const HeaderKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_HeaderKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_HeaderKey *self = (t_HeaderKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_HeaderKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_HeaderKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_HeaderKey *self = (t_HeaderKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_HeaderKey::install(PyObject *module)
          {
            installType(&PY_TYPE(HeaderKey), &PY_TYPE_DEF(HeaderKey), module, "HeaderKey", 0);
          }

          void t_HeaderKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "class_", make_descriptor(HeaderKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "wrapfn_", make_descriptor(t_HeaderKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(HeaderKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "CLASSIFICATION", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::CLASSIFICATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "COMMENT", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "CREATION_DATE", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::CREATION_DATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "MESSAGE_ID", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::MESSAGE_ID)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HeaderKey), "ORIGINATOR", make_descriptor(t_HeaderKey::wrap_Object(*HeaderKey::ORIGINATOR)));
          }

          static PyObject *t_HeaderKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HeaderKey::initializeClass, 1)))
              return NULL;
            return t_HeaderKey::wrap_Object(HeaderKey(((t_HeaderKey *) arg)->object.this$));
          }
          static PyObject *t_HeaderKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HeaderKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HeaderKey_of_(t_HeaderKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_HeaderKey_process(t_HeaderKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
            ::org::orekit::files::ccsds::section::Header a2((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.process(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_HeaderKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            HeaderKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::HeaderKey::valueOf(a0));
              return t_HeaderKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_HeaderKey_values(PyTypeObject *type)
          {
            JArray< HeaderKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::HeaderKey::values());
            return JArray<jobject>(result.this$).wrap(t_HeaderKey::wrap_jobject);
          }
          static PyObject *t_HeaderKey_get__parameters_(t_HeaderKey *self, void *data)
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
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataType::class$ = NULL;
          jmethodID *RinexClock$ClockDataType::mids$ = NULL;
          bool RinexClock$ClockDataType::live$ = false;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AS = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::CR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::DR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::MS = NULL;

          jclass RinexClock$ClockDataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getKey_11b109bd155ca898] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
              mids$[mid_parseClockDataType_2af0824302571178] = env->getStaticMethodID(cls, "parseClockDataType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_valueOf_2af0824302571178] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_values_323783eb86fff0dd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              AS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              CR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "CR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              DR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "DR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              MS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "MS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexClock$ClockDataType::getKey() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_11b109bd155ca898]));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::parseClockDataType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_parseClockDataType_2af0824302571178], a0.this$));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2af0824302571178], a0.this$));
          }

          JArray< RinexClock$ClockDataType > RinexClock$ClockDataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexClock$ClockDataType >(env->callStaticObjectMethod(cls, mids$[mid_values_323783eb86fff0dd]));
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
        namespace clock {
          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self);
          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type);
          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data);
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, key),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataType__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, getKey, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, parseClockDataType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataType)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock$ClockDataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataType, t_RinexClock$ClockDataType, RinexClock$ClockDataType);
          PyObject *t_RinexClock$ClockDataType::wrap_Object(const RinexClock$ClockDataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexClock$ClockDataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexClock$ClockDataType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataType), &PY_TYPE_DEF(RinexClock$ClockDataType), module, "RinexClock$ClockDataType", 0);
          }

          void t_RinexClock$ClockDataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "class_", make_descriptor(RinexClock$ClockDataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "wrapfn_", make_descriptor(t_RinexClock$ClockDataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexClock$ClockDataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "CR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::CR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "DR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::DR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "MS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::MS)));
          }

          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataType::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataType::wrap_Object(RinexClock$ClockDataType(((t_RinexClock$ClockDataType *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getKey());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::parseClockDataType(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::valueOf(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type)
          {
            JArray< RinexClock$ClockDataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexClock$ClockDataType::wrap_jobject);
          }
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getKey());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesIntegrator::mids$ = NULL;
        bool ThreeEighthesIntegrator::live$ = false;

        jclass ThreeEighthesIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_9e7dcf977a46ce04] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegrator::ThreeEighthesIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        JArray< JArray< jdouble > > ThreeEighthesIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > ThreeEighthesIntegrator::getC() const
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
        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegrator, t_ThreeEighthesIntegrator, ThreeEighthesIntegrator);

        void t_ThreeEighthesIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegrator), &PY_TYPE_DEF(ThreeEighthesIntegrator), module, "ThreeEighthesIntegrator", 0);
        }

        void t_ThreeEighthesIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "class_", make_descriptor(ThreeEighthesIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegrator::wrap_Object(ThreeEighthesIntegrator(((t_ThreeEighthesIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegrator_init_(t_ThreeEighthesIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegrator_getA(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getB(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_getC(t_ThreeEighthesIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ThreeEighthesIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__a(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesIntegrator_get__b(t_ThreeEighthesIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ThreeEighthesIntegrator_get__c(t_ThreeEighthesIntegrator *self, void *data)
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
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "java/util/Map.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigation::class$ = NULL;
          jmethodID *RinexNavigation::mids$ = NULL;
          bool RinexNavigation::live$ = false;

          jclass RinexNavigation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addBDGIMMessage_6db30441c35d6fb7] = env->getMethodID(cls, "addBDGIMMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereBDGIMMessage;)V");
              mids$[mid_addBeidouCivilianNavigationMessage_6a3700b4f65d21b8] = env->getMethodID(cls, "addBeidouCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage;)V");
              mids$[mid_addBeidouLegacyNavigationMessage_68d319561ad57af5] = env->getMethodID(cls, "addBeidouLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
              mids$[mid_addEarthOrientationParameter_b13bf812cc8c3997] = env->getMethodID(cls, "addEarthOrientationParameter", "(Lorg/orekit/files/rinex/navigation/EarthOrientationParameterMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_8e193a05a4675db9] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_16aa3ee67a4aead2] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
              mids$[mid_addGalileoNavigationMessage_4a80ac1fbe917041] = env->getMethodID(cls, "addGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
              mids$[mid_addGlonassNavigationMessage_03382bf5f212b94b] = env->getMethodID(cls, "addGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
              mids$[mid_addIRNSSNavigationMessage_17e1d776ff5f1ae7] = env->getMethodID(cls, "addIRNSSNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage;)V");
              mids$[mid_addKlobucharMessage_e2f6e204ebbd1a99] = env->getMethodID(cls, "addKlobucharMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereKlobucharMessage;)V");
              mids$[mid_addNequickGMessage_da1804d087bca47e] = env->getMethodID(cls, "addNequickGMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereNequickGMessage;)V");
              mids$[mid_addQZSSCivilianNavigationMessage_2c9642098f9593c6] = env->getMethodID(cls, "addQZSSCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage;)V");
              mids$[mid_addQZSSLegacyNavigationMessage_ee4b9dd29db0df25] = env->getMethodID(cls, "addQZSSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
              mids$[mid_addSBASNavigationMessage_d0cb5c4df227efb9] = env->getMethodID(cls, "addSBASNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/SBASNavigationMessage;)V");
              mids$[mid_addSystemTimeOffset_eb8e31ddda72aa89] = env->getMethodID(cls, "addSystemTimeOffset", "(Lorg/orekit/files/rinex/navigation/SystemTimeOffsetMessage;)V");
              mids$[mid_getBDGIMMessages_2afa36052df4765d] = env->getMethodID(cls, "getBDGIMMessages", "()Ljava/util/List;");
              mids$[mid_getBeidouCivilianNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouCivilianNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getBeidouLegacyNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouLegacyNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getEarthOrientationParameters_2afa36052df4765d] = env->getMethodID(cls, "getEarthOrientationParameters", "()Ljava/util/List;");
              mids$[mid_getGPSCivilianNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSCivilianNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGPSLegacyNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSLegacyNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGalileoNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getGalileoNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGalileoNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getGalileoNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGlonassNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getGlonassNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGlonassNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getGlonassNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getIRNSSNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getIRNSSNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getIRNSSNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getIRNSSNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getKlobucharAlpha_60c7040667a7dc5c] = env->getMethodID(cls, "getKlobucharAlpha", "()[D");
              mids$[mid_getKlobucharBeta_60c7040667a7dc5c] = env->getMethodID(cls, "getKlobucharBeta", "()[D");
              mids$[mid_getKlobucharMessages_2afa36052df4765d] = env->getMethodID(cls, "getKlobucharMessages", "()Ljava/util/List;");
              mids$[mid_getNeQuickAlpha_60c7040667a7dc5c] = env->getMethodID(cls, "getNeQuickAlpha", "()[D");
              mids$[mid_getNequickGMessages_2afa36052df4765d] = env->getMethodID(cls, "getNequickGMessages", "()Ljava/util/List;");
              mids$[mid_getQZSSCivilianNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSCivilianNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getQZSSLegacyNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSLegacyNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSBASNavigationMessages_6f5a75ccd8c04465] = env->getMethodID(cls, "getSBASNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getSBASNavigationMessages_aade4ea8882e7a2c] = env->getMethodID(cls, "getSBASNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSystemTimeOffsets_2afa36052df4765d] = env->getMethodID(cls, "getSystemTimeOffsets", "()Ljava/util/List;");
              mids$[mid_setKlobucharAlpha_fa9d415d19f69361] = env->getMethodID(cls, "setKlobucharAlpha", "([D)V");
              mids$[mid_setKlobucharBeta_fa9d415d19f69361] = env->getMethodID(cls, "setKlobucharBeta", "([D)V");
              mids$[mid_setNeQuickAlpha_fa9d415d19f69361] = env->getMethodID(cls, "setNeQuickAlpha", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigation::RinexNavigation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void RinexNavigation::addBDGIMMessage(const ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBDGIMMessage_6db30441c35d6fb7], a0.this$);
          }

          void RinexNavigation::addBeidouCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouCivilianNavigationMessage_6a3700b4f65d21b8], a0.this$);
          }

          void RinexNavigation::addBeidouLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouLegacyNavigationMessage_68d319561ad57af5], a0.this$);
          }

          void RinexNavigation::addEarthOrientationParameter(const ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addEarthOrientationParameter_b13bf812cc8c3997], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_8e193a05a4675db9], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_16aa3ee67a4aead2], a0.this$);
          }

          void RinexNavigation::addGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGalileoNavigationMessage_4a80ac1fbe917041], a0.this$);
          }

          void RinexNavigation::addGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassNavigationMessage_03382bf5f212b94b], a0.this$);
          }

          void RinexNavigation::addIRNSSNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addIRNSSNavigationMessage_17e1d776ff5f1ae7], a0.this$);
          }

          void RinexNavigation::addKlobucharMessage(const ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addKlobucharMessage_e2f6e204ebbd1a99], a0.this$);
          }

          void RinexNavigation::addNequickGMessage(const ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addNequickGMessage_da1804d087bca47e], a0.this$);
          }

          void RinexNavigation::addQZSSCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSCivilianNavigationMessage_2c9642098f9593c6], a0.this$);
          }

          void RinexNavigation::addQZSSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSLegacyNavigationMessage_ee4b9dd29db0df25], a0.this$);
          }

          void RinexNavigation::addSBASNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSBASNavigationMessage_d0cb5c4df227efb9], a0.this$);
          }

          void RinexNavigation::addSystemTimeOffset(const ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemTimeOffset_eb8e31ddda72aa89], a0.this$);
          }

          ::java::util::List RinexNavigation::getBDGIMMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBDGIMMessages_2afa36052df4765d]));
          }

          ::java::util::Map RinexNavigation::getBeidouCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getBeidouCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::Map RinexNavigation::getBeidouLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getBeidouLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::List RinexNavigation::getEarthOrientationParameters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEarthOrientationParameters_2afa36052df4765d]));
          }

          ::java::util::Map RinexNavigation::getGPSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getGPSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGPSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getGPSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGalileoNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getGalileoNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGlonassNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getGlonassNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::Map RinexNavigation::getIRNSSNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getIRNSSNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          JArray< jdouble > RinexNavigation::getKlobucharAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharAlpha_60c7040667a7dc5c]));
          }

          JArray< jdouble > RinexNavigation::getKlobucharBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharBeta_60c7040667a7dc5c]));
          }

          ::java::util::List RinexNavigation::getKlobucharMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getKlobucharMessages_2afa36052df4765d]));
          }

          JArray< jdouble > RinexNavigation::getNeQuickAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNeQuickAlpha_60c7040667a7dc5c]));
          }

          ::java::util::List RinexNavigation::getNequickGMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNequickGMessages_2afa36052df4765d]));
          }

          ::java::util::Map RinexNavigation::getQZSSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getQZSSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::Map RinexNavigation::getQZSSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getQZSSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::Map RinexNavigation::getSBASNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexNavigation::getSBASNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_aade4ea8882e7a2c], a0.this$));
          }

          ::java::util::List RinexNavigation::getSystemTimeOffsets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemTimeOffsets_2afa36052df4765d]));
          }

          void RinexNavigation::setKlobucharAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharAlpha_fa9d415d19f69361], a0.this$);
          }

          void RinexNavigation::setKlobucharBeta(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharBeta_fa9d415d19f69361], a0.this$);
          }

          void RinexNavigation::setNeQuickAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNeQuickAlpha_fa9d415d19f69361], a0.this$);
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
        namespace navigation {
          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args);
          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data);
          static PyGetSetDef t_RinexNavigation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexNavigation, bDGIMMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, earthOrientationParameters),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, galileoNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, glonassNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, iRNSSNavigationMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharAlpha),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharBeta),
            DECLARE_GET_FIELD(t_RinexNavigation, klobucharMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, neQuickAlpha),
            DECLARE_GET_FIELD(t_RinexNavigation, nequickGMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, sBASNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, systemTimeOffsets),
            DECLARE_GET_FIELD(t_RinexNavigation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigation__methods_[] = {
            DECLARE_METHOD(t_RinexNavigation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addBDGIMMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addEarthOrientationParameter, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGPSLegacyNavigationMessage, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addGalileoNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGlonassNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addIRNSSNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addKlobucharMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addNequickGMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSBASNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSystemTimeOffset, METH_O),
            DECLARE_METHOD(t_RinexNavigation, getBDGIMMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getEarthOrientationParameters, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGalileoNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGlonassNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getIRNSSNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharBeta, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNeQuickAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNequickGMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSBASNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSystemTimeOffsets, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharAlpha, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharBeta, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setNeQuickAlpha, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigation)[] = {
            { Py_tp_methods, t_RinexNavigation__methods_ },
            { Py_tp_init, (void *) t_RinexNavigation_init_ },
            { Py_tp_getset, t_RinexNavigation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexNavigation, t_RinexNavigation, RinexNavigation);
          PyObject *t_RinexNavigation::wrap_Object(const RinexNavigation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexNavigation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexNavigation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigation), &PY_TYPE_DEF(RinexNavigation), module, "RinexNavigation", 0);
          }

          void t_RinexNavigation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "class_", make_descriptor(RinexNavigation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "wrapfn_", make_descriptor(t_RinexNavigation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigation::initializeClass, 1)))
              return NULL;
            return t_RinexNavigation::wrap_Object(RinexNavigation(((t_RinexNavigation *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigation object((jobject) NULL);

            INT_CALL(object = RinexNavigation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::navigation::PY_TYPE(RinexNavigationHeader);

            return 0;
          }

          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBDGIMMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBDGIMMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addEarthOrientationParameter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addEarthOrientationParameter", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addGPSLegacyNavigationMessage", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGalileoNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGalileoNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addIRNSSNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addIRNSSNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addKlobucharMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addKlobucharMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addNequickGMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addNequickGMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSBASNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSBASNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSystemTimeOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemTimeOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereBDGIMMessage));
          }

          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(EarthOrientationParameterMessage));
          }

          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGalileoNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGalileoNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GalileoNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGlonassNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGlonassNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GLONASSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getIRNSSNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getIRNSSNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(IRNSSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIRNSSNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharBeta());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereKlobucharMessage));
          }

          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNeQuickAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereNequickGMessage));
          }

          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSBASNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getSBASNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(SBASNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getSBASNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(SystemTimeOffsetMessage));
          }

          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharAlpha", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharBeta(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharBeta", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setNeQuickAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNeQuickAlpha", arg);
            return NULL;
          }
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGalileoNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getIRNSSNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharBeta());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharBeta(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharBeta", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNeQuickAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setNeQuickAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "neQuickAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ArrayList.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/util/RandomAccess.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayList::class$ = NULL;
    jmethodID *ArrayList::mids$ = NULL;
    bool ArrayList::live$ = false;

    jclass ArrayList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_995c97fe5efb1d1d] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_0f52bd5f96ddfd17] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_ensureCapacity_99803b0791f320ff] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_7bdc0f15e68705e0] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_90eb61a0d5cc5e34] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_90eb61a0d5cc5e34] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_13ec0a4b5149ed65] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_167e5f47f86d3143] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_7bdc0f15e68705e0] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_17e918edc999b3c7] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_17e918edc999b3c7] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_c594b4c2255fa9ec] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_aba33752f2449599] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_10d7c0f6de166543] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_b93c730013ce64c6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_72bb572e6638b43f] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_trimToSize_0fa09c18fee449d5] = env->getMethodID(cls, "trimToSize", "()V");
        mids$[mid_removeRange_6f37635c3285dbdf] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayList::ArrayList() : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    ArrayList::ArrayList(jint a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    ArrayList::ArrayList(const ::java::util::Collection & a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

    jboolean ArrayList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    void ArrayList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_995c97fe5efb1d1d], a0, a1.this$);
    }

    jboolean ArrayList::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    jboolean ArrayList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_0f52bd5f96ddfd17], a0, a1.this$);
    }

    void ArrayList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    ::java::lang::Object ArrayList::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean ArrayList::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    void ArrayList::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_99803b0791f320ff], a0);
    }

    jboolean ArrayList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object ArrayList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_7bdc0f15e68705e0], a0));
    }

    jint ArrayList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint ArrayList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_90eb61a0d5cc5e34], a0.this$);
    }

    jboolean ArrayList::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator ArrayList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    jint ArrayList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_90eb61a0d5cc5e34], a0.this$);
    }

    ::java::util::ListIterator ArrayList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_13ec0a4b5149ed65]));
    }

    ::java::util::ListIterator ArrayList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_167e5f47f86d3143], a0));
    }

    ::java::lang::Object ArrayList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_7bdc0f15e68705e0], a0));
    }

    jboolean ArrayList::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jboolean ArrayList::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_17e918edc999b3c7], a0.this$);
    }

    jboolean ArrayList::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_17e918edc999b3c7], a0.this$);
    }

    ::java::lang::Object ArrayList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_c594b4c2255fa9ec], a0, a1.this$));
    }

    jint ArrayList::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    void ArrayList::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_aba33752f2449599], a0.this$);
    }

    ::java::util::Spliterator ArrayList::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }

    ::java::util::List ArrayList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_10d7c0f6de166543], a0, a1));
    }

    JArray< ::java::lang::Object > ArrayList::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_b93c730013ce64c6]));
    }

    JArray< ::java::lang::Object > ArrayList::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_72bb572e6638b43f], a0.this$));
    }

    void ArrayList::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_0fa09c18fee449d5]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args);
    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clone(t_ArrayList *self);
    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg);
    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self);
    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data);
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data);
    static PyGetSetDef t_ArrayList__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayList, empty),
      DECLARE_GET_FIELD(t_ArrayList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayList__methods_[] = {
      DECLARE_METHOD(t_ArrayList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayList, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, ensureCapacity, METH_O),
      DECLARE_METHOD(t_ArrayList, equals, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, get, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, set, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, sort, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, subList, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, toArray, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, trimToSize, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayList)[] = {
      { Py_tp_methods, t_ArrayList__methods_ },
      { Py_tp_init, (void *) t_ArrayList_init_ },
      { Py_tp_getset, t_ArrayList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayList *)) get_generic_iterator< t_ArrayList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractList),
      NULL
    };

    DEFINE_TYPE(ArrayList, t_ArrayList, ArrayList);
    PyObject *t_ArrayList::wrap_Object(const ArrayList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayList::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayList), &PY_TYPE_DEF(ArrayList), module, "ArrayList", 0);
    }

    void t_ArrayList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "class_", make_descriptor(ArrayList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "wrapfn_", make_descriptor(t_ArrayList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayList::initializeClass, 1)))
        return NULL;
      return t_ArrayList::wrap_Object(ArrayList(((t_ArrayList *) arg)->object.this$));
    }
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayList object((jobject) NULL);

          INT_CALL(object = ArrayList());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayList(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayList(a0));
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

    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayList_clone(t_ArrayList *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ensureCapacity", arg);
      return NULL;
    }

    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "listIterator", args, 2);
    }

    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "set", args, 2);
    }

    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "sort", args, 2);
    }

    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "subList", args, 2);
    }

    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "toArray", args, 2);
    }

    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self)
    {
      OBJ_CALL(self->object.trimToSize());
      Py_RETURN_NONE;
    }
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeriesParser::class$ = NULL;
      jmethodID *PoissonSeriesParser::mids$ = NULL;
      bool PoissonSeriesParser::live$ = false;

      jclass PoissonSeriesParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeriesParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_parse_86004db4ac2d5290] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Lorg/orekit/data/PoissonSeries;");
          mids$[mid_withDoodson_ab9b99d60dd9b017] = env->getMethodID(cls, "withDoodson", "(II)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstDelaunay_bad66f92d0f51d88] = env->getMethodID(cls, "withFirstDelaunay", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstPlanetary_bad66f92d0f51d88] = env->getMethodID(cls, "withFirstPlanetary", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withGamma_bad66f92d0f51d88] = env->getMethodID(cls, "withGamma", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withOptionalColumn_bad66f92d0f51d88] = env->getMethodID(cls, "withOptionalColumn", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withPolynomialPart_3768b074dfce1760] = env->getMethodID(cls, "withPolynomialPart", "(CLorg/orekit/data/PolynomialParser$Unit;)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withSinCos_fda9e5d057f7bd8a] = env->getMethodID(cls, "withSinCos", "(IIDID)Lorg/orekit/data/PoissonSeriesParser;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeriesParser::PoissonSeriesParser(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      ::org::orekit::data::PoissonSeries PoissonSeriesParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::data::PoissonSeries(env->callObjectMethod(this$, mids$[mid_parse_86004db4ac2d5290], a0.this$, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withDoodson(jint a0, jint a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withDoodson_ab9b99d60dd9b017], a0, a1));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstDelaunay(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstDelaunay_bad66f92d0f51d88], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstPlanetary(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstPlanetary_bad66f92d0f51d88], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withGamma(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withGamma_bad66f92d0f51d88], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withOptionalColumn(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withOptionalColumn_bad66f92d0f51d88], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withPolynomialPart(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withPolynomialPart_3768b074dfce1760], a0, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withSinCos(jint a0, jint a1, jdouble a2, jint a3, jdouble a4) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withSinCos_fda9e5d057f7bd8a], a0, a1, a2, a3, a4));
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
      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args);

      static PyMethodDef t_PoissonSeriesParser__methods_[] = {
        DECLARE_METHOD(t_PoissonSeriesParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, parse, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withDoodson, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstDelaunay, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstPlanetary, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withGamma, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withOptionalColumn, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withPolynomialPart, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withSinCos, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeriesParser)[] = {
        { Py_tp_methods, t_PoissonSeriesParser__methods_ },
        { Py_tp_init, (void *) t_PoissonSeriesParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeriesParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeriesParser, t_PoissonSeriesParser, PoissonSeriesParser);

      void t_PoissonSeriesParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeriesParser), &PY_TYPE_DEF(PoissonSeriesParser), module, "PoissonSeriesParser", 0);
      }

      void t_PoissonSeriesParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "class_", make_descriptor(PoissonSeriesParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "wrapfn_", make_descriptor(t_PoissonSeriesParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeriesParser::initializeClass, 1)))
          return NULL;
        return t_PoissonSeriesParser::wrap_Object(PoissonSeriesParser(((t_PoissonSeriesParser *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeriesParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        PoissonSeriesParser object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = PoissonSeriesParser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::data::PoissonSeries result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::orekit::data::t_PoissonSeries::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.withDoodson(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withDoodson", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstDelaunay(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstDelaunay", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstPlanetary(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstPlanetary", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withGamma(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withGamma", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withOptionalColumn(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withOptionalColumn", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          OBJ_CALL(result = self->object.withPolynomialPart(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withPolynomialPart", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jint a3;
        jdouble a4;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "IIDID", &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.withSinCos(a0, a1, a2, a3, a4));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withSinCos", args);
        return NULL;
      }
    }
  }
}
