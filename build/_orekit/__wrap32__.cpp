#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ConstantRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ConstantRealDistribution::class$ = NULL;
        jmethodID *ConstantRealDistribution::mids$ = NULL;
        bool ConstantRealDistribution::live$ = false;

        jclass ConstantRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ConstantRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRealDistribution::ConstantRealDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble ConstantRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble ConstantRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble ConstantRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble ConstantRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble ConstantRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble ConstantRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble ConstantRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean ConstantRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
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
        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data);
        static PyGetSetDef t_ConstantRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRealDistribution__methods_[] = {
          DECLARE_METHOD(t_ConstantRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRealDistribution)[] = {
          { Py_tp_methods, t_ConstantRealDistribution__methods_ },
          { Py_tp_init, (void *) t_ConstantRealDistribution_init_ },
          { Py_tp_getset, t_ConstantRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ConstantRealDistribution, t_ConstantRealDistribution, ConstantRealDistribution);

        void t_ConstantRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRealDistribution), &PY_TYPE_DEF(ConstantRealDistribution), module, "ConstantRealDistribution", 0);
        }

        void t_ConstantRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "class_", make_descriptor(ConstantRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "wrapfn_", make_descriptor(t_ConstantRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRealDistribution::initializeClass, 1)))
            return NULL;
          return t_ConstantRealDistribution::wrap_Object(ConstantRealDistribution(((t_ConstantRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantRealDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantRealDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSDP4::class$ = NULL;
          jmethodID *FieldSDP4::mids$ = NULL;
          bool FieldSDP4::live$ = false;

          jclass FieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_sxpInitialize_77e61a645c496adc] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_8556964e7b03aae6] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_ff7cb6c242604316] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_f63ca9e3185c722e] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_f63ca9e3185c722e] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_thetaG_e35a60f6e1a86860] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/FieldAbsoluteDate;)D");

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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args);
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data);
          static PyGetSetDef t_FieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSDP4)[] = {
            { Py_tp_methods, t_FieldSDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSDP4, t_FieldSDP4, FieldSDP4);
          PyObject *t_FieldSDP4::wrap_Object(const FieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSDP4), &PY_TYPE_DEF(FieldSDP4), module, "FieldSDP4", 0);
          }

          void t_FieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "class_", make_descriptor(FieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "wrapfn_", make_descriptor(t_FieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldSDP4::wrap_Object(FieldSDP4(((t_FieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleConsumer::mids$ = NULL;
            bool ParseToken$DoubleConsumer::live$ = false;

            jclass ParseToken$DoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_1ad26e8c8c0cd65b] = env->getMethodID(cls, "accept", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleConsumer::accept(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleConsumer, t_ParseToken$DoubleConsumer, ParseToken$DoubleConsumer);

            void t_ParseToken$DoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleConsumer), &PY_TYPE_DEF(ParseToken$DoubleConsumer), module, "ParseToken$DoubleConsumer", 0);
            }

            void t_ParseToken$DoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "class_", make_descriptor(ParseToken$DoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleConsumer::wrap_Object(ParseToken$DoubleConsumer(((t_ParseToken$DoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
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
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolatingFunction::class$ = NULL;
        jmethodID *BilinearInterpolatingFunction::mids$ = NULL;
        bool BilinearInterpolatingFunction::live$ = false;

        jclass BilinearInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3a2cd39ad5830d3b] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_getXInf_9981f74b2d109da6] = env->getMethodID(cls, "getXInf", "()D");
            mids$[mid_getXSup_9981f74b2d109da6] = env->getMethodID(cls, "getXSup", "()D");
            mids$[mid_getYInf_9981f74b2d109da6] = env->getMethodID(cls, "getYInf", "()D");
            mids$[mid_getYSup_9981f74b2d109da6] = env->getMethodID(cls, "getYSup", "()D");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_b5ecd7df9e053968] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolatingFunction::BilinearInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a2cd39ad5830d3b, a0.this$, a1.this$, a2.this$)) {}

        jdouble BilinearInterpolatingFunction::getXInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXInf_9981f74b2d109da6]);
        }

        jdouble BilinearInterpolatingFunction::getXSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSup_9981f74b2d109da6]);
        }

        jdouble BilinearInterpolatingFunction::getYInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYInf_9981f74b2d109da6]);
        }

        jdouble BilinearInterpolatingFunction::getYSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYSup_9981f74b2d109da6]);
        }

        jdouble BilinearInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement BilinearInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_b5ecd7df9e053968], a0.this$, a1.this$));
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
        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data);
        static PyGetSetDef t_BilinearInterpolatingFunction__fields_[] = {
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xSup),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, yInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, ySup),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BilinearInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolatingFunction)[] = {
          { Py_tp_methods, t_BilinearInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolatingFunction_init_ },
          { Py_tp_getset, t_BilinearInterpolatingFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolatingFunction, t_BilinearInterpolatingFunction, BilinearInterpolatingFunction);

        void t_BilinearInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolatingFunction), &PY_TYPE_DEF(BilinearInterpolatingFunction), module, "BilinearInterpolatingFunction", 0);
        }

        void t_BilinearInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "class_", make_descriptor(BilinearInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "wrapfn_", make_descriptor(t_BilinearInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolatingFunction::wrap_Object(BilinearInterpolatingFunction(((t_BilinearInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          BilinearInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = BilinearInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSup());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYSup());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalOrbitalFrame.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalOrbitalFrame::class$ = NULL;
      jmethodID *LocalOrbitalFrame::mids$ = NULL;
      bool LocalOrbitalFrame::live$ = false;

      jclass LocalOrbitalFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalOrbitalFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ef7a2708dc956285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/orekit/utils/PVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalOrbitalFrame::LocalOrbitalFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_ef7a2708dc956285, a0.this$, a1.this$, a2.this$, a3.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LocalOrbitalFrame__methods_[] = {
        DECLARE_METHOD(t_LocalOrbitalFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalOrbitalFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalOrbitalFrame)[] = {
        { Py_tp_methods, t_LocalOrbitalFrame__methods_ },
        { Py_tp_init, (void *) t_LocalOrbitalFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalOrbitalFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(LocalOrbitalFrame, t_LocalOrbitalFrame, LocalOrbitalFrame);

      void t_LocalOrbitalFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalOrbitalFrame), &PY_TYPE_DEF(LocalOrbitalFrame), module, "LocalOrbitalFrame", 0);
      }

      void t_LocalOrbitalFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "class_", make_descriptor(LocalOrbitalFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "wrapfn_", make_descriptor(t_LocalOrbitalFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalOrbitalFrame::initializeClass, 1)))
          return NULL;
        return t_LocalOrbitalFrame::wrap_Object(LocalOrbitalFrame(((t_LocalOrbitalFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalOrbitalFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::LOF a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        LocalOrbitalFrame object((jobject) NULL);

        if (!parseArgs(args, "kkks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LocalOrbitalFrame(a0, a1, a2, a3));
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
#include "org/hipparchus/ode/VariationalEquation.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "java/lang/String.h"
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
          mids$[mid_init$_8f42fd19d7a4452b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEJacobiansProvider;)V");
          mids$[mid_init$_3b433591ff96fd2c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/OrdinaryDifferentialEquation;[DLorg/hipparchus/ode/ParametersController;[Lorg/hipparchus/ode/ParameterConfiguration;)V");
          mids$[mid_extractMainSetJacobian_12aee0712e743790] = env->getMethodID(cls, "extractMainSetJacobian", "(Lorg/hipparchus/ode/ODEState;)[[D");
          mids$[mid_extractParameterJacobian_3f551ec8f4237deb] = env->getMethodID(cls, "extractParameterJacobian", "(Lorg/hipparchus/ode/ODEState;Ljava/lang/String;)[D");
          mids$[mid_setInitialMainStateJacobian_11ecdbb5af7ed67d] = env->getMethodID(cls, "setInitialMainStateJacobian", "([[D)V");
          mids$[mid_setInitialParameterJacobian_550be97e760e0f22] = env->getMethodID(cls, "setInitialParameterJacobian", "(Ljava/lang/String;[D)V");
          mids$[mid_setUpInitialState_83627e0d0a0fb550] = env->getMethodID(cls, "setUpInitialState", "(Lorg/hipparchus/ode/ODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEJacobiansProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f42fd19d7a4452b, a0.this$, a1.this$)) {}

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ParametersController & a3, const JArray< ::org::hipparchus::ode::ParameterConfiguration > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b433591ff96fd2c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< JArray< jdouble > > VariationalEquation::extractMainSetJacobian(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_extractMainSetJacobian_12aee0712e743790], a0.this$));
      }

      JArray< jdouble > VariationalEquation::extractParameterJacobian(const ::org::hipparchus::ode::ODEState & a0, const ::java::lang::String & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameterJacobian_3f551ec8f4237deb], a0.this$, a1.this$));
      }

      void VariationalEquation::setInitialMainStateJacobian(const JArray< JArray< jdouble > > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialMainStateJacobian_11ecdbb5af7ed67d], a0.this$);
      }

      void VariationalEquation::setInitialParameterJacobian(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialParameterJacobian_550be97e760e0f22], a0.this$, a1.this$);
      }

      ::org::hipparchus::ode::ODEState VariationalEquation::setUpInitialState(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_setUpInitialState_83627e0d0a0fb550], a0.this$));
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
#include "org/orekit/models/earth/Geoid.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *Geoid::class$ = NULL;
        jmethodID *Geoid::mids$ = NULL;
        bool Geoid::live$ = false;

        jclass Geoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/Geoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4df5b2f5167a1585] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;Lorg/orekit/models/earth/ReferenceEllipsoid;)V");
            mids$[mid_getBodyFrame_cb151471db4570f0] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_cff2eba11ebd2420] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_9f0bcc9c00772903] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getIntersectionPoint_ade5649cae5a4672] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_getUndulation_aae72683f06306ac] = env->getMethodID(cls, "getUndulation", "(DDLorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_projectToGround_28dd2a6cc35491d2] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_26b1db430bbeb49e] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_f974aaaf2e73b405] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_0bfc32b1890053a9] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_82a0f6c52928ba20] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_transform_52f3336802c12846] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Geoid::Geoid(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, const ::org::orekit::models::earth::ReferenceEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4df5b2f5167a1585, a0.this$, a1.this$)) {}

        ::org::orekit::frames::Frame Geoid::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_cb151471db4570f0]));
        }

        ::org::orekit::models::earth::ReferenceEllipsoid Geoid::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_cff2eba11ebd2420]));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_9f0bcc9c00772903], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_ade5649cae5a4672], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jdouble Geoid::getUndulation(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUndulation_aae72683f06306ac], a0, a1, a2.this$);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates Geoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_28dd2a6cc35491d2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_26b1db430bbeb49e], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Geoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_f974aaaf2e73b405], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_0bfc32b1890053a9], a0.this$));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_82a0f6c52928ba20], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_52f3336802c12846], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self);
        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self);
        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data);
        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data);
        static PyGetSetDef t_Geoid__fields_[] = {
          DECLARE_GET_FIELD(t_Geoid, bodyFrame),
          DECLARE_GET_FIELD(t_Geoid, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Geoid__methods_[] = {
          DECLARE_METHOD(t_Geoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getIntersectionPoint, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, getUndulation, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, projectToGround, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Geoid)[] = {
          { Py_tp_methods, t_Geoid__methods_ },
          { Py_tp_init, (void *) t_Geoid_init_ },
          { Py_tp_getset, t_Geoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Geoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Geoid, t_Geoid, Geoid);

        void t_Geoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Geoid), &PY_TYPE_DEF(Geoid), module, "Geoid", 0);
        }

        void t_Geoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "class_", make_descriptor(Geoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "wrapfn_", make_descriptor(t_Geoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Geoid::initializeClass, 1)))
            return NULL;
          return t_Geoid::wrap_Object(Geoid(((t_Geoid *) arg)->object.this$));
        }
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Geoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
          ::org::orekit::models::earth::ReferenceEllipsoid a1((jobject) NULL);
          Geoid object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Geoid(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args)
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

        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "DDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getUndulation(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUndulation", args);
          return NULL;
        }

        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args)
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

        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args)
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

        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data)
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
#include "org/orekit/errors/UnsupportedParameterException.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *UnsupportedParameterException::class$ = NULL;
      jmethodID *UnsupportedParameterException::mids$ = NULL;
      bool UnsupportedParameterException::live$ = false;
      ::java::lang::String *UnsupportedParameterException::COMMA_SEP = NULL;
      ::java::lang::String *UnsupportedParameterException::NO_PARAMETER = NULL;

      jclass UnsupportedParameterException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/UnsupportedParameterException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d6d7b1002c69c04a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COMMA_SEP = new ::java::lang::String(env->getStaticObjectField(cls, "COMMA_SEP", "Ljava/lang/String;"));
          NO_PARAMETER = new ::java::lang::String(env->getStaticObjectField(cls, "NO_PARAMETER", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnsupportedParameterException::UnsupportedParameterException(const ::java::lang::String & a0, const ::java::util::List & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_d6d7b1002c69c04a, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_UnsupportedParameterException__methods_[] = {
        DECLARE_METHOD(t_UnsupportedParameterException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnsupportedParameterException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnsupportedParameterException)[] = {
        { Py_tp_methods, t_UnsupportedParameterException__methods_ },
        { Py_tp_init, (void *) t_UnsupportedParameterException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnsupportedParameterException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(UnsupportedParameterException, t_UnsupportedParameterException, UnsupportedParameterException);

      void t_UnsupportedParameterException::install(PyObject *module)
      {
        installType(&PY_TYPE(UnsupportedParameterException), &PY_TYPE_DEF(UnsupportedParameterException), module, "UnsupportedParameterException", 0);
      }

      void t_UnsupportedParameterException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "class_", make_descriptor(UnsupportedParameterException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "wrapfn_", make_descriptor(t_UnsupportedParameterException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "boxfn_", make_descriptor(boxObject));
        env->getClass(UnsupportedParameterException::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "COMMA_SEP", make_descriptor(j2p(*UnsupportedParameterException::COMMA_SEP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnsupportedParameterException), "NO_PARAMETER", make_descriptor(j2p(*UnsupportedParameterException::NO_PARAMETER)));
      }

      static PyObject *t_UnsupportedParameterException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnsupportedParameterException::initializeClass, 1)))
          return NULL;
        return t_UnsupportedParameterException::wrap_Object(UnsupportedParameterException(((t_UnsupportedParameterException *) arg)->object.this$));
      }
      static PyObject *t_UnsupportedParameterException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnsupportedParameterException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnsupportedParameterException_init_(t_UnsupportedParameterException *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        UnsupportedParameterException object((jobject) NULL);

        if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = UnsupportedParameterException(a0, a1));
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
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeExtremumDetector::class$ = NULL;
        jmethodID *LatitudeExtremumDetector::mids$ = NULL;
        bool LatitudeExtremumDetector::live$ = false;

        jclass LatitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b708ea6c2876a9ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_953aae78749ecde5] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f2d25f6f71d01ca] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_1a08b29d58bea1c1] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeExtremumDetector::LatitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b708ea6c2876a9ef, a0.this$)) {}

        LatitudeExtremumDetector::LatitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_953aae78749ecde5, a0, a1, a2.this$)) {}

        jdouble LatitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LatitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f2d25f6f71d01ca]));
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
        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args);
        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self);
        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data);
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LatitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LatitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LatitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeExtremumDetector, t_LatitudeExtremumDetector, LatitudeExtremumDetector);
        PyObject *t_LatitudeExtremumDetector::wrap_Object(const LatitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeExtremumDetector), &PY_TYPE_DEF(LatitudeExtremumDetector), module, "LatitudeExtremumDetector", 0);
        }

        void t_LatitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "class_", make_descriptor(LatitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "wrapfn_", make_descriptor(t_LatitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeExtremumDetector::wrap_Object(LatitudeExtremumDetector(((t_LatitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
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

        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *AbstractSingleFrequencyCombination::mids$ = NULL;
          bool AbstractSingleFrequencyCombination::live$ = false;

          jclass AbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_34f94a0e1855db7e] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_221f3e8aea4f942e] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_82f92590f4247da1] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_34f94a0e1855db7e], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_221f3e8aea4f942e], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractSingleFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
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
          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self);
          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractSingleFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractSingleFrequencyCombination, t_AbstractSingleFrequencyCombination, AbstractSingleFrequencyCombination);

          void t_AbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractSingleFrequencyCombination), &PY_TYPE_DEF(AbstractSingleFrequencyCombination), module, "AbstractSingleFrequencyCombination", 0);
          }

          void t_AbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "class_", make_descriptor(AbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractSingleFrequencyCombination::wrap_Object(AbstractSingleFrequencyCombination(((t_AbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
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
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853IntegratorBuilder::DormandPrince853IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince853IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
#include "org/hipparchus/complex/RootsOfUnity.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *RootsOfUnity::class$ = NULL;
      jmethodID *RootsOfUnity::mids$ = NULL;
      bool RootsOfUnity::live$ = false;

      jclass RootsOfUnity::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/RootsOfUnity");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_computeRoots_8fd427ab23829bf5] = env->getMethodID(cls, "computeRoots", "(I)V");
          mids$[mid_getImaginary_ce4c02d583456bc9] = env->getMethodID(cls, "getImaginary", "(I)D");
          mids$[mid_getNumberOfRoots_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfRoots", "()I");
          mids$[mid_getReal_ce4c02d583456bc9] = env->getMethodID(cls, "getReal", "(I)D");
          mids$[mid_isCounterClockWise_eee3de00fe971136] = env->getMethodID(cls, "isCounterClockWise", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RootsOfUnity::RootsOfUnity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void RootsOfUnity::computeRoots(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_computeRoots_8fd427ab23829bf5], a0);
      }

      jdouble RootsOfUnity::getImaginary(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_ce4c02d583456bc9], a0);
      }

      jint RootsOfUnity::getNumberOfRoots() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfRoots_d6ab429752e7c267]);
      }

      jdouble RootsOfUnity::getReal(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_ce4c02d583456bc9], a0);
      }

      jboolean RootsOfUnity::isCounterClockWise() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCounterClockWise_eee3de00fe971136]);
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
      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data);
      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data);
      static PyGetSetDef t_RootsOfUnity__fields_[] = {
        DECLARE_GET_FIELD(t_RootsOfUnity, counterClockWise),
        DECLARE_GET_FIELD(t_RootsOfUnity, numberOfRoots),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RootsOfUnity__methods_[] = {
        DECLARE_METHOD(t_RootsOfUnity, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, computeRoots, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getImaginary, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getNumberOfRoots, METH_NOARGS),
        DECLARE_METHOD(t_RootsOfUnity, getReal, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, isCounterClockWise, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RootsOfUnity)[] = {
        { Py_tp_methods, t_RootsOfUnity__methods_ },
        { Py_tp_init, (void *) t_RootsOfUnity_init_ },
        { Py_tp_getset, t_RootsOfUnity__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RootsOfUnity)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RootsOfUnity, t_RootsOfUnity, RootsOfUnity);

      void t_RootsOfUnity::install(PyObject *module)
      {
        installType(&PY_TYPE(RootsOfUnity), &PY_TYPE_DEF(RootsOfUnity), module, "RootsOfUnity", 0);
      }

      void t_RootsOfUnity::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "class_", make_descriptor(RootsOfUnity::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "wrapfn_", make_descriptor(t_RootsOfUnity::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RootsOfUnity::initializeClass, 1)))
          return NULL;
        return t_RootsOfUnity::wrap_Object(RootsOfUnity(((t_RootsOfUnity *) arg)->object.this$));
      }
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RootsOfUnity::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds)
      {
        RootsOfUnity object((jobject) NULL);

        INT_CALL(object = RootsOfUnity());
        self->object = object;

        return 0;
      }

      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.computeRoots(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "computeRoots", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getImaginary(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getReal(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isCounterClockWise());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isCounterClockWise());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointVectorValuePair::class$ = NULL;
      jmethodID *PointVectorValuePair::mids$ = NULL;
      bool PointVectorValuePair::live$ = false;

      jclass PointVectorValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointVectorValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_bcd363ee1651762b] = env->getMethodID(cls, "<init>", "([D[DZ)V");
          mids$[mid_getPoint_be783177b060994b] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_be783177b060994b] = env->getMethodID(cls, "getPointRef", "()[D");
          mids$[mid_getValue_be783177b060994b] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_getValueRef_be783177b060994b] = env->getMethodID(cls, "getValueRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_bcd363ee1651762b, a0.this$, a1.this$, a2)) {}

      JArray< jdouble > PointVectorValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_be783177b060994b]));
      }

      JArray< jdouble > PointVectorValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_be783177b060994b]));
      }

      JArray< jdouble > PointVectorValuePair::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_be783177b060994b]));
      }

      JArray< jdouble > PointVectorValuePair::getValueRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValueRef_be783177b060994b]));
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
      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args);
      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args);
      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data);
      static PyGetSetDef t_PointVectorValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointVectorValuePair, point),
        DECLARE_GET_FIELD(t_PointVectorValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, value),
        DECLARE_GET_FIELD(t_PointVectorValuePair, valueRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointVectorValuePair__methods_[] = {
        DECLARE_METHOD(t_PointVectorValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPointRef, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValue, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValueRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointVectorValuePair)[] = {
        { Py_tp_methods, t_PointVectorValuePair__methods_ },
        { Py_tp_init, (void *) t_PointVectorValuePair_init_ },
        { Py_tp_getset, t_PointVectorValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointVectorValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointVectorValuePair, t_PointVectorValuePair, PointVectorValuePair);
      PyObject *t_PointVectorValuePair::wrap_Object(const PointVectorValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointVectorValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointVectorValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointVectorValuePair), &PY_TYPE_DEF(PointVectorValuePair), module, "PointVectorValuePair", 0);
      }

      void t_PointVectorValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "class_", make_descriptor(PointVectorValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "wrapfn_", make_descriptor(t_PointVectorValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointVectorValuePair::initializeClass, 1)))
          return NULL;
        return t_PointVectorValuePair::wrap_Object(PointVectorValuePair(((t_PointVectorValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointVectorValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
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

      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getValue());
          return result.wrap();
        }

        return callSuper(PY_TYPE(PointVectorValuePair), (PyObject *) self, "getValue", args, 2);
      }

      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueRef());
        return result.wrap();
      }
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrix::class$ = NULL;
      jmethodID *RealMatrix::mids$ = NULL;
      bool RealMatrix::live$ = false;

      jclass RealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_5a8a8185eb309db7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_e98d7b3e971b6087] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_blendArithmeticallyWith_c42beb313d38e65e] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copy_b2eebabce70526d8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_eeaa7ca2223e42ad] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_d53a95949cb9e95d] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_afc0d8087db42fe7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumn_81add9fc9d78d5b9] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnMatrix_ef7bea65e8e6eaaa] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_2ea477ed14744e74] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_eda3f19b8225f78f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_6d920aab27f0a3d2] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_9981f74b2d109da6] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_9981f74b2d109da6] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_9981f74b2d109da6] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_81add9fc9d78d5b9] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowMatrix_ef7bea65e8e6eaaa] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_2ea477ed14744e74] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_94a006d49812ec14] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_a064070b1670e8d8] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_9981f74b2d109da6] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_map_55998ea72d2e3bcf] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_mapToSelf_55998ea72d2e3bcf] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_5a8a8185eb309db7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_e98d7b3e971b6087] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_5a8a8185eb309db7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_51f624c89851da7e] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_bf8d75e459632544] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_ef7bea65e8e6eaaa] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_51f624c89851da7e] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_bf8d75e459632544] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_5a8a8185eb309db7] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_d5a7c13c36e5009c] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_d5a7c13c36e5009c] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_9d367e34fba0a5ea] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_f7b5db2ddda2ff4c] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_543485b1a87e5329] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_9d367e34fba0a5ea] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_f7b5db2ddda2ff4c] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_543485b1a87e5329] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_5cc0a3799fec1dc7] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_5a8a8185eb309db7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transpose_b2eebabce70526d8] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_5a8a8185eb309db7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_be1420f911d13599] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_be1420f911d13599] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_a7758d3537e559f7] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_5a884deb680e092c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_0c89eacb5543486a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_be1420f911d13599] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealMatrix RealMatrix::add(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_add_5a8a8185eb309db7], a0.this$));
      }

      void RealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      RealMatrix RealMatrix::blendArithmeticallyWith(const RealMatrix & a0, jdouble a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_c42beb313d38e65e], a0.this$, a1));
      }

      RealMatrix RealMatrix::copy() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_b2eebabce70526d8]));
      }

      void RealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_eeaa7ca2223e42ad], a0.this$, a1.this$, a2.this$);
      }

      void RealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_d53a95949cb9e95d], a0, a1, a2, a3, a4.this$);
      }

      RealMatrix RealMatrix::createMatrix(jint a0, jint a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_afc0d8087db42fe7], a0, a1));
      }

      JArray< jdouble > RealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_81add9fc9d78d5b9], a0));
      }

      RealMatrix RealMatrix::getColumnMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_ef7bea65e8e6eaaa], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2ea477ed14744e74], a0));
      }

      JArray< JArray< jdouble > > RealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_eda3f19b8225f78f]));
      }

      jdouble RealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_6d920aab27f0a3d2], a0, a1);
      }

      jdouble RealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_9981f74b2d109da6]);
      }

      jdouble RealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_9981f74b2d109da6]);
      }

      jdouble RealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_9981f74b2d109da6]);
      }

      JArray< jdouble > RealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_81add9fc9d78d5b9], a0));
      }

      RealMatrix RealMatrix::getRowMatrix(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_ef7bea65e8e6eaaa], a0));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2ea477ed14744e74], a0));
      }

      RealMatrix RealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_94a006d49812ec14], a0.this$, a1.this$));
      }

      RealMatrix RealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_a064070b1670e8d8], a0, a1, a2, a3));
      }

      jdouble RealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_9981f74b2d109da6]);
      }

      RealMatrix RealMatrix::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_map_55998ea72d2e3bcf], a0.this$));
      }

      RealMatrix RealMatrix::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_mapToSelf_55998ea72d2e3bcf], a0.this$));
      }

      RealMatrix RealMatrix::multiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_5a8a8185eb309db7], a0.this$));
      }

      void RealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      RealMatrix RealMatrix::multiplyTransposed(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_5a8a8185eb309db7], a0.this$));
      }

      JArray< jdouble > RealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_51f624c89851da7e], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_bf8d75e459632544], a0.this$));
      }

      RealMatrix RealMatrix::power(jint a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_power_ef7bea65e8e6eaaa], a0));
      }

      JArray< jdouble > RealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_51f624c89851da7e], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_bf8d75e459632544], a0.this$));
      }

      RealMatrix RealMatrix::preMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_5a8a8185eb309db7], a0.this$));
      }

      RealMatrix RealMatrix::scalarAdd(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_d5a7c13c36e5009c], a0));
      }

      RealMatrix RealMatrix::scalarMultiply(jdouble a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_d5a7c13c36e5009c], a0));
      }

      void RealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_9d367e34fba0a5ea], a0, a1.this$);
      }

      void RealMatrix::setColumnMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_f7b5db2ddda2ff4c], a0, a1.this$);
      }

      void RealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_543485b1a87e5329], a0, a1.this$);
      }

      void RealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      void RealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_9d367e34fba0a5ea], a0, a1.this$);
      }

      void RealMatrix::setRowMatrix(jint a0, const RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_f7b5db2ddda2ff4c], a0, a1.this$);
      }

      void RealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_543485b1a87e5329], a0, a1.this$);
      }

      void RealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_5cc0a3799fec1dc7], a0.this$, a1, a2);
      }

      RealMatrix RealMatrix::subtract(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_5a8a8185eb309db7], a0.this$));
      }

      RealMatrix RealMatrix::transpose() const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_b2eebabce70526d8]));
      }

      RealMatrix RealMatrix::transposeMultiply(const RealMatrix & a0) const
      {
        return RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_5a8a8185eb309db7], a0.this$));
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_5a884deb680e092c], a0.this$);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5a884deb680e092c], a0.this$);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_a7758d3537e559f7], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_5a884deb680e092c], a0.this$);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0c89eacb5543486a], a0.this$, a1, a2, a3, a4);
      }

      jdouble RealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_be1420f911d13599], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_copy(t_RealMatrix *self);
      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getData(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self);
      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self);
      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self);
      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg);
      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args);
      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data);
      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data);
      static PyGetSetDef t_RealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_RealMatrix, data),
        DECLARE_GET_FIELD(t_RealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_RealMatrix, norm1),
        DECLARE_GET_FIELD(t_RealMatrix, normInfty),
        DECLARE_GET_FIELD(t_RealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealMatrix__methods_[] = {
        DECLARE_METHOD(t_RealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrix, add, METH_O),
        DECLARE_METHOD(t_RealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getNormInfty, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_RealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_RealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, map, METH_O),
        DECLARE_METHOD(t_RealMatrix, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, multiplyTransposed, METH_O),
        DECLARE_METHOD(t_RealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, power, METH_O),
        DECLARE_METHOD(t_RealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_RealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_RealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrix, transposeMultiply, METH_O),
        DECLARE_METHOD(t_RealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrix)[] = {
        { Py_tp_methods, t_RealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AnyMatrix),
        NULL
      };

      DEFINE_TYPE(RealMatrix, t_RealMatrix, RealMatrix);

      void t_RealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrix), &PY_TYPE_DEF(RealMatrix), module, "RealMatrix", 0);
      }

      void t_RealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "class_", make_descriptor(RealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "wrapfn_", make_descriptor(t_RealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrix::initializeClass, 1)))
          return NULL;
        return t_RealMatrix::wrap_Object(RealMatrix(((t_RealMatrix *) arg)->object.this$));
      }
      static PyObject *t_RealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrix_add(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_addToEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_blendArithmeticallyWith(t_RealMatrix *self, PyObject *args)
      {
        RealMatrix a0((jobject) NULL);
        jdouble a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kD", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_copy(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_copySubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[I[I[[D", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< jdouble > > a4((jobject) NULL);

            if (!parseArgs(args, "IIII[[D", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_createMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumn(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getColumnVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getData(t_RealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_getEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getFrobeniusNorm(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNorm1(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getNormInfty(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInfty());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_getRow(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowMatrix(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getRowVector(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_getSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_getTrace(t_RealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrix_map(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_mapToSelf(t_RealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_multiplyTransposed(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyTransposed", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_operate(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_power(t_RealMatrix *self, PyObject *arg)
      {
        jint a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_preMultiply(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            RealMatrix a0((jobject) NULL);
            RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarAdd(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_scalarMultiply(t_RealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumn(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setColumnVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setEntry(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRow(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowMatrix(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setRowVector(t_RealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_setSubMatrix(t_RealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_subtract(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_transpose(t_RealMatrix *self)
      {
        RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RealMatrix_transposeMultiply(t_RealMatrix *self, PyObject *arg)
      {
        RealMatrix a0((jobject) NULL);
        RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "transposeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInColumnOrder(t_RealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
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
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
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
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInOptimizedOrder(t_RealMatrix *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_walkInRowOrder(t_RealMatrix *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }

      static PyObject *t_RealMatrix_get__data(t_RealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_RealMatrix_get__frobeniusNorm(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__norm1(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__normInfty(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealMatrix_get__trace(t_RealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrace());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet::class$ = NULL;
          jmethodID *ArcsSet::mids$ = NULL;
          bool ArcsSet::live$ = false;

          jclass ArcsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_83911a7bf86bdb7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_457d0c956b0d24c0] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_d751c1a57012b438] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_a140a584558c5d8b] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_5e847af8c64bed2a] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_split_dfd39b6ce0109805] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/spherical/oned/Arc;)Lorg/hipparchus/geometry/spherical/oned/ArcsSet$Split;");
              mids$[mid_computeGeometricalProperties_ff7cb6c242604316] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet::ArcsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ArcsSet::ArcsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_83911a7bf86bdb7d, a0.this$, a1)) {}

          ArcsSet::ArcsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_457d0c956b0d24c0, a0.this$, a1)) {}

          ArcsSet::ArcsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List ArcsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_d751c1a57012b438]));
          }

          ArcsSet ArcsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return ArcsSet(env->callObjectMethod(this$, mids$[mid_buildNew_a140a584558c5d8b], a0.this$));
          }

          ::java::util::Iterator ArcsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection ArcsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_5e847af8c64bed2a], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split ArcsSet::split(const ::org::hipparchus::geometry::spherical::oned::Arc & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split(env->callObjectMethod(this$, mids$[mid_split_dfd39b6ce0109805], a0.this$));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args);
          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet_asList(t_ArcsSet *self);
          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self);
          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args);
          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg);
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data);
          static PyGetSetDef t_ArcsSet__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet__methods_[] = {
            DECLARE_METHOD(t_ArcsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet, projectToBoundary, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet, split, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet)[] = {
            { Py_tp_methods, t_ArcsSet__methods_ },
            { Py_tp_init, (void *) t_ArcsSet_init_ },
            { Py_tp_getset, t_ArcsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_ArcsSet *)) get_generic_iterator< t_ArcsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(ArcsSet, t_ArcsSet, ArcsSet);
          PyObject *t_ArcsSet::wrap_Object(const ArcsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet *self = (t_ArcsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet), &PY_TYPE_DEF(ArcsSet), module, "ArcsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "InconsistentStateAt2PiWrapping", make_descriptor(&PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "Split", make_descriptor(&PY_TYPE_DEF(ArcsSet$Split)));
          }

          void t_ArcsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "class_", make_descriptor(ArcsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "wrapfn_", make_descriptor(t_ArcsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet::initializeClass, 1)))
              return NULL;
            return t_ArcsSet::wrap_Object(ArcsSet(((t_ArcsSet *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet_of_(t_ArcsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet_init_(t_ArcsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = ArcsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = ArcsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ArcsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = ArcsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_ArcsSet_asList(t_ArcsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Arc));
          }

          static PyObject *t_ArcsSet_buildNew(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            ArcsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_ArcsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_ArcsSet_iterator(t_ArcsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_ArcsSet_projectToBoundary(t_ArcsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            return callSuper(PY_TYPE(ArcsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }

          static PyObject *t_ArcsSet_split(t_ArcsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::spherical::oned::Arc a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::ArcsSet$Split result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::spherical::oned::Arc::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet$Split::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "split", arg);
            return NULL;
          }
          static PyObject *t_ArcsSet_get__parameters_(t_ArcsSet *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonOrekitStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepHandler::class$ = NULL;
        jmethodID *PythonOrekitStepHandler::mids$ = NULL;
        bool PythonOrekitStepHandler::live$ = false;

        jclass PythonOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_9db9d9fe85cac7f9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepHandler::PythonOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonOrekitStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self);
        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepHandler, t_PythonOrekitStepHandler, PythonOrekitStepHandler);

        void t_PythonOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepHandler), &PY_TYPE_DEF(PythonOrekitStepHandler), module, "PythonOrekitStepHandler", 1);
        }

        void t_PythonOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "class_", make_descriptor(PythonOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V", (void *) t_PythonOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepHandler::wrap_Object(PythonOrekitStepHandler(((t_PythonOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::OrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data)
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
#include "java/lang/Throwable.h"
#include "java/lang/Throwable.h"
#include "java/io/Serializable.h"
#include "java/io/PrintWriter.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Throwable::class$ = NULL;
    jmethodID *Throwable::mids$ = NULL;
    bool Throwable::live$ = false;

    jclass Throwable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Throwable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_addSuppressed_0a70d77e3c5fdad0] = env->getMethodID(cls, "addSuppressed", "(Ljava/lang/Throwable;)V");
        mids$[mid_fillInStackTrace_a725264cecc16b6f] = env->getMethodID(cls, "fillInStackTrace", "()Ljava/lang/Throwable;");
        mids$[mid_getCause_a725264cecc16b6f] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
        mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
        mids$[mid_getStackTrace_21f9fd78d23bbd0b] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getSuppressed_bf5807806a48678d] = env->getMethodID(cls, "getSuppressed", "()[Ljava/lang/Throwable;");
        mids$[mid_initCause_c52829658c2e8f90] = env->getMethodID(cls, "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;");
        mids$[mid_printStackTrace_ff7cb6c242604316] = env->getMethodID(cls, "printStackTrace", "()V");
        mids$[mid_printStackTrace_7a6583f48fc2663f] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintStream;)V");
        mids$[mid_printStackTrace_742cc9c22b5169e7] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintWriter;)V");
        mids$[mid_setStackTrace_1ced2dda8e39a296] = env->getMethodID(cls, "setStackTrace", "([Ljava/lang/StackTraceElement;)V");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Throwable::Throwable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    Throwable::Throwable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Throwable::Throwable(const ::java::lang::String & a0, const Throwable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}

    void Throwable::addSuppressed(const Throwable & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addSuppressed_0a70d77e3c5fdad0], a0.this$);
    }

    Throwable Throwable::fillInStackTrace() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_fillInStackTrace_a725264cecc16b6f]));
    }

    Throwable Throwable::getCause() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_getCause_a725264cecc16b6f]));
    }

    ::java::lang::String Throwable::getLocalizedMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
    }

    ::java::lang::String Throwable::getMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
    }

    JArray< ::java::lang::StackTraceElement > Throwable::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_21f9fd78d23bbd0b]));
    }

    JArray< Throwable > Throwable::getSuppressed() const
    {
      return JArray< Throwable >(env->callObjectMethod(this$, mids$[mid_getSuppressed_bf5807806a48678d]));
    }

    Throwable Throwable::initCause(const Throwable & a0) const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_initCause_c52829658c2e8f90], a0.this$));
    }

    void Throwable::printStackTrace() const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_ff7cb6c242604316]);
    }

    void Throwable::printStackTrace(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_7a6583f48fc2663f], a0.this$);
    }

    void Throwable::printStackTrace(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_742cc9c22b5169e7], a0.this$);
    }

    void Throwable::setStackTrace(const JArray< ::java::lang::StackTraceElement > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setStackTrace_1ced2dda8e39a296], a0.this$);
    }

    ::java::lang::String Throwable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getCause(t_Throwable *self);
    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self);
    static PyObject *t_Throwable_getMessage(t_Throwable *self);
    static PyObject *t_Throwable_getStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getSuppressed(t_Throwable *self);
    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data);
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data);
    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data);
    static PyGetSetDef t_Throwable__fields_[] = {
      DECLARE_GET_FIELD(t_Throwable, cause),
      DECLARE_GET_FIELD(t_Throwable, localizedMessage),
      DECLARE_GET_FIELD(t_Throwable, message),
      DECLARE_GETSET_FIELD(t_Throwable, stackTrace),
      DECLARE_GET_FIELD(t_Throwable, suppressed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Throwable__methods_[] = {
      DECLARE_METHOD(t_Throwable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, addSuppressed, METH_O),
      DECLARE_METHOD(t_Throwable, fillInStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getCause, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getLocalizedMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getSuppressed, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, initCause, METH_O),
      DECLARE_METHOD(t_Throwable, printStackTrace, METH_VARARGS),
      DECLARE_METHOD(t_Throwable, setStackTrace, METH_O),
      DECLARE_METHOD(t_Throwable, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Throwable)[] = {
      { Py_tp_methods, t_Throwable__methods_ },
      { Py_tp_init, (void *) t_Throwable_init_ },
      { Py_tp_getset, t_Throwable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Throwable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Throwable, t_Throwable, Throwable);

    void t_Throwable::install(PyObject *module)
    {
      installType(&PY_TYPE(Throwable), &PY_TYPE_DEF(Throwable), module, "Throwable", 0);
    }

    void t_Throwable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "class_", make_descriptor(Throwable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "wrapfn_", make_descriptor(t_Throwable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Throwable::initializeClass, 1)))
        return NULL;
      return t_Throwable::wrap_Object(Throwable(((t_Throwable *) arg)->object.this$));
    }
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Throwable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Throwable object((jobject) NULL);

          INT_CALL(object = Throwable());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Throwable(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable a1((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "sk", Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Throwable(a0, a1));
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

    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(self->object.addSuppressed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addSuppressed", arg);
      return NULL;
    }

    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.fillInStackTrace());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getCause(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getCause());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocalizedMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getStackTrace(t_Throwable *self)
    {
      JArray< ::java::lang::StackTraceElement > result((jobject) NULL);
      OBJ_CALL(result = self->object.getStackTrace());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Throwable_getSuppressed(t_Throwable *self)
    {
      JArray< Throwable > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuppressed());
      return JArray<jobject>(result.this$).wrap(t_Throwable::wrap_jobject);
    }

    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);
      Throwable result((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.initCause(a0));
        return t_Throwable::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "initCause", arg);
      return NULL;
    }

    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.printStackTrace());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printStackTrace", args);
      return NULL;
    }

    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg)
    {
      JArray< ::java::lang::StackTraceElement > a0((jobject) NULL);

      if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setStackTrace(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setStackTrace", arg);
      return NULL;
    }

    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Throwable), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data)
    {
      Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return t_Throwable::wrap_Object(value);
    }

    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocalizedMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data)
    {
      JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
      OBJ_CALL(value = self->object.getStackTrace());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data)
    {
      {
        JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
        if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &value))
        {
          INT_CALL(self->object.setStackTrace(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "stackTrace", arg);
      return -1;
    }

    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data)
    {
      JArray< Throwable > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuppressed());
      return JArray<jobject>(value.this$).wrap(t_Throwable::wrap_jobject);
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_9981f74b2d109da6] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getShape_9981f74b2d109da6] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_82f92590f4247da1] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogNormalDistribution::LogNormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble LogNormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble LogNormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble LogNormalDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_9981f74b2d109da6]);
        }

        jdouble LogNormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble LogNormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble LogNormalDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_9981f74b2d109da6]);
        }

        jdouble LogNormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble LogNormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean LogNormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble LogNormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
        }

        jdouble LogNormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_82f92590f4247da1], a0, a1);
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$InconsistentStateAt2PiWrapping::class$ = NULL;
          jmethodID *ArcsSet$InconsistentStateAt2PiWrapping::mids$ = NULL;
          bool ArcsSet$InconsistentStateAt2PiWrapping::live$ = false;

          jclass ArcsSet$InconsistentStateAt2PiWrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet$InconsistentStateAt2PiWrapping::ArcsSet$InconsistentStateAt2PiWrapping() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args);
          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data);
          static PyGetSetDef t_ArcsSet$InconsistentStateAt2PiWrapping__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$InconsistentStateAt2PiWrapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$InconsistentStateAt2PiWrapping__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            { Py_tp_methods, t_ArcsSet$InconsistentStateAt2PiWrapping__methods_ },
            { Py_tp_init, (void *) t_ArcsSet$InconsistentStateAt2PiWrapping_init_ },
            { Py_tp_getset, t_ArcsSet$InconsistentStateAt2PiWrapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
            NULL
          };

          DEFINE_TYPE(ArcsSet$InconsistentStateAt2PiWrapping, t_ArcsSet$InconsistentStateAt2PiWrapping, ArcsSet$InconsistentStateAt2PiWrapping);
          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(const ArcsSet$InconsistentStateAt2PiWrapping& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), &PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping), module, "ArcsSet$InconsistentStateAt2PiWrapping", 0);
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "class_", make_descriptor(ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "wrapfn_", make_descriptor(t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(ArcsSet$InconsistentStateAt2PiWrapping(((t_ArcsSet$InconsistentStateAt2PiWrapping *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds)
          {
            ArcsSet$InconsistentStateAt2PiWrapping object((jobject) NULL);

            INT_CALL(object = ArcsSet$InconsistentStateAt2PiWrapping());
            self->object = object;
            self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);

            return 0;
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data)
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
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOF::class$ = NULL;
      jmethodID *LOF::mids$ = NULL;
      bool LOF::live$ = false;

      jclass LOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isQuasiInertial_eee3de00fe971136] = env->getMethodID(cls, "isQuasiInertial", "()Z");
          mids$[mid_rotationFromInertial_7972874aa60c5cbb] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_24d473279eeb35d9] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_937a2310960b8028] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_135a097ae4fe7e71] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOFInToLOFOut_dd0e71c1f4124dab] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOFInToLOFOut_97437eb6e0b89bf3] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_transformFromInertial_1d02c6eb27a4e0c6] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromInertial_3a054f4f7a97adb9] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOF_625180b6bebc3e91] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOF_48c41102db6636d1] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOFInToLOFOut_9ed87e078c66a199] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOFInToLOFOut_627c5c7b45a21c8e] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOF::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jboolean LOF::isQuasiInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_eee3de00fe971136]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_7972874aa60c5cbb], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_24d473279eeb35d9], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_937a2310960b8028], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_135a097ae4fe7e71], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_dd0e71c1f4124dab], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOFInToLOFOut(const ::org::hipparchus::Field & a0, const LOF & a1, const LOF & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::orekit::utils::FieldPVCoordinates & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_97437eb6e0b89bf3], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromInertial(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_1d02c6eb27a4e0c6], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_3a054f4f7a97adb9], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_625180b6bebc3e91], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_48c41102db6636d1], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_9ed87e078c66a199], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_627c5c7b45a21c8e], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_getName(t_LOF *self);
      static PyObject *t_LOF_isQuasiInertial(t_LOF *self);
      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_get__name(t_LOF *self, void *data);
      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data);
      static PyGetSetDef t_LOF__fields_[] = {
        DECLARE_GET_FIELD(t_LOF, name),
        DECLARE_GET_FIELD(t_LOF, quasiInertial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOF__methods_[] = {
        DECLARE_METHOD(t_LOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOF, isQuasiInertial, METH_NOARGS),
        DECLARE_METHOD(t_LOF, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOF, transformFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOF)[] = {
        { Py_tp_methods, t_LOF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LOF, t_LOF, LOF);

      void t_LOF::install(PyObject *module)
      {
        installType(&PY_TYPE(LOF), &PY_TYPE_DEF(LOF), module, "LOF", 0);
      }

      void t_LOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "class_", make_descriptor(LOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "wrapfn_", make_descriptor(t_LOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOF::initializeClass, 1)))
          return NULL;
        return t_LOF::wrap_Object(LOF(((t_LOF *) arg)->object.this$));
      }
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOF_getName(t_LOF *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOF_isQuasiInertial(t_LOF *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isQuasiInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            LOF a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3, a4));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rotationFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kKK", LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkKK", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "transformFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_get__name(t_LOF *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isQuasiInertial());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexLabels::class$ = NULL;
          jmethodID *RinexLabels::mids$ = NULL;
          bool RinexLabels::live$ = false;
          RinexLabels *RinexLabels::ANTENNA_B_SIGHT_XYZ = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_H_E_N = NULL;
          RinexLabels *RinexLabels::ANTENNA_DELTA_X_Y_Z = NULL;
          RinexLabels *RinexLabels::ANTENNA_PHASE_CENTER = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_AZI = NULL;
          RinexLabels *RinexLabels::ANTENNA_ZERODIR_XYZ = NULL;
          RinexLabels *RinexLabels::ANT_NB_TYPE = NULL;
          RinexLabels *RinexLabels::APPROX_POSITION_XYZ = NULL;
          RinexLabels *RinexLabels::CENTER_OF_MASS_XYZ = NULL;
          RinexLabels *RinexLabels::COMMENT = NULL;
          RinexLabels *RinexLabels::DOI = NULL;
          RinexLabels *RinexLabels::END = NULL;
          RinexLabels *RinexLabels::GLONASS_COD_PHS_BIS = NULL;
          RinexLabels *RinexLabels::GLONASS_SLOT_FRQ_NB = NULL;
          RinexLabels *RinexLabels::INTERVAL = NULL;
          RinexLabels *RinexLabels::LEAP_SECONDS = NULL;
          RinexLabels *RinexLabels::LICENSE = NULL;
          RinexLabels *RinexLabels::MARKER_NAME = NULL;
          RinexLabels *RinexLabels::MARKER_NUMBER = NULL;
          RinexLabels *RinexLabels::MARKER_TYPE = NULL;
          RinexLabels *RinexLabels::NB_OF_SATELLITES = NULL;
          RinexLabels *RinexLabels::NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::OBSERVER_AGENCY = NULL;
          RinexLabels *RinexLabels::OBS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::PRN_NB_OF_OBS = NULL;
          RinexLabels *RinexLabels::PROGRAM = NULL;
          RinexLabels *RinexLabels::RCV_CLOCK_OFFS_APPL = NULL;
          RinexLabels *RinexLabels::REC_NB_TYPE_VERS = NULL;
          RinexLabels *RinexLabels::SIGNAL_STRENGTH_UNIT = NULL;
          RinexLabels *RinexLabels::STATION_INFORMATION = NULL;
          RinexLabels *RinexLabels::SYS_DCBS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_NB_TYPES_OF_OBSERV = NULL;
          RinexLabels *RinexLabels::SYS_PCVS_APPLIED = NULL;
          RinexLabels *RinexLabels::SYS_PHASE_SHIFT = NULL;
          RinexLabels *RinexLabels::SYS_SCALE_FACTOR = NULL;
          RinexLabels *RinexLabels::TIME_OF_FIRST_OBS = NULL;
          RinexLabels *RinexLabels::TIME_OF_LAST_OBS = NULL;
          RinexLabels *RinexLabels::VERSION = NULL;
          RinexLabels *RinexLabels::WAVELENGTH_FACT_L1_2 = NULL;

          jclass RinexLabels::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexLabels");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLabel_d2c8eb4129821f0e] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_matches_df4c65b2aede5c41] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
              mids$[mid_valueOf_3722cdadf8e63cb6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/section/RinexLabels;");
              mids$[mid_values_d6b73808c6fed872] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/section/RinexLabels;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ANTENNA_B_SIGHT_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_B_SIGHT_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_H_E_N = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_H_E_N", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_DELTA_X_Y_Z = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_DELTA_X_Y_Z", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_PHASE_CENTER = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_PHASE_CENTER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_AZI = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_AZI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANTENNA_ZERODIR_XYZ = new RinexLabels(env->getStaticObjectField(cls, "ANTENNA_ZERODIR_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              ANT_NB_TYPE = new RinexLabels(env->getStaticObjectField(cls, "ANT_NB_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              APPROX_POSITION_XYZ = new RinexLabels(env->getStaticObjectField(cls, "APPROX_POSITION_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              CENTER_OF_MASS_XYZ = new RinexLabels(env->getStaticObjectField(cls, "CENTER_OF_MASS_XYZ", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              COMMENT = new RinexLabels(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              DOI = new RinexLabels(env->getStaticObjectField(cls, "DOI", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              END = new RinexLabels(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_COD_PHS_BIS = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_COD_PHS_BIS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              GLONASS_SLOT_FRQ_NB = new RinexLabels(env->getStaticObjectField(cls, "GLONASS_SLOT_FRQ_NB", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              INTERVAL = new RinexLabels(env->getStaticObjectField(cls, "INTERVAL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LEAP_SECONDS = new RinexLabels(env->getStaticObjectField(cls, "LEAP_SECONDS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              LICENSE = new RinexLabels(env->getStaticObjectField(cls, "LICENSE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NAME = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NAME", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_NUMBER = new RinexLabels(env->getStaticObjectField(cls, "MARKER_NUMBER", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              MARKER_TYPE = new RinexLabels(env->getStaticObjectField(cls, "MARKER_TYPE", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_OF_SATELLITES = new RinexLabels(env->getStaticObjectField(cls, "NB_OF_SATELLITES", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBSERVER_AGENCY = new RinexLabels(env->getStaticObjectField(cls, "OBSERVER_AGENCY", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              OBS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "OBS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PRN_NB_OF_OBS = new RinexLabels(env->getStaticObjectField(cls, "PRN_NB_OF_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              PROGRAM = new RinexLabels(env->getStaticObjectField(cls, "PROGRAM", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              RCV_CLOCK_OFFS_APPL = new RinexLabels(env->getStaticObjectField(cls, "RCV_CLOCK_OFFS_APPL", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              REC_NB_TYPE_VERS = new RinexLabels(env->getStaticObjectField(cls, "REC_NB_TYPE_VERS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SIGNAL_STRENGTH_UNIT = new RinexLabels(env->getStaticObjectField(cls, "SIGNAL_STRENGTH_UNIT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              STATION_INFORMATION = new RinexLabels(env->getStaticObjectField(cls, "STATION_INFORMATION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_DCBS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_DCBS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_NB_TYPES_OF_OBSERV = new RinexLabels(env->getStaticObjectField(cls, "SYS_NB_TYPES_OF_OBSERV", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PCVS_APPLIED = new RinexLabels(env->getStaticObjectField(cls, "SYS_PCVS_APPLIED", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_PHASE_SHIFT = new RinexLabels(env->getStaticObjectField(cls, "SYS_PHASE_SHIFT", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              SYS_SCALE_FACTOR = new RinexLabels(env->getStaticObjectField(cls, "SYS_SCALE_FACTOR", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_FIRST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_FIRST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              TIME_OF_LAST_OBS = new RinexLabels(env->getStaticObjectField(cls, "TIME_OF_LAST_OBS", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              VERSION = new RinexLabels(env->getStaticObjectField(cls, "VERSION", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              WAVELENGTH_FACT_L1_2 = new RinexLabels(env->getStaticObjectField(cls, "WAVELENGTH_FACT_L1_2", "Lorg/orekit/files/rinex/section/RinexLabels;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexLabels::getLabel() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_d2c8eb4129821f0e]));
          }

          jboolean RinexLabels::matches(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_matches_df4c65b2aede5c41], a0.this$);
          }

          RinexLabels RinexLabels::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexLabels(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3722cdadf8e63cb6], a0.this$));
          }

          JArray< RinexLabels > RinexLabels::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexLabels >(env->callStaticObjectMethod(cls, mids$[mid_values_d6b73808c6fed872]));
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
        namespace section {
          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args);
          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self);
          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg);
          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexLabels_values(PyTypeObject *type);
          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data);
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data);
          static PyGetSetDef t_RinexLabels__fields_[] = {
            DECLARE_GET_FIELD(t_RinexLabels, label),
            DECLARE_GET_FIELD(t_RinexLabels, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexLabels__methods_[] = {
            DECLARE_METHOD(t_RinexLabels, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexLabels, getLabel, METH_NOARGS),
            DECLARE_METHOD(t_RinexLabels, matches, METH_O),
            DECLARE_METHOD(t_RinexLabels, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexLabels, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexLabels)[] = {
            { Py_tp_methods, t_RinexLabels__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexLabels__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexLabels)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexLabels, t_RinexLabels, RinexLabels);
          PyObject *t_RinexLabels::wrap_Object(const RinexLabels& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexLabels::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexLabels::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexLabels *self = (t_RinexLabels *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexLabels::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexLabels), &PY_TYPE_DEF(RinexLabels), module, "RinexLabels", 0);
          }

          void t_RinexLabels::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "class_", make_descriptor(RinexLabels::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "wrapfn_", make_descriptor(t_RinexLabels::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexLabels::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_B_SIGHT_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_B_SIGHT_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_H_E_N", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_H_E_N)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_DELTA_X_Y_Z", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_DELTA_X_Y_Z)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_PHASE_CENTER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_PHASE_CENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_AZI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_AZI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANTENNA_ZERODIR_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANTENNA_ZERODIR_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "ANT_NB_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::ANT_NB_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "APPROX_POSITION_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::APPROX_POSITION_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "CENTER_OF_MASS_XYZ", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::CENTER_OF_MASS_XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "COMMENT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "DOI", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::DOI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "END", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::END)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_COD_PHS_BIS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_COD_PHS_BIS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "GLONASS_SLOT_FRQ_NB", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::GLONASS_SLOT_FRQ_NB)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "INTERVAL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::INTERVAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LEAP_SECONDS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LEAP_SECONDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "LICENSE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::LICENSE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NAME", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_NUMBER", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_NUMBER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "MARKER_TYPE", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::MARKER_TYPE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_OF_SATELLITES", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_OF_SATELLITES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBSERVER_AGENCY", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBSERVER_AGENCY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "OBS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::OBS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PRN_NB_OF_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PRN_NB_OF_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "PROGRAM", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::PROGRAM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "RCV_CLOCK_OFFS_APPL", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::RCV_CLOCK_OFFS_APPL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "REC_NB_TYPE_VERS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::REC_NB_TYPE_VERS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SIGNAL_STRENGTH_UNIT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SIGNAL_STRENGTH_UNIT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "STATION_INFORMATION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::STATION_INFORMATION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_DCBS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_DCBS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_NB_TYPES_OF_OBSERV", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_NB_TYPES_OF_OBSERV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PCVS_APPLIED", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PCVS_APPLIED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_PHASE_SHIFT", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_PHASE_SHIFT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "SYS_SCALE_FACTOR", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::SYS_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_FIRST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_FIRST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "TIME_OF_LAST_OBS", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::TIME_OF_LAST_OBS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "VERSION", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::VERSION)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexLabels), "WAVELENGTH_FACT_L1_2", make_descriptor(t_RinexLabels::wrap_Object(*RinexLabels::WAVELENGTH_FACT_L1_2)));
          }

          static PyObject *t_RinexLabels_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexLabels::initializeClass, 1)))
              return NULL;
            return t_RinexLabels::wrap_Object(RinexLabels(((t_RinexLabels *) arg)->object.this$));
          }
          static PyObject *t_RinexLabels_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexLabels::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexLabels_of_(t_RinexLabels *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexLabels_getLabel(t_RinexLabels *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLabel());
            return j2p(result);
          }

          static PyObject *t_RinexLabels_matches(t_RinexLabels *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.matches(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "matches", arg);
            return NULL;
          }

          static PyObject *t_RinexLabels_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexLabels result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::valueOf(a0));
              return t_RinexLabels::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexLabels_values(PyTypeObject *type)
          {
            JArray< RinexLabels > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::section::RinexLabels::values());
            return JArray<jobject>(result.this$).wrap(t_RinexLabels::wrap_jobject);
          }
          static PyObject *t_RinexLabels_get__parameters_(t_RinexLabels *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexLabels_get__label(t_RinexLabels *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLabel());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonAbstractGaussianContribution::class$ = NULL;
            jmethodID *PythonAbstractGaussianContribution::mids$ = NULL;
            bool PythonAbstractGaussianContribution::live$ = false;

            jclass PythonAbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e31d0f82a9451a32] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/forces/ForceModel;D)V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getLLimits_5bf18b5e9ec57652] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_15451c899b8436e1] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_d751c1a57012b438] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGaussianContribution::PythonAbstractGaussianContribution(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::forces::ForceModel & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_e31d0f82a9451a32, a0.this$, a1, a2.this$, a3)) {}

            void PythonAbstractGaussianContribution::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAbstractGaussianContribution::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAbstractGaussianContribution::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self);
            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_PythonAbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGaussianContribution, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGaussianContribution, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGaussianContribution)[] = {
              { Py_tp_methods, t_PythonAbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGaussianContribution_init_ },
              { Py_tp_getset, t_PythonAbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGaussianContribution, t_PythonAbstractGaussianContribution, PythonAbstractGaussianContribution);

            void t_PythonAbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGaussianContribution), &PY_TYPE_DEF(PythonAbstractGaussianContribution), module, "PythonAbstractGaussianContribution", 1);
            }

            void t_PythonAbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "class_", make_descriptor(PythonAbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "wrapfn_", make_descriptor(t_PythonAbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGaussianContribution::initializeClass);
              JNINativeMethod methods[] = {
                { "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractGaussianContribution_getLLimits0 },
                { "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D", (void *) t_PythonAbstractGaussianContribution_getLLimits1 },
                { "getParametersDriversWithoutMu", "()Ljava/util/List;", (void *) t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGaussianContribution_pythonDecRef3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonAbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGaussianContribution::wrap_Object(PythonAbstractGaussianContribution(((t_PythonAbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGaussianContribution_init_(t_PythonAbstractGaussianContribution *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::ForceModel a2((jobject) NULL);
              jdouble a3;
              PythonAbstractGaussianContribution object((jobject) NULL);

              if (!parseArgs(args, "sDkD", ::org::orekit::forces::ForceModel::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGaussianContribution(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGaussianContribution_finalize(t_PythonAbstractGaussianContribution *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGaussianContribution_pythonExtension(t_PythonAbstractGaussianContribution *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getLLimits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *result = PyObject_CallMethod(obj, "getLLimits", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getLLimits", result);
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

            static jobject JNICALL t_PythonAbstractGaussianContribution_getParametersDriversWithoutMu2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getParametersDriversWithoutMu", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("getParametersDriversWithoutMu", result);
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

            static void JNICALL t_PythonAbstractGaussianContribution_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGaussianContribution::mids$[PythonAbstractGaussianContribution::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractGaussianContribution_get__self(t_PythonAbstractGaussianContribution *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParameters::class$ = NULL;
            jmethodID *ODParameters::mids$ = NULL;
            bool ODParameters::live$ = false;

            jclass ODParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getActualOdSpan_9981f74b2d109da6] = env->getMethodID(cls, "getActualOdSpan", "()D");
                mids$[mid_getObsAvailable_d6ab429752e7c267] = env->getMethodID(cls, "getObsAvailable", "()I");
                mids$[mid_getObsUsed_d6ab429752e7c267] = env->getMethodID(cls, "getObsUsed", "()I");
                mids$[mid_getOdEpoch_80e11148db499dda] = env->getMethodID(cls, "getOdEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getRecommendedOdSpan_9981f74b2d109da6] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                mids$[mid_getResidualsAccepted_9981f74b2d109da6] = env->getMethodID(cls, "getResidualsAccepted", "()D");
                mids$[mid_getTimeLastObsEnd_80e11148db499dda] = env->getMethodID(cls, "getTimeLastObsEnd", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeLastObsStart_80e11148db499dda] = env->getMethodID(cls, "getTimeLastObsStart", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTracksAvailable_d6ab429752e7c267] = env->getMethodID(cls, "getTracksAvailable", "()I");
                mids$[mid_getTracksUsed_d6ab429752e7c267] = env->getMethodID(cls, "getTracksUsed", "()I");
                mids$[mid_getWeightedRMS_9981f74b2d109da6] = env->getMethodID(cls, "getWeightedRMS", "()D");
                mids$[mid_setActualOdSpan_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                mids$[mid_setObsAvailable_8fd427ab23829bf5] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                mids$[mid_setObsUsed_8fd427ab23829bf5] = env->getMethodID(cls, "setObsUsed", "(I)V");
                mids$[mid_setOdEpoch_8497861b879c83f7] = env->getMethodID(cls, "setOdEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setRecommendedOdSpan_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                mids$[mid_setResidualsAccepted_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setResidualsAccepted", "(D)V");
                mids$[mid_setTimeLastObsEnd_8497861b879c83f7] = env->getMethodID(cls, "setTimeLastObsEnd", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeLastObsStart_8497861b879c83f7] = env->getMethodID(cls, "setTimeLastObsStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTracksAvailable_8fd427ab23829bf5] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                mids$[mid_setTracksUsed_8fd427ab23829bf5] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                mids$[mid_setWeightedRMS_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setWeightedRMS", "(D)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ODParameters::ODParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jdouble ODParameters::getActualOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_9981f74b2d109da6]);
            }

            jint ODParameters::getObsAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsAvailable_d6ab429752e7c267]);
            }

            jint ODParameters::getObsUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsUsed_d6ab429752e7c267]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getOdEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOdEpoch_80e11148db499dda]));
            }

            jdouble ODParameters::getRecommendedOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_9981f74b2d109da6]);
            }

            jdouble ODParameters::getResidualsAccepted() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getResidualsAccepted_9981f74b2d109da6]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsEnd() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsEnd_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsStart() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsStart_80e11148db499dda]));
            }

            jint ODParameters::getTracksAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksAvailable_d6ab429752e7c267]);
            }

            jint ODParameters::getTracksUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksUsed_d6ab429752e7c267]);
            }

            jdouble ODParameters::getWeightedRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getWeightedRMS_9981f74b2d109da6]);
            }

            void ODParameters::setActualOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setActualOdSpan_1ad26e8c8c0cd65b], a0);
            }

            void ODParameters::setObsAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsAvailable_8fd427ab23829bf5], a0);
            }

            void ODParameters::setObsUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsUsed_8fd427ab23829bf5], a0);
            }

            void ODParameters::setOdEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdEpoch_8497861b879c83f7], a0.this$);
            }

            void ODParameters::setRecommendedOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_1ad26e8c8c0cd65b], a0);
            }

            void ODParameters::setResidualsAccepted(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setResidualsAccepted_1ad26e8c8c0cd65b], a0);
            }

            void ODParameters::setTimeLastObsEnd(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsEnd_8497861b879c83f7], a0.this$);
            }

            void ODParameters::setTimeLastObsStart(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsStart_8497861b879c83f7], a0.this$);
            }

            void ODParameters::setTracksAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksAvailable_8fd427ab23829bf5], a0);
            }

            void ODParameters::setTracksUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksUsed_8fd427ab23829bf5], a0);
            }

            void ODParameters::setWeightedRMS(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeightedRMS_1ad26e8c8c0cd65b], a0);
            }

            void ODParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self);
            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self);
            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self);
            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self);
            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self);
            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self);
            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg);
            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args);
            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data);
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data);
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data);
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data);
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data);
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data);
            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data);
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_ODParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_ODParameters, actualOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, obsAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, obsUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, odEpoch),
              DECLARE_GETSET_FIELD(t_ODParameters, recommendedOdSpan),
              DECLARE_GETSET_FIELD(t_ODParameters, residualsAccepted),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsEnd),
              DECLARE_GETSET_FIELD(t_ODParameters, timeLastObsStart),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksAvailable),
              DECLARE_GETSET_FIELD(t_ODParameters, tracksUsed),
              DECLARE_GETSET_FIELD(t_ODParameters, weightedRMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParameters__methods_[] = {
              DECLARE_METHOD(t_ODParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParameters, getActualOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getObsUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getOdEpoch, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getRecommendedOdSpan, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getResidualsAccepted, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsEnd, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTimeLastObsStart, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksAvailable, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getTracksUsed, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, getWeightedRMS, METH_NOARGS),
              DECLARE_METHOD(t_ODParameters, setActualOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setObsUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setOdEpoch, METH_O),
              DECLARE_METHOD(t_ODParameters, setRecommendedOdSpan, METH_O),
              DECLARE_METHOD(t_ODParameters, setResidualsAccepted, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsEnd, METH_O),
              DECLARE_METHOD(t_ODParameters, setTimeLastObsStart, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksAvailable, METH_O),
              DECLARE_METHOD(t_ODParameters, setTracksUsed, METH_O),
              DECLARE_METHOD(t_ODParameters, setWeightedRMS, METH_O),
              DECLARE_METHOD(t_ODParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParameters)[] = {
              { Py_tp_methods, t_ODParameters__methods_ },
              { Py_tp_init, (void *) t_ODParameters_init_ },
              { Py_tp_getset, t_ODParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ODParameters, t_ODParameters, ODParameters);

            void t_ODParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParameters), &PY_TYPE_DEF(ODParameters), module, "ODParameters", 0);
            }

            void t_ODParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "class_", make_descriptor(ODParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "wrapfn_", make_descriptor(t_ODParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParameters::initializeClass, 1)))
                return NULL;
              return t_ODParameters::wrap_Object(ODParameters(((t_ODParameters *) arg)->object.this$));
            }
            static PyObject *t_ODParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ODParameters_init_(t_ODParameters *self, PyObject *args, PyObject *kwds)
            {
              ODParameters object((jobject) NULL);

              INT_CALL(object = ODParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_ODParameters_getActualOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getObsAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getObsUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObsUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getOdEpoch(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getRecommendedOdSpan(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getResidualsAccepted(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_getTimeLastObsEnd(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTimeLastObsStart(t_ODParameters *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_ODParameters_getTracksAvailable(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksAvailable());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getTracksUsed(t_ODParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTracksUsed());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ODParameters_getWeightedRMS(t_ODParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ODParameters_setActualOdSpan(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setActualOdSpan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setActualOdSpan", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setObsAvailable(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setObsAvailable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsAvailable", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setObsUsed(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setObsUsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsUsed", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setOdEpoch(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOdEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdEpoch", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setRecommendedOdSpan(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRecommendedOdSpan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRecommendedOdSpan", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setResidualsAccepted(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setResidualsAccepted(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setResidualsAccepted", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsEnd(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsEnd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsEnd", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTimeLastObsStart(t_ODParameters *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTimeLastObsStart(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeLastObsStart", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTracksAvailable(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTracksAvailable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTracksAvailable", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setTracksUsed(t_ODParameters *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTracksUsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTracksUsed", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_setWeightedRMS(t_ODParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setWeightedRMS(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeightedRMS", arg);
              return NULL;
            }

            static PyObject *t_ODParameters_validate(t_ODParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(ODParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_ODParameters_get__actualOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getActualOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__actualOdSpan(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setActualOdSpan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "actualOdSpan", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__obsAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsAvailable(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setObsAvailable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsAvailable", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__obsUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObsUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__obsUsed(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setObsUsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsUsed", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__odEpoch(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__odEpoch(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setOdEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odEpoch", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__recommendedOdSpan(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRecommendedOdSpan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__recommendedOdSpan(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRecommendedOdSpan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "recommendedOdSpan", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__residualsAccepted(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getResidualsAccepted());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__residualsAccepted(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setResidualsAccepted(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "residualsAccepted", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsEnd(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsEnd());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsEnd(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsEnd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsEnd", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__timeLastObsStart(t_ODParameters *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeLastObsStart());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_ODParameters_set__timeLastObsStart(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeLastObsStart(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeLastObsStart", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__tracksAvailable(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksAvailable());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksAvailable(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTracksAvailable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tracksAvailable", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__tracksUsed(t_ODParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTracksUsed());
              return PyLong_FromLong((long) value);
            }
            static int t_ODParameters_set__tracksUsed(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTracksUsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tracksUsed", arg);
              return -1;
            }

            static PyObject *t_ODParameters_get__weightedRMS(t_ODParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getWeightedRMS());
              return PyFloat_FromDouble((double) value);
            }
            static int t_ODParameters_set__weightedRMS(t_ODParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setWeightedRMS(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "weightedRMS", arg);
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
#include "org/hipparchus/linear/QRDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposition::class$ = NULL;
      jmethodID *QRDecomposition::mids$ = NULL;
      bool QRDecomposition::live$ = false;

      jclass QRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_dc02fdb8767f32bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getH_b2eebabce70526d8] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQ_b2eebabce70526d8] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQT_b2eebabce70526d8] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getR_b2eebabce70526d8] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_ac3e6aafa2c6c596] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_11ecdbb5af7ed67d] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_5f60b0f0790bcf77] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc02fdb8767f32bc, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQ_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQT_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getR_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::DecompositionSolver QRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ac3e6aafa2c6c596]));
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
      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data);
      static PyGetSetDef t_QRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_QRDecomposition, h),
        DECLARE_GET_FIELD(t_QRDecomposition, q),
        DECLARE_GET_FIELD(t_QRDecomposition, qT),
        DECLARE_GET_FIELD(t_QRDecomposition, r),
        DECLARE_GET_FIELD(t_QRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QRDecomposition__methods_[] = {
        DECLARE_METHOD(t_QRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposition)[] = {
        { Py_tp_methods, t_QRDecomposition__methods_ },
        { Py_tp_init, (void *) t_QRDecomposition_init_ },
        { Py_tp_getset, t_QRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposition, t_QRDecomposition, QRDecomposition);

      void t_QRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposition), &PY_TYPE_DEF(QRDecomposition), module, "QRDecomposition", 0);
      }

      void t_QRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "class_", make_descriptor(QRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "wrapfn_", make_descriptor(t_QRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposition::initializeClass, 1)))
          return NULL;
        return t_QRDecomposition::wrap_Object(QRDecomposition(((t_QRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = QRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = QRDecomposition(a0, a1));
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

      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data)
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
#include "org/orekit/estimation/measurements/PythonEstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationModifier::class$ = NULL;
        jmethodID *PythonEstimationModifier::mids$ = NULL;
        bool PythonEstimationModifier::live$ = false;

        jclass PythonEstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationModifier::PythonEstimationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEstimationModifier::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEstimationModifier::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEstimationModifier::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args);
        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self);
        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data);
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data);
        static PyGetSetDef t_PythonEstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationModifier, self),
          DECLARE_GET_FIELD(t_PythonEstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationModifier__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationModifier)[] = {
          { Py_tp_methods, t_PythonEstimationModifier__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationModifier_init_ },
          { Py_tp_getset, t_PythonEstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationModifier)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationModifier, t_PythonEstimationModifier, PythonEstimationModifier);
        PyObject *t_PythonEstimationModifier::wrap_Object(const PythonEstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonEstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonEstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationModifier), &PY_TYPE_DEF(PythonEstimationModifier), module, "PythonEstimationModifier", 1);
        }

        void t_PythonEstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "class_", make_descriptor(PythonEstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "wrapfn_", make_descriptor(t_PythonEstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationModifier::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonEstimationModifier_getParametersDrivers0 },
            { "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonEstimationModifier_modify1 },
            { "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V", (void *) t_PythonEstimationModifier_modifyWithoutDerivatives2 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationModifier_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationModifier::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationModifier::wrap_Object(PythonEstimationModifier(((t_PythonEstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationModifier object((jobject) NULL);

          INT_CALL(object = PythonEstimationModifier());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "modify", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
          PyObject *result = PyObject_CallMethod(obj, "modifyWithoutDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data)
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
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldAbstractRuleFactory::class$ = NULL;
          jmethodID *FieldAbstractRuleFactory::mids$ = NULL;
          bool FieldAbstractRuleFactory::live$ = false;

          jclass FieldAbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
              mids$[mid_getRule_c07c8b9364272960] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_607be8730ac51032] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_enforceSymmetry_77e61a645c496adc] = env->getMethodID(cls, "enforceSymmetry", "([Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldAbstractRuleFactory::FieldAbstractRuleFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

          ::org::hipparchus::Field FieldAbstractRuleFactory::getField() const
          {
            return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
          }

          ::org::hipparchus::util::Pair FieldAbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_c07c8b9364272960], a0));
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
          static PyObject *t_FieldAbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_of_(t_FieldAbstractRuleFactory *self, PyObject *args);
          static int t_FieldAbstractRuleFactory_init_(t_FieldAbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldAbstractRuleFactory_getField(t_FieldAbstractRuleFactory *self);
          static PyObject *t_FieldAbstractRuleFactory_getRule(t_FieldAbstractRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldAbstractRuleFactory_get__field(t_FieldAbstractRuleFactory *self, void *data);
          static PyObject *t_FieldAbstractRuleFactory_get__parameters_(t_FieldAbstractRuleFactory *self, void *data);
          static PyGetSetDef t_FieldAbstractRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldAbstractRuleFactory, field),
            DECLARE_GET_FIELD(t_FieldAbstractRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldAbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldAbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, getField, METH_NOARGS),
            DECLARE_METHOD(t_FieldAbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldAbstractRuleFactory)[] = {
            { Py_tp_methods, t_FieldAbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldAbstractRuleFactory_init_ },
            { Py_tp_getset, t_FieldAbstractRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldAbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldAbstractRuleFactory, t_FieldAbstractRuleFactory, FieldAbstractRuleFactory);
          PyObject *t_FieldAbstractRuleFactory::wrap_Object(const FieldAbstractRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldAbstractRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldAbstractRuleFactory *self = (t_FieldAbstractRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldAbstractRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldAbstractRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldAbstractRuleFactory *self = (t_FieldAbstractRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldAbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldAbstractRuleFactory), &PY_TYPE_DEF(FieldAbstractRuleFactory), module, "FieldAbstractRuleFactory", 0);
          }

          void t_FieldAbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "class_", make_descriptor(FieldAbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "wrapfn_", make_descriptor(t_FieldAbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldAbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldAbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldAbstractRuleFactory::wrap_Object(FieldAbstractRuleFactory(((t_FieldAbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldAbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldAbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldAbstractRuleFactory_of_(t_FieldAbstractRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldAbstractRuleFactory_init_(t_FieldAbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbstractRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbstractRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldAbstractRuleFactory_getField(t_FieldAbstractRuleFactory *self)
          {
            ::org::hipparchus::Field result((jobject) NULL);
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldAbstractRuleFactory_getRule(t_FieldAbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
          static PyObject *t_FieldAbstractRuleFactory_get__parameters_(t_FieldAbstractRuleFactory *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldAbstractRuleFactory_get__field(t_FieldAbstractRuleFactory *self, void *data)
          {
            ::org::hipparchus::Field value((jobject) NULL);
            OBJ_CALL(value = self->object.getField());
            return ::org::hipparchus::t_Field::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonAbstractCovarianceMatrixProvider::mids$ = NULL;
        bool PythonAbstractCovarianceMatrixProvider::live$ = false;

        jclass PythonAbstractCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getProcessNoiseMatrix_70abd86226561523] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractCovarianceMatrixProvider::PythonAbstractCovarianceMatrixProvider(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

        void PythonAbstractCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractCovarianceMatrixProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonAbstractCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonAbstractCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractCovarianceMatrixProvider, t_PythonAbstractCovarianceMatrixProvider, PythonAbstractCovarianceMatrixProvider);

        void t_PythonAbstractCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractCovarianceMatrixProvider), &PY_TYPE_DEF(PythonAbstractCovarianceMatrixProvider), module, "PythonAbstractCovarianceMatrixProvider", 1);
        }

        void t_PythonAbstractCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "class_", make_descriptor(PythonAbstractCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonAbstractCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractCovarianceMatrixProvider::wrap_Object(PythonAbstractCovarianceMatrixProvider(((t_PythonAbstractCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractCovarianceMatrixProvider_init_(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          PythonAbstractCovarianceMatrixProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractCovarianceMatrixProvider(a0));
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

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_finalize(t_PythonAbstractCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_pythonExtension(t_PythonAbstractCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractCovarianceMatrixProvider_getProcessNoiseMatrix0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonAbstractCovarianceMatrixProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractCovarianceMatrixProvider::mids$[PythonAbstractCovarianceMatrixProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractCovarianceMatrixProvider_get__self(t_PythonAbstractCovarianceMatrixProvider *self, void *data)
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
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesReader::class$ = NULL;
          jmethodID *OceanTidesReader::mids$ = NULL;
          bool OceanTidesReader::live$ = false;

          jclass OceanTidesReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canAdd_905dfe1f877a03f0] = env->getMethodID(cls, "canAdd", "(II)Z");
              mids$[mid_getMaxAvailableDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxAvailableDegree", "()I");
              mids$[mid_getMaxAvailableOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxAvailableOrder", "()I");
              mids$[mid_getMaxParseDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getWaves_d751c1a57012b438] = env->getMethodID(cls, "getWaves", "()Ljava/util/List;");
              mids$[mid_setMaxParseDegree_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_startParse_105e1eadb709d9ac] = env->getMethodID(cls, "startParse", "(Ljava/lang/String;)V");
              mids$[mid_addWaveCoefficients_9eca3480475a73b0] = env->getMethodID(cls, "addWaveCoefficients", "(IIIDDDDILjava/lang/String;)V");
              mids$[mid_endParse_ff7cb6c242604316] = env->getMethodID(cls, "endParse", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesReader::OceanTidesReader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          jboolean OceanTidesReader::canAdd(jint a0, jint a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_canAdd_905dfe1f877a03f0], a0, a1);
          }

          jint OceanTidesReader::getMaxAvailableDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableDegree_d6ab429752e7c267]);
          }

          jint OceanTidesReader::getMaxAvailableOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableOrder_d6ab429752e7c267]);
          }

          jint OceanTidesReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_d6ab429752e7c267]);
          }

          jint OceanTidesReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_d6ab429752e7c267]);
          }

          ::java::lang::String OceanTidesReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
          }

          ::java::util::List OceanTidesReader::getWaves() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getWaves_d751c1a57012b438]));
          }

          void OceanTidesReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_8fd427ab23829bf5], a0);
          }

          void OceanTidesReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_8fd427ab23829bf5], a0);
          }

          jboolean OceanTidesReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args);
          static PyObject *t_OceanTidesReader_getMaxAvailableDegree(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getMaxAvailableOrder(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_get__maxAvailableDegree(t_OceanTidesReader *self, void *data);
          static PyObject *t_OceanTidesReader_get__maxAvailableOrder(t_OceanTidesReader *self, void *data);
          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data);
          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data);
          static PyGetSetDef t_OceanTidesReader__fields_[] = {
            DECLARE_GET_FIELD(t_OceanTidesReader, maxAvailableDegree),
            DECLARE_GET_FIELD(t_OceanTidesReader, maxAvailableOrder),
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseOrder),
            DECLARE_GET_FIELD(t_OceanTidesReader, supportedNames),
            DECLARE_GET_FIELD(t_OceanTidesReader, waves),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesReader__methods_[] = {
            DECLARE_METHOD(t_OceanTidesReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, canAdd, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxAvailableDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxAvailableOrder, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getWaves, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesReader)[] = {
            { Py_tp_methods, t_OceanTidesReader__methods_ },
            { Py_tp_init, (void *) t_OceanTidesReader_init_ },
            { Py_tp_getset, t_OceanTidesReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesReader, t_OceanTidesReader, OceanTidesReader);

          void t_OceanTidesReader::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesReader), &PY_TYPE_DEF(OceanTidesReader), module, "OceanTidesReader", 0);
          }

          void t_OceanTidesReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "class_", make_descriptor(OceanTidesReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "wrapfn_", make_descriptor(t_OceanTidesReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesReader::initializeClass, 1)))
              return NULL;
            return t_OceanTidesReader::wrap_Object(OceanTidesReader(((t_OceanTidesReader *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanTidesReader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = OceanTidesReader(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.canAdd(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "canAdd", args);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_getMaxAvailableDegree(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getMaxAvailableOrder(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
          }

          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OceanTidesReader_get__maxAvailableDegree(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesReader_get__maxAvailableOrder(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$StreamOpener::class$ = NULL;
      jmethodID *DataSource$StreamOpener::mids$ = NULL;
      bool DataSource$StreamOpener::live$ = false;

      jclass DataSource$StreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$StreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_af9d97da329e95d9] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::InputStream DataSource$StreamOpener::openOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openOnce_af9d97da329e95d9]));
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
      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self);

      static PyMethodDef t_DataSource$StreamOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$StreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$StreamOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$StreamOpener)[] = {
        { Py_tp_methods, t_DataSource$StreamOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$StreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$StreamOpener, t_DataSource$StreamOpener, DataSource$StreamOpener);

      void t_DataSource$StreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$StreamOpener), &PY_TYPE_DEF(DataSource$StreamOpener), module, "DataSource$StreamOpener", 0);
      }

      void t_DataSource$StreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "class_", make_descriptor(DataSource$StreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "wrapfn_", make_descriptor(t_DataSource$StreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$StreamOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$StreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$StreamOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$StreamOpener::wrap_Object(DataSource$StreamOpener(((t_DataSource$StreamOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$StreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$StreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$StreamOpener_openOnce(t_DataSource$StreamOpener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionHeader::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionHeader::mids$ = NULL;
              bool RtcmOrbitCorrectionHeader::live$ = false;

              jclass RtcmOrbitCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteReferenceDatum_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteReferenceDatum", "()I");
                  mids$[mid_setSatelliteReferenceDatum_8fd427ab23829bf5] = env->getMethodID(cls, "setSatelliteReferenceDatum", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionHeader::RtcmOrbitCorrectionHeader() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint RtcmOrbitCorrectionHeader::getSatelliteReferenceDatum() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteReferenceDatum_d6ab429752e7c267]);
              }

              void RtcmOrbitCorrectionHeader::setSatelliteReferenceDatum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteReferenceDatum_8fd427ab23829bf5], a0);
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
              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self);
              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data);
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionHeader, satelliteReferenceDatum),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, getSatelliteReferenceDatum, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, setSatelliteReferenceDatum, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionHeader, t_RtcmOrbitCorrectionHeader, RtcmOrbitCorrectionHeader);

              void t_RtcmOrbitCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionHeader), &PY_TYPE_DEF(RtcmOrbitCorrectionHeader), module, "RtcmOrbitCorrectionHeader", 0);
              }

              void t_RtcmOrbitCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "class_", make_descriptor(RtcmOrbitCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionHeader::wrap_Object(RtcmOrbitCorrectionHeader(((t_RtcmOrbitCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteReferenceDatum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteReferenceDatum", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteReferenceDatum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteReferenceDatum", arg);
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
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *UnivariateIntegrator::class$ = NULL;
        jmethodID *UnivariateIntegrator::mids$ = NULL;
        bool UnivariateIntegrator::live$ = false;

        jclass UnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/UnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_f8d9b8fc210a2541] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble UnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6]);
        }

        jint UnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        jint UnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
        }

        jint UnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_d6ab429752e7c267]);
        }

        jint UnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_d6ab429752e7c267]);
        }

        jdouble UnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_9981f74b2d109da6]);
        }

        jdouble UnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_f8d9b8fc210a2541], a0, a1.this$, a2, a3);
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
        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self);
        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args);
        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data);
        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data);
        static PyGetSetDef t_UnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_UnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_UnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateIntegrator)[] = {
          { Py_tp_methods, t_UnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateIntegrator, t_UnivariateIntegrator, UnivariateIntegrator);

        void t_UnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateIntegrator), &PY_TYPE_DEF(UnivariateIntegrator), module, "UnivariateIntegrator", 0);
        }

        void t_UnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "class_", make_descriptor(UnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "wrapfn_", make_descriptor(t_UnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_UnivariateIntegrator::wrap_Object(UnivariateIntegrator(((t_UnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateIntegrator_getAbsoluteAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_getEvaluations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getIterations(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMaximalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getMinimalIterationCount(t_UnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateIntegrator_getRelativeAccuracy(t_UnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateIntegrator_integrate(t_UnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_UnivariateIntegrator_get__absoluteAccuracy(t_UnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateIntegrator_get__evaluations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__iterations(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__maximalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__minimalIterationCount(t_UnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateIntegrator_get__relativeAccuracy(t_UnivariateIntegrator *self, void *data)
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
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *FixedTroposphericDelay::class$ = NULL;
          jmethodID *FixedTroposphericDelay::mids$ = NULL;
          bool FixedTroposphericDelay::live$ = false;

          jclass FixedTroposphericDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/FixedTroposphericDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_init$_3a2cd39ad5830d3b] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
              mids$[mid_getDefaultModel_d1fde2ae98884ceb] = env->getStaticMethodID(cls, "getDefaultModel", "()Lorg/orekit/models/earth/troposphere/FixedTroposphericDelay;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a2cd39ad5830d3b, a0.this$, a1.this$, a2.this$)) {}

          FixedTroposphericDelay FixedTroposphericDelay::getDefaultModel()
          {
            jclass cls = env->getClass(initializeClass);
            return FixedTroposphericDelay(env->callStaticObjectMethod(cls, mids$[mid_getDefaultModel_d1fde2ae98884ceb]));
          }

          ::java::util::List FixedTroposphericDelay::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::CalculusFieldElement FixedTroposphericDelay::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble FixedTroposphericDelay::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type);
          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self);
          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args);
          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data);
          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data);
          static PyGetSetDef t_FixedTroposphericDelay__fields_[] = {
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, defaultModel),
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FixedTroposphericDelay__methods_[] = {
            DECLARE_METHOD(t_FixedTroposphericDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getDefaultModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FixedTroposphericDelay, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FixedTroposphericDelay)[] = {
            { Py_tp_methods, t_FixedTroposphericDelay__methods_ },
            { Py_tp_init, (void *) t_FixedTroposphericDelay_init_ },
            { Py_tp_getset, t_FixedTroposphericDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FixedTroposphericDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FixedTroposphericDelay, t_FixedTroposphericDelay, FixedTroposphericDelay);

          void t_FixedTroposphericDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(FixedTroposphericDelay), &PY_TYPE_DEF(FixedTroposphericDelay), module, "FixedTroposphericDelay", 0);
          }

          void t_FixedTroposphericDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "class_", make_descriptor(FixedTroposphericDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "wrapfn_", make_descriptor(t_FixedTroposphericDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FixedTroposphericDelay::initializeClass, 1)))
              return NULL;
            return t_FixedTroposphericDelay::wrap_Object(FixedTroposphericDelay(((t_FixedTroposphericDelay *) arg)->object.this$));
          }
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FixedTroposphericDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1, a2));
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

          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type)
          {
            FixedTroposphericDelay result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::FixedTroposphericDelay::getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(result);
          }

          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args)
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

          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data)
          {
            FixedTroposphericDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(value);
          }

          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data)
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
