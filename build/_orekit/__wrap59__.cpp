#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/UniformRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *UniformRealDistribution::class$ = NULL;
        jmethodID *UniformRealDistribution::mids$ = NULL;
        bool UniformRealDistribution::live$ = false;

        jclass UniformRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/UniformRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformRealDistribution::UniformRealDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        UniformRealDistribution::UniformRealDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble UniformRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble UniformRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble UniformRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble UniformRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble UniformRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble UniformRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble UniformRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean UniformRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args);
        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data);
        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data);
        static PyGetSetDef t_UniformRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformRealDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformRealDistribution)[] = {
          { Py_tp_methods, t_UniformRealDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformRealDistribution_init_ },
          { Py_tp_getset, t_UniformRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(UniformRealDistribution, t_UniformRealDistribution, UniformRealDistribution);

        void t_UniformRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformRealDistribution), &PY_TYPE_DEF(UniformRealDistribution), module, "UniformRealDistribution", 0);
        }

        void t_UniformRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "class_", make_descriptor(UniformRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "wrapfn_", make_descriptor(t_UniformRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformRealDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformRealDistribution::wrap_Object(UniformRealDistribution(((t_UniformRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformRealDistribution_init_(t_UniformRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              UniformRealDistribution object((jobject) NULL);

              INT_CALL(object = UniformRealDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UniformRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UniformRealDistribution(a0, a1));
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

        static PyObject *t_UniformRealDistribution_cumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_density(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalMean(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getNumericalVariance(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportLowerBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_getSupportUpperBound(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformRealDistribution_inverseCumulativeProbability(t_UniformRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_UniformRealDistribution_isSupportConnected(t_UniformRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformRealDistribution_get__numericalMean(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__numericalVariance(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportConnected(t_UniformRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformRealDistribution_get__supportLowerBound(t_UniformRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformRealDistribution_get__supportUpperBound(t_UniformRealDistribution *self, void *data)
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
#include "org/hipparchus/stat/inference/WilcoxonSignedRankTest.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *WilcoxonSignedRankTest::class$ = NULL;
        jmethodID *WilcoxonSignedRankTest::mids$ = NULL;
        bool WilcoxonSignedRankTest::live$ = false;

        jclass WilcoxonSignedRankTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/WilcoxonSignedRankTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_30686433a7523e33] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_wilcoxonSignedRank_1ce76fb6ff382da9] = env->getMethodID(cls, "wilcoxonSignedRank", "([D[D)D");
            mids$[mid_wilcoxonSignedRankTest_6379f5334de861c2] = env->getMethodID(cls, "wilcoxonSignedRankTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WilcoxonSignedRankTest::WilcoxonSignedRankTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        WilcoxonSignedRankTest::WilcoxonSignedRankTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30686433a7523e33, a0.this$, a1.this$)) {}

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRank(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRank_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRankTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRankTest_6379f5334de861c2], a0.this$, a1.this$, a2);
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
        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args);

        static PyMethodDef t_WilcoxonSignedRankTest__methods_[] = {
          DECLARE_METHOD(t_WilcoxonSignedRankTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRank, METH_VARARGS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRankTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WilcoxonSignedRankTest)[] = {
          { Py_tp_methods, t_WilcoxonSignedRankTest__methods_ },
          { Py_tp_init, (void *) t_WilcoxonSignedRankTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WilcoxonSignedRankTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WilcoxonSignedRankTest, t_WilcoxonSignedRankTest, WilcoxonSignedRankTest);

        void t_WilcoxonSignedRankTest::install(PyObject *module)
        {
          installType(&PY_TYPE(WilcoxonSignedRankTest), &PY_TYPE_DEF(WilcoxonSignedRankTest), module, "WilcoxonSignedRankTest", 0);
        }

        void t_WilcoxonSignedRankTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "class_", make_descriptor(WilcoxonSignedRankTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "wrapfn_", make_descriptor(t_WilcoxonSignedRankTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WilcoxonSignedRankTest::initializeClass, 1)))
            return NULL;
          return t_WilcoxonSignedRankTest::wrap_Object(WilcoxonSignedRankTest(((t_WilcoxonSignedRankTest *) arg)->object.this$));
        }
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WilcoxonSignedRankTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              WilcoxonSignedRankTest object((jobject) NULL);

              INT_CALL(object = WilcoxonSignedRankTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              WilcoxonSignedRankTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = WilcoxonSignedRankTest(a0, a1));
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

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRank(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRank", args);
          return NULL;
        }

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jdouble result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRankTest(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRankTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerMode::class$ = NULL;
        jmethodID *StepNormalizerMode::mids$ = NULL;
        bool StepNormalizerMode::live$ = false;
        StepNormalizerMode *StepNormalizerMode::INCREMENT = NULL;
        StepNormalizerMode *StepNormalizerMode::MULTIPLES = NULL;

        jclass StepNormalizerMode::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerMode");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_582fe1e7e7ab4d53] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerMode;");
            mids$[mid_values_c855f4e7f5f94038] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerMode;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INCREMENT = new StepNormalizerMode(env->getStaticObjectField(cls, "INCREMENT", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            MULTIPLES = new StepNormalizerMode(env->getStaticObjectField(cls, "MULTIPLES", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizerMode StepNormalizerMode::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_582fe1e7e7ab4d53], a0.this$));
        }

        JArray< StepNormalizerMode > StepNormalizerMode::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerMode >(env->callStaticObjectMethod(cls, mids$[mid_values_c855f4e7f5f94038]));
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
      namespace sampling {
        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args);
        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data);
        static PyGetSetDef t_StepNormalizerMode__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerMode, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerMode__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerMode, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerMode, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerMode)[] = {
          { Py_tp_methods, t_StepNormalizerMode__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerMode__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerMode)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerMode, t_StepNormalizerMode, StepNormalizerMode);
        PyObject *t_StepNormalizerMode::wrap_Object(const StepNormalizerMode& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerMode::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerMode), &PY_TYPE_DEF(StepNormalizerMode), module, "StepNormalizerMode", 0);
        }

        void t_StepNormalizerMode::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "class_", make_descriptor(StepNormalizerMode::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "wrapfn_", make_descriptor(t_StepNormalizerMode::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerMode::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "INCREMENT", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::INCREMENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "MULTIPLES", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::MULTIPLES)));
        }

        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerMode::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerMode::wrap_Object(StepNormalizerMode(((t_StepNormalizerMode *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerMode::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerMode result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::valueOf(a0));
            return t_StepNormalizerMode::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type)
        {
          JArray< StepNormalizerMode > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerMode::wrap_jobject);
        }
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonDiscreteTroposphericModel::class$ = NULL;
          jmethodID *PythonDiscreteTroposphericModel::mids$ = NULL;
          bool PythonDiscreteTroposphericModel::live$ = false;

          jclass PythonDiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_7cdc325af0834901] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_62f3dd52a41b90da] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDiscreteTroposphericModel::PythonDiscreteTroposphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonDiscreteTroposphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonDiscreteTroposphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonDiscreteTroposphericModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self);
          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3);
          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data);
          static PyGetSetDef t_PythonDiscreteTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDiscreteTroposphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_PythonDiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonDiscreteTroposphericModel_init_ },
            { Py_tp_getset, t_PythonDiscreteTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDiscreteTroposphericModel, t_PythonDiscreteTroposphericModel, PythonDiscreteTroposphericModel);

          void t_PythonDiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDiscreteTroposphericModel), &PY_TYPE_DEF(PythonDiscreteTroposphericModel), module, "PythonDiscreteTroposphericModel", 1);
          }

          void t_PythonDiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "class_", make_descriptor(PythonDiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "wrapfn_", make_descriptor(t_PythonDiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDiscreteTroposphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonDiscreteTroposphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDiscreteTroposphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_pathDelay3 },
              { "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDiscreteTroposphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonDiscreteTroposphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonDiscreteTroposphericModel::wrap_Object(PythonDiscreteTroposphericModel(((t_PythonDiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonDiscreteTroposphericModel object((jobject) NULL);

            INT_CALL(object = PythonDiscreteTroposphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_a27fc9afd27e559d]);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOOO", o0, o1, o2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "dOOO", (double) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06::class$ = NULL;
              jmethodID *SsrIgm06::mids$ = NULL;
              bool SsrIgm06::live$ = false;

              jclass SsrIgm06::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_dbd9f43f0dd274c7] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm06Data_d6753b7055940a54] = env->getMethodID(cls, "getSsrIgm06Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06::SsrIgm06(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_dbd9f43f0dd274c7, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm06::getSsrIgm06Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm06Data_d6753b7055940a54]));
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
              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args);
              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self);
              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data);
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data);
              static PyGetSetDef t_SsrIgm06__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06, ssrIgm06Data),
                DECLARE_GET_FIELD(t_SsrIgm06, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm06, getSsrIgm06Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06)[] = {
                { Py_tp_methods, t_SsrIgm06__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06_init_ },
                { Py_tp_getset, t_SsrIgm06__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm06, t_SsrIgm06, SsrIgm06);
              PyObject *t_SsrIgm06::wrap_Object(const SsrIgm06& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm06::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm06::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm06 *self = (t_SsrIgm06 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm06::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06), &PY_TYPE_DEF(SsrIgm06), module, "SsrIgm06", 0);
              }

              void t_SsrIgm06::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "class_", make_descriptor(SsrIgm06::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "wrapfn_", make_descriptor(t_SsrIgm06::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06::wrap_Object(SsrIgm06(((t_SsrIgm06 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm06_of_(t_SsrIgm06 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm06_init_(t_SsrIgm06 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm06 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm06Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm06(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm06Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm06_getSsrIgm06Data(t_SsrIgm06 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm06_get__parameters_(t_SsrIgm06 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm06_get__ssrIgm06Data(t_SsrIgm06 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm06Data());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/hipparchus/analysis/function/Sqrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sqrt::class$ = NULL;
        jmethodID *Sqrt::mids$ = NULL;
        bool Sqrt::live$ = false;

        jclass Sqrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sqrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sqrt::Sqrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Sqrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sqrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args);

        static PyMethodDef t_Sqrt__methods_[] = {
          DECLARE_METHOD(t_Sqrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sqrt)[] = {
          { Py_tp_methods, t_Sqrt__methods_ },
          { Py_tp_init, (void *) t_Sqrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sqrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sqrt, t_Sqrt, Sqrt);

        void t_Sqrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Sqrt), &PY_TYPE_DEF(Sqrt), module, "Sqrt", 0);
        }

        void t_Sqrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "class_", make_descriptor(Sqrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "wrapfn_", make_descriptor(t_Sqrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sqrt::initializeClass, 1)))
            return NULL;
          return t_Sqrt::wrap_Object(Sqrt(((t_Sqrt *) arg)->object.this$));
        }
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sqrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds)
        {
          Sqrt object((jobject) NULL);

          INT_CALL(object = Sqrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args)
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
#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "java/io/Serializable.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_inverseCumulativeProbability_12ebab281ee35c98] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_a84e4ee1da3f1ab8] = env->getMethodID(cls, "probability", "(II)D");
            mids$[mid_solveInverseCumulativeProbability_c23b9a4409f2aa55] = env->getMethodID(cls, "solveInverseCumulativeProbability", "(DII)I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractIntegerDistribution::AbstractIntegerDistribution() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jint AbstractIntegerDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_12ebab281ee35c98], a0);
        }

        jdouble AbstractIntegerDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
        }

        jdouble AbstractIntegerDistribution::probability(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_a84e4ee1da3f1ab8], a0, a1);
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
#include "org/orekit/frames/encounter/PythonAbstractEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonAbstractEncounterLOF::class$ = NULL;
        jmethodID *PythonAbstractEncounterLOF::mids$ = NULL;
        bool PythonAbstractEncounterLOF::live$ = false;

        jclass PythonAbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonAbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d12117948cc23ea0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_891f682396b75876] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0483676d141ad17c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractEncounterLOF::PythonAbstractEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_d12117948cc23ea0, a0.this$)) {}

        void PythonAbstractEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractEncounterLOF::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self);
        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonAbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncounterLOF)[] = {
          { Py_tp_methods, t_PythonAbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractEncounterLOF_init_ },
          { Py_tp_getset, t_PythonAbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(PythonAbstractEncounterLOF, t_PythonAbstractEncounterLOF, PythonAbstractEncounterLOF);

        void t_PythonAbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractEncounterLOF), &PY_TYPE_DEF(PythonAbstractEncounterLOF), module, "PythonAbstractEncounterLOF", 1);
        }

        void t_PythonAbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "class_", make_descriptor(PythonAbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "wrapfn_", make_descriptor(t_PythonAbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAbstractEncounterLOF_getName2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractEncounterLOF_pythonDecRef3 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial4 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractEncounterLOF::wrap_Object(PythonAbstractEncounterLOF(((t_PythonAbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
          PythonAbstractEncounterLOF object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractEncounterLOF(a0));
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

        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
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

        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
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

        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionData::class$ = NULL;
              jmethodID *RtcmCorrectionData::mids$ = NULL;
              bool RtcmCorrectionData::live$ = false;

              jclass RtcmCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_0a2a1ac2721c0336] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionData::RtcmCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint RtcmCorrectionData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_f2f64475e4580546]);
              }

              void RtcmCorrectionData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_0a2a1ac2721c0336], a0);
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
            namespace correction {
              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self);
              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data);
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionData, t_RtcmCorrectionData, RtcmCorrectionData);

              void t_RtcmCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionData), &PY_TYPE_DEF(RtcmCorrectionData), module, "RtcmCorrectionData", 0);
              }

              void t_RtcmCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "class_", make_descriptor(RtcmCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "wrapfn_", make_descriptor(t_RtcmCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionData::wrap_Object(RtcmCorrectionData(((t_RtcmCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data)
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
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolatingFunction::class$ = NULL;
        jmethodID *TricubicInterpolatingFunction::mids$ = NULL;
        bool TricubicInterpolatingFunction::live$ = false;

        jclass TricubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8584523d218827f9] = env->getMethodID(cls, "<init>", "([D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D)V");
            mids$[mid_isValidPoint_15ea3a7b52896f96] = env->getMethodID(cls, "isValidPoint", "(DDD)Z");
            mids$[mid_value_c564d6ace53a5934] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolatingFunction::TricubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3, const JArray< JArray< JArray< jdouble > > > & a4, const JArray< JArray< JArray< jdouble > > > & a5, const JArray< JArray< JArray< jdouble > > > & a6, const JArray< JArray< JArray< jdouble > > > & a7, const JArray< JArray< JArray< jdouble > > > & a8, const JArray< JArray< JArray< jdouble > > > & a9, const JArray< JArray< JArray< jdouble > > > & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8584523d218827f9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$)) {}

        jboolean TricubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_15ea3a7b52896f96], a0, a1, a2);
        }

        jdouble TricubicInterpolatingFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_c564d6ace53a5934], a0, a1, a2);
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
        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_TricubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolatingFunction, t_TricubicInterpolatingFunction, TricubicInterpolatingFunction);

        void t_TricubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolatingFunction), &PY_TYPE_DEF(TricubicInterpolatingFunction), module, "TricubicInterpolatingFunction", 0);
        }

        void t_TricubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "class_", make_descriptor(TricubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "wrapfn_", make_descriptor(t_TricubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolatingFunction::wrap_Object(TricubicInterpolatingFunction(((t_TricubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a4((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a5((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a6((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a7((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a8((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a9((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a10((jobject) NULL);
          TricubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
          {
            INT_CALL(object = TricubicInterpolatingFunction(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
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
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *InterSatDirectViewDetector::class$ = NULL;
        jmethodID *InterSatDirectViewDetector::mids$ = NULL;
        bool InterSatDirectViewDetector::live$ = false;

        jclass InterSatDirectViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/InterSatDirectViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2914d3f2dff5be5b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getCentralBody_940814a1dcab100a] = env->getMethodID(cls, "getCentralBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getSecondary_7044cb1966c8a481] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getSkimmingAltitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getSkimmingAltitude", "()D");
            mids$[mid_withSkimmingAltitude_683ec414e5815668] = env->getMethodID(cls, "withSkimmingAltitude", "(D)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");
            mids$[mid_create_efcd54409f078844] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatDirectViewDetector::InterSatDirectViewDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2914d3f2dff5be5b, a0.this$, a1.this$)) {}

        jdouble InterSatDirectViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid InterSatDirectViewDetector::getCentralBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getCentralBody_940814a1dcab100a]));
        }

        ::org::orekit::utils::PVCoordinatesProvider InterSatDirectViewDetector::getSecondary() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondary_7044cb1966c8a481]));
        }

        jdouble InterSatDirectViewDetector::getSkimmingAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkimmingAltitude_456d9a2f64d6b28d]);
        }

        InterSatDirectViewDetector InterSatDirectViewDetector::withSkimmingAltitude(jdouble a0) const
        {
          return InterSatDirectViewDetector(env->callObjectMethod(this$, mids$[mid_withSkimmingAltitude_683ec414e5815668], a0));
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
        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args);
        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args);
        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data);
        static PyGetSetDef t_InterSatDirectViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, centralBody),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, secondary),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, skimmingAltitude),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatDirectViewDetector__methods_[] = {
          DECLARE_METHOD(t_InterSatDirectViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getCentralBody, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSecondary, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSkimmingAltitude, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, withSkimmingAltitude, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatDirectViewDetector)[] = {
          { Py_tp_methods, t_InterSatDirectViewDetector__methods_ },
          { Py_tp_init, (void *) t_InterSatDirectViewDetector_init_ },
          { Py_tp_getset, t_InterSatDirectViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatDirectViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(InterSatDirectViewDetector, t_InterSatDirectViewDetector, InterSatDirectViewDetector);
        PyObject *t_InterSatDirectViewDetector::wrap_Object(const InterSatDirectViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatDirectViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatDirectViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatDirectViewDetector), &PY_TYPE_DEF(InterSatDirectViewDetector), module, "InterSatDirectViewDetector", 0);
        }

        void t_InterSatDirectViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "class_", make_descriptor(InterSatDirectViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "wrapfn_", make_descriptor(t_InterSatDirectViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatDirectViewDetector::initializeClass, 1)))
            return NULL;
          return t_InterSatDirectViewDetector::wrap_Object(InterSatDirectViewDetector(((t_InterSatDirectViewDetector *) arg)->object.this$));
        }
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatDirectViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          InterSatDirectViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InterSatDirectViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(InterSatDirectViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(InterSatDirectViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg)
        {
          jdouble a0;
          InterSatDirectViewDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withSkimmingAltitude(a0));
            return t_InterSatDirectViewDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSkimmingAltitude", arg);
          return NULL;
        }
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseBuilder::class$ = NULL;
          jmethodID *PhaseBuilder::mids$ = NULL;
          bool PhaseBuilder::live$ = false;

          jclass PhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_39cf2739712e67a3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_7b0873745b28da65] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/Phase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseBuilder::PhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_39cf2739712e67a3, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::gnss::Phase PhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::Phase(env->callObjectMethod(this$, mids$[mid_build_7b0873745b28da65], a0.this$, a1.this$));
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
          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args);
          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args);
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data);
          static PyGetSetDef t_PhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_PhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseBuilder)[] = {
            { Py_tp_methods, t_PhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_PhaseBuilder_init_ },
            { Py_tp_getset, t_PhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PhaseBuilder, t_PhaseBuilder, PhaseBuilder);
          PyObject *t_PhaseBuilder::wrap_Object(const PhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseBuilder), &PY_TYPE_DEF(PhaseBuilder), module, "PhaseBuilder", 0);
          }

          void t_PhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "class_", make_descriptor(PhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "wrapfn_", make_descriptor(t_PhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_PhaseBuilder::wrap_Object(PhaseBuilder(((t_PhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            PhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::Phase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_Phase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data)
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
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator$DifferentialEffect::class$ = NULL;
        jmethodID *AdapterPropagator$DifferentialEffect::mids$ = NULL;
        bool AdapterPropagator$DifferentialEffect::live$ = false;

        jclass AdapterPropagator$DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_81fc6fb6078d2aa7] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator$DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_81fc6fb6078d2aa7], a0.this$));
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
        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg);

        static PyMethodDef t_AdapterPropagator$DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, apply, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator$DifferentialEffect)[] = {
          { Py_tp_methods, t_AdapterPropagator$DifferentialEffect__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator$DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator$DifferentialEffect, t_AdapterPropagator$DifferentialEffect, AdapterPropagator$DifferentialEffect);

        void t_AdapterPropagator$DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator$DifferentialEffect), &PY_TYPE_DEF(AdapterPropagator$DifferentialEffect), module, "AdapterPropagator$DifferentialEffect", 0);
        }

        void t_AdapterPropagator$DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "class_", make_descriptor(AdapterPropagator$DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "wrapfn_", make_descriptor(t_AdapterPropagator$DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator$DifferentialEffect::wrap_Object(AdapterPropagator$DifferentialEffect(((t_AdapterPropagator$DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovariance::class$ = NULL;
            jmethodID *CartesianCovariance::mids$ = NULL;
            bool CartesianCovariance::live$ = false;

            jclass CartesianCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_79e8f9691be69c80] = env->getMethodID(cls, "<init>", "(Ljava/util/function/Supplier;)V");
                mids$[mid_getCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCovarianceMatrixEntry_78e41e7b5124a628] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovariance::CartesianCovariance(const ::java::util::function::Supplier & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_79e8f9691be69c80, a0.this$)) {}

            ::org::hipparchus::linear::RealMatrix CartesianCovariance::getCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_7116bbecdd8ceb21]));
            }

            ::org::orekit::time::AbsoluteDate CartesianCovariance::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CartesianCovariance::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_aa70fdb14ae9305f]));
            }

            void CartesianCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_78e41e7b5124a628], a0, a1, a2);
            }

            void CartesianCovariance::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_e82d68cd9f886886], a0.this$);
            }

            void CartesianCovariance::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_a455f3ff24eb0b47], a0.this$);
            }

            void CartesianCovariance::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data);
            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_CartesianCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovariance, covarianceMatrix),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, epoch),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovariance__methods_[] = {
              DECLARE_METHOD(t_CartesianCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, getCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovariance, setEpoch, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovariance)[] = {
              { Py_tp_methods, t_CartesianCovariance__methods_ },
              { Py_tp_init, (void *) t_CartesianCovariance_init_ },
              { Py_tp_getset, t_CartesianCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(CartesianCovariance, t_CartesianCovariance, CartesianCovariance);

            void t_CartesianCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovariance), &PY_TYPE_DEF(CartesianCovariance), module, "CartesianCovariance", 0);
            }

            void t_CartesianCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "class_", make_descriptor(CartesianCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "wrapfn_", make_descriptor(t_CartesianCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovariance::initializeClass, 1)))
                return NULL;
              return t_CartesianCovariance::wrap_Object(CartesianCovariance(((t_CartesianCovariance *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds)
            {
              ::java::util::function::Supplier a0((jobject) NULL);
              PyTypeObject **p0;
              CartesianCovariance object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
              {
                INT_CALL(object = CartesianCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CartesianCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epoch", arg);
              return -1;
            }

            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
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
#include "org/orekit/errors/LocalizedException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Transform.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Transform::class$ = NULL;
      jmethodID *Transform::mids$ = NULL;
      bool Transform::live$ = false;
      Transform *Transform::IDENTITY = NULL;

      jclass Transform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Transform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3775f4d7e276e33] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_4fd2c20d73afc943] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_481a03094e80c723] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_941d8dc495969cee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_de98e3d58f8ed0c5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_1f308a96dce4eb31] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ed94cc52ace0cf72] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_bab3b5654d32da50] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_8b0e1234e87551c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_fcb73ff3ac48befe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_freeze_631c2f99a847a383] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getAcceleration_17a952530a808943] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngular_eb0542756098e24f] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_getCartesian_6761e3f334368d44] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_631c2f99a847a383] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getJacobian_a54172134b551e3f] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[D)V");
          mids$[mid_getRotation_24d2e432e376f9a0] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_17a952530a808943] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_17a952530a808943] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTranslation_17a952530a808943] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_17a952530a808943] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_interpolate_72322215d0d9acc8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/frames/Transform;");
          mids$[mid_interpolate_3856d795689bca1e] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/Transform;");
          mids$[mid_shiftedBy_82b944f63bb69f35] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/Transform;");
          mids$[mid_staticShiftedBy_52c1706ea4ef71ef] = env->getMethodID(cls, "staticShiftedBy", "(D)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toStaticTransform_85643104a022b593] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformPVCoordinates_dc7eea29a4d4ad51] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_95abb8abb7f5aee0] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_transformPVCoordinates_32f08c76ddea4935] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_21828419b7bbfc20] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new Transform(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/frames/Transform;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3775f4d7e276e33, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fd2c20d73afc943, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_481a03094e80c723, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_941d8dc495969cee, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de98e3d58f8ed0c5, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f308a96dce4eb31, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const Transform & a1, const Transform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed94cc52ace0cf72, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bab3b5654d32da50, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b0e1234e87551c9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fcb73ff3ac48befe, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform Transform::freeze() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_freeze_631c2f99a847a383]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_17a952530a808943]));
      }

      ::org::orekit::utils::AngularCoordinates Transform::getAngular() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_eb0542756098e24f]));
      }

      ::org::orekit::utils::PVCoordinates Transform::getCartesian() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_6761e3f334368d44]));
      }

      ::org::orekit::time::AbsoluteDate Transform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      Transform Transform::getInverse() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_getInverse_631c2f99a847a383]));
      }

      void Transform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_a54172134b551e3f], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Transform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_24d2e432e376f9a0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_17a952530a808943]));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_interpolate_72322215d0d9acc8], a0.this$, a1.this$));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return Transform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_3856d795689bca1e], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Transform Transform::shiftedBy(jdouble a0) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_shiftedBy_82b944f63bb69f35], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::staticShiftedBy(jdouble a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_52c1706ea4ef71ef], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_85643104a022b593]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_dc7eea29a4d4ad51], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_95abb8abb7f5aee0], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_32f08c76ddea4935], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_21828419b7bbfc20], a0.this$));
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
      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Transform_freeze(t_Transform *self);
      static PyObject *t_Transform_getAcceleration(t_Transform *self);
      static PyObject *t_Transform_getAngular(t_Transform *self);
      static PyObject *t_Transform_getCartesian(t_Transform *self);
      static PyObject *t_Transform_getDate(t_Transform *self);
      static PyObject *t_Transform_getInverse(t_Transform *self);
      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_getRotation(t_Transform *self);
      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self);
      static PyObject *t_Transform_getRotationRate(t_Transform *self);
      static PyObject *t_Transform_getTranslation(t_Transform *self);
      static PyObject *t_Transform_getVelocity(t_Transform *self);
      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_toStaticTransform(t_Transform *self);
      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__angular(t_Transform *self, void *data);
      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data);
      static PyObject *t_Transform_get__date(t_Transform *self, void *data);
      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data);
      static PyObject *t_Transform_get__translation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data);
      static PyGetSetDef t_Transform__fields_[] = {
        DECLARE_GET_FIELD(t_Transform, acceleration),
        DECLARE_GET_FIELD(t_Transform, angular),
        DECLARE_GET_FIELD(t_Transform, cartesian),
        DECLARE_GET_FIELD(t_Transform, date),
        DECLARE_GET_FIELD(t_Transform, inverse),
        DECLARE_GET_FIELD(t_Transform, rotation),
        DECLARE_GET_FIELD(t_Transform, rotationAcceleration),
        DECLARE_GET_FIELD(t_Transform, rotationRate),
        DECLARE_GET_FIELD(t_Transform, translation),
        DECLARE_GET_FIELD(t_Transform, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Transform__methods_[] = {
        DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_Transform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_Transform, interpolate, METH_VARARGS),
        DECLARE_METHOD(t_Transform, interpolate_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Transform, shiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_Transform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
        { Py_tp_methods, t_Transform__methods_ },
        { Py_tp_init, (void *) t_Transform_init_ },
        { Py_tp_getset, t_Transform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Transform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Transform, t_Transform, Transform);

      void t_Transform::install(PyObject *module)
      {
        installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
      }

      void t_Transform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        env->getClass(Transform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "IDENTITY", make_descriptor(t_Transform::wrap_Object(*Transform::IDENTITY)));
      }

      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
          return NULL;
        return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
      }
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Transform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            Transform a1((jobject) NULL);
            Transform a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, Transform::initializeClass, Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
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

      static PyObject *t_Transform_freeze(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getAngular(t_Transform *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getCartesian(t_Transform *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getDate(t_Transform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Transform_getInverse(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_Transform_getRotation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationRate(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getTranslation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getVelocity(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::stream::Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }

      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        ::java::util::Collection a3((jobject) NULL);
        PyTypeObject **p3;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::Transform::interpolate(a0, a1, a2, a3));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "interpolate_", args);
        return NULL;
      }

      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        Transform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::frames::StaticTransform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_toStaticTransform(t_Transform *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args)
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
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__angular(t_Transform *self, void *data)
      {
        ::org::orekit::utils::AngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__date(t_Transform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data)
      {
        Transform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Transform::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__translation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/PythonStationDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *PythonStationDisplacement::class$ = NULL;
          jmethodID *PythonStationDisplacement::mids$ = NULL;
          bool PythonStationDisplacement::live$ = false;

          jclass PythonStationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/PythonStationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_displacement_90801f07349d77e7] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStationDisplacement::PythonStationDisplacement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonStationDisplacement::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonStationDisplacement::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonStationDisplacement::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self);
          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args);
          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data);
          static PyGetSetDef t_PythonStationDisplacement__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStationDisplacement, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStationDisplacement__methods_[] = {
            DECLARE_METHOD(t_PythonStationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStationDisplacement, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStationDisplacement)[] = {
            { Py_tp_methods, t_PythonStationDisplacement__methods_ },
            { Py_tp_init, (void *) t_PythonStationDisplacement_init_ },
            { Py_tp_getset, t_PythonStationDisplacement__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonStationDisplacement, t_PythonStationDisplacement, PythonStationDisplacement);

          void t_PythonStationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStationDisplacement), &PY_TYPE_DEF(PythonStationDisplacement), module, "PythonStationDisplacement", 1);
          }

          void t_PythonStationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "class_", make_descriptor(PythonStationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "wrapfn_", make_descriptor(t_PythonStationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStationDisplacement::initializeClass);
            JNINativeMethod methods[] = {
              { "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStationDisplacement_displacement0 },
              { "pythonDecRef", "()V", (void *) t_PythonStationDisplacement_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStationDisplacement::initializeClass, 1)))
              return NULL;
            return t_PythonStationDisplacement::wrap_Object(PythonStationDisplacement(((t_PythonStationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds)
          {
            PythonStationDisplacement object((jobject) NULL);

            INT_CALL(object = PythonStationDisplacement());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args)
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

          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
            PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
            PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
            PyObject *result = PyObject_CallMethod(obj, "displacement", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("displacement", result);
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

          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/PythonFieldSDP4.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *PythonFieldSDP4::class$ = NULL;
          jmethodID *PythonFieldSDP4::mids$ = NULL;
          bool PythonFieldSDP4::live$ = false;

          jclass PythonFieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/PythonFieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8f2042251d084a47] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_03a16642f77779e7] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepSecularEffects_03a16642f77779e7] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_luniSolarTermsComputation_7ae3461a92a43152] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldSDP4::PythonFieldSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_8f2042251d084a47, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          void PythonFieldSDP4::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonFieldSDP4::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonFieldSDP4::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args);
          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self);
          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args);
          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data);
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data);
          static PyGetSetDef t_PythonFieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldSDP4, self),
            DECLARE_GET_FIELD(t_PythonFieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldSDP4__methods_[] = {
            DECLARE_METHOD(t_PythonFieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldSDP4, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldSDP4, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldSDP4)[] = {
            { Py_tp_methods, t_PythonFieldSDP4__methods_ },
            { Py_tp_init, (void *) t_PythonFieldSDP4_init_ },
            { Py_tp_getset, t_PythonFieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(PythonFieldSDP4, t_PythonFieldSDP4, PythonFieldSDP4);
          PyObject *t_PythonFieldSDP4::wrap_Object(const PythonFieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldSDP4 *self = (t_PythonFieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldSDP4), &PY_TYPE_DEF(PythonFieldSDP4), module, "PythonFieldSDP4", 1);
          }

          void t_PythonFieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "class_", make_descriptor(PythonFieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "wrapfn_", make_descriptor(t_PythonFieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldSDP4), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldSDP4::initializeClass);
            JNINativeMethod methods[] = {
              { "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepPeriodicEffects0 },
              { "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldSDP4_deepSecularEffects1 },
              { "luniSolarTermsComputation", "()V", (void *) t_PythonFieldSDP4_luniSolarTermsComputation2 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldSDP4_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldSDP4::initializeClass, 1)))
              return NULL;
            return t_PythonFieldSDP4::wrap_Object(PythonFieldSDP4(((t_PythonFieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldSDP4_of_(t_PythonFieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldSDP4_init_(t_PythonFieldSDP4 *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
            PyTypeObject **p4;
            PythonFieldSDP4 object((jobject) NULL);

            if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = PythonFieldSDP4(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonFieldSDP4_finalize(t_PythonFieldSDP4 *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldSDP4_pythonExtension(t_PythonFieldSDP4 *self, PyObject *args)
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

          static void JNICALL t_PythonFieldSDP4_deepPeriodicEffects0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepPeriodicEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_deepSecularEffects1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *result = PyObject_CallMethod(obj, "deepSecularEffects", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_luniSolarTermsComputation2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "luniSolarTermsComputation", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldSDP4_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldSDP4::mids$[PythonFieldSDP4::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonFieldSDP4_get__self(t_PythonFieldSDP4 *self, void *data)
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
          static PyObject *t_PythonFieldSDP4_get__parameters_(t_PythonFieldSDP4 *self, void *data)
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
#include "org/orekit/files/sp3/SP3Segment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Segment::class$ = NULL;
        jmethodID *SP3Segment::mids$ = NULL;
        bool SP3Segment::live$ = false;

        jclass SP3Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9301fbf0c29669d0] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_c9ef6fa09f2e2d36] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;)V");
            mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_e29a1189b47e1aad] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ecec515dedcdf4ce] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Segment::SP3Segment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9301fbf0c29669d0, a0, a1.this$, a2, a3.this$)) {}

        void SP3Segment::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_c9ef6fa09f2e2d36], a0.this$);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Segment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
        }

        ::java::util::List SP3Segment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
        }

        ::org::orekit::frames::Frame SP3Segment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        jint SP3Segment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        jdouble SP3Segment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_e29a1189b47e1aad]));
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ecec515dedcdf4ce], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
      namespace sp3 {
        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg);
        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args);
        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self);
        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data);
        static PyGetSetDef t_SP3Segment__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Segment, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Segment, coordinates),
          DECLARE_GET_FIELD(t_SP3Segment, frame),
          DECLARE_GET_FIELD(t_SP3Segment, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Segment, mu),
          DECLARE_GET_FIELD(t_SP3Segment, propagator),
          DECLARE_GET_FIELD(t_SP3Segment, start),
          DECLARE_GET_FIELD(t_SP3Segment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Segment__methods_[] = {
          DECLARE_METHOD(t_SP3Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, addCoordinate, METH_O),
          DECLARE_METHOD(t_SP3Segment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_SP3Segment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Segment)[] = {
          { Py_tp_methods, t_SP3Segment__methods_ },
          { Py_tp_init, (void *) t_SP3Segment_init_ },
          { Py_tp_getset, t_SP3Segment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Segment, t_SP3Segment, SP3Segment);

        void t_SP3Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Segment), &PY_TYPE_DEF(SP3Segment), module, "SP3Segment", 0);
        }

        void t_SP3Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "class_", make_descriptor(SP3Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "wrapfn_", make_descriptor(t_SP3Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Segment::initializeClass, 1)))
            return NULL;
          return t_SP3Segment::wrap_Object(SP3Segment(((t_SP3Segment *) arg)->object.this$));
        }
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          SP3Segment object((jobject) NULL);

          if (!parseArgs(args, "DkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Segment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCoordinate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", arg);
          return NULL;
        }

        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate));
        }

        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853IntegratorBuilder::mids$ = NULL;
        bool DormandPrince853IntegratorBuilder::live$ = false;

        jclass DormandPrince853IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853IntegratorBuilder::DormandPrince853IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince853IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince853IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince853IntegratorBuilder, t_DormandPrince853IntegratorBuilder, DormandPrince853IntegratorBuilder);

        void t_DormandPrince853IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853IntegratorBuilder), &PY_TYPE_DEF(DormandPrince853IntegratorBuilder), module, "DormandPrince853IntegratorBuilder", 0);
        }

        void t_DormandPrince853IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "class_", make_descriptor(DormandPrince853IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853IntegratorBuilder::wrap_Object(DormandPrince853IntegratorBuilder(((t_DormandPrince853IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Header::class$ = NULL;
              jmethodID *SsrIgm05Header::mids$ = NULL;
              bool SsrIgm05Header::live$ = false;

              jclass SsrIgm05Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Header::SsrIgm05Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm05Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Header)[] = {
                { Py_tp_methods, t_SsrIgm05Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Header, t_SsrIgm05Header, SsrIgm05Header);

              void t_SsrIgm05Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Header), &PY_TYPE_DEF(SsrIgm05Header), module, "SsrIgm05Header", 0);
              }

              void t_SsrIgm05Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "class_", make_descriptor(SsrIgm05Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "wrapfn_", make_descriptor(t_SsrIgm05Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Header::wrap_Object(SsrIgm05Header(((t_SsrIgm05Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Header object((jobject) NULL);

                INT_CALL(object = SsrIgm05Header());
                self->object = object;

                return 0;
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
#include "org/orekit/time/PythonFieldTimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeStamped::class$ = NULL;
      jmethodID *PythonFieldTimeStamped::mids$ = NULL;
      bool PythonFieldTimeStamped::live$ = false;

      jclass PythonFieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStamped::PythonFieldTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldTimeStamped::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args);
      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self);
      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data);
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStamped)[] = {
        { Py_tp_methods, t_PythonFieldTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStamped_init_ },
        { Py_tp_getset, t_PythonFieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStamped, t_PythonFieldTimeStamped, PythonFieldTimeStamped);
      PyObject *t_PythonFieldTimeStamped::wrap_Object(const PythonFieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStamped), &PY_TYPE_DEF(PythonFieldTimeStamped), module, "PythonFieldTimeStamped", 1);
      }

      void t_PythonFieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "class_", make_descriptor(PythonFieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "wrapfn_", make_descriptor(t_PythonFieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStamped::wrap_Object(PythonFieldTimeStamped(((t_PythonFieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
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

      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data)
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
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorMapping.h"
#include "java/util/Map$Entry.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorMapping::class$ = NULL;
          jmethodID *SensorMapping::mids$ = NULL;
          bool SensorMapping::live$ = false;

          jclass SensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_c421259283de3da0] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Object;)V");
              mids$[mid_getMapping_e9e1a6780fe94297] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_0090f7797e403f43] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_0090f7797e403f43] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorMapping::SensorMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          SensorMapping::SensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

          void SensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::java::lang::Object & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_c421259283de3da0], a0.this$, a1.this$);
          }

          ::java::util::Set SensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_e9e1a6780fe94297]));
          }

          ::java::lang::String SensorMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_0090f7797e403f43]));
          }

          ::java::lang::String SensorMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_0090f7797e403f43]));
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args);
          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args);
          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self);
          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data);
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data);
          static PyGetSetDef t_SensorMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorMapping, sensorName),
            DECLARE_GET_FIELD(t_SensorMapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorMapping, of_, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorMapping)[] = {
            { Py_tp_methods, t_SensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorMapping_init_ },
            { Py_tp_getset, t_SensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorMapping, t_SensorMapping, SensorMapping);
          PyObject *t_SensorMapping::wrap_Object(const SensorMapping& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SensorMapping::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SensorMapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SensorMapping *self = (t_SensorMapping *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorMapping), &PY_TYPE_DEF(SensorMapping), module, "SensorMapping", 0);
          }

          void t_SensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "class_", make_descriptor(SensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "wrapfn_", make_descriptor(t_SensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorMapping::wrap_Object(SensorMapping(((t_SensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SensorMapping_of_(t_SensorMapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SensorMapping_init_(t_SensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorMapping(a0, a1));
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

          static PyObject *t_SensorMapping_addMapping(t_SensorMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::java::lang::Object a1((jobject) NULL);

            if (!parseArgs(args, "kO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, self->parameters[0], &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorMapping_getMapping(t_SensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorMapping_getRuggedName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorMapping_getSensorName(t_SensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }
          static PyObject *t_SensorMapping_get__parameters_(t_SensorMapping *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SensorMapping_get__mapping(t_SensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorMapping_get__ruggedName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorMapping_get__sensorName(t_SensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/NakagamiDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NakagamiDistribution::class$ = NULL;
        jmethodID *NakagamiDistribution::mids$ = NULL;
        bool NakagamiDistribution::live$ = false;

        jclass NakagamiDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NakagamiDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_456d9a2f64d6b28d] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble NakagamiDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble NakagamiDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble NakagamiDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble NakagamiDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble NakagamiDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble NakagamiDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_456d9a2f64d6b28d]);
        }

        jdouble NakagamiDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble NakagamiDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean NakagamiDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data);
        static PyGetSetDef t_NakagamiDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NakagamiDistribution, scale),
          DECLARE_GET_FIELD(t_NakagamiDistribution, shape),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NakagamiDistribution__methods_[] = {
          DECLARE_METHOD(t_NakagamiDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NakagamiDistribution)[] = {
          { Py_tp_methods, t_NakagamiDistribution__methods_ },
          { Py_tp_init, (void *) t_NakagamiDistribution_init_ },
          { Py_tp_getset, t_NakagamiDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NakagamiDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NakagamiDistribution, t_NakagamiDistribution, NakagamiDistribution);

        void t_NakagamiDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NakagamiDistribution), &PY_TYPE_DEF(NakagamiDistribution), module, "NakagamiDistribution", 0);
        }

        void t_NakagamiDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "class_", make_descriptor(NakagamiDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "wrapfn_", make_descriptor(t_NakagamiDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NakagamiDistribution::initializeClass, 1)))
            return NULL;
          return t_NakagamiDistribution::wrap_Object(NakagamiDistribution(((t_NakagamiDistribution *) arg)->object.this$));
        }
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NakagamiDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1));
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
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1, a2));
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

        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data)
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
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldStepHandlerMultiplexer::class$ = NULL;
        jmethodID *FieldStepHandlerMultiplexer::mids$ = NULL;
        bool FieldStepHandlerMultiplexer::live$ = false;

        jclass FieldStepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldStepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_94968e6ff3f0c115] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
            mids$[mid_add_d41b45a1d6944ab5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_52154b94d63e10ed] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getHandlers_a6156df500549a58] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_9eedcf3b856fcc75] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_remove_a923adc5f153d682] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_remove_94968e6ff3f0c115] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepHandlerMultiplexer::FieldStepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void FieldStepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_94968e6ff3f0c115], a0.this$);
        }

        void FieldStepHandlerMultiplexer::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_d41b45a1d6944ab5], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        void FieldStepHandlerMultiplexer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_52154b94d63e10ed], a0.this$);
        }

        ::java::util::List FieldStepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_a6156df500549a58]));
        }

        void FieldStepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_9eedcf3b856fcc75], a0.this$);
        }

        void FieldStepHandlerMultiplexer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_a923adc5f153d682], a0.this$);
        }

        void FieldStepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_94968e6ff3f0c115], a0.this$);
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
        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self);
        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_FieldStepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, handlers),
          DECLARE_GET_FIELD(t_FieldStepHandlerMultiplexer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_FieldStepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_FieldStepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_FieldStepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepHandlerMultiplexer, t_FieldStepHandlerMultiplexer, FieldStepHandlerMultiplexer);
        PyObject *t_FieldStepHandlerMultiplexer::wrap_Object(const FieldStepHandlerMultiplexer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepHandlerMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepHandlerMultiplexer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepHandlerMultiplexer *self = (t_FieldStepHandlerMultiplexer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepHandlerMultiplexer), &PY_TYPE_DEF(FieldStepHandlerMultiplexer), module, "FieldStepHandlerMultiplexer", 0);
        }

        void t_FieldStepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "class_", make_descriptor(FieldStepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "wrapfn_", make_descriptor(t_FieldStepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_FieldStepHandlerMultiplexer::wrap_Object(FieldStepHandlerMultiplexer(((t_FieldStepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_of_(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepHandlerMultiplexer_init_(t_FieldStepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          FieldStepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = FieldStepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_add(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_clear(t_FieldStepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_finish(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
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

        static PyObject *t_FieldStepHandlerMultiplexer_getHandlers(t_FieldStepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldStepHandlerMultiplexer_handleStep(t_FieldStepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepHandlerMultiplexer_init(t_FieldStepHandlerMultiplexer *self, PyObject *args)
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

        static PyObject *t_FieldStepHandlerMultiplexer_remove(t_FieldStepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }
        static PyObject *t_FieldStepHandlerMultiplexer_get__parameters_(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepHandlerMultiplexer_get__handlers(t_FieldStepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *OneAxisEllipsoid::class$ = NULL;
      jmethodID *OneAxisEllipsoid::mids$ = NULL;
      bool OneAxisEllipsoid::live$ = false;

      jclass OneAxisEllipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/OneAxisEllipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_67a8caec77669819] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
          mids$[mid_azimuthBetweenPoints_2387a26b19d33f37] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_azimuthBetweenPoints_1ba6008484813147] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
          mids$[mid_geodeticToIsometricLatitude_0ba5fed9597b693e] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(D)D");
          mids$[mid_geodeticToIsometricLatitude_d3398190482814dc] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getBodyFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getCartesianIntersectionPoint_d9a4eb6b6b8c2fc9] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCartesianIntersectionPoint_979cf7d0fa5caedf] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getEccentricity_456d9a2f64d6b28d] = env->getMethodID(cls, "getEccentricity", "()D");
          mids$[mid_getEccentricitySquared_456d9a2f64d6b28d] = env->getMethodID(cls, "getEccentricitySquared", "()D");
          mids$[mid_getEquatorialRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getEquatorialRadius", "()D");
          mids$[mid_getFlattening_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlattening", "()D");
          mids$[mid_getIntersectionPoint_4a2d37785a37d918] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_9dbbe2475f1298d4] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_806e65e833ae195a] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_4d9ea686ba1473e3] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_6b6c0bf817ea4492] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_a871d6772929c652] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_setAngularThreshold_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAngularThreshold", "(D)V");
          mids$[mid_transform_2637885099554561] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_393fcc10540ff032] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_d471208f838d1a3d] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_588d378a3b637077] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_transform_6c1ef4a2ad0aa38e] = env->getMethodID(cls, "transform", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OneAxisEllipsoid::OneAxisEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::Ellipsoid(env->newObject(initializeClass, &mids$, mid_init$_67a8caec77669819, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_azimuthBetweenPoints_2387a26b19d33f37], a0.this$, a1.this$));
      }

      jdouble OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_azimuthBetweenPoints_1ba6008484813147], a0.this$, a1.this$);
      }

      jdouble OneAxisEllipsoid::geodeticToIsometricLatitude(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_geodeticToIsometricLatitude_0ba5fed9597b693e], a0);
      }

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::geodeticToIsometricLatitude(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_geodeticToIsometricLatitude_d3398190482814dc], a0.this$));
      }

      ::org::orekit::frames::Frame OneAxisEllipsoid::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_c8fe21bcdac65bf6]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_d9a4eb6b6b8c2fc9], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_979cf7d0fa5caedf], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jdouble OneAxisEllipsoid::getEccentricity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricity_456d9a2f64d6b28d]);
      }

      jdouble OneAxisEllipsoid::getEccentricitySquared() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricitySquared_456d9a2f64d6b28d]);
      }

      jdouble OneAxisEllipsoid::getEquatorialRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_456d9a2f64d6b28d]);
      }

      jdouble OneAxisEllipsoid::getFlattening() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFlattening_456d9a2f64d6b28d]);
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_4a2d37785a37d918], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_9dbbe2475f1298d4], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_806e65e833ae195a], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_4d9ea686ba1473e3], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates OneAxisEllipsoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_6b6c0bf817ea4492], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_a871d6772929c652], a0.this$, a1.this$, a2.this$));
      }

      void OneAxisEllipsoid::setAngularThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAngularThreshold_77e0f9a1f260e2e5], a0);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_2637885099554561], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_393fcc10540ff032], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_d471208f838d1a3d], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_588d378a3b637077], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_6c1ef4a2ad0aa38e], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args);
      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data);
      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data);
      static PyGetSetDef t_OneAxisEllipsoid__fields_[] = {
        DECLARE_SET_FIELD(t_OneAxisEllipsoid, angularThreshold),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, bodyFrame),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricity),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricitySquared),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, equatorialRadius),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, flattening),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OneAxisEllipsoid__methods_[] = {
        DECLARE_METHOD(t_OneAxisEllipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, azimuthBetweenPoints, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, geodeticToIsometricLatitude, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getCartesianIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricity, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricitySquared, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEquatorialRadius, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getFlattening, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, lowestAltitudeIntermediate, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, setAngularThreshold, METH_O),
        DECLARE_METHOD(t_OneAxisEllipsoid, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OneAxisEllipsoid)[] = {
        { Py_tp_methods, t_OneAxisEllipsoid__methods_ },
        { Py_tp_init, (void *) t_OneAxisEllipsoid_init_ },
        { Py_tp_getset, t_OneAxisEllipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OneAxisEllipsoid)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Ellipsoid),
        NULL
      };

      DEFINE_TYPE(OneAxisEllipsoid, t_OneAxisEllipsoid, OneAxisEllipsoid);

      void t_OneAxisEllipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(OneAxisEllipsoid), &PY_TYPE_DEF(OneAxisEllipsoid), module, "OneAxisEllipsoid", 0);
      }

      void t_OneAxisEllipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "class_", make_descriptor(OneAxisEllipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "wrapfn_", make_descriptor(t_OneAxisEllipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OneAxisEllipsoid::initializeClass, 1)))
          return NULL;
        return t_OneAxisEllipsoid::wrap_Object(OneAxisEllipsoid(((t_OneAxisEllipsoid *) arg)->object.this$));
      }
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OneAxisEllipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OneAxisEllipsoid object((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OneAxisEllipsoid(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "azimuthBetweenPoints", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "geodeticToIsometricLatitude", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCartesianIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFlattening());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "lowestAltitudeIntermediate", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setAngularThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAngularThreshold", arg);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setAngularThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "angularThreshold", arg);
        return -1;
      }

      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricity());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFlattening());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVector::class$ = NULL;
      jmethodID *FieldVector::mids$ = NULL;
      bool FieldVector::live$ = false;

      jclass FieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_585261c47f8bb8c7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_8c3ffd19fe76e82d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_585261c47f8bb8c7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_cb1d9a131d5e5e35] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_05ce3f5e63fb7e2e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_585261c47f8bb8c7] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_585261c47f8bb8c7] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_5e30662bac3edb02] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_0e35505a51eda123] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
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
          mids$[mid_outerProduct_d2259a595105558d] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_585261c47f8bb8c7] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_d517a7265f416cee] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_9dd724c9bf212c41] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_585261c47f8bb8c7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_394dfc39c31419fa] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldVector FieldVector::add(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_add_585261c47f8bb8c7], a0.this$));
      }

      FieldVector FieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::append(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_585261c47f8bb8c7], a0.this$));
      }

      FieldVector FieldVector::copy() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_copy_cb1d9a131d5e5e35]));
      }

      ::org::hipparchus::FieldElement FieldVector::dotProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_05ce3f5e63fb7e2e], a0.this$));
      }

      FieldVector FieldVector::ebeDivide(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_585261c47f8bb8c7], a0.this$));
      }

      FieldVector FieldVector::ebeMultiply(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_585261c47f8bb8c7], a0.this$));
      }

      jint FieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::FieldElement FieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_5e30662bac3edb02], a0));
      }

      ::org::hipparchus::Field FieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      FieldVector FieldVector::getSubVector(jint a0, jint a1) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_0e35505a51eda123], a0, a1));
      }

      FieldVector FieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::mapInv() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_cb1d9a131d5e5e35]));
      }

      FieldVector FieldVector::mapInvToSelf() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_cb1d9a131d5e5e35]));
      }

      FieldVector FieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_8c3ffd19fe76e82d], a0.this$));
      }

      FieldVector FieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_8c3ffd19fe76e82d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix FieldVector::outerProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_d2259a595105558d], a0.this$));
      }

      FieldVector FieldVector::projection(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_projection_585261c47f8bb8c7], a0.this$));
      }

      void FieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_d517a7265f416cee], a0.this$);
      }

      void FieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_9dd724c9bf212c41], a0, a1.this$);
      }

      void FieldVector::setSubVector(jint a0, const FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      FieldVector FieldVector::subtract(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_585261c47f8bb8c7], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_394dfc39c31419fa]));
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
      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_copy(t_FieldVector *self);
      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getDimension(t_FieldVector *self);
      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getField(t_FieldVector *self);
      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapInv(t_FieldVector *self);
      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self);
      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_toArray(t_FieldVector *self);
      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data);
      static PyGetSetDef t_FieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVector, dimension),
        DECLARE_GET_FIELD(t_FieldVector, field),
        DECLARE_GET_FIELD(t_FieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVector__methods_[] = {
        DECLARE_METHOD(t_FieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, add, METH_O),
        DECLARE_METHOD(t_FieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_FieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_FieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, outerProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, projection, METH_O),
        DECLARE_METHOD(t_FieldVector, set, METH_O),
        DECLARE_METHOD(t_FieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, subtract, METH_O),
        DECLARE_METHOD(t_FieldVector, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVector)[] = {
        { Py_tp_methods, t_FieldVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVector, t_FieldVector, FieldVector);
      PyObject *t_FieldVector::wrap_Object(const FieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVector), &PY_TYPE_DEF(FieldVector), module, "FieldVector", 0);
      }

      void t_FieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "class_", make_descriptor(FieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "wrapfn_", make_descriptor(t_FieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVector::initializeClass, 1)))
          return NULL;
        return t_FieldVector::wrap_Object(FieldVector(((t_FieldVector *) arg)->object.this$));
      }
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_FieldVector_copy(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getDimension(t_FieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg)
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

      static PyObject *t_FieldVector_getField(t_FieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapInv(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args)
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

      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldVector::initializeClass, &a0, &a1, &p1, t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_toArray(t_FieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *SubOrientedPoint::class$ = NULL;
          jmethodID *SubOrientedPoint::mids$ = NULL;
          bool SubOrientedPoint::live$ = false;

          jclass SubOrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/SubOrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ece3b6638d417579] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_3b0163aa85fdaa47] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3227314555d80cc9] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubOrientedPoint::SubOrientedPoint(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_ece3b6638d417579, a0.this$, a1.this$)) {}

          jdouble SubOrientedPoint::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
          }

          jboolean SubOrientedPoint::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubOrientedPoint::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_3b0163aa85fdaa47], a0.this$));
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
        namespace oned {
          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args);
          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args);
          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data);
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data);
          static PyGetSetDef t_SubOrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_SubOrientedPoint, empty),
            DECLARE_GET_FIELD(t_SubOrientedPoint, size),
            DECLARE_GET_FIELD(t_SubOrientedPoint, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubOrientedPoint__methods_[] = {
            DECLARE_METHOD(t_SubOrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubOrientedPoint, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, getSize, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_SubOrientedPoint, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubOrientedPoint)[] = {
            { Py_tp_methods, t_SubOrientedPoint__methods_ },
            { Py_tp_init, (void *) t_SubOrientedPoint_init_ },
            { Py_tp_getset, t_SubOrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubOrientedPoint)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubOrientedPoint, t_SubOrientedPoint, SubOrientedPoint);
          PyObject *t_SubOrientedPoint::wrap_Object(const SubOrientedPoint& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubOrientedPoint::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubOrientedPoint::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubOrientedPoint *self = (t_SubOrientedPoint *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubOrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(SubOrientedPoint), &PY_TYPE_DEF(SubOrientedPoint), module, "SubOrientedPoint", 0);
          }

          void t_SubOrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "class_", make_descriptor(SubOrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "wrapfn_", make_descriptor(t_SubOrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubOrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubOrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubOrientedPoint::initializeClass, 1)))
              return NULL;
            return t_SubOrientedPoint::wrap_Object(SubOrientedPoint(((t_SubOrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_SubOrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubOrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubOrientedPoint_of_(t_SubOrientedPoint *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubOrientedPoint_init_(t_SubOrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubOrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubOrientedPoint(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubOrientedPoint_getSize(t_SubOrientedPoint *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSize());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "getSize", args, 2);
          }

          static PyObject *t_SubOrientedPoint_isEmpty(t_SubOrientedPoint *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_SubOrientedPoint_split(t_SubOrientedPoint *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(SubOrientedPoint), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubOrientedPoint_get__parameters_(t_SubOrientedPoint *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubOrientedPoint_get__empty(t_SubOrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SubOrientedPoint_get__size(t_SubOrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/NormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NormalDistribution::class$ = NULL;
        jmethodID *NormalDistribution::mids$ = NULL;
        bool NormalDistribution::live$ = false;

        jclass NormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getStandardDeviation_456d9a2f64d6b28d] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_824133ce4aec3505] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalDistribution::NormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        NormalDistribution::NormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble NormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble NormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble NormalDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_456d9a2f64d6b28d]);
        }

        jdouble NormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble NormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble NormalDistribution::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_456d9a2f64d6b28d]);
        }

        jdouble NormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble NormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble NormalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean NormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble NormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
        }

        jdouble NormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_824133ce4aec3505], a0, a1);
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
        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data);
        static PyGetSetDef t_NormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NormalDistribution, mean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NormalDistribution, standardDeviation),
          DECLARE_GET_FIELD(t_NormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalDistribution__methods_[] = {
          DECLARE_METHOD(t_NormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalDistribution)[] = {
          { Py_tp_methods, t_NormalDistribution__methods_ },
          { Py_tp_init, (void *) t_NormalDistribution_init_ },
          { Py_tp_getset, t_NormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NormalDistribution, t_NormalDistribution, NormalDistribution);

        void t_NormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalDistribution), &PY_TYPE_DEF(NormalDistribution), module, "NormalDistribution", 0);
        }

        void t_NormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "class_", make_descriptor(NormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "wrapfn_", make_descriptor(t_NormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalDistribution::initializeClass, 1)))
            return NULL;
          return t_NormalDistribution::wrap_Object(NormalDistribution(((t_NormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NormalDistribution object((jobject) NULL);

              INT_CALL(object = NormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NormalDistribution(a0, a1));
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

        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
