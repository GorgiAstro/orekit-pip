#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/SpearmansCorrelation.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *SpearmansCorrelation::class$ = NULL;
        jmethodID *SpearmansCorrelation::mids$ = NULL;
        bool SpearmansCorrelation::live$ = false;

        jclass SpearmansCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/SpearmansCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_0fe311cb60090149] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_init$_e1d0e44c82eb93d9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_computeCorrelationMatrix_05cc2960cde80114] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_340b47d21842d02c] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_628a76297e217f13] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getRankCorrelation_2954887f1895106d] = env->getMethodID(cls, "getRankCorrelation", "()Lorg/hipparchus/stat/correlation/PearsonsCorrelation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpearmansCorrelation::SpearmansCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::stat::ranking::RankingAlgorithm & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fe311cb60090149, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::stat::ranking::RankingAlgorithm & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1d0e44c82eb93d9, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_05cc2960cde80114], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_340b47d21842d02c], a0.this$));
        }

        jdouble SpearmansCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_628a76297e217f13], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::stat::correlation::PearsonsCorrelation SpearmansCorrelation::getRankCorrelation() const
        {
          return ::org::hipparchus::stat::correlation::PearsonsCorrelation(env->callObjectMethod(this$, mids$[mid_getRankCorrelation_2954887f1895106d]));
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
      namespace correlation {
        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data);
        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data);
        static PyGetSetDef t_SpearmansCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_SpearmansCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_SpearmansCorrelation, rankCorrelation),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpearmansCorrelation__methods_[] = {
          DECLARE_METHOD(t_SpearmansCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getRankCorrelation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpearmansCorrelation)[] = {
          { Py_tp_methods, t_SpearmansCorrelation__methods_ },
          { Py_tp_init, (void *) t_SpearmansCorrelation_init_ },
          { Py_tp_getset, t_SpearmansCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpearmansCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpearmansCorrelation, t_SpearmansCorrelation, SpearmansCorrelation);

        void t_SpearmansCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(SpearmansCorrelation), &PY_TYPE_DEF(SpearmansCorrelation), module, "SpearmansCorrelation", 0);
        }

        void t_SpearmansCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "class_", make_descriptor(SpearmansCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "wrapfn_", make_descriptor(t_SpearmansCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpearmansCorrelation::initializeClass, 1)))
            return NULL;
          return t_SpearmansCorrelation::wrap_Object(SpearmansCorrelation(((t_SpearmansCorrelation *) arg)->object.this$));
        }
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpearmansCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SpearmansCorrelation object((jobject) NULL);

              INT_CALL(object = SpearmansCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::RankingAlgorithm a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::stat::ranking::RankingAlgorithm a1((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SpearmansCorrelation(a0, a1));
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

        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation result((jobject) NULL);
          OBJ_CALL(result = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation value((jobject) NULL);
          OBJ_CALL(value = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
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
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeRateModifier::RelativisticClockRangeRateModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::java::util::List RelativisticClockRangeRateModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticClockRangeRateModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *SsrUpdateInterval::class$ = NULL;
            jmethodID *SsrUpdateInterval::mids$ = NULL;
            bool SsrUpdateInterval::live$ = false;

            jclass SsrUpdateInterval::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/SsrUpdateInterval");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getUpdateInterval_557b8123390d8d0c] = env->getMethodID(cls, "getUpdateInterval", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrUpdateInterval::SsrUpdateInterval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            jdouble SsrUpdateInterval::getUpdateInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getUpdateInterval_557b8123390d8d0c]);
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
          namespace common {
            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self);
            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data);
            static PyGetSetDef t_SsrUpdateInterval__fields_[] = {
              DECLARE_GET_FIELD(t_SsrUpdateInterval, updateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrUpdateInterval__methods_[] = {
              DECLARE_METHOD(t_SsrUpdateInterval, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrUpdateInterval, getUpdateInterval, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrUpdateInterval)[] = {
              { Py_tp_methods, t_SsrUpdateInterval__methods_ },
              { Py_tp_init, (void *) t_SsrUpdateInterval_init_ },
              { Py_tp_getset, t_SsrUpdateInterval__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrUpdateInterval)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrUpdateInterval, t_SsrUpdateInterval, SsrUpdateInterval);

            void t_SsrUpdateInterval::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrUpdateInterval), &PY_TYPE_DEF(SsrUpdateInterval), module, "SsrUpdateInterval", 0);
            }

            void t_SsrUpdateInterval::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "class_", make_descriptor(SsrUpdateInterval::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "wrapfn_", make_descriptor(t_SsrUpdateInterval::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrUpdateInterval), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrUpdateInterval_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrUpdateInterval::initializeClass, 1)))
                return NULL;
              return t_SsrUpdateInterval::wrap_Object(SsrUpdateInterval(((t_SsrUpdateInterval *) arg)->object.this$));
            }
            static PyObject *t_SsrUpdateInterval_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrUpdateInterval::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrUpdateInterval_init_(t_SsrUpdateInterval *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              SsrUpdateInterval object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = SsrUpdateInterval(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrUpdateInterval_getUpdateInterval(t_SsrUpdateInterval *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getUpdateInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrUpdateInterval_get__updateInterval(t_SsrUpdateInterval *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getUpdateInterval());
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
#include "org/hipparchus/stat/LongFrequency.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LongFrequency::class$ = NULL;
      jmethodID *LongFrequency::mids$ = NULL;
      bool LongFrequency::live$ = false;

      jclass LongFrequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LongFrequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_349032d04af23bed] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
          mids$[mid_addValue_a3da1a935cb37f7b] = env->getMethodID(cls, "addValue", "(I)V");
          mids$[mid_getCount_4f6383d3e31ab417] = env->getMethodID(cls, "getCount", "(I)J");
          mids$[mid_getCumFreq_4f6383d3e31ab417] = env->getMethodID(cls, "getCumFreq", "(I)J");
          mids$[mid_getCumPct_69cfb132c661aca4] = env->getMethodID(cls, "getCumPct", "(I)D");
          mids$[mid_getPct_69cfb132c661aca4] = env->getMethodID(cls, "getPct", "(I)D");
          mids$[mid_incrementValue_a4e2c5f84cd0fc25] = env->getMethodID(cls, "incrementValue", "(IJ)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LongFrequency::LongFrequency() : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      LongFrequency::LongFrequency(const ::java::util::Comparator & a0) : ::org::hipparchus::stat::Frequency(env->newObject(initializeClass, &mids$, mid_init$_349032d04af23bed, a0.this$)) {}

      void LongFrequency::addValue(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addValue_a3da1a935cb37f7b], a0);
      }

      jlong LongFrequency::getCount(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCount_4f6383d3e31ab417], a0);
      }

      jlong LongFrequency::getCumFreq(jint a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getCumFreq_4f6383d3e31ab417], a0);
      }

      jdouble LongFrequency::getCumPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCumPct_69cfb132c661aca4], a0);
      }

      jdouble LongFrequency::getPct(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPct_69cfb132c661aca4], a0);
      }

      void LongFrequency::incrementValue(jint a0, jlong a1) const
      {
        env->callVoidMethod(this$, mids$[mid_incrementValue_a4e2c5f84cd0fc25], a0, a1);
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
      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args);
      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args);
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data);
      static PyGetSetDef t_LongFrequency__fields_[] = {
        DECLARE_GET_FIELD(t_LongFrequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LongFrequency__methods_[] = {
        DECLARE_METHOD(t_LongFrequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongFrequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, addValue, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCount, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumFreq, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getCumPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, getPct, METH_VARARGS),
        DECLARE_METHOD(t_LongFrequency, incrementValue, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongFrequency)[] = {
        { Py_tp_methods, t_LongFrequency__methods_ },
        { Py_tp_init, (void *) t_LongFrequency_init_ },
        { Py_tp_getset, t_LongFrequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongFrequency)[] = {
        &PY_TYPE_DEF(::org::hipparchus::stat::Frequency),
        NULL
      };

      DEFINE_TYPE(LongFrequency, t_LongFrequency, LongFrequency);
      PyObject *t_LongFrequency::wrap_Object(const LongFrequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LongFrequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LongFrequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LongFrequency *self = (t_LongFrequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LongFrequency::install(PyObject *module)
      {
        installType(&PY_TYPE(LongFrequency), &PY_TYPE_DEF(LongFrequency), module, "LongFrequency", 0);
      }

      void t_LongFrequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "class_", make_descriptor(LongFrequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "wrapfn_", make_descriptor(t_LongFrequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongFrequency), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongFrequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongFrequency::initializeClass, 1)))
          return NULL;
        return t_LongFrequency::wrap_Object(LongFrequency(((t_LongFrequency *) arg)->object.this$));
      }
      static PyObject *t_LongFrequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongFrequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongFrequency_of_(t_LongFrequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_LongFrequency_init_(t_LongFrequency *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            LongFrequency object((jobject) NULL);

            INT_CALL(object = LongFrequency());
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Long);
            break;
          }
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            LongFrequency object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = LongFrequency(a0));
              self->object = object;
              self->parameters[0] = ::java::lang::PY_TYPE(Long);
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LongFrequency_addValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.addValue(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "addValue", args, 2);
      }

      static PyObject *t_LongFrequency_getCount(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCount(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCount", args, 2);
      }

      static PyObject *t_LongFrequency_getCumFreq(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumFreq(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumFreq", args, 2);
      }

      static PyObject *t_LongFrequency_getCumPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getCumPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getCumPct", args, 2);
      }

      static PyObject *t_LongFrequency_getPct(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getPct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "getPct", args, 2);
      }

      static PyObject *t_LongFrequency_incrementValue(t_LongFrequency *self, PyObject *args)
      {
        jint a0;
        jlong a1;

        if (!parseArgs(args, "IJ", &a0, &a1))
        {
          OBJ_CALL(self->object.incrementValue(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(LongFrequency), (PyObject *) self, "incrementValue", args, 2);
      }
      static PyObject *t_LongFrequency_get__parameters_(t_LongFrequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldEnablingPredicate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEnablingPredicate::class$ = NULL;
        jmethodID *PythonFieldEnablingPredicate::mids$ = NULL;
        bool PythonFieldEnablingPredicate::live$ = false;

        jclass PythonFieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_2dbef992042bcf47] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEnablingPredicate::PythonFieldEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldEnablingPredicate::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self);
        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data);
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonFieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, self),
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonFieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonFieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEnablingPredicate, t_PythonFieldEnablingPredicate, PythonFieldEnablingPredicate);
        PyObject *t_PythonFieldEnablingPredicate::wrap_Object(const PythonFieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEnablingPredicate), &PY_TYPE_DEF(PythonFieldEnablingPredicate), module, "PythonFieldEnablingPredicate", 1);
        }

        void t_PythonFieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "class_", make_descriptor(PythonFieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "wrapfn_", make_descriptor(t_PythonFieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonFieldEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEnablingPredicate::wrap_Object(PythonFieldEnablingPredicate(((t_PythonFieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonFieldEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data)
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
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrMessage::class$ = NULL;
            jmethodID *SsrMessage::mids$ = NULL;
            bool SsrMessage::live$ = false;

            jclass SsrMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f70945c41eb342ce] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/SsrHeader;Ljava/util/List;)V");
                mids$[mid_getData_0d9551367f7ecdef] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
                mids$[mid_getHeader_0931c252446dd809] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/ssr/SsrHeader;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrMessage::SsrMessage(jint a0, const ::org::orekit::gnss::metric::messages::ssr::SsrHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_f70945c41eb342ce, a0, a1.this$, a2.this$)) {}

            ::java::util::List SsrMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_0d9551367f7ecdef]));
            }

            ::org::orekit::gnss::metric::messages::ssr::SsrHeader SsrMessage::getHeader() const
            {
              return ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->callObjectMethod(this$, mids$[mid_getHeader_0931c252446dd809]));
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
            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args);
            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrMessage_getData(t_SsrMessage *self);
            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self);
            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data);
            static PyGetSetDef t_SsrMessage__fields_[] = {
              DECLARE_GET_FIELD(t_SsrMessage, data),
              DECLARE_GET_FIELD(t_SsrMessage, header),
              DECLARE_GET_FIELD(t_SsrMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrMessage__methods_[] = {
              DECLARE_METHOD(t_SsrMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_SsrMessage, getData, METH_NOARGS),
              DECLARE_METHOD(t_SsrMessage, getHeader, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrMessage)[] = {
              { Py_tp_methods, t_SsrMessage__methods_ },
              { Py_tp_init, (void *) t_SsrMessage_init_ },
              { Py_tp_getset, t_SsrMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(SsrMessage, t_SsrMessage, SsrMessage);
            PyObject *t_SsrMessage::wrap_Object(const SsrMessage& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_SsrMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_SsrMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrMessage), &PY_TYPE_DEF(SsrMessage), module, "SsrMessage", 0);
            }

            void t_SsrMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "class_", make_descriptor(SsrMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "wrapfn_", make_descriptor(t_SsrMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrMessage::initializeClass, 1)))
                return NULL;
              return t_SsrMessage::wrap_Object(SsrMessage(((t_SsrMessage *) arg)->object.this$));
            }
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader a1((jobject) NULL);
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              SsrMessage object((jobject) NULL);

              if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::SsrHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SsrMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrMessage_getData(t_SsrMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(result);
            }
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ValueAndJacobianFunction::class$ = NULL;
            jmethodID *ValueAndJacobianFunction::mids$ = NULL;
            bool ValueAndJacobianFunction::live$ = false;

            jclass ValueAndJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeJacobian_e78c77f555f24619] = env->getMethodID(cls, "computeJacobian", "([D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_computeValue_b50585f101c65302] = env->getMethodID(cls, "computeValue", "([D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealMatrix ValueAndJacobianFunction::computeJacobian(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeJacobian_e78c77f555f24619], a0.this$));
            }

            ::org::hipparchus::linear::RealVector ValueAndJacobianFunction::computeValue(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_computeValue_b50585f101c65302], a0.this$));
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
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_ValueAndJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_ValueAndJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeJacobian, METH_O),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeValue, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ValueAndJacobianFunction)[] = {
              { Py_tp_methods, t_ValueAndJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ValueAndJacobianFunction)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction),
              NULL
            };

            DEFINE_TYPE(ValueAndJacobianFunction, t_ValueAndJacobianFunction, ValueAndJacobianFunction);

            void t_ValueAndJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(ValueAndJacobianFunction), &PY_TYPE_DEF(ValueAndJacobianFunction), module, "ValueAndJacobianFunction", 0);
            }

            void t_ValueAndJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "class_", make_descriptor(ValueAndJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "wrapfn_", make_descriptor(t_ValueAndJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ValueAndJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_ValueAndJacobianFunction::wrap_Object(ValueAndJacobianFunction(((t_ValueAndJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ValueAndJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeJacobian(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeJacobian", arg);
              return NULL;
            }

            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeValue(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeValue", arg);
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeed", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MersenneTwister::MersenneTwister() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      MersenneTwister::MersenneTwister(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      MersenneTwister::MersenneTwister(jint a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      MersenneTwister::MersenneTwister(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint MersenneTwister::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      void MersenneTwister::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
      }

      void MersenneTwister::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_a3da1a935cb37f7b], a0);
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
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCycleSlipDetector::class$ = NULL;
          jmethodID *GeometryFreeCycleSlipDetector::mids$ = NULL;
          bool GeometryFreeCycleSlipDetector::live$ = false;

          jclass GeometryFreeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
              mids$[mid_manageData_7cae3eafa8e6978c] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometryFreeCycleSlipDetector::GeometryFreeCycleSlipDetector(jdouble a0, jdouble a1, jint a2) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}
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
          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_GeometryFreeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCycleSlipDetector)[] = {
            { Py_tp_methods, t_GeometryFreeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_GeometryFreeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCycleSlipDetector, t_GeometryFreeCycleSlipDetector, GeometryFreeCycleSlipDetector);

          void t_GeometryFreeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCycleSlipDetector), &PY_TYPE_DEF(GeometryFreeCycleSlipDetector), module, "GeometryFreeCycleSlipDetector", 0);
          }

          void t_GeometryFreeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "class_", make_descriptor(GeometryFreeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "wrapfn_", make_descriptor(t_GeometryFreeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCycleSlipDetector::wrap_Object(GeometryFreeCycleSlipDetector(((t_GeometryFreeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometryFreeCycleSlipDetector_init_(t_GeometryFreeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            GeometryFreeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = GeometryFreeCycleSlipDetector(a0, a1, a2));
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternion::class$ = NULL;
              jmethodID *ApmQuaternion::mids$ = NULL;
              bool ApmQuaternion::live$ = false;

              jclass ApmQuaternion::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_c66f753ddee38944] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getQuaternion_ed563d4dda2b9f62] = env->getMethodID(cls, "getQuaternion", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_getQuaternionDot_ed563d4dda2b9f62] = env->getMethodID(cls, "getQuaternionDot", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_setQ_89aad365fb0ed8da] = env->getMethodID(cls, "setQ", "(ID)V");
                  mids$[mid_setQDot_89aad365fb0ed8da] = env->getMethodID(cls, "setQDot", "(ID)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmQuaternion::ApmQuaternion() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints ApmQuaternion::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c66f753ddee38944]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternion() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternion_ed563d4dda2b9f62]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternionDot() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionDot_ed563d4dda2b9f62]));
              }

              jboolean ApmQuaternion::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
              }

              void ApmQuaternion::setQ(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQ_89aad365fb0ed8da], a0, a1);
              }

              void ApmQuaternion::setQDot(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQDot_89aad365fb0ed8da], a0, a1);
              }

              void ApmQuaternion::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
            namespace apm {
              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data);
              static PyGetSetDef t_ApmQuaternion__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternion, endpoints),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternion),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternionDot),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternion__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternion, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternion, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternionDot, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQ, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQDot, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternion)[] = {
                { Py_tp_methods, t_ApmQuaternion__methods_ },
                { Py_tp_init, (void *) t_ApmQuaternion_init_ },
                { Py_tp_getset, t_ApmQuaternion__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternion)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(ApmQuaternion, t_ApmQuaternion, ApmQuaternion);

              void t_ApmQuaternion::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternion), &PY_TYPE_DEF(ApmQuaternion), module, "ApmQuaternion", 0);
              }

              void t_ApmQuaternion::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "class_", make_descriptor(ApmQuaternion::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "wrapfn_", make_descriptor(t_ApmQuaternion::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternion::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternion::wrap_Object(ApmQuaternion(((t_ApmQuaternion *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternion::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds)
              {
                ApmQuaternion object((jobject) NULL);

                INT_CALL(object = ApmQuaternion());
                self->object = object;

                return 0;
              }

              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQ(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQ", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQDot(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQDot", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmQuaternion), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
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
#include "org/orekit/estimation/sequential/UnivariateProcessNoise.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnivariateProcessNoise::class$ = NULL;
        jmethodID *UnivariateProcessNoise::mids$ = NULL;
        bool UnivariateProcessNoise::live$ = false;

        jclass UnivariateProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnivariateProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_28738e8e2908a758] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_init$_7ba0066c3da684ac] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getLofCartesianOrbitalParametersEvolution_d3d345fa5646ea3c] = env->getMethodID(cls, "getLofCartesianOrbitalParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getLofType_fc5c5809abf07d72] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
            mids$[mid_getMeasurementsParametersEvolution_d3d345fa5646ea3c] = env->getMethodID(cls, "getMeasurementsParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getProcessNoiseMatrix_158686209bf6089c] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagationParametersEvolution_d3d345fa5646ea3c] = env->getMethodID(cls, "getPropagationParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_28738e8e2908a758, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a5) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_7ba0066c3da684ac, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getLofCartesianOrbitalParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getLofCartesianOrbitalParametersEvolution_d3d345fa5646ea3c]));
        }

        ::org::orekit::frames::LOFType UnivariateProcessNoise::getLofType() const
        {
          return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_fc5c5809abf07d72]));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getMeasurementsParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersEvolution_d3d345fa5646ea3c]));
        }

        ::org::orekit::orbits::PositionAngleType UnivariateProcessNoise::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
        }

        ::org::hipparchus::linear::RealMatrix UnivariateProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_158686209bf6089c], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getPropagationParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getPropagationParametersEvolution_d3d345fa5646ea3c]));
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
        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args);
        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyGetSetDef t_UnivariateProcessNoise__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofCartesianOrbitalParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, measurementsParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, positionAngleType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, propagationParametersEvolution),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateProcessNoise__methods_[] = {
          DECLARE_METHOD(t_UnivariateProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofCartesianOrbitalParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getMeasurementsParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPropagationParametersEvolution, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateProcessNoise)[] = {
          { Py_tp_methods, t_UnivariateProcessNoise__methods_ },
          { Py_tp_init, (void *) t_UnivariateProcessNoise_init_ },
          { Py_tp_getset, t_UnivariateProcessNoise__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(UnivariateProcessNoise, t_UnivariateProcessNoise, UnivariateProcessNoise);

        void t_UnivariateProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateProcessNoise), &PY_TYPE_DEF(UnivariateProcessNoise), module, "UnivariateProcessNoise", 0);
        }

        void t_UnivariateProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "class_", make_descriptor(UnivariateProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "wrapfn_", make_descriptor(t_UnivariateProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateProcessNoise::initializeClass, 1)))
            return NULL;
          return t_UnivariateProcessNoise::wrap_Object(UnivariateProcessNoise(((t_UnivariateProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a5((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::frames::LOFType result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }

        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::frames::LOFType value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Gamma.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Gamma::class$ = NULL;
      jmethodID *Gamma::mids$ = NULL;
      bool Gamma::live$ = false;
      jdouble Gamma::GAMMA = (jdouble) 0;
      jdouble Gamma::LANCZOS_G = (jdouble) 0;

      jclass Gamma::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Gamma");

          mids$ = new jmethodID[max_mid];
          mids$[mid_digamma_7e960cd6eee376d8] = env->getStaticMethodID(cls, "digamma", "(D)D");
          mids$[mid_digamma_6672ad854985cb64] = env->getStaticMethodID(cls, "digamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_gamma_7e960cd6eee376d8] = env->getStaticMethodID(cls, "gamma", "(D)D");
          mids$[mid_gamma_6672ad854985cb64] = env->getStaticMethodID(cls, "gamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_invGamma1pm1_7e960cd6eee376d8] = env->getStaticMethodID(cls, "invGamma1pm1", "(D)D");
          mids$[mid_invGamma1pm1_6672ad854985cb64] = env->getStaticMethodID(cls, "invGamma1pm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_lanczos_7e960cd6eee376d8] = env->getStaticMethodID(cls, "lanczos", "(D)D");
          mids$[mid_lanczos_6672ad854985cb64] = env->getStaticMethodID(cls, "lanczos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma_7e960cd6eee376d8] = env->getStaticMethodID(cls, "logGamma", "(D)D");
          mids$[mid_logGamma_6672ad854985cb64] = env->getStaticMethodID(cls, "logGamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma1p_7e960cd6eee376d8] = env->getStaticMethodID(cls, "logGamma1p", "(D)D");
          mids$[mid_logGamma1p_6672ad854985cb64] = env->getStaticMethodID(cls, "logGamma1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_2268d18be49a6087] = env->getStaticMethodID(cls, "regularizedGammaP", "(DD)D");
          mids$[mid_regularizedGammaP_d5f58731bcb8a011] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_018e65b087664781] = env->getStaticMethodID(cls, "regularizedGammaP", "(DDDI)D");
          mids$[mid_regularizedGammaP_80e21d9f0e751610] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_2268d18be49a6087] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DD)D");
          mids$[mid_regularizedGammaQ_d5f58731bcb8a011] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_018e65b087664781] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DDDI)D");
          mids$[mid_regularizedGammaQ_80e21d9f0e751610] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_trigamma_7e960cd6eee376d8] = env->getStaticMethodID(cls, "trigamma", "(D)D");
          mids$[mid_trigamma_6672ad854985cb64] = env->getStaticMethodID(cls, "trigamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          GAMMA = env->getStaticDoubleField(cls, "GAMMA");
          LANCZOS_G = env->getStaticDoubleField(cls, "LANCZOS_G");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Gamma::digamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_digamma_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::digamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_digamma_6672ad854985cb64], a0.this$));
      }

      jdouble Gamma::gamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_gamma_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::gamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_gamma_6672ad854985cb64], a0.this$));
      }

      jdouble Gamma::invGamma1pm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_invGamma1pm1_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::invGamma1pm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_invGamma1pm1_6672ad854985cb64], a0.this$));
      }

      jdouble Gamma::lanczos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_lanczos_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::lanczos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_lanczos_6672ad854985cb64], a0.this$));
      }

      jdouble Gamma::logGamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma_6672ad854985cb64], a0.this$));
      }

      jdouble Gamma::logGamma1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma1p_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma1p_6672ad854985cb64], a0.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_018e65b087664781], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_80e21d9f0e751610], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_018e65b087664781], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_80e21d9f0e751610], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::trigamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trigamma_7e960cd6eee376d8], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::trigamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trigamma_6672ad854985cb64], a0.this$));
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
      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Gamma__methods_[] = {
        DECLARE_METHOD(t_Gamma, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, digamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, gamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, invGamma1pm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, lanczos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaQ, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, trigamma, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Gamma)[] = {
        { Py_tp_methods, t_Gamma__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Gamma)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Gamma, t_Gamma, Gamma);

      void t_Gamma::install(PyObject *module)
      {
        installType(&PY_TYPE(Gamma), &PY_TYPE_DEF(Gamma), module, "Gamma", 0);
      }

      void t_Gamma::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "class_", make_descriptor(Gamma::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "wrapfn_", make_descriptor(t_Gamma::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "boxfn_", make_descriptor(boxObject));
        env->getClass(Gamma::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "GAMMA", make_descriptor(Gamma::GAMMA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "LANCZOS_G", make_descriptor(Gamma::LANCZOS_G));
      }

      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Gamma::initializeClass, 1)))
          return NULL;
        return t_Gamma::wrap_Object(Gamma(((t_Gamma *) arg)->object.this$));
      }
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Gamma::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "digamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "gamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "invGamma1pm1", args);
        return NULL;
      }

      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "lanczos", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma1p", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaP", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaQ", args);
        return NULL;
      }

      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "trigamma", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/EnumeratedRealDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *EnumeratedRealDistribution::class$ = NULL;
        jmethodID *EnumeratedRealDistribution::mids$ = NULL;
        bool EnumeratedRealDistribution::live$ = false;

        jclass EnumeratedRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/EnumeratedRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_0d9551367f7ecdef] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_7e960cd6eee376d8] = env->getMethodID(cls, "probability", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

        jdouble EnumeratedRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble EnumeratedRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble EnumeratedRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble EnumeratedRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        ::java::util::List EnumeratedRealDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_0d9551367f7ecdef]));
        }

        jdouble EnumeratedRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble EnumeratedRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble EnumeratedRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean EnumeratedRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble EnumeratedRealDistribution::probability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_7e960cd6eee376d8], a0);
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
        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self);
        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedRealDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedRealDistribution)[] = {
          { Py_tp_methods, t_EnumeratedRealDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedRealDistribution_init_ },
          { Py_tp_getset, t_EnumeratedRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedRealDistribution, t_EnumeratedRealDistribution, EnumeratedRealDistribution);

        void t_EnumeratedRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedRealDistribution), &PY_TYPE_DEF(EnumeratedRealDistribution), module, "EnumeratedRealDistribution", 0);
        }

        void t_EnumeratedRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "class_", make_descriptor(EnumeratedRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "wrapfn_", make_descriptor(t_EnumeratedRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedRealDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedRealDistribution::wrap_Object(EnumeratedRealDistribution(((t_EnumeratedRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0, a1));
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

        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data)
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
#include "org/hipparchus/distribution/discrete/PoissonDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PoissonDistribution::class$ = NULL;
        jmethodID *PoissonDistribution::mids$ = NULL;
        bool PoissonDistribution::live$ = false;
        jdouble PoissonDistribution::DEFAULT_EPSILON = (jdouble) 0;
        jint PoissonDistribution::DEFAULT_MAX_ITERATIONS = (jint) 0;

        jclass PoissonDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PoissonDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_427af08acba367ca] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getMean_557b8123390d8d0c] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_normalApproximateProbability_69cfb132c661aca4] = env->getMethodID(cls, "normalApproximateProbability", "(I)D");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
            DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PoissonDistribution::PoissonDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_427af08acba367ca, a0, a1, a2)) {}

        jdouble PoissonDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jdouble PoissonDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_557b8123390d8d0c]);
        }

        jdouble PoissonDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble PoissonDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jint PoissonDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint PoissonDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jboolean PoissonDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble PoissonDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
        }

        jdouble PoissonDistribution::normalApproximateProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_normalApproximateProbability_69cfb132c661aca4], a0);
        }

        jdouble PoissonDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
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
        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self);
        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg);
        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data);
        static PyGetSetDef t_PoissonDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PoissonDistribution, mean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PoissonDistribution__methods_[] = {
          DECLARE_METHOD(t_PoissonDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, normalApproximateProbability, METH_O),
          DECLARE_METHOD(t_PoissonDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PoissonDistribution)[] = {
          { Py_tp_methods, t_PoissonDistribution__methods_ },
          { Py_tp_init, (void *) t_PoissonDistribution_init_ },
          { Py_tp_getset, t_PoissonDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PoissonDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PoissonDistribution, t_PoissonDistribution, PoissonDistribution);

        void t_PoissonDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PoissonDistribution), &PY_TYPE_DEF(PoissonDistribution), module, "PoissonDistribution", 0);
        }

        void t_PoissonDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "class_", make_descriptor(PoissonDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "wrapfn_", make_descriptor(t_PoissonDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(PoissonDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_EPSILON", make_descriptor(PoissonDistribution::DEFAULT_EPSILON));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_MAX_ITERATIONS", make_descriptor(PoissonDistribution::DEFAULT_MAX_ITERATIONS));
        }

        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PoissonDistribution::initializeClass, 1)))
            return NULL;
          return t_PoissonDistribution::wrap_Object(PoissonDistribution(((t_PoissonDistribution *) arg)->object.this$));
        }
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PoissonDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PoissonDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jint a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = PoissonDistribution(a0, a1, a2));
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

        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.normalApproximateProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "normalApproximateProbability", arg);
          return NULL;
        }

        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/AbstractRealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractRealMatrix::class$ = NULL;
      jmethodID *AbstractRealMatrix::mids$ = NULL;
      bool AbstractRealMatrix::live$ = false;

      jclass AbstractRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_340b47d21842d02c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_addToEntry_754312f3734d6e2f] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_70a207fcbc031df2] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_copySubMatrix_d61768f3ffd9b2b0] = env->getMethodID(cls, "copySubMatrix", "([I[I[[D)V");
          mids$[mid_copySubMatrix_275b967e785238bf] = env->getMethodID(cls, "copySubMatrix", "(IIII[[D)V");
          mids$[mid_createMatrix_e8546415f980523f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_1da5c9e77f24f269] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_aec3de0a701ae468] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnVector_2a32cae841870443] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_8cf5267aa13a77f3] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_21b81d54c06b64b0] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_557b8123390d8d0c] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getRow_1da5c9e77f24f269] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_aec3de0a701ae468] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowVector_2a32cae841870443] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_5948417ecf6c62f4] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSubMatrix_dd66ee2a79d86a98] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getTrace_557b8123390d8d0c] = env->getMethodID(cls, "getTrace", "()D");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_89b302893bdbe1f1] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_340b47d21842d02c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_754312f3734d6e2f] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_operate_1db7c087750eaffe] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_operate_342d5b01463e0dc5] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_power_aec3de0a701ae468] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_preMultiply_1db7c087750eaffe] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_342d5b01463e0dc5] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_preMultiply_340b47d21842d02c] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarAdd_e95e381257af03e9] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_scalarMultiply_e95e381257af03e9] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_3246bd31f432242d] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_4fd5e02248c1a963] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_a967cf1fffd0038f] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_754312f3734d6e2f] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_3246bd31f432242d] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_4fd5e02248c1a963] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_a967cf1fffd0038f] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_672f554eb45cea1a] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_340b47d21842d02c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_70a207fcbc031df2] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_f151009359824fc3] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_f151009359824fc3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_f151009359824fc3] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_3f821bf796d1a7b4] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_ab19ce00fffb9224] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_b64b35af60f84c7f] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_add_340b47d21842d02c], a0.this$));
      }

      void AbstractRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_754312f3734d6e2f], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_70a207fcbc031df2]));
      }

      void AbstractRealMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< jdouble > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_d61768f3ffd9b2b0], a0.this$, a1.this$, a2.this$);
      }

      void AbstractRealMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< jdouble > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_275b967e785238bf], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_e8546415f980523f], a0, a1));
      }

      jboolean AbstractRealMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      JArray< jdouble > AbstractRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_1da5c9e77f24f269], a0));
      }

      jint AbstractRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_aec3de0a701ae468], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_2a32cae841870443], a0));
      }

      JArray< JArray< jdouble > > AbstractRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_8cf5267aa13a77f3]));
      }

      jdouble AbstractRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_21b81d54c06b64b0], a0, a1);
      }

      jdouble AbstractRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_557b8123390d8d0c]);
      }

      JArray< jdouble > AbstractRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_1da5c9e77f24f269], a0));
      }

      jint AbstractRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_aec3de0a701ae468], a0));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_2a32cae841870443], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_5948417ecf6c62f4], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_dd66ee2a79d86a98], a0, a1, a2, a3));
      }

      jdouble AbstractRealMatrix::getTrace() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrace_557b8123390d8d0c]);
      }

      jint AbstractRealMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean AbstractRealMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_89b302893bdbe1f1]);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_340b47d21842d02c], a0.this$));
      }

      void AbstractRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_754312f3734d6e2f], a0, a1, a2);
      }

      JArray< jdouble > AbstractRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_1db7c087750eaffe], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_342d5b01463e0dc5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_power_aec3de0a701ae468], a0));
      }

      JArray< jdouble > AbstractRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_1db7c087750eaffe], a0.this$));
      }

      ::org::hipparchus::linear::RealVector AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_342d5b01463e0dc5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::preMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_340b47d21842d02c], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarAdd(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_e95e381257af03e9], a0));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_e95e381257af03e9], a0));
      }

      void AbstractRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_3246bd31f432242d], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_4fd5e02248c1a963], a0, a1.this$);
      }

      void AbstractRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_a967cf1fffd0038f], a0, a1.this$);
      }

      void AbstractRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_754312f3734d6e2f], a0, a1, a2);
      }

      void AbstractRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_3246bd31f432242d], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_4fd5e02248c1a963], a0, a1.this$);
      }

      void AbstractRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_a967cf1fffd0038f], a0, a1.this$);
      }

      void AbstractRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_672f554eb45cea1a], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_340b47d21842d02c], a0.this$));
      }

      ::java::lang::String AbstractRealMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractRealMatrix::transpose() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_70a207fcbc031df2]));
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_f151009359824fc3], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_f151009359824fc3], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_b64b35af60f84c7f], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_f151009359824fc3], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3f821bf796d1a7b4], a0.this$);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab19ce00fffb9224], a0.this$, a1, a2, a3, a4);
      }

      jdouble AbstractRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
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
      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg);
      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self);
      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args);
      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data);
      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data);
      static PyGetSetDef t_AbstractRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, data),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, square),
        DECLARE_GET_FIELD(t_AbstractRealMatrix, trace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractRealMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractRealMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getFrobeniusNorm, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractRealMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractRealMatrix)[] = {
        { Py_tp_methods, t_AbstractRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractRealMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractRealMatrix, t_AbstractRealMatrix, AbstractRealMatrix);

      void t_AbstractRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractRealMatrix), &PY_TYPE_DEF(AbstractRealMatrix), module, "AbstractRealMatrix", 0);
      }

      void t_AbstractRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "class_", make_descriptor(AbstractRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "wrapfn_", make_descriptor(t_AbstractRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractRealMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractRealMatrix::wrap_Object(AbstractRealMatrix(((t_AbstractRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractRealMatrix_add(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_addToEntry(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_copy(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_copySubMatrix(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_createMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_equals(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_getColumn(t_AbstractRealMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractRealMatrix_getColumnDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getColumnMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getColumnVector(t_AbstractRealMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractRealMatrix_getData(t_AbstractRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_getEntry(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_getFrobeniusNorm(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_getRow(t_AbstractRealMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractRealMatrix_getRowDimension(t_AbstractRealMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractRealMatrix_getRowMatrix(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getRowVector(t_AbstractRealMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractRealMatrix_getSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_getTrace(t_AbstractRealMatrix *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrace());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractRealMatrix_hashCode(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_isSquare(t_AbstractRealMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractRealMatrix_multiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_multiplyEntry(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_operate(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_power(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_preMultiply(t_AbstractRealMatrix *self, PyObject *args)
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
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarAdd(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_scalarMultiply(t_AbstractRealMatrix *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumn(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_setColumnMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setColumnVector(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_setEntry(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_setRow(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_setRowMatrix(t_AbstractRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_setRowVector(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_setSubMatrix(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_subtract(t_AbstractRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractRealMatrix_toString(t_AbstractRealMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractRealMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractRealMatrix_transpose(t_AbstractRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractRealMatrix_walkInColumnOrder(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_walkInOptimizedOrder(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_walkInRowOrder(t_AbstractRealMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractRealMatrix_get__columnDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__data(t_AbstractRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractRealMatrix_get__frobeniusNorm(t_AbstractRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractRealMatrix_get__rowDimension(t_AbstractRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractRealMatrix_get__square(t_AbstractRealMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractRealMatrix_get__trace(t_AbstractRealMatrix *self, void *data)
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
#include "org/hipparchus/analysis/solvers/NewtonRaphsonSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *NewtonRaphsonSolver::class$ = NULL;
        jmethodID *NewtonRaphsonSolver::mids$ = NULL;
        bool NewtonRaphsonSolver::live$ = false;

        jclass NewtonRaphsonSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/NewtonRaphsonSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_solve_7b748874f0ce038f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;DD)D");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonRaphsonSolver::NewtonRaphsonSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        NewtonRaphsonSolver::NewtonRaphsonSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble NewtonRaphsonSolver::solve(jint a0, const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_7b748874f0ce038f], a0, a1.this$, a2, a3);
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
        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args);
        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args);
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data);
        static PyGetSetDef t_NewtonRaphsonSolver__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonRaphsonSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonRaphsonSolver__methods_[] = {
          DECLARE_METHOD(t_NewtonRaphsonSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_NewtonRaphsonSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonRaphsonSolver)[] = {
          { Py_tp_methods, t_NewtonRaphsonSolver__methods_ },
          { Py_tp_init, (void *) t_NewtonRaphsonSolver_init_ },
          { Py_tp_getset, t_NewtonRaphsonSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonRaphsonSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateDifferentiableSolver),
          NULL
        };

        DEFINE_TYPE(NewtonRaphsonSolver, t_NewtonRaphsonSolver, NewtonRaphsonSolver);
        PyObject *t_NewtonRaphsonSolver::wrap_Object(const NewtonRaphsonSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NewtonRaphsonSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NewtonRaphsonSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NewtonRaphsonSolver *self = (t_NewtonRaphsonSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NewtonRaphsonSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonRaphsonSolver), &PY_TYPE_DEF(NewtonRaphsonSolver), module, "NewtonRaphsonSolver", 0);
        }

        void t_NewtonRaphsonSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "class_", make_descriptor(NewtonRaphsonSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "wrapfn_", make_descriptor(t_NewtonRaphsonSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonRaphsonSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NewtonRaphsonSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonRaphsonSolver::initializeClass, 1)))
            return NULL;
          return t_NewtonRaphsonSolver::wrap_Object(NewtonRaphsonSolver(((t_NewtonRaphsonSolver *) arg)->object.this$));
        }
        static PyObject *t_NewtonRaphsonSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonRaphsonSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NewtonRaphsonSolver_of_(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NewtonRaphsonSolver_init_(t_NewtonRaphsonSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NewtonRaphsonSolver object((jobject) NULL);

              INT_CALL(object = NewtonRaphsonSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              NewtonRaphsonSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = NewtonRaphsonSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDifferentiableFunction);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonRaphsonSolver_solve(t_NewtonRaphsonSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NewtonRaphsonSolver), (PyObject *) self, "solve", args, 2);
        }
        static PyObject *t_NewtonRaphsonSolver_get__parameters_(t_NewtonRaphsonSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54Integrator::class$ = NULL;
        jmethodID *HighamHall54Integrator::mids$ = NULL;
        bool HighamHall54Integrator::live$ = false;

        jclass HighamHall54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c13e969c0f339014] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_estimateError_ce34cd66684833d2] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");
            mids$[mid_createInterpolator_60ae44b8b8603cca] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54StateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c13e969c0f339014, a0, a1, a2.this$, a3.this$)) {}

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > HighamHall54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > HighamHall54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > HighamHall54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
        }

        jint HighamHall54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
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
        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data);
        static PyGetSetDef t_HighamHall54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54Integrator, a),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, b),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, c),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54Integrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54Integrator)[] = {
          { Py_tp_methods, t_HighamHall54Integrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54Integrator_init_ },
          { Py_tp_getset, t_HighamHall54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54Integrator, t_HighamHall54Integrator, HighamHall54Integrator);

        void t_HighamHall54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54Integrator), &PY_TYPE_DEF(HighamHall54Integrator), module, "HighamHall54Integrator", 0);
        }

        void t_HighamHall54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "class_", make_descriptor(HighamHall54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "wrapfn_", make_descriptor(t_HighamHall54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54Integrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54Integrator::wrap_Object(HighamHall54Integrator(((t_HighamHall54Integrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/LineSearch.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LineSearch::class$ = NULL;
          jmethodID *LineSearch::mids$ = NULL;
          bool LineSearch::live$ = false;

          jclass LineSearch::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LineSearch");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ea6794cdd5f32d78] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;DDD)V");
              mids$[mid_search_25610de547d01255] = env->getMethodID(cls, "search", "([D[D)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LineSearch::LineSearch(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea6794cdd5f32d78, a0.this$, a1, a2, a3)) {}

          ::org::hipparchus::optim::univariate::UnivariatePointValuePair LineSearch::search(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_search_25610de547d01255], a0.this$, a1.this$));
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
          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args);

          static PyMethodDef t_LineSearch__methods_[] = {
            DECLARE_METHOD(t_LineSearch, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, search, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LineSearch)[] = {
            { Py_tp_methods, t_LineSearch__methods_ },
            { Py_tp_init, (void *) t_LineSearch_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LineSearch)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LineSearch, t_LineSearch, LineSearch);

          void t_LineSearch::install(PyObject *module)
          {
            installType(&PY_TYPE(LineSearch), &PY_TYPE_DEF(LineSearch), module, "LineSearch", 0);
          }

          void t_LineSearch::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "class_", make_descriptor(LineSearch::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "wrapfn_", make_descriptor(t_LineSearch::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LineSearch::initializeClass, 1)))
              return NULL;
            return t_LineSearch::wrap_Object(LineSearch(((t_LineSearch *) arg)->object.this$));
          }
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LineSearch::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            LineSearch object((jobject) NULL);

            if (!parseArgs(args, "KDDD", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = LineSearch(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.search(a0, a1));
              return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "search", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonMessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
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
          namespace lexical {

            ::java::lang::Class *PythonMessageParser::class$ = NULL;
            jmethodID *PythonMessageParser::mids$ = NULL;
            bool PythonMessageParser::live$ = false;

            jclass PythonMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_e661fe3ba2fafb22] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFileFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_3cffd47377eca18a] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_850ca290e1713a38] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_1eac6345cb6bda02] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageParser::PythonMessageParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonMessageParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args);
            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self);
            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data);
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data);
            static PyGetSetDef t_PythonMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageParser, self),
              DECLARE_GET_FIELD(t_PythonMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageParser)[] = {
              { Py_tp_methods, t_PythonMessageParser__methods_ },
              { Py_tp_init, (void *) t_PythonMessageParser_init_ },
              { Py_tp_getset, t_PythonMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageParser, t_PythonMessageParser, PythonMessageParser);
            PyObject *t_PythonMessageParser::wrap_Object(const PythonMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageParser), &PY_TYPE_DEF(PythonMessageParser), module, "PythonMessageParser", 1);
            }

            void t_PythonMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "class_", make_descriptor(PythonMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "wrapfn_", make_descriptor(t_PythonMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonMessageParser_build0 },
                { "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonMessageParser_getFileFormat1 },
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageParser_getFormatVersionKey2 },
                { "getSpecialXmlElementsBuilders", "()Ljava/util/Map;", (void *) t_PythonMessageParser_getSpecialXmlElementsBuilders3 },
                { "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;", (void *) t_PythonMessageParser_parseMessage4 },
                { "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V", (void *) t_PythonMessageParser_process5 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageParser_pythonDecRef6 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonMessageParser_reset7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonMessageParser::wrap_Object(PythonMessageParser(((t_PythonMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageParser object((jobject) NULL);

              INT_CALL(object = PythonMessageParser());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("build", result);
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

            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFileFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFileFormat", result);
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

            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getSpecialXmlElementsBuilders", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getSpecialXmlElementsBuilders", result);
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

            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
              PyObject *result = PyObject_CallMethod(obj, "parseMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("parseMessage", result);
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

            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "process", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data)
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
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonAbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonAbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool PythonAbstractConstantThrustPropulsionModel::live$ = false;

          jclass PythonAbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_61fb1c1298b85822] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getFlowRate_557b8123390d8d0c] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_86c4a0582e0747ce] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_e3919ad898361abd] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_b0b988f941da47d8] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_f88961cca75a2c0a] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b4c4f24efa81746b] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_73a8498c189497cd] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_3df461fe15362b2b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractConstantThrustPropulsionModel::PythonAbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_61fb1c1298b85822, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          void PythonAbstractConstantThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractConstantThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractConstantThrustPropulsionModel::pythonExtension(jlong a0) const
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
        namespace propulsion {
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonAbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractConstantThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonAbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonAbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(PythonAbstractConstantThrustPropulsionModel, t_PythonAbstractConstantThrustPropulsionModel, PythonAbstractConstantThrustPropulsionModel);

          void t_PythonAbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(PythonAbstractConstantThrustPropulsionModel), module, "PythonAbstractConstantThrustPropulsionModel", 1);
          }

          void t_PythonAbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "class_", make_descriptor(PythonAbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonAbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractConstantThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getFlowRate", "()D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0 },
              { "getFlowRate", "([D)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4 },
              { "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6 },
              { "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7 },
              { "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9 },
            };
            env->registerNatives(cls, methods, 10);
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractConstantThrustPropulsionModel::wrap_Object(PythonAbstractConstantThrustPropulsionModel(((t_PythonAbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::lang::String a4((jobject) NULL);
            PythonAbstractConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
            {
              INT_CALL(object = PythonAbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "");
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = JArray<jdouble>(a0).wrap();
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "");
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = JArray<jdouble>(a0).wrap();
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
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

          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonNRLMSISE00InputParameters::class$ = NULL;
          jmethodID *PythonNRLMSISE00InputParameters::mids$ = NULL;
          bool PythonNRLMSISE00InputParameters::live$ = false;

          jclass PythonNRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAp_89e8b78e4211e023] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_b0b988f941da47d8] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_b0b988f941da47d8] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNRLMSISE00InputParameters::PythonNRLMSISE00InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonNRLMSISE00InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonNRLMSISE00InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonNRLMSISE00InputParameters::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self);
          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_PythonNRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNRLMSISE00InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_PythonNRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonNRLMSISE00InputParameters_init_ },
            { Py_tp_getset, t_PythonNRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNRLMSISE00InputParameters, t_PythonNRLMSISE00InputParameters, PythonNRLMSISE00InputParameters);

          void t_PythonNRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNRLMSISE00InputParameters), &PY_TYPE_DEF(PythonNRLMSISE00InputParameters), module, "PythonNRLMSISE00InputParameters", 1);
          }

          void t_PythonNRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "class_", make_descriptor(PythonNRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_PythonNRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNRLMSISE00InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonNRLMSISE00InputParameters_getAp0 },
              { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getAverageFlux1 },
              { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getDailyFlux2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMinDate4 },
              { "pythonDecRef", "()V", (void *) t_PythonNRLMSISE00InputParameters_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonNRLMSISE00InputParameters::wrap_Object(PythonNRLMSISE00InputParameters(((t_PythonNRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonNRLMSISE00InputParameters object((jobject) NULL);

            INT_CALL(object = PythonNRLMSISE00InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args)
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getAp", result);
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

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAverageFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDailyFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data)
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
#include "org/hipparchus/random/ForwardingRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ForwardingRandomGenerator::class$ = NULL;
      jmethodID *ForwardingRandomGenerator::mids$ = NULL;
      bool ForwardingRandomGenerator::live$ = false;

      jclass ForwardingRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ForwardingRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_d759c70c6670fd89] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_ac782c7077255dd3] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_04fe014f7609dc26] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_557b8123390d8d0c] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0092017e99012694] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_9e26256fb0d384a2] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_f4ad805a81234b49] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_delegate_94b7a5da78ee3cfb] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ForwardingRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_89b302893bdbe1f1]);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d759c70c6670fd89], a0.this$);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_ac782c7077255dd3], a0.this$, a1, a2);
      }

      jdouble ForwardingRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
      }

      jfloat ForwardingRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_04fe014f7609dc26]);
      }

      jdouble ForwardingRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_557b8123390d8d0c]);
      }

      jint ForwardingRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      jint ForwardingRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0092017e99012694], a0);
      }

      jlong ForwardingRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9e26256fb0d384a2]);
      }

      jlong ForwardingRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_f4ad805a81234b49], a0);
      }

      void ForwardingRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
      }

      void ForwardingRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_a3da1a935cb37f7b], a0);
      }

      void ForwardingRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args);
      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_ForwardingRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_ForwardingRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForwardingRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_ForwardingRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForwardingRandomGenerator)[] = {
        { Py_tp_methods, t_ForwardingRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForwardingRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForwardingRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ForwardingRandomGenerator, t_ForwardingRandomGenerator, ForwardingRandomGenerator);

      void t_ForwardingRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(ForwardingRandomGenerator), &PY_TYPE_DEF(ForwardingRandomGenerator), module, "ForwardingRandomGenerator", 0);
      }

      void t_ForwardingRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "class_", make_descriptor(ForwardingRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "wrapfn_", make_descriptor(t_ForwardingRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForwardingRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_ForwardingRandomGenerator::wrap_Object(ForwardingRandomGenerator(((t_ForwardingRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForwardingRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args)
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

      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args)
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

      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args)
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

      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args)
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

      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data)
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
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NegateDetector::class$ = NULL;
        jmethodID *NegateDetector::mids$ = NULL;
        bool NegateDetector::live$ = false;

        jclass NegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e2dfaf38ed50d1d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getOriginal_0701b00b25822fff] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_067d6eaa97883114] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NegateDetector::NegateDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2e2dfaf38ed50d1d, a0.this$)) {}

        jdouble NegateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector NegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_0701b00b25822fff]));
        }

        void NegateDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args);
        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self);
        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args);
        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data);
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data);
        static PyGetSetDef t_NegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NegateDetector, original),
          DECLARE_GET_FIELD(t_NegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NegateDetector__methods_[] = {
          DECLARE_METHOD(t_NegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_NegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NegateDetector)[] = {
          { Py_tp_methods, t_NegateDetector__methods_ },
          { Py_tp_init, (void *) t_NegateDetector_init_ },
          { Py_tp_getset, t_NegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NegateDetector, t_NegateDetector, NegateDetector);
        PyObject *t_NegateDetector::wrap_Object(const NegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NegateDetector *self = (t_NegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NegateDetector), &PY_TYPE_DEF(NegateDetector), module, "NegateDetector", 0);
        }

        void t_NegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "class_", make_descriptor(NegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "wrapfn_", make_descriptor(t_NegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NegateDetector::initializeClass, 1)))
            return NULL;
          return t_NegateDetector::wrap_Object(NegateDetector(((t_NegateDetector *) arg)->object.this$));
        }
        static PyObject *t_NegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NegateDetector_of_(t_NegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NegateDetector_init_(t_NegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          NegateDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = NegateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NegateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NegateDetector_g(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NegateDetector_getOriginal(t_NegateDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_NegateDetector_init(t_NegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_NegateDetector_get__parameters_(t_NegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NegateDetector_get__original(t_NegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FrameAdapter.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FrameAdapter::class$ = NULL;
      jmethodID *FrameAdapter::mids$ = NULL;
      bool FrameAdapter::live$ = false;

      jclass FrameAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FrameAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAdapter::FrameAdapter(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
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
      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args);

      static PyMethodDef t_FrameAdapter__methods_[] = {
        DECLARE_METHOD(t_FrameAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAdapter)[] = {
        { Py_tp_methods, t_FrameAdapter__methods_ },
        { Py_tp_init, (void *) t_FrameAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAdapter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAdapter, t_FrameAdapter, FrameAdapter);

      void t_FrameAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAdapter), &PY_TYPE_DEF(FrameAdapter), module, "FrameAdapter", 0);
      }

      void t_FrameAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "class_", make_descriptor(FrameAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "wrapfn_", make_descriptor(t_FrameAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAdapter::initializeClass, 1)))
          return NULL;
        return t_FrameAdapter::wrap_Object(FrameAdapter(((t_FrameAdapter *) arg)->object.this$));
      }
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FrameAdapter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FrameAdapter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
              mids$[mid_getDensity_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDensity", "(I)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement NRLMSISE00$FieldOutput::getDensity(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_8b3a1c735adfa4bc], a0));
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
#include "org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariatePeriodicInterpolator::class$ = NULL;
        jmethodID *UnivariatePeriodicInterpolator::mids$ = NULL;
        bool UnivariatePeriodicInterpolator::live$ = false;
        jint UnivariatePeriodicInterpolator::DEFAULT_EXTEND = (jint) 0;

        jclass UnivariatePeriodicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5062af5d86f74f7b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;D)V");
            mids$[mid_init$_db044254c8bdb23b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;DI)V");
            mids$[mid_interpolate_f70e3a7ad4658836] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EXTEND = env->getStaticIntField(cls, "DEFAULT_EXTEND");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5062af5d86f74f7b, a0.this$, a1)) {}

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db044254c8bdb23b, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariatePeriodicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_f70e3a7ad4658836], a0.this$, a1.this$));
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
        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariatePeriodicInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePeriodicInterpolator)[] = {
          { Py_tp_methods, t_UnivariatePeriodicInterpolator__methods_ },
          { Py_tp_init, (void *) t_UnivariatePeriodicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePeriodicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePeriodicInterpolator, t_UnivariatePeriodicInterpolator, UnivariatePeriodicInterpolator);

        void t_UnivariatePeriodicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePeriodicInterpolator), &PY_TYPE_DEF(UnivariatePeriodicInterpolator), module, "UnivariatePeriodicInterpolator", 0);
        }

        void t_UnivariatePeriodicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "class_", make_descriptor(UnivariatePeriodicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "wrapfn_", make_descriptor(t_UnivariatePeriodicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariatePeriodicInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "DEFAULT_EXTEND", make_descriptor(UnivariatePeriodicInterpolator::DEFAULT_EXTEND));
        }

        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariatePeriodicInterpolator::wrap_Object(UnivariatePeriodicInterpolator(((t_UnivariatePeriodicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1, a2));
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

        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_6fe2b5afb594b4e3] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_build_edfcb27d4dad6e67] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator;");
            mids$[mid_decomposer_032ccc0017a05cb8] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_79d89206611a8ec8] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimatorBuilder::SemiAnalyticalKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_6fe2b5afb594b4e3], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator SemiAnalyticalKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_edfcb27d4dad6e67]));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_032ccc0017a05cb8], a0.this$));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_79d89206611a8ec8], a0.this$, a1.this$));
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
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimatorBuilder, t_SemiAnalyticalKalmanEstimatorBuilder, SemiAnalyticalKalmanEstimatorBuilder);

        void t_SemiAnalyticalKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimatorBuilder), module, "SemiAnalyticalKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalKalmanEstimatorBuilder(((t_SemiAnalyticalKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventsLogger.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger::class$ = NULL;
        jmethodID *FieldEventsLogger::mids$ = NULL;
        bool FieldEventsLogger::live$ = false;

        jclass FieldEventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_0640e6acf969ed28] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_0d9551367f7ecdef] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventsLogger::FieldEventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void FieldEventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_0640e6acf969ed28]);
        }

        ::java::util::List FieldEventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_0d9551367f7ecdef]));
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
        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args);
        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data);
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data);
        static PyGetSetDef t_FieldEventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger, loggedEvents),
          DECLARE_GET_FIELD(t_FieldEventsLogger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger, getLoggedEvents, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger)[] = {
          { Py_tp_methods, t_FieldEventsLogger__methods_ },
          { Py_tp_init, (void *) t_FieldEventsLogger_init_ },
          { Py_tp_getset, t_FieldEventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger, t_FieldEventsLogger, FieldEventsLogger);
        PyObject *t_FieldEventsLogger::wrap_Object(const FieldEventsLogger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger), &PY_TYPE_DEF(FieldEventsLogger), module, "FieldEventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "FieldLoggedEvent", make_descriptor(&PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent)));
        }

        void t_FieldEventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "class_", make_descriptor(FieldEventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "wrapfn_", make_descriptor(t_FieldEventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger::wrap_Object(FieldEventsLogger(((t_FieldEventsLogger *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds)
        {
          FieldEventsLogger object((jobject) NULL);

          INT_CALL(object = FieldEventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AdditionalDerivativesProvider::class$ = NULL;
        jmethodID *AdditionalDerivativesProvider::mids$ = NULL;
        bool AdditionalDerivativesProvider::live$ = false;

        jclass AdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_5fc55a092d474e7c] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_yields_abdf3beb789bbd4e] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::CombinedDerivatives AdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_5fc55a092d474e7c], a0.this$));
        }

        jint AdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        ::java::lang::String AdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        void AdditionalDerivativesProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        jboolean AdditionalDerivativesProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_abdf3beb789bbd4e], a0.this$);
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
        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self);
        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data);
        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_AdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_AdditionalDerivativesProvider, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_AdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_AdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_AdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdditionalDerivativesProvider, t_AdditionalDerivativesProvider, AdditionalDerivativesProvider);

        void t_AdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AdditionalDerivativesProvider), &PY_TYPE_DEF(AdditionalDerivativesProvider), module, "AdditionalDerivativesProvider", 0);
        }

        void t_AdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "class_", make_descriptor(AdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_AdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_AdditionalDerivativesProvider::wrap_Object(AdditionalDerivativesProvider(((t_AdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_AdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdditionalDerivativesProvider_combinedDerivatives(t_AdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AdditionalDerivativesProvider_getDimension(t_AdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdditionalDerivativesProvider_getName(t_AdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AdditionalDerivativesProvider_init(t_AdditionalDerivativesProvider *self, PyObject *args)
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

        static PyObject *t_AdditionalDerivativesProvider_yields(t_AdditionalDerivativesProvider *self, PyObject *arg)
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

        static PyObject *t_AdditionalDerivativesProvider_get__dimension(t_AdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdditionalDerivativesProvider_get__name(t_AdditionalDerivativesProvider *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFile$AttitudeEphemerisSegment::class$ = NULL;
        jmethodID *AttitudeEphemerisFile$AttitudeEphemerisSegment::mids$ = NULL;
        bool AttitudeEphemerisFile$AttitudeEphemerisSegment::live$ = false;

        jclass AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAngularCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_b44a04493534d299] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List AttitudeEphemerisFile$AttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_0d9551367f7ecdef]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$AttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_b44a04493534d299]));
        }

        ::org::orekit::utils::AngularDerivativesFilter AttitudeEphemerisFile$AttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3]));
        }

        ::java::lang::String AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_3cffd47377eca18a]));
        }

        jint AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        ::org::orekit::frames::Frame AttitudeEphemerisFile$AttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_of_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAngularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAttitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAvailableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getReferenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStart(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__angularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__attitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__availableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__referenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__start(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__stop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__parameters_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFile$AttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, angularCoordinates),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, attitudeProvider),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, interpolationMethod),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, referenceFrame),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, start),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, stop),
          DECLARE_GET_FIELD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFile$AttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAngularCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getInterpolationMethod, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getReferenceFrame, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFile$AttitudeEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFile$AttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFile$AttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFile$AttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFile$AttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment, t_AttitudeEphemerisFile$AttitudeEphemerisSegment, AttitudeEphemerisFile$AttitudeEphemerisSegment);
        PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(const AttitudeEphemerisFile$AttitudeEphemerisSegment& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self = (t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self = (t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFile$AttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), &PY_TYPE_DEF(AttitudeEphemerisFile$AttitudeEphemerisSegment), module, "AttitudeEphemerisFile$AttitudeEphemerisSegment", 0);
        }

        void t_AttitudeEphemerisFile$AttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "class_", make_descriptor(AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFile$AttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFile$AttitudeEphemerisSegment::wrap_Object(AttitudeEphemerisFile$AttitudeEphemerisSegment(((t_AttitudeEphemerisFile$AttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFile$AttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_of_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAngularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAttitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getAvailableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolationMethod());
          return j2p(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getInterpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getReferenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStart(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_getStop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__parameters_(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__angularCoordinates(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__attitudeProvider(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__availableDerivatives(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationMethod(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolationMethod());
          return j2p(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__interpolationSamples(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__referenceFrame(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__start(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AttitudeEphemerisFile$AttitudeEphemerisSegment_get__stop(t_AttitudeEphemerisFile$AttitudeEphemerisSegment *self, void *data)
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
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *TimeStampedCacheException::class$ = NULL;
      jmethodID *TimeStampedCacheException::mids$ = NULL;
      bool TimeStampedCacheException::live$ = false;

      jclass TimeStampedCacheException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/TimeStampedCacheException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5a362f030f21d160] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_6cecc4ef7f063ebe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/errors/OrekitException;)V");
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_0ff5a331e85ddf14] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_unwrap_e56989996ecbae32] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/TimeStampedCacheException;");
          mids$[mid_unwrap_a2e2492d9d6ade54] = env->getStaticMethodID(cls, "unwrap", "(Lorg/orekit/errors/OrekitException;)Lorg/orekit/errors/TimeStampedCacheException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_5a362f030f21d160, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::orekit::errors::OrekitException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_6cecc4ef7f063ebe, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_0ff5a331e85ddf14, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_e56989996ecbae32], a0.this$));
      }

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::orekit::errors::OrekitException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_a2e2492d9d6ade54], a0.this$));
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
      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_TimeStampedCacheException__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCacheException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, unwrap, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCacheException)[] = {
        { Py_tp_methods, t_TimeStampedCacheException__methods_ },
        { Py_tp_init, (void *) t_TimeStampedCacheException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCacheException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(TimeStampedCacheException, t_TimeStampedCacheException, TimeStampedCacheException);

      void t_TimeStampedCacheException::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCacheException), &PY_TYPE_DEF(TimeStampedCacheException), module, "TimeStampedCacheException", 0);
      }

      void t_TimeStampedCacheException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "class_", make_descriptor(TimeStampedCacheException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "wrapfn_", make_descriptor(t_TimeStampedCacheException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCacheException::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCacheException::wrap_Object(TimeStampedCacheException(((t_TimeStampedCacheException *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCacheException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1, a2));
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

      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
        }

        return callSuper(type, "unwrap", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonRawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonRawSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonRawSphericalHarmonicsProvider::live$ = false;

          jclass PythonRawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_557b8123390d8d0c] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_5db0dfc8bd8b9574] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonRawSphericalHarmonicsProvider::PythonRawSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonRawSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonRawSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonRawSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonRawSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonRawSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonRawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonRawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonRawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonRawSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonRawSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonRawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonRawSphericalHarmonicsProvider, t_PythonRawSphericalHarmonicsProvider, PythonRawSphericalHarmonicsProvider);

          void t_PythonRawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonRawSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonRawSphericalHarmonicsProvider), module, "PythonRawSphericalHarmonicsProvider", 1);
          }

          void t_PythonRawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "class_", make_descriptor(PythonRawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonRawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonRawSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonRawSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonRawSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;", (void *) t_PythonRawSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonRawSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonRawSphericalHarmonicsProvider::wrap_Object(PythonRawSphericalHarmonicsProvider(((t_PythonRawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonRawSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonRawSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data)
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
