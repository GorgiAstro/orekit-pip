#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
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
              mids$[mid_combine_d8c8276403544c3f] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_f366866d8f2f42c5] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_824133ce4aec3505] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_d8c8276403544c3f], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_f366866d8f2f42c5], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractSingleFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
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
#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *AbstractMultivariateRealDistribution::class$ = NULL;
        jmethodID *AbstractMultivariateRealDistribution::mids$ = NULL;
        bool AbstractMultivariateRealDistribution::live$ = false;

        jclass AbstractMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_reseedRandomGenerator_fefb08975c10f0a1] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_7cdc325af0834901] = env->getMethodID(cls, "sample", "()[D");
            mids$[mid_sample_01d6404243df74a0] = env->getMethodID(cls, "sample", "(I)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractMultivariateRealDistribution::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        void AbstractMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_fefb08975c10f0a1], a0);
        }

        JArray< jdouble > AbstractMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_7cdc325af0834901]));
        }

        JArray< JArray< jdouble > > AbstractMultivariateRealDistribution::sample(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_01d6404243df74a0], a0));
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
      namespace multivariate {
        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self);
        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_AbstractMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMultivariateRealDistribution, dimension),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, reseedRandomGenerator, METH_O),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_AbstractMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultivariateRealDistribution, t_AbstractMultivariateRealDistribution, AbstractMultivariateRealDistribution);

        void t_AbstractMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultivariateRealDistribution), &PY_TYPE_DEF(AbstractMultivariateRealDistribution), module, "AbstractMultivariateRealDistribution", 0);
        }

        void t_AbstractMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "class_", make_descriptor(AbstractMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "wrapfn_", make_descriptor(t_AbstractMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractMultivariateRealDistribution::wrap_Object(AbstractMultivariateRealDistribution(((t_AbstractMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.sample());
              return result.wrap();
            }
            break;
           case 1:
            {
              jint a0;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.sample(a0));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sample", args);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateMatrixFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateMatrixFunctionDifferentiator::mids$ = NULL;
        bool UnivariateMatrixFunctionDifferentiator::live$ = false;

        jclass UnivariateMatrixFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_bfe4c2e1bcc56b2f] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction UnivariateMatrixFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_bfe4c2e1bcc56b2f], a0.this$));
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
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateMatrixFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateMatrixFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateMatrixFunctionDifferentiator, t_UnivariateMatrixFunctionDifferentiator, UnivariateMatrixFunctionDifferentiator);

        void t_UnivariateMatrixFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateMatrixFunctionDifferentiator), &PY_TYPE_DEF(UnivariateMatrixFunctionDifferentiator), module, "UnivariateMatrixFunctionDifferentiator", 0);
        }

        void t_UnivariateMatrixFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "class_", make_descriptor(UnivariateMatrixFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateMatrixFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateMatrixFunctionDifferentiator::wrap_Object(UnivariateMatrixFunctionDifferentiator(((t_UnivariateMatrixFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/Panel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *Panel::class$ = NULL;
      jmethodID *Panel::mids$ = NULL;
      bool Panel::live$ = false;

      jclass Panel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/Panel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsorption_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsorption", "()D");
          mids$[mid_getArea_456d9a2f64d6b28d] = env->getMethodID(cls, "getArea", "()D");
          mids$[mid_getDrag_456d9a2f64d6b28d] = env->getMethodID(cls, "getDrag", "()D");
          mids$[mid_getLiftRatio_456d9a2f64d6b28d] = env->getMethodID(cls, "getLiftRatio", "()D");
          mids$[mid_getNormal_665eae343e14b9ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_78226ca7935182ea] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getReflection_456d9a2f64d6b28d] = env->getMethodID(cls, "getReflection", "()D");
          mids$[mid_isDoubleSided_e470b6d9e0d979db] = env->getMethodID(cls, "isDoubleSided", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Panel::getAbsorption() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsorption_456d9a2f64d6b28d]);
      }

      jdouble Panel::getArea() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArea_456d9a2f64d6b28d]);
      }

      jdouble Panel::getDrag() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDrag_456d9a2f64d6b28d]);
      }

      jdouble Panel::getLiftRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLiftRatio_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Panel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_665eae343e14b9ea], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Panel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_78226ca7935182ea], a0.this$));
      }

      jdouble Panel::getReflection() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReflection_456d9a2f64d6b28d]);
      }

      jboolean Panel::isDoubleSided() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDoubleSided_e470b6d9e0d979db]);
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
      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_getAbsorption(t_Panel *self);
      static PyObject *t_Panel_getArea(t_Panel *self);
      static PyObject *t_Panel_getDrag(t_Panel *self);
      static PyObject *t_Panel_getLiftRatio(t_Panel *self);
      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args);
      static PyObject *t_Panel_getReflection(t_Panel *self);
      static PyObject *t_Panel_isDoubleSided(t_Panel *self);
      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data);
      static PyObject *t_Panel_get__area(t_Panel *self, void *data);
      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data);
      static PyObject *t_Panel_get__drag(t_Panel *self, void *data);
      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data);
      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data);
      static PyGetSetDef t_Panel__fields_[] = {
        DECLARE_GET_FIELD(t_Panel, absorption),
        DECLARE_GET_FIELD(t_Panel, area),
        DECLARE_GET_FIELD(t_Panel, doubleSided),
        DECLARE_GET_FIELD(t_Panel, drag),
        DECLARE_GET_FIELD(t_Panel, liftRatio),
        DECLARE_GET_FIELD(t_Panel, reflection),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Panel__methods_[] = {
        DECLARE_METHOD(t_Panel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, getAbsorption, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getArea, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getDrag, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getLiftRatio, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getNormal, METH_VARARGS),
        DECLARE_METHOD(t_Panel, getReflection, METH_NOARGS),
        DECLARE_METHOD(t_Panel, isDoubleSided, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Panel)[] = {
        { Py_tp_methods, t_Panel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Panel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Panel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Panel, t_Panel, Panel);

      void t_Panel::install(PyObject *module)
      {
        installType(&PY_TYPE(Panel), &PY_TYPE_DEF(Panel), module, "Panel", 0);
      }

      void t_Panel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "class_", make_descriptor(Panel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "wrapfn_", make_descriptor(t_Panel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Panel::initializeClass, 1)))
          return NULL;
        return t_Panel::wrap_Object(Panel(((t_Panel *) arg)->object.this$));
      }
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Panel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Panel_getAbsorption(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsorption());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getArea(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArea());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getDrag(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDrag());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getLiftRatio(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormal", args);
        return NULL;
      }

      static PyObject *t_Panel_getReflection(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReflection());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_isDoubleSided(t_Panel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDoubleSided());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsorption());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__area(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArea());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDoubleSided());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Panel_get__drag(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDrag());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReflection());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateMatrixFunction::mids$ = NULL;
      bool CalculusFieldMultivariateMatrixFunction::live$ = false;

      jclass CalculusFieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_f77247e6b79358da] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_f77247e6b79358da], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateMatrixFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateMatrixFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateMatrixFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateMatrixFunction, t_CalculusFieldMultivariateMatrixFunction, CalculusFieldMultivariateMatrixFunction);
      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_Object(const CalculusFieldMultivariateMatrixFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateMatrixFunction), &PY_TYPE_DEF(CalculusFieldMultivariateMatrixFunction), module, "CalculusFieldMultivariateMatrixFunction", 0);
      }

      void t_CalculusFieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "class_", make_descriptor(CalculusFieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateMatrixFunction::wrap_Object(CalculusFieldMultivariateMatrixFunction(((t_CalculusFieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombination::class$ = NULL;
          jmethodID *MeasurementCombination::mids$ = NULL;
          bool MeasurementCombination::live$ = false;

          jclass MeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_d8c8276403544c3f] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MeasurementCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_d8c8276403544c3f], a0.this$));
          }

          ::java::lang::String MeasurementCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
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
          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg);
          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self);
          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data);
          static PyGetSetDef t_MeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, combine, METH_O),
            DECLARE_METHOD(t_MeasurementCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombination)[] = {
            { Py_tp_methods, t_MeasurementCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombination, t_MeasurementCombination, MeasurementCombination);

          void t_MeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombination), &PY_TYPE_DEF(MeasurementCombination), module, "MeasurementCombination", 0);
          }

          void t_MeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "class_", make_descriptor(MeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "wrapfn_", make_descriptor(t_MeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombination::wrap_Object(MeasurementCombination(((t_MeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data)
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
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *FieldODEIntegratorBuilder::mids$ = NULL;
        bool FieldODEIntegratorBuilder::live$ = false;

        jclass FieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_071d3edeab1fa823] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_071d3edeab1fa823], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_FieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_FieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEIntegratorBuilder, t_FieldODEIntegratorBuilder, FieldODEIntegratorBuilder);
        PyObject *t_FieldODEIntegratorBuilder::wrap_Object(const FieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEIntegratorBuilder), &PY_TYPE_DEF(FieldODEIntegratorBuilder), module, "FieldODEIntegratorBuilder", 0);
        }

        void t_FieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "class_", make_descriptor(FieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_FieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_FieldODEIntegratorBuilder::wrap_Object(FieldODEIntegratorBuilder(((t_FieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldAdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonFieldAdditionalStateProvider::mids$ = NULL;
      bool PythonFieldAdditionalStateProvider::live$ = false;

      jclass PythonFieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_360c953f14ed07de] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_91c945ca7903e8ac] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
          mids$[mid_yield__91c945ca7903e8ac] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAdditionalStateProvider::PythonFieldAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }

      jboolean PythonFieldAdditionalStateProvider::yield(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_91c945ca7903e8ac], a0.this$);
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
      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self);
      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonFieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonFieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonFieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldAdditionalStateProvider, t_PythonFieldAdditionalStateProvider, PythonFieldAdditionalStateProvider);
      PyObject *t_PythonFieldAdditionalStateProvider::wrap_Object(const PythonFieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAdditionalStateProvider), &PY_TYPE_DEF(PythonFieldAdditionalStateProvider), module, "PythonFieldAdditionalStateProvider", 1);
      }

      void t_PythonFieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "class_", make_descriptor(PythonFieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAdditionalStateProvider::wrap_Object(PythonFieldAdditionalStateProvider(((t_PythonFieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data)
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
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinCos::class$ = NULL;
      jmethodID *FieldSinCos::mids$ = NULL;
      bool FieldSinCos::live$ = false;

      jclass FieldSinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0d8a2282c8979673] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cos_dfd7647d9110ac9f] = env->getMethodID(cls, "cos", "()Ljava/lang/Object;");
          mids$[mid_difference_a8dce0df29877ca1] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sin_dfd7647d9110ac9f] = env->getMethodID(cls, "sin", "()Ljava/lang/Object;");
          mids$[mid_sum_a8dce0df29877ca1] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinCos::FieldSinCos(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d8a2282c8979673, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinCos::cos() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cos_dfd7647d9110ac9f]));
      }

      FieldSinCos FieldSinCos::difference(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_a8dce0df29877ca1], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinCos::sin() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sin_dfd7647d9110ac9f]));
      }

      FieldSinCos FieldSinCos::sum(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_a8dce0df29877ca1], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args);
      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data);
      static PyGetSetDef t_FieldSinCos__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinCos, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinCos__methods_[] = {
        DECLARE_METHOD(t_FieldSinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinCos)[] = {
        { Py_tp_methods, t_FieldSinCos__methods_ },
        { Py_tp_init, (void *) t_FieldSinCos_init_ },
        { Py_tp_getset, t_FieldSinCos__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinCos, t_FieldSinCos, FieldSinCos);
      PyObject *t_FieldSinCos::wrap_Object(const FieldSinCos& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinCos::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinCos), &PY_TYPE_DEF(FieldSinCos), module, "FieldSinCos", 0);
      }

      void t_FieldSinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "class_", make_descriptor(FieldSinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "wrapfn_", make_descriptor(t_FieldSinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinCos::initializeClass, 1)))
          return NULL;
        return t_FieldSinCos::wrap_Object(FieldSinCos(((t_FieldSinCos *) arg)->object.this$));
      }
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinCos object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinCos(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::difference(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::sum(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "org/hipparchus/util/KthSelector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile$EstimationType::class$ = NULL;
          jmethodID *Percentile$EstimationType::mids$ = NULL;
          bool Percentile$EstimationType::live$ = false;
          Percentile$EstimationType *Percentile$EstimationType::LEGACY = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_1 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_2 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_3 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_4 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_5 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_6 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_7 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_8 = NULL;
          Percentile$EstimationType *Percentile$EstimationType::R_9 = NULL;

          jclass Percentile$EstimationType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile$EstimationType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_evaluate_b3f8c0a6fcd474d2] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_valueOf_77624cca46538fe2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_values_49c3192c700e56b5] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_evaluate_b6a18dd3bc4c6c25] = env->getMethodID(cls, "evaluate", "([D[IDLorg/hipparchus/util/KthSelector;)D");
              mids$[mid_estimate_65e9a65f06b863df] = env->getMethodID(cls, "estimate", "([D[IDILorg/hipparchus/util/KthSelector;)D");
              mids$[mid_index_bcad94b64f1e2dd8] = env->getMethodID(cls, "index", "(DI)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              LEGACY = new Percentile$EstimationType(env->getStaticObjectField(cls, "LEGACY", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_1 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_1", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_2 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_2", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_3 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_3", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_4 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_4", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_5 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_5", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_6 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_6", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_7 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_7", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_8 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_8", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              R_9 = new Percentile$EstimationType(env->getStaticObjectField(cls, "R_9", "Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble Percentile$EstimationType::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::util::KthSelector & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_b3f8c0a6fcd474d2], a0.this$, a1, a2.this$);
          }

          Percentile$EstimationType Percentile$EstimationType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Percentile$EstimationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_77624cca46538fe2], a0.this$));
          }

          JArray< Percentile$EstimationType > Percentile$EstimationType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Percentile$EstimationType >(env->callStaticObjectMethod(cls, mids$[mid_values_49c3192c700e56b5]));
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
        namespace rank {
          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args);
          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type);
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data);
          static PyGetSetDef t_Percentile$EstimationType__fields_[] = {
            DECLARE_GET_FIELD(t_Percentile$EstimationType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile$EstimationType__methods_[] = {
            DECLARE_METHOD(t_Percentile$EstimationType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, of_, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile$EstimationType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Percentile$EstimationType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile$EstimationType)[] = {
            { Py_tp_methods, t_Percentile$EstimationType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Percentile$EstimationType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile$EstimationType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Percentile$EstimationType, t_Percentile$EstimationType, Percentile$EstimationType);
          PyObject *t_Percentile$EstimationType::wrap_Object(const Percentile$EstimationType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Percentile$EstimationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Percentile$EstimationType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Percentile$EstimationType *self = (t_Percentile$EstimationType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Percentile$EstimationType::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile$EstimationType), &PY_TYPE_DEF(Percentile$EstimationType), module, "Percentile$EstimationType", 0);
          }

          void t_Percentile$EstimationType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "class_", make_descriptor(Percentile$EstimationType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "wrapfn_", make_descriptor(t_Percentile$EstimationType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "boxfn_", make_descriptor(boxObject));
            env->getClass(Percentile$EstimationType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "LEGACY", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::LEGACY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_1", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_2", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_3", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_4", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_5", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_6", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_7", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_8", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile$EstimationType), "R_9", make_descriptor(t_Percentile$EstimationType::wrap_Object(*Percentile$EstimationType::R_9)));
          }

          static PyObject *t_Percentile$EstimationType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile$EstimationType::initializeClass, 1)))
              return NULL;
            return t_Percentile$EstimationType::wrap_Object(Percentile$EstimationType(((t_Percentile$EstimationType *) arg)->object.this$));
          }
          static PyObject *t_Percentile$EstimationType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile$EstimationType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Percentile$EstimationType_of_(t_Percentile$EstimationType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Percentile$EstimationType_evaluate(t_Percentile$EstimationType *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::util::KthSelector a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[DDk", ::org::hipparchus::util::KthSelector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "evaluate", args);
            return NULL;
          }

          static PyObject *t_Percentile$EstimationType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Percentile$EstimationType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::valueOf(a0));
              return t_Percentile$EstimationType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Percentile$EstimationType_values(PyTypeObject *type)
          {
            JArray< Percentile$EstimationType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::values());
            return JArray<jobject>(result.this$).wrap(t_Percentile$EstimationType::wrap_jobject);
          }
          static PyObject *t_Percentile$EstimationType_get__parameters_(t_Percentile$EstimationType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Tdm::class$ = NULL;
            jmethodID *Tdm::mids$ = NULL;
            bool Tdm::live$ = false;
            ::java::lang::String *Tdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Tdm::ROOT = NULL;

            jclass Tdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Tdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3ec50b09beb1a48e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Tdm::Tdm(const ::org::orekit::files::ccsds::ndm::tdm::TdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_3ec50b09beb1a48e, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
          namespace tdm {
            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args);
            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data);
            static PyGetSetDef t_Tdm__fields_[] = {
              DECLARE_GET_FIELD(t_Tdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Tdm__methods_[] = {
              DECLARE_METHOD(t_Tdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Tdm)[] = {
              { Py_tp_methods, t_Tdm__methods_ },
              { Py_tp_init, (void *) t_Tdm_init_ },
              { Py_tp_getset, t_Tdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Tdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Tdm, t_Tdm, Tdm);
            PyObject *t_Tdm::wrap_Object(const Tdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Tdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Tdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Tdm), &PY_TYPE_DEF(Tdm), module, "Tdm", 0);
            }

            void t_Tdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "class_", make_descriptor(Tdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "wrapfn_", make_descriptor(t_Tdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Tdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Tdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "ROOT", make_descriptor(j2p(*Tdm::ROOT)));
            }

            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Tdm::initializeClass, 1)))
                return NULL;
              return t_Tdm::wrap_Object(Tdm(((t_Tdm *) arg)->object.this$));
            }
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Tdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Tdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::tdm::TdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Tdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/DormandPrince853Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853Integrator::class$ = NULL;
        jmethodID *DormandPrince853Integrator::mids$ = NULL;
        bool DormandPrince853Integrator::live$ = false;

        jclass DormandPrince853Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5787c5177784e12] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_c0377371a9a76cf6] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853StateInterpolator;");
            mids$[mid_estimateError_8ae23a975a0e5320] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e5787c5177784e12, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince853Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > DormandPrince853Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > DormandPrince853Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
        }

        jint DormandPrince853Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
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
        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince853Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853Integrator)[] = {
          { Py_tp_methods, t_DormandPrince853Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853Integrator_init_ },
          { Py_tp_getset, t_DormandPrince853Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853Integrator, t_DormandPrince853Integrator, DormandPrince853Integrator);

        void t_DormandPrince853Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853Integrator), &PY_TYPE_DEF(DormandPrince853Integrator), module, "DormandPrince853Integrator", 0);
        }

        void t_DormandPrince853Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "class_", make_descriptor(DormandPrince853Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "wrapfn_", make_descriptor(t_DormandPrince853Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853Integrator::wrap_Object(DormandPrince853Integrator(((t_DormandPrince853Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1D::class$ = NULL;
          jmethodID *Vector1D::mids$ = NULL;
          bool Vector1D::live$ = false;
          Vector1D *Vector1D::NEGATIVE_INFINITY = NULL;
          Vector1D *Vector1D::NaN = NULL;
          Vector1D *Vector1D::ONE = NULL;
          Vector1D *Vector1D::POSITIVE_INFINITY = NULL;
          Vector1D *Vector1D::ZERO = NULL;

          jclass Vector1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_03dd098f08b4f4ff] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_d25dc2555f575e2b] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_555b98837dfb0fae] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_8cb10ee617a1d889] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_add_32bf1487354a978b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_add_1ed27204db57dfd6] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_distance_726dc963fac3505e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_cb473262c0a1553e] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distance1_05fa5f52db18503d] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_05fa5f52db18503d] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_cb473262c0a1553e] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distanceSq_05fa5f52db18503d] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_cb473262c0a1553e] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_dotProduct_05fa5f52db18503d] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_229c87223f486349] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getZero_382bf37547292fb5] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_382bf37547292fb5] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_scalarMultiply_a3ba998b0d5666a9] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_32bf1487354a978b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_1ed27204db57dfd6] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aed149be89fb33b9] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NEGATIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              NaN = new Vector1D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ONE = new Vector1D(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              POSITIVE_INFINITY = new Vector1D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              ZERO = new Vector1D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/oned/Vector1D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1D::Vector1D(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03dd098f08b4f4ff, a0, a1.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d25dc2555f575e2b, a0, a1.this$, a2, a3.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_555b98837dfb0fae, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5, jdouble a6, const Vector1D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8cb10ee617a1d889, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector1D Vector1D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_32bf1487354a978b], a0.this$));
          }

          Vector1D Vector1D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_1ed27204db57dfd6], a0, a1.this$));
          }

          jdouble Vector1D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_726dc963fac3505e], a0.this$);
          }

          jdouble Vector1D::distance(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_cb473262c0a1553e], a0.this$, a1.this$);
          }

          jdouble Vector1D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector1D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector1D::distanceInf(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_cb473262c0a1553e], a0.this$, a1.this$);
          }

          jdouble Vector1D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_05fa5f52db18503d], a0.this$);
          }

          jdouble Vector1D::distanceSq(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_cb473262c0a1553e], a0.this$, a1.this$);
          }

          jdouble Vector1D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_05fa5f52db18503d], a0.this$);
          }

          jboolean Vector1D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jboolean Vector1D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_229c87223f486349], a0.this$);
          }

          jdouble Vector1D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
          }

          jdouble Vector1D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_456d9a2f64d6b28d]);
          }

          jdouble Vector1D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_456d9a2f64d6b28d]);
          }

          jdouble Vector1D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::Space Vector1D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_0438ef5f9a5edb53]));
          }

          jdouble Vector1D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
          }

          Vector1D Vector1D::getZero() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_getZero_382bf37547292fb5]));
          }

          jint Vector1D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean Vector1D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
          }

          jboolean Vector1D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
          }

          Vector1D Vector1D::negate() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_negate_382bf37547292fb5]));
          }

          Vector1D Vector1D::scalarMultiply(jdouble a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_a3ba998b0d5666a9], a0));
          }

          Vector1D Vector1D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_32bf1487354a978b], a0.this$));
          }

          Vector1D Vector1D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_1ed27204db57dfd6], a0, a1.this$));
          }

          ::java::lang::String Vector1D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          ::java::lang::String Vector1D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aed149be89fb33b9], a0.this$));
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
          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_getNorm(t_Vector1D *self);
          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self);
          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self);
          static PyObject *t_Vector1D_getSpace(t_Vector1D *self);
          static PyObject *t_Vector1D_getX(t_Vector1D *self);
          static PyObject *t_Vector1D_getZero(t_Vector1D *self);
          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self);
          static PyObject *t_Vector1D_isNaN(t_Vector1D *self);
          static PyObject *t_Vector1D_negate(t_Vector1D *self);
          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg);
          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args);
          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data);
          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data);
          static PyGetSetDef t_Vector1D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1D, infinite),
            DECLARE_GET_FIELD(t_Vector1D, naN),
            DECLARE_GET_FIELD(t_Vector1D, norm),
            DECLARE_GET_FIELD(t_Vector1D, norm1),
            DECLARE_GET_FIELD(t_Vector1D, normInf),
            DECLARE_GET_FIELD(t_Vector1D, normSq),
            DECLARE_GET_FIELD(t_Vector1D, space),
            DECLARE_GET_FIELD(t_Vector1D, x),
            DECLARE_GET_FIELD(t_Vector1D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1D__methods_[] = {
            DECLARE_METHOD(t_Vector1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, distance, METH_O),
            DECLARE_METHOD(t_Vector1D, distance1, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector1D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector1D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector1D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector1D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector1D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector1D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1D)[] = {
            { Py_tp_methods, t_Vector1D__methods_ },
            { Py_tp_init, (void *) t_Vector1D_init_ },
            { Py_tp_getset, t_Vector1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector1D, t_Vector1D, Vector1D);

          void t_Vector1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1D), &PY_TYPE_DEF(Vector1D), module, "Vector1D", 0);
          }

          void t_Vector1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "class_", make_descriptor(Vector1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "wrapfn_", make_descriptor(t_Vector1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NEGATIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "NaN", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ONE", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ONE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "POSITIVE_INFINITY", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1D), "ZERO", make_descriptor(t_Vector1D::wrap_Object(*Vector1D::ZERO)));
          }

          static PyObject *t_Vector1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1D::initializeClass, 1)))
              return NULL;
            return t_Vector1D::wrap_Object(Vector1D(((t_Vector1D *) arg)->object.this$));
          }
          static PyObject *t_Vector1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector1D_init_(t_Vector1D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Vector1D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector1D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector1D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector1D a1((jobject) NULL);
                jdouble a2;
                Vector1D a3((jobject) NULL);
                jdouble a4;
                Vector1D a5((jobject) NULL);
                jdouble a6;
                Vector1D a7((jobject) NULL);
                Vector1D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector1D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector1D_add(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distance1(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector1D a0((jobject) NULL);
            Vector1D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector1D::initializeClass, Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector1D_dotProduct(t_Vector1D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_equals(t_Vector1D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector1D_equalsIeee754(t_Vector1D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_getNorm(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNorm1(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormInf(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getNormSq(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getSpace(t_Vector1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector1D_getX(t_Vector1D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector1D_getZero(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_hashCode(t_Vector1D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector1D_isInfinite(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_isNaN(t_Vector1D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector1D_negate(t_Vector1D *self)
          {
            Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_Vector1D_scalarMultiply(t_Vector1D *self, PyObject *arg)
          {
            jdouble a0;
            Vector1D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector1D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector1D_subtract(t_Vector1D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector1D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector1D_toString(t_Vector1D *self, PyObject *args)
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
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector1D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector1D_get__infinite(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__naN(t_Vector1D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector1D_get__norm(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__norm1(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normInf(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__normSq(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__space(t_Vector1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector1D_get__x(t_Vector1D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector1D_get__zero(t_Vector1D *self, void *data)
          {
            Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonAbstractTimeScales.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TCGScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/BDTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonAbstractTimeScales::class$ = NULL;
      jmethodID *PythonAbstractTimeScales::mids$ = NULL;
      bool PythonAbstractTimeScales::live$ = false;

      jclass PythonAbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonAbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_deaa012966748070] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getEopHistory_7544a283da003d74] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getGLONASS_c91e99b6d55c6edd] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGPS_c3529b957726f144] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_11ee1ca64364e897] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_ec0466e710e3daab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_7f540f12419eda56] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_9316322b62b6b656] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_2460e78d331af28f] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_30aeac15cc80b3c1] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_0bcc4110bc5be1d2] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_9be074c5a298fe1e] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_7b22e00b4ab08eba] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_ed870393143e8ecb] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractTimeScales::PythonAbstractTimeScales() : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAbstractTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      ::org::orekit::time::UT1Scale PythonAbstractTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_7b22e00b4ab08eba], a0.this$));
      }

      jlong PythonAbstractTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAbstractTimeScales::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self);
      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args);
      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data);
      static PyGetSetDef t_PythonAbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractTimeScales)[] = {
        { Py_tp_methods, t_PythonAbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractTimeScales_init_ },
        { Py_tp_getset, t_PythonAbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(PythonAbstractTimeScales, t_PythonAbstractTimeScales, PythonAbstractTimeScales);

      void t_PythonAbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractTimeScales), &PY_TYPE_DEF(PythonAbstractTimeScales), module, "PythonAbstractTimeScales", 1);
      }

      void t_PythonAbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "class_", make_descriptor(PythonAbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "wrapfn_", make_descriptor(t_PythonAbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonAbstractTimeScales_getBDT0 },
          { "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractTimeScales_getEopHistory1 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonAbstractTimeScales_getGLONASS2 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonAbstractTimeScales_getGPS3 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonAbstractTimeScales_getGST4 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonAbstractTimeScales_getIRNSS5 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonAbstractTimeScales_getQZSS6 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonAbstractTimeScales_getTAI7 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonAbstractTimeScales_getTCB8 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonAbstractTimeScales_getTCG9 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonAbstractTimeScales_getTDB10 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonAbstractTimeScales_getTT11 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonAbstractTimeScales_getUTC12 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractTimeScales_pythonDecRef13 },
        };
        env->registerNatives(cls, methods, 14);
      }

      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractTimeScales::wrap_Object(PythonAbstractTimeScales(((t_PythonAbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractTimeScales object((jobject) NULL);

        INT_CALL(object = PythonAbstractTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getUT1(a0));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(PythonAbstractTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEopHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEopHistory", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
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

      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data)
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
#include "org/orekit/models/earth/GeoMagneticModelLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticModelLoader::class$ = NULL;
        jmethodID *GeoMagneticModelLoader::mids$ = NULL;
        bool GeoMagneticModelLoader::live$ = false;

        jclass GeoMagneticModelLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticModelLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getModels_cfcfd130f9013e3e] = env->getMethodID(cls, "getModels", "()Ljava/util/Collection;");
            mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
            mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticModelLoader::GeoMagneticModelLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::java::util::Collection GeoMagneticModelLoader::getModels() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getModels_cfcfd130f9013e3e]));
        }

        void GeoMagneticModelLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
        }

        jboolean GeoMagneticModelLoader::stillAcceptsData() const
        {
          return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args);
        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data);
        static PyGetSetDef t_GeoMagneticModelLoader__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticModelLoader, models),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticModelLoader__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticModelLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, getModels, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, loadData, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, stillAcceptsData, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticModelLoader)[] = {
          { Py_tp_methods, t_GeoMagneticModelLoader__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticModelLoader_init_ },
          { Py_tp_getset, t_GeoMagneticModelLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticModelLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticModelLoader, t_GeoMagneticModelLoader, GeoMagneticModelLoader);

        void t_GeoMagneticModelLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticModelLoader), &PY_TYPE_DEF(GeoMagneticModelLoader), module, "GeoMagneticModelLoader", 0);
        }

        void t_GeoMagneticModelLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "class_", make_descriptor(GeoMagneticModelLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "wrapfn_", make_descriptor(t_GeoMagneticModelLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticModelLoader::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticModelLoader::wrap_Object(GeoMagneticModelLoader(((t_GeoMagneticModelLoader *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticModelLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds)
        {
          GeoMagneticModelLoader object((jobject) NULL);

          INT_CALL(object = GeoMagneticModelLoader());
          self->object = object;

          return 0;
        }

        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::models::earth::PY_TYPE(GeoMagneticField));
        }

        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args)
        {
          ::java::io::InputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.loadData(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "loadData", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.stillAcceptsData());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *ComplexUnivariateIntegrator::mids$ = NULL;
      bool ComplexUnivariateIntegrator::live$ = false;

      jclass ComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7551b1c71ee2d8de] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;)V");
          mids$[mid_integrate_1aa1c9ca64a6ecbb] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_integrate_2cf5c37ab5133d85] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexUnivariateIntegrator::ComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7551b1c71ee2d8de, a0.this$)) {}

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_1aa1c9ca64a6ecbb], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_2cf5c37ab5133d85], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args);

      static PyMethodDef t_ComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_ComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_ComplexUnivariateIntegrator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUnivariateIntegrator, t_ComplexUnivariateIntegrator, ComplexUnivariateIntegrator);

      void t_ComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUnivariateIntegrator), &PY_TYPE_DEF(ComplexUnivariateIntegrator), module, "ComplexUnivariateIntegrator", 0);
      }

      void t_ComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "class_", make_descriptor(ComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_ComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_ComplexUnivariateIntegrator::wrap_Object(ComplexUnivariateIntegrator(((t_ComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
        ComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0))
        {
          INT_CALL(object = ComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKk[k", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            ::org::hipparchus::complex::Complex a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKkk", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GRAPHICCombination::class$ = NULL;
          jmethodID *GRAPHICCombination::mids$ = NULL;
          bool GRAPHICCombination::live$ = false;

          jclass GRAPHICCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GRAPHICCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_824133ce4aec3505] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GRAPHICCombination__methods_[] = {
            DECLARE_METHOD(t_GRAPHICCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRAPHICCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRAPHICCombination)[] = {
            { Py_tp_methods, t_GRAPHICCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRAPHICCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GRAPHICCombination, t_GRAPHICCombination, GRAPHICCombination);

          void t_GRAPHICCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GRAPHICCombination), &PY_TYPE_DEF(GRAPHICCombination), module, "GRAPHICCombination", 0);
          }

          void t_GRAPHICCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "class_", make_descriptor(GRAPHICCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "wrapfn_", make_descriptor(t_GRAPHICCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRAPHICCombination::initializeClass, 1)))
              return NULL;
            return t_GRAPHICCombination::wrap_Object(GRAPHICCombination(((t_GRAPHICCombination *) arg)->object.this$));
          }
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRAPHICCombination::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistory::class$ = NULL;
              jmethodID *TrajectoryStateHistory::mids$ = NULL;
              bool TrajectoryStateHistory::live$ = false;

              jclass TrajectoryStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b5a783e2cfda63fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Ljava/util/List;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                  mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getBody_940814a1dcab100a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
                  mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_dfa7788abc97c95b] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;");
                  mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTrajectoryStates_a6156df500549a58] = env->getMethodID(cls, "getTrajectoryStates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              TrajectoryStateHistory::TrajectoryStateHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a0, const ::java::util::List & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5a783e2cfda63fd, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::utils::CartesianDerivativesFilter TrajectoryStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
              }

              ::org::orekit::bodies::OneAxisEllipsoid TrajectoryStateHistory::getBody() const
              {
                return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_940814a1dcab100a]));
              }

              ::java::util::List TrajectoryStateHistory::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
              }

              ::org::orekit::frames::Frame TrajectoryStateHistory::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
              }

              jint TrajectoryStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata TrajectoryStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_dfa7788abc97c95b]));
              }

              jdouble TrajectoryStateHistory::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate TrajectoryStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
              }

              ::java::util::List TrajectoryStateHistory::getTrajectoryStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryStates_a6156df500549a58]));
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
              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self);
              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data);
              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, body),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, coordinates),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, frame),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, metadata),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, mu),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, start),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, stop),
                DECLARE_GET_FIELD(t_TrajectoryStateHistory, trajectoryStates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistory__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getBody, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getMu, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getStop, METH_NOARGS),
                DECLARE_METHOD(t_TrajectoryStateHistory, getTrajectoryStates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistory)[] = {
                { Py_tp_methods, t_TrajectoryStateHistory__methods_ },
                { Py_tp_init, (void *) t_TrajectoryStateHistory_init_ },
                { Py_tp_getset, t_TrajectoryStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistory, t_TrajectoryStateHistory, TrajectoryStateHistory);

              void t_TrajectoryStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistory), &PY_TYPE_DEF(TrajectoryStateHistory), module, "TrajectoryStateHistory", 0);
              }

              void t_TrajectoryStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "class_", make_descriptor(TrajectoryStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "wrapfn_", make_descriptor(t_TrajectoryStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_TrajectoryStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistory::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistory::wrap_Object(TrajectoryStateHistory(((t_TrajectoryStateHistory *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_TrajectoryStateHistory_init_(t_TrajectoryStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
                jdouble a3;
                TrajectoryStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kKkD", ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
                {
                  INT_CALL(object = TrajectoryStateHistory(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_TrajectoryStateHistory_getAvailableDerivatives(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getBody(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
                OBJ_CALL(result = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getCoordinates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_TrajectoryStateHistory_getFrame(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getInterpolationSamples(t_TrajectoryStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_TrajectoryStateHistory_getMetadata(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getMu(t_TrajectoryStateHistory *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_TrajectoryStateHistory_getStart(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getStop(t_TrajectoryStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_TrajectoryStateHistory_getTrajectoryStates(t_TrajectoryStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryState));
              }

              static PyObject *t_TrajectoryStateHistory_get__availableDerivatives(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__body(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
                OBJ_CALL(value = self->object.getBody());
                return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__coordinates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__frame(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__interpolationSamples(t_TrajectoryStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__metadata(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_TrajectoryStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__mu(t_TrajectoryStateHistory *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_TrajectoryStateHistory_get__start(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__stop(t_TrajectoryStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_TrajectoryStateHistory_get__trajectoryStates(t_TrajectoryStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryStates());
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
#include "java/io/FilterOutputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilterOutputStream::class$ = NULL;
    jmethodID *FilterOutputStream::mids$ = NULL;
    bool FilterOutputStream::live$ = false;

    jclass FilterOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilterOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_255f64cf1272816f] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_9c4b35f0a6dc87f3] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_125b1e9f043b29f8] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FilterOutputStream::FilterOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_255f64cf1272816f, a0.this$)) {}

    void FilterOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void FilterOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_9c4b35f0a6dc87f3], a0.this$);
    }

    void FilterOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_125b1e9f043b29f8], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args);

    static PyMethodDef t_FilterOutputStream__methods_[] = {
      DECLARE_METHOD(t_FilterOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilterOutputStream)[] = {
      { Py_tp_methods, t_FilterOutputStream__methods_ },
      { Py_tp_init, (void *) t_FilterOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilterOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FilterOutputStream, t_FilterOutputStream, FilterOutputStream);

    void t_FilterOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FilterOutputStream), &PY_TYPE_DEF(FilterOutputStream), module, "FilterOutputStream", 0);
    }

    void t_FilterOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "class_", make_descriptor(FilterOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "wrapfn_", make_descriptor(t_FilterOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilterOutputStream::initializeClass, 1)))
        return NULL;
      return t_FilterOutputStream::wrap_Object(FilterOutputStream(((t_FilterOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilterOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      FilterOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = FilterOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
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
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DirectoryCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DirectoryCrawler::class$ = NULL;
      jmethodID *DirectoryCrawler::mids$ = NULL;
      bool DirectoryCrawler::live$ = false;

      jclass DirectoryCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DirectoryCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_46e66c77c82c9a6b] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DirectoryCrawler::DirectoryCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46e66c77c82c9a6b, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_DirectoryCrawler__methods_[] = {
        DECLARE_METHOD(t_DirectoryCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DirectoryCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DirectoryCrawler)[] = {
        { Py_tp_methods, t_DirectoryCrawler__methods_ },
        { Py_tp_init, (void *) t_DirectoryCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DirectoryCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DirectoryCrawler, t_DirectoryCrawler, DirectoryCrawler);

      void t_DirectoryCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(DirectoryCrawler), &PY_TYPE_DEF(DirectoryCrawler), module, "DirectoryCrawler", 0);
      }

      void t_DirectoryCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "class_", make_descriptor(DirectoryCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "wrapfn_", make_descriptor(t_DirectoryCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DirectoryCrawler::initializeClass, 1)))
          return NULL;
        return t_DirectoryCrawler::wrap_Object(DirectoryCrawler(((t_DirectoryCrawler *) arg)->object.this$));
      }
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DirectoryCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds)
      {
        ::java::io::File a0((jobject) NULL);
        DirectoryCrawler object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = DirectoryCrawler(a0));
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
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinates::class$ = NULL;
      jmethodID *FieldPVCoordinates::mids$ = NULL;
      bool FieldPVCoordinates::live$ = false;

      jclass FieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9c8737fc819646bf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_d35296e3a83f651e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_73aec871053b5da0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_0bb523e1dfdeb246] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_598bca9db0ea664d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_247062d7c2a77835] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_9e3e1db0a2aa967f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_3f18bec8c28008a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_824e651d3426922f] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_66e66ae11124b9b1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d62b17fa020a4f24] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_b201ee41a111da4b] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3eb5a34dfaadc51b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_b41231f2ad06089f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_49c41db8204b1317] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d4a67adf885bbb69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_29150d269bfe43d4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_eba1476fd142b272] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_crossProduct_32f08c76ddea4935] = env->getMethodID(cls, "crossProduct", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_estimateVelocity_8f7f51ffc00ffac1] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAcceleration_5791f80683b5227e] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngularVelocity_5791f80683b5227e] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getMomentum_5791f80683b5227e] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_5791f80683b5227e] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_5791f80683b5227e] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZero_b10aa29cc18662da] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_negate_239ccd4fbdc5d04d] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_normalize_239ccd4fbdc5d04d] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_positionShiftedBy_3023f195d3eecf7e] = env->getMethodID(cls, "positionShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_22431c581ae51eff] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_shiftedBy_7b2c6ce606e939f5] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructurePV_42ec5cc0a8e3a780] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_cc53a43c791fc9de] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toPVCoordinates_6761e3f334368d44] = env->getMethodID(cls, "toPVCoordinates", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_239ccd4fbdc5d04d] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_5791f80683b5227e] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_239ccd4fbdc5d04d] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_5791f80683b5227e] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c8737fc819646bf, a0.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d35296e3a83f651e, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const FieldPVCoordinates & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73aec871053b5da0, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0bb523e1dfdeb246, a0, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_598bca9db0ea664d, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_247062d7c2a77835, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e3e1db0a2aa967f, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f18bec8c28008a8, a0.this$, a1.this$, a2.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_824e651d3426922f, a0, a1.this$, a2, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_66e66ae11124b9b1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d62b17fa020a4f24, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b201ee41a111da4b, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3eb5a34dfaadc51b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b41231f2ad06089f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5, jdouble a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49c41db8204b1317, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d4a67adf885bbb69, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::orekit::utils::PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_29150d269bfe43d4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates FieldPVCoordinates::blendArithmeticallyWith(const FieldPVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_eba1476fd142b272], a0.this$, a1.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::crossProduct(const FieldPVCoordinates & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_crossProduct_32f08c76ddea4935], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_8f7f51ffc00ffac1], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_5791f80683b5227e]));
      }

      FieldPVCoordinates FieldPVCoordinates::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getZero_b10aa29cc18662da], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::negate() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_239ccd4fbdc5d04d]));
      }

      FieldPVCoordinates FieldPVCoordinates::normalize() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_239ccd4fbdc5d04d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::positionShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_3023f195d3eecf7e], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_22431c581ae51eff], a0));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7b2c6ce606e939f5], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_42ec5cc0a8e3a780], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_cc53a43c791fc9de], a0));
      }

      ::org::orekit::utils::PVCoordinates FieldPVCoordinates::toPVCoordinates() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_toPVCoordinates_6761e3f334368d44]));
      }

      ::java::lang::String FieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative1PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_239ccd4fbdc5d04d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_5791f80683b5227e]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative2PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_239ccd4fbdc5d04d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_5791f80683b5227e]));
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
      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args);
      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data);
      static PyGetSetDef t_FieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, momentum),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, position),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, velocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, crossProduct, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toPVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinates)[] = {
        { Py_tp_methods, t_FieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldPVCoordinates_init_ },
        { Py_tp_getset, t_FieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinates, t_FieldPVCoordinates, FieldPVCoordinates);
      PyObject *t_FieldPVCoordinates::wrap_Object(const FieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinates), &PY_TYPE_DEF(FieldPVCoordinates), module, "FieldPVCoordinates", 0);
      }

      void t_FieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "class_", make_descriptor(FieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "wrapfn_", make_descriptor(t_FieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinates::wrap_Object(FieldPVCoordinates(((t_FieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DK", FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::utils::PVCoordinates a7((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.crossProduct(a0));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::getZero(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toPVCoordinates());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/LUDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposition::class$ = NULL;
      jmethodID *LUDecomposition::mids$ = NULL;
      bool LUDecomposition::live$ = false;

      jclass LUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_27ff5cf8ba76b4fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getDeterminant_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_7116bbecdd8ceb21] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_7116bbecdd8ceb21] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPivot_d8ead0d90ce828b0] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_73ddb95911119e87] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_7116bbecdd8ceb21] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27ff5cf8ba76b4fe, a0.this$, a1)) {}

      jdouble LUDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_7116bbecdd8ceb21]));
      }

      JArray< jint > LUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_d8ead0d90ce828b0]));
      }

      ::org::hipparchus::linear::DecompositionSolver LUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_73ddb95911119e87]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_7116bbecdd8ceb21]));
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
      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data);
      static PyGetSetDef t_LUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_LUDecomposition, determinant),
        DECLARE_GET_FIELD(t_LUDecomposition, l),
        DECLARE_GET_FIELD(t_LUDecomposition, p),
        DECLARE_GET_FIELD(t_LUDecomposition, pivot),
        DECLARE_GET_FIELD(t_LUDecomposition, solver),
        DECLARE_GET_FIELD(t_LUDecomposition, u),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LUDecomposition__methods_[] = {
        DECLARE_METHOD(t_LUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposition)[] = {
        { Py_tp_methods, t_LUDecomposition__methods_ },
        { Py_tp_init, (void *) t_LUDecomposition_init_ },
        { Py_tp_getset, t_LUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposition, t_LUDecomposition, LUDecomposition);

      void t_LUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposition), &PY_TYPE_DEF(LUDecomposition), module, "LUDecomposition", 0);
      }

      void t_LUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "class_", make_descriptor(LUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "wrapfn_", make_descriptor(t_LUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposition::initializeClass, 1)))
          return NULL;
        return t_LUDecomposition::wrap_Object(LUDecomposition(((t_LUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = LUDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LUDecomposition(a0, a1));
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

      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataField::class$ = NULL;
          jmethodID *DataField::mids$ = NULL;
          bool DataField::live$ = false;

          jclass DataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_booleanValue_5de456094fe2b4d8] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_doubleValue_f141c67192392788] = env->getMethodID(cls, "doubleValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)D");
              mids$[mid_intValue_7153406e72d9cdb3] = env->getMethodID(cls, "intValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)I");
              mids$[mid_stringValue_c4460699103faaeb] = env->getMethodID(cls, "stringValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean DataField::booleanValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_booleanValue_5de456094fe2b4d8], a0.this$);
          }

          jdouble DataField::doubleValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_doubleValue_f141c67192392788], a0.this$);
          }

          jint DataField::intValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_intValue_7153406e72d9cdb3], a0.this$);
          }

          ::java::lang::String DataField::stringValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_stringValue_c4460699103faaeb], a0.this$, a1));
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
        namespace parser {
          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args);

          static PyMethodDef t_DataField__methods_[] = {
            DECLARE_METHOD(t_DataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, booleanValue, METH_O),
            DECLARE_METHOD(t_DataField, doubleValue, METH_O),
            DECLARE_METHOD(t_DataField, intValue, METH_O),
            DECLARE_METHOD(t_DataField, stringValue, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataField)[] = {
            { Py_tp_methods, t_DataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DataField, t_DataField, DataField);

          void t_DataField::install(PyObject *module)
          {
            installType(&PY_TYPE(DataField), &PY_TYPE_DEF(DataField), module, "DataField", 0);
          }

          void t_DataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "class_", make_descriptor(DataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "wrapfn_", make_descriptor(t_DataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataField::initializeClass, 1)))
              return NULL;
            return t_DataField::wrap_Object(DataField(((t_DataField *) arg)->object.this$));
          }
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.booleanValue(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "booleanValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.doubleValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "doubleValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intValue(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "intValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.stringValue(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "stringValue", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
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
                mids$[mid_accept_4937bc9292f008b1] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterConsumer::accept(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_4937bc9292f008b1], a0.this$);
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
#include "org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldHermiteRuleFactory::class$ = NULL;
          jmethodID *FieldHermiteRuleFactory::mids$ = NULL;
          bool FieldHermiteRuleFactory::live$ = false;

          jclass FieldHermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_086dd68d091255ed] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldHermiteRuleFactory::FieldHermiteRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}
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
          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args);
          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data);
          static PyGetSetDef t_FieldHermiteRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldHermiteRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldHermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldHermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldHermiteRuleFactory)[] = {
            { Py_tp_methods, t_FieldHermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldHermiteRuleFactory_init_ },
            { Py_tp_getset, t_FieldHermiteRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldHermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldHermiteRuleFactory, t_FieldHermiteRuleFactory, FieldHermiteRuleFactory);
          PyObject *t_FieldHermiteRuleFactory::wrap_Object(const FieldHermiteRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldHermiteRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldHermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldHermiteRuleFactory), &PY_TYPE_DEF(FieldHermiteRuleFactory), module, "FieldHermiteRuleFactory", 0);
          }

          void t_FieldHermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "class_", make_descriptor(FieldHermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "wrapfn_", make_descriptor(t_FieldHermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldHermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldHermiteRuleFactory::wrap_Object(FieldHermiteRuleFactory(((t_FieldHermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldHermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldHermiteRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldHermiteRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data)
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
#include "org/hipparchus/analysis/function/Constant.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Constant::class$ = NULL;
        jmethodID *Constant::mids$ = NULL;
        bool Constant::live$ = false;

        jclass Constant::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Constant");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Constant::Constant(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble Constant::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Constant::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Constant_value(t_Constant *self, PyObject *args);

        static PyMethodDef t_Constant__methods_[] = {
          DECLARE_METHOD(t_Constant, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Constant)[] = {
          { Py_tp_methods, t_Constant__methods_ },
          { Py_tp_init, (void *) t_Constant_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Constant)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Constant, t_Constant, Constant);

        void t_Constant::install(PyObject *module)
        {
          installType(&PY_TYPE(Constant), &PY_TYPE_DEF(Constant), module, "Constant", 0);
        }

        void t_Constant::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "class_", make_descriptor(Constant::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "wrapfn_", make_descriptor(t_Constant::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Constant::initializeClass, 1)))
            return NULL;
          return t_Constant::wrap_Object(Constant(((t_Constant *) arg)->object.this$));
        }
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Constant::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Constant object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Constant(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Constant_value(t_Constant *self, PyObject *args)
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
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *PolygonsSet::class$ = NULL;
          jmethodID *PolygonsSet::mids$ = NULL;
          bool PolygonsSet::live$ = false;

          jclass PolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/PolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_71b33ec76cf5b8bd] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_3e72dd0bd3a69a59] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_b832ff2fd1b54c87] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_1dc1968396ae9d11] = env->getMethodID(cls, "<init>", "(DDDDD)V");
              mids$[mid_buildNew_4b66640ad01107c7] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");
              mids$[mid_getVertices_475ab40b782872dc] = env->getMethodID(cls, "getVertices", "()[[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_computeGeometricalProperties_7ae3461a92a43152] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolygonsSet::PolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          PolygonsSet::PolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_71b33ec76cf5b8bd, a0, a1.this$)) {}

          PolygonsSet::PolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_3e72dd0bd3a69a59, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b832ff2fd1b54c87, a0.this$, a1)) {}

          PolygonsSet::PolygonsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1dc1968396ae9d11, a0, a1, a2, a3, a4)) {}

          PolygonsSet PolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_4b66640ad01107c7], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > PolygonsSet::getVertices() const
          {
            return JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > >(env->callObjectMethod(this$, mids$[mid_getVertices_475ab40b782872dc]));
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
          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args);
          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args);
          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self);
          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data);
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data);
          static PyGetSetDef t_PolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolygonsSet, vertices),
            DECLARE_GET_FIELD(t_PolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolygonsSet__methods_[] = {
            DECLARE_METHOD(t_PolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolygonsSet, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolygonsSet)[] = {
            { Py_tp_methods, t_PolygonsSet__methods_ },
            { Py_tp_init, (void *) t_PolygonsSet_init_ },
            { Py_tp_getset, t_PolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolygonsSet, t_PolygonsSet, PolygonsSet);
          PyObject *t_PolygonsSet::wrap_Object(const PolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolygonsSet *self = (t_PolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolygonsSet), &PY_TYPE_DEF(PolygonsSet), module, "PolygonsSet", 0);
          }

          void t_PolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "class_", make_descriptor(PolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "wrapfn_", make_descriptor(t_PolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolygonsSet::initializeClass, 1)))
              return NULL;
            return t_PolygonsSet::wrap_Object(PolygonsSet(((t_PolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_PolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolygonsSet_of_(t_PolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolygonsSet_init_(t_PolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a1((jobject) NULL);
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                PolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = PolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_PolygonsSet_buildNew(t_PolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolygonsSet_getVertices(t_PolygonsSet *self)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(NULL);
          }
          static PyObject *t_PolygonsSet_get__parameters_(t_PolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolygonsSet_get__vertices(t_PolygonsSet *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalGradientConverter::mids$ = NULL;
        bool PythonAbstractAnalyticalGradientConverter::live$ = false;

        jclass PythonAbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a3a64c0d17b70ee3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;DI)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropagator_6bbe2f82089c1fee] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalGradientConverter::PythonAbstractAnalyticalGradientConverter(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_a3a64c0d17b70ee3, a0.this$, a1, a2)) {}

        void PythonAbstractAnalyticalGradientConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractAnalyticalGradientConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractAnalyticalGradientConverter::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalGradientConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalGradientConverter, t_PythonAbstractAnalyticalGradientConverter, PythonAbstractAnalyticalGradientConverter);

        void t_PythonAbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalGradientConverter), &PY_TYPE_DEF(PythonAbstractAnalyticalGradientConverter), module, "PythonAbstractAnalyticalGradientConverter", 1);
        }

        void t_PythonAbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "class_", make_descriptor(PythonAbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalGradientConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0 },
            { "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;", (void *) t_PythonAbstractAnalyticalGradientConverter_getPropagator1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalGradientConverter::wrap_Object(PythonAbstractAnalyticalGradientConverter(((t_PythonAbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractAnalyticalGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractAnalyticalGradientConverter(a0, a1, a2));
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

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "getPropagator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, &value))
          {
            throwTypeError("getPropagator", result);
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

        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/MidpointIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointIntegrator::class$ = NULL;
        jmethodID *MidpointIntegrator::mids$ = NULL;
        bool MidpointIntegrator::live$ = false;

        jclass MidpointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_3dd29d7d6a173aa7] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegrator::MidpointIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        JArray< JArray< jdouble > > MidpointIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > MidpointIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > MidpointIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
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
        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data);
        static PyGetSetDef t_MidpointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegrator)[] = {
          { Py_tp_methods, t_MidpointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegrator_init_ },
          { Py_tp_getset, t_MidpointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointIntegrator, t_MidpointIntegrator, MidpointIntegrator);

        void t_MidpointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegrator), &PY_TYPE_DEF(MidpointIntegrator), module, "MidpointIntegrator", 0);
        }

        void t_MidpointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "class_", make_descriptor(MidpointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "wrapfn_", make_descriptor(t_MidpointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegrator::wrap_Object(MidpointIntegrator(((t_MidpointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
