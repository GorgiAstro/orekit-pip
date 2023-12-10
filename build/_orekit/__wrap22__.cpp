#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/CauchyDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *CauchyDistribution::class$ = NULL;
        jmethodID *CauchyDistribution::mids$ = NULL;
        bool CauchyDistribution::live$ = false;

        jclass CauchyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/CauchyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMedian_dff5885c2c873297] = env->getMethodID(cls, "getMedian", "()D");
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

        CauchyDistribution::CauchyDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        CauchyDistribution::CauchyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble CauchyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble CauchyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble CauchyDistribution::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_dff5885c2c873297]);
        }

        jdouble CauchyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble CauchyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble CauchyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble CauchyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble CauchyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble CauchyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean CauchyDistribution::isSupportConnected() const
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
        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data);
        static PyGetSetDef t_CauchyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_CauchyDistribution, median),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_CauchyDistribution, scale),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CauchyDistribution__methods_[] = {
          DECLARE_METHOD(t_CauchyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CauchyDistribution)[] = {
          { Py_tp_methods, t_CauchyDistribution__methods_ },
          { Py_tp_init, (void *) t_CauchyDistribution_init_ },
          { Py_tp_getset, t_CauchyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CauchyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(CauchyDistribution, t_CauchyDistribution, CauchyDistribution);

        void t_CauchyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(CauchyDistribution), &PY_TYPE_DEF(CauchyDistribution), module, "CauchyDistribution", 0);
        }

        void t_CauchyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "class_", make_descriptor(CauchyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "wrapfn_", make_descriptor(t_CauchyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CauchyDistribution::initializeClass, 1)))
            return NULL;
          return t_CauchyDistribution::wrap_Object(CauchyDistribution(((t_CauchyDistribution *) arg)->object.this$));
        }
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CauchyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CauchyDistribution object((jobject) NULL);

              INT_CALL(object = CauchyDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              CauchyDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CauchyDistribution(a0, a1));
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

        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data)
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
#include "org/orekit/models/earth/troposphere/NiellMappingFunctionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *NiellMappingFunctionModel::class$ = NULL;
          jmethodID *NiellMappingFunctionModel::mids$ = NULL;
          bool NiellMappingFunctionModel::live$ = false;

          jclass NiellMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/NiellMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_e93d77ad761aa1f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_7ef12dc9276409e6] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6f55c0ac27817ed2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NiellMappingFunctionModel::NiellMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          NiellMappingFunctionModel::NiellMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e93d77ad761aa1f2, a0.this$)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > NiellMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7ef12dc9276409e6], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > NiellMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6f55c0ac27817ed2], a0, a1.this$, a2.this$));
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
          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_NiellMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_NiellMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NiellMappingFunctionModel)[] = {
            { Py_tp_methods, t_NiellMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_NiellMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NiellMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NiellMappingFunctionModel, t_NiellMappingFunctionModel, NiellMappingFunctionModel);

          void t_NiellMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NiellMappingFunctionModel), &PY_TYPE_DEF(NiellMappingFunctionModel), module, "NiellMappingFunctionModel", 0);
          }

          void t_NiellMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "class_", make_descriptor(NiellMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "wrapfn_", make_descriptor(t_NiellMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NiellMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_NiellMappingFunctionModel::wrap_Object(NiellMappingFunctionModel(((t_NiellMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NiellMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                NiellMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = NiellMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                NiellMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = NiellMappingFunctionModel(a0));
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

          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/IllinoisSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *IllinoisSolver::class$ = NULL;
        jmethodID *IllinoisSolver::mids$ = NULL;
        bool IllinoisSolver::live$ = false;

        jclass IllinoisSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/IllinoisSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IllinoisSolver::IllinoisSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}
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
        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args);
        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data);
        static PyGetSetDef t_IllinoisSolver__fields_[] = {
          DECLARE_GET_FIELD(t_IllinoisSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IllinoisSolver__methods_[] = {
          DECLARE_METHOD(t_IllinoisSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IllinoisSolver)[] = {
          { Py_tp_methods, t_IllinoisSolver__methods_ },
          { Py_tp_init, (void *) t_IllinoisSolver_init_ },
          { Py_tp_getset, t_IllinoisSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IllinoisSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(IllinoisSolver, t_IllinoisSolver, IllinoisSolver);
        PyObject *t_IllinoisSolver::wrap_Object(const IllinoisSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IllinoisSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IllinoisSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(IllinoisSolver), &PY_TYPE_DEF(IllinoisSolver), module, "IllinoisSolver", 0);
        }

        void t_IllinoisSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "class_", make_descriptor(IllinoisSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "wrapfn_", make_descriptor(t_IllinoisSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IllinoisSolver::initializeClass, 1)))
            return NULL;
          return t_IllinoisSolver::wrap_Object(IllinoisSolver(((t_IllinoisSolver *) arg)->object.this$));
        }
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IllinoisSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              IllinoisSolver object((jobject) NULL);

              INT_CALL(object = IllinoisSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = IllinoisSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IllinoisSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IllinoisSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationHeader::class$ = NULL;
          jmethodID *RinexNavigationHeader::mids$ = NULL;
          bool RinexNavigationHeader::live$ = false;

          jclass RinexNavigationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addTimeSystemCorrections_ccf19589f253278b] = env->getMethodID(cls, "addTimeSystemCorrections", "(Lorg/orekit/files/rinex/navigation/TimeSystemCorrection;)V");
              mids$[mid_getIonosphericCorrectionType_95784a81ac0ef776] = env->getMethodID(cls, "getIonosphericCorrectionType", "()Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_getMergedFiles_570ce0828f81a2c1] = env->getMethodID(cls, "getMergedFiles", "()I");
              mids$[mid_getNumberOfLeapSeconds_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getTimeSystemCorrections_2afa36052df4765d] = env->getMethodID(cls, "getTimeSystemCorrections", "()Ljava/util/List;");
              mids$[mid_setIonosphericCorrectionType_1ae8e31df7b1189a] = env->getMethodID(cls, "setIonosphericCorrectionType", "(Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;)V");
              mids$[mid_setMergedFiles_99803b0791f320ff] = env->getMethodID(cls, "setMergedFiles", "(I)V");
              mids$[mid_setNumberOfLeapSeconds_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationHeader::RinexNavigationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void RinexNavigationHeader::addTimeSystemCorrections(const ::org::orekit::files::rinex::navigation::TimeSystemCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addTimeSystemCorrections_ccf19589f253278b], a0.this$);
          }

          ::org::orekit::files::rinex::navigation::IonosphericCorrectionType RinexNavigationHeader::getIonosphericCorrectionType() const
          {
            return ::org::orekit::files::rinex::navigation::IonosphericCorrectionType(env->callObjectMethod(this$, mids$[mid_getIonosphericCorrectionType_95784a81ac0ef776]));
          }

          jint RinexNavigationHeader::getMergedFiles() const
          {
            return env->callIntMethod(this$, mids$[mid_getMergedFiles_570ce0828f81a2c1]);
          }

          jint RinexNavigationHeader::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_570ce0828f81a2c1]);
          }

          ::java::util::List RinexNavigationHeader::getTimeSystemCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrections_2afa36052df4765d]));
          }

          void RinexNavigationHeader::setIonosphericCorrectionType(const ::org::orekit::files::rinex::navigation::IonosphericCorrectionType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setIonosphericCorrectionType_1ae8e31df7b1189a], a0.this$);
          }

          void RinexNavigationHeader::setMergedFiles(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMergedFiles_99803b0791f320ff], a0);
          }

          void RinexNavigationHeader::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_99803b0791f320ff], a0);
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
          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data);
          static PyGetSetDef t_RinexNavigationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, ionosphericCorrectionType),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, mergedFiles),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, numberOfLeapSeconds),
            DECLARE_GET_FIELD(t_RinexNavigationHeader, timeSystemCorrections),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, addTimeSystemCorrections, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, getIonosphericCorrectionType, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getMergedFiles, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getTimeSystemCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, setIonosphericCorrectionType, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setMergedFiles, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setNumberOfLeapSeconds, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationHeader)[] = {
            { Py_tp_methods, t_RinexNavigationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationHeader_init_ },
            { Py_tp_getset, t_RinexNavigationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexNavigationHeader, t_RinexNavigationHeader, RinexNavigationHeader);

          void t_RinexNavigationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationHeader), &PY_TYPE_DEF(RinexNavigationHeader), module, "RinexNavigationHeader", 0);
          }

          void t_RinexNavigationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "class_", make_descriptor(RinexNavigationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "wrapfn_", make_descriptor(t_RinexNavigationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationHeader::wrap_Object(RinexNavigationHeader(((t_RinexNavigationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigationHeader object((jobject) NULL);

            INT_CALL(object = RinexNavigationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::TimeSystemCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::TimeSystemCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addTimeSystemCorrections(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTimeSystemCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType result((jobject) NULL);
            OBJ_CALL(result = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(result);
          }

          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMergedFiles());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(TimeSystemCorrection));
          }

          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::parameters_))
            {
              OBJ_CALL(self->object.setIonosphericCorrectionType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setIonosphericCorrectionType", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMergedFiles(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMergedFiles", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
            OBJ_CALL(value = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(value);
          }
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &value))
              {
                INT_CALL(self->object.setIonosphericCorrectionType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ionosphericCorrectionType", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMergedFiles());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMergedFiles(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mergedFiles", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/ValsecchiEncounterFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *ValsecchiEncounterFrame::class$ = NULL;
        jmethodID *ValsecchiEncounterFrame::mids$ = NULL;
        bool ValsecchiEncounterFrame::live$ = false;

        jclass ValsecchiEncounterFrame::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/ValsecchiEncounterFrame");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb3f88d6e1120c95] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_0cd9ca2f4cf79e0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_d59b144da7c7851f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_2ba248090f65b129] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_bb3f88d6e1120c95, a0.this$)) {}

        ValsecchiEncounterFrame::ValsecchiEncounterFrame(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_0cd9ca2f4cf79e0a, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ValsecchiEncounterFrame::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_202e7b3b5ed01afc], a0.this$));
        }

        ::java::lang::String ValsecchiEncounterFrame::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_d59b144da7c7851f], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation ValsecchiEncounterFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_2ba248090f65b129], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args);
        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data);
        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data);
        static PyGetSetDef t_ValsecchiEncounterFrame__fields_[] = {
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_ValsecchiEncounterFrame, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ValsecchiEncounterFrame__methods_[] = {
          DECLARE_METHOD(t_ValsecchiEncounterFrame, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, getName, METH_VARARGS),
          DECLARE_METHOD(t_ValsecchiEncounterFrame, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ValsecchiEncounterFrame)[] = {
          { Py_tp_methods, t_ValsecchiEncounterFrame__methods_ },
          { Py_tp_init, (void *) t_ValsecchiEncounterFrame_init_ },
          { Py_tp_getset, t_ValsecchiEncounterFrame__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ValsecchiEncounterFrame)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(ValsecchiEncounterFrame, t_ValsecchiEncounterFrame, ValsecchiEncounterFrame);

        void t_ValsecchiEncounterFrame::install(PyObject *module)
        {
          installType(&PY_TYPE(ValsecchiEncounterFrame), &PY_TYPE_DEF(ValsecchiEncounterFrame), module, "ValsecchiEncounterFrame", 0);
        }

        void t_ValsecchiEncounterFrame::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "class_", make_descriptor(ValsecchiEncounterFrame::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "wrapfn_", make_descriptor(t_ValsecchiEncounterFrame::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ValsecchiEncounterFrame), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ValsecchiEncounterFrame_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ValsecchiEncounterFrame::initializeClass, 1)))
            return NULL;
          return t_ValsecchiEncounterFrame::wrap_Object(ValsecchiEncounterFrame(((t_ValsecchiEncounterFrame *) arg)->object.this$));
        }
        static PyObject *t_ValsecchiEncounterFrame_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ValsecchiEncounterFrame::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ValsecchiEncounterFrame_init_(t_ValsecchiEncounterFrame *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ValsecchiEncounterFrame object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = ValsecchiEncounterFrame(a0));
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

        static PyObject *t_ValsecchiEncounterFrame_getAxisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_getName(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_rotationFromInertial(t_ValsecchiEncounterFrame *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
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
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ValsecchiEncounterFrame), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__axisNormalToCollisionPlane(t_ValsecchiEncounterFrame *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ValsecchiEncounterFrame_get__name(t_ValsecchiEncounterFrame *self, void *data)
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
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservedMeasurement::class$ = NULL;
        jmethodID *ObservedMeasurement::mids$ = NULL;
        bool ObservedMeasurement::live$ = false;

        jclass ObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_baf3397e6fffc21d] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_27ef5cc84ad0852b] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_60c7040667a7dc5c] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_11b109bd155ca898] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_2afa36052df4765d] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getSatellites_2afa36052df4765d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_b108b35ef48e27bd] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_bd04c9335fb9e4cf] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ObservedMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_baf3397e6fffc21d], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement ObservedMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_27ef5cc84ad0852b], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase ObservedMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_e32883476b3d9b22], a0, a1, a2.this$));
        }

        JArray< jdouble > ObservedMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_60c7040667a7dc5c]));
        }

        jint ObservedMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        ::java::lang::String ObservedMeasurement::getMeasurementType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeasurementType_11b109bd155ca898]));
        }

        ::java::util::List ObservedMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_2afa36052df4765d]));
        }

        ::java::util::List ObservedMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_2afa36052df4765d]));
        }

        JArray< jdouble > ObservedMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c]));
        }

        jboolean ObservedMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_b108b35ef48e27bd]);
        }

        void ObservedMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_bd04c9335fb9e4cf], a0);
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
        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data);
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data);
        static PyGetSetDef t_ObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ObservedMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_ObservedMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_ObservedMeasurement, enabled),
          DECLARE_GET_FIELD(t_ObservedMeasurement, measurementType),
          DECLARE_GET_FIELD(t_ObservedMeasurement, modifiers),
          DECLARE_GET_FIELD(t_ObservedMeasurement, satellites),
          DECLARE_GET_FIELD(t_ObservedMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_ObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_ObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_ObservedMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getMeasurementType, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, setEnabled, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservedMeasurement)[] = {
          { Py_tp_methods, t_ObservedMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::ComparableMeasurement),
          NULL
        };

        DEFINE_TYPE(ObservedMeasurement, t_ObservedMeasurement, ObservedMeasurement);
        PyObject *t_ObservedMeasurement::wrap_Object(const ObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservedMeasurement), &PY_TYPE_DEF(ObservedMeasurement), module, "ObservedMeasurement", 0);
        }

        void t_ObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "class_", make_descriptor(ObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "wrapfn_", make_descriptor(t_ObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_ObservedMeasurement::wrap_Object(ObservedMeasurement(((t_ObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
          {
            OBJ_CALL(self->object.addModifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementType());
          return j2p(result);
        }

        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementType());
          return j2p(value);
        }

        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckTransformer::mids$ = NULL;
        bool AdamsNordsieckTransformer::live$ = false;

        jclass AdamsNordsieckTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_112b827632c230ff] = env->getStaticMethodID(cls, "getInstance", "(I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckTransformer;");
            mids$[mid_initializeHighOrderDerivatives_05286ba32ad1612e] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_98f76adeb9727d30] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_a5e518d6a6618759] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckTransformer AdamsNordsieckTransformer::getInstance(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_112b827632c230ff], a0));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::initializeHighOrderDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_05286ba32ad1612e], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_98f76adeb9727d30], a0.this$));
        }

        void AdamsNordsieckTransformer::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_a5e518d6a6618759], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args);

        static PyMethodDef t_AdamsNordsieckTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, getInstance, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckTransformer, t_AdamsNordsieckTransformer, AdamsNordsieckTransformer);

        void t_AdamsNordsieckTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckTransformer), &PY_TYPE_DEF(AdamsNordsieckTransformer), module, "AdamsNordsieckTransformer", 0);
        }

        void t_AdamsNordsieckTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "class_", make_descriptor(AdamsNordsieckTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckTransformer::wrap_Object(AdamsNordsieckTransformer(((t_AdamsNordsieckTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          AdamsNordsieckTransformer result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckTransformer::getInstance(a0));
            return t_AdamsNordsieckTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArgs(args, "D[D[[D[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter$Iterator::class$ = NULL;
      jmethodID *MultidimensionalCounter$Iterator::mids$ = NULL;
      bool MultidimensionalCounter$Iterator::live$ = false;

      jclass MultidimensionalCounter$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCount_570ce0828f81a2c1] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getCount_2235cd056f5a882b] = env->getMethodID(cls, "getCount", "(I)I");
          mids$[mid_getCounts_d0635cea09dc178c] = env->getMethodID(cls, "getCounts", "()[I");
          mids$[mid_hasNext_b108b35ef48e27bd] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_next_3bcb553ed7fb0daa] = env->getMethodID(cls, "next", "()Ljava/lang/Integer;");
          mids$[mid_remove_0fa09c18fee449d5] = env->getMethodID(cls, "remove", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint MultidimensionalCounter$Iterator::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_570ce0828f81a2c1]);
      }

      jint MultidimensionalCounter$Iterator::getCount(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_2235cd056f5a882b], a0);
      }

      JArray< jint > MultidimensionalCounter$Iterator::getCounts() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_d0635cea09dc178c]));
      }

      jboolean MultidimensionalCounter$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_b108b35ef48e27bd]);
      }

      ::java::lang::Integer MultidimensionalCounter$Iterator::next() const
      {
        return ::java::lang::Integer(env->callObjectMethod(this$, mids$[mid_next_3bcb553ed7fb0daa]));
      }

      void MultidimensionalCounter$Iterator::remove() const
      {
        env->callVoidMethod(this$, mids$[mid_remove_0fa09c18fee449d5]);
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
      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, count),
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, counts),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter$Iterator__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCount, METH_VARARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCounts, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, next, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, remove, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter$Iterator)[] = {
        { Py_tp_methods, t_MultidimensionalCounter$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultidimensionalCounter$Iterator__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_iterator_next< ::java::util::t_Iterator,::java::lang::t_Integer >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter$Iterator, t_MultidimensionalCounter$Iterator, MultidimensionalCounter$Iterator);

      void t_MultidimensionalCounter$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter$Iterator), &PY_TYPE_DEF(MultidimensionalCounter$Iterator), module, "MultidimensionalCounter$Iterator", 0);
      }

      void t_MultidimensionalCounter$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "class_", make_descriptor(MultidimensionalCounter$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "wrapfn_", make_descriptor(t_MultidimensionalCounter$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter$Iterator::wrap_Object(MultidimensionalCounter$Iterator(((t_MultidimensionalCounter$Iterator *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.getCount());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getCount(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", args);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCounts());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self)
      {
        ::java::lang::Integer result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return ::java::lang::t_Integer::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self)
      {
        OBJ_CALL(self->object.remove());
        Py_RETURN_NONE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCounts());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractFrames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/Predefined.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractFrames::class$ = NULL;
      jmethodID *AbstractFrames::mids$ = NULL;
      bool AbstractFrames::live$ = false;

      jclass AbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_404846c6e43ec406] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_buildUncachedITRF_f52b182126778ef0] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_0567c110431f823b] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_5337b4e40b3fd7b7] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEcliptic_18c303577f427d2c] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_a045cc44324e9b37] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_b86f9f61d97a7244] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_0567c110431f823b] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_b86f9f61d97a7244] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_0567c110431f823b] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_ebe8ec05e13e16d0] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_0567c110431f823b] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_ab9f051c99cfdab5] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_0567c110431f823b] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_5337b4e40b3fd7b7] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_ab9f051c99cfdab5] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_0567c110431f823b] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_0567c110431f823b] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_5337b4e40b3fd7b7] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTimeScales_f0675560047d99cd] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFrames::AbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_404846c6e43ec406, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Frame AbstractFrames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_f52b182126778ef0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_5337b4e40b3fd7b7]));
      }

      ::org::orekit::frames::Frame AbstractFrames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_18c303577f427d2c], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_a045cc44324e9b37], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::Frame AbstractFrames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF AbstractFrames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_ebe8ec05e13e16d0], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_ab9f051c99cfdab5], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_5337b4e40b3fd7b7]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_ab9f051c99cfdab5], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_5337b4e40b3fd7b7]));
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
      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data);
      static PyGetSetDef t_AbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFrames, eME2000),
        DECLARE_GET_FIELD(t_AbstractFrames, gCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, iCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, tEME),
        DECLARE_GET_FIELD(t_AbstractFrames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFrames__methods_[] = {
        DECLARE_METHOD(t_AbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getEcliptic, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getFrame, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getVeis1950, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFrames)[] = {
        { Py_tp_methods, t_AbstractFrames__methods_ },
        { Py_tp_init, (void *) t_AbstractFrames_init_ },
        { Py_tp_getset, t_AbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFrames, t_AbstractFrames, AbstractFrames);

      void t_AbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFrames), &PY_TYPE_DEF(AbstractFrames), module, "AbstractFrames", 0);
      }

      void t_AbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "class_", make_descriptor(AbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "wrapfn_", make_descriptor(t_AbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFrames::initializeClass, 1)))
          return NULL;
        return t_AbstractFrames::wrap_Object(AbstractFrames(((t_AbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        AbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractFrames(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/AbstractConvergenceChecker.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *AbstractConvergenceChecker::class$ = NULL;
      jmethodID *AbstractConvergenceChecker::mids$ = NULL;
      bool AbstractConvergenceChecker::live$ = false;

      jclass AbstractConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/AbstractConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_converged_7c442e0e70a8e8da] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");
          mids$[mid_getAbsoluteThreshold_dff5885c2c873297] = env->getMethodID(cls, "getAbsoluteThreshold", "()D");
          mids$[mid_getRelativeThreshold_dff5885c2c873297] = env->getMethodID(cls, "getRelativeThreshold", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractConvergenceChecker::AbstractConvergenceChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

      jboolean AbstractConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_7c442e0e70a8e8da], a0, a1.this$, a2.this$);
      }

      jdouble AbstractConvergenceChecker::getAbsoluteThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsoluteThreshold_dff5885c2c873297]);
      }

      jdouble AbstractConvergenceChecker::getRelativeThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRelativeThreshold_dff5885c2c873297]);
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
      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args);
      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args);
      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data);
      static PyGetSetDef t_AbstractConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, absoluteThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, relativeThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_AbstractConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, converged, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getAbsoluteThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getRelativeThreshold, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractConvergenceChecker)[] = {
        { Py_tp_methods, t_AbstractConvergenceChecker__methods_ },
        { Py_tp_init, (void *) t_AbstractConvergenceChecker_init_ },
        { Py_tp_getset, t_AbstractConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractConvergenceChecker, t_AbstractConvergenceChecker, AbstractConvergenceChecker);
      PyObject *t_AbstractConvergenceChecker::wrap_Object(const AbstractConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractConvergenceChecker), &PY_TYPE_DEF(AbstractConvergenceChecker), module, "AbstractConvergenceChecker", 0);
      }

      void t_AbstractConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "class_", make_descriptor(AbstractConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "wrapfn_", make_descriptor(t_AbstractConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_AbstractConvergenceChecker::wrap_Object(AbstractConvergenceChecker(((t_AbstractConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        AbstractConvergenceChecker object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = AbstractConvergenceChecker(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }

      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) result);
      }
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Hyperplane::class$ = NULL;
        jmethodID *Hyperplane::mids$ = NULL;
        bool Hyperplane::live$ = false;

        jclass Hyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Hyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_a9ae8c67d757c80a] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_emptyHyperplane_6e34449919366687] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getOffset_07bb97c2794cf6b1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
            mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_project_c48805c2dda937c6] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_sameOrientationAs_5bc340c02d9ac484] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_wholeHyperplane_6e34449919366687] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_wholeSpace_b72f8ac992e26582] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Hyperplane Hyperplane::copySelf() const
        {
          return Hyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_a9ae8c67d757c80a]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::emptyHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_6e34449919366687]));
        }

        jdouble Hyperplane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_07bb97c2794cf6b1], a0.this$);
        }

        jdouble Hyperplane::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::Point Hyperplane::project(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_c48805c2dda937c6], a0.this$));
        }

        jboolean Hyperplane::sameOrientationAs(const Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_5bc340c02d9ac484], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::wholeHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_6e34449919366687]));
        }

        ::org::hipparchus::geometry::partitioning::Region Hyperplane::wholeSpace() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_wholeSpace_b72f8ac992e26582]));
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
        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args);
        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self);
        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self);
        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self);
        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data);
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data);
        static PyGetSetDef t_Hyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_Hyperplane, tolerance),
          DECLARE_GET_FIELD(t_Hyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Hyperplane__methods_[] = {
          DECLARE_METHOD(t_Hyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_Hyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, emptyHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, getOffset, METH_O),
          DECLARE_METHOD(t_Hyperplane, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, project, METH_O),
          DECLARE_METHOD(t_Hyperplane, sameOrientationAs, METH_O),
          DECLARE_METHOD(t_Hyperplane, wholeHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, wholeSpace, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Hyperplane)[] = {
          { Py_tp_methods, t_Hyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Hyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Hyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Hyperplane, t_Hyperplane, Hyperplane);
        PyObject *t_Hyperplane::wrap_Object(const Hyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Hyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Hyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(Hyperplane), &PY_TYPE_DEF(Hyperplane), module, "Hyperplane", 0);
        }

        void t_Hyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "class_", make_descriptor(Hyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "wrapfn_", make_descriptor(t_Hyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Hyperplane::initializeClass, 1)))
            return NULL;
          return t_Hyperplane::wrap_Object(Hyperplane(((t_Hyperplane *) arg)->object.this$));
        }
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Hyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self)
        {
          Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.emptyHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.getOffset(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.project(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "project", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg)
        {
          Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Hyperplane::initializeClass, &a0, &p0, t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.sameOrientationAs(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeSpace());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *PythonRangeUnitsConverter::class$ = NULL;
            jmethodID *PythonRangeUnitsConverter::mids$ = NULL;
            bool PythonRangeUnitsConverter::live$ = false;

            jclass PythonRangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_metersToRu_19583340ae9202d1] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_ruToMeters_19583340ae9202d1] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonRangeUnitsConverter::PythonRangeUnitsConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonRangeUnitsConverter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonRangeUnitsConverter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonRangeUnitsConverter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          namespace tdm {
            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self);
            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args);
            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data);
            static PyGetSetDef t_PythonRangeUnitsConverter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonRangeUnitsConverter, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonRangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_PythonRangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonRangeUnitsConverter)[] = {
              { Py_tp_methods, t_PythonRangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) t_PythonRangeUnitsConverter_init_ },
              { Py_tp_getset, t_PythonRangeUnitsConverter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonRangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonRangeUnitsConverter, t_PythonRangeUnitsConverter, PythonRangeUnitsConverter);

            void t_PythonRangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonRangeUnitsConverter), &PY_TYPE_DEF(PythonRangeUnitsConverter), module, "PythonRangeUnitsConverter", 1);
            }

            void t_PythonRangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "class_", make_descriptor(PythonRangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "wrapfn_", make_descriptor(t_PythonRangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonRangeUnitsConverter::initializeClass);
              JNINativeMethod methods[] = {
                { "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_metersToRu0 },
                { "pythonDecRef", "()V", (void *) t_PythonRangeUnitsConverter_pythonDecRef1 },
                { "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_ruToMeters2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonRangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_PythonRangeUnitsConverter::wrap_Object(PythonRangeUnitsConverter(((t_PythonRangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonRangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds)
            {
              PythonRangeUnitsConverter object((jobject) NULL);

              INT_CALL(object = PythonRangeUnitsConverter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args)
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

            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "metersToRu", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("metersToRu", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "ruToMeters", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("ruToMeters", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthIntegrator::mids$ = NULL;
        bool AdamsBashforthIntegrator::live$ = false;

        jclass AdamsBashforthIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f51d9b95a9d2d5a5] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_383392bb694f45fb] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_292da48f87a5db99] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_07f673992ff5deaf] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f51d9b95a9d2d5a5, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_383392bb694f45fb, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsBashforthIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegrator, t_AdamsBashforthIntegrator, AdamsBashforthIntegrator);

        void t_AdamsBashforthIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegrator), &PY_TYPE_DEF(AdamsBashforthIntegrator), module, "AdamsBashforthIntegrator", 0);
        }

        void t_AdamsBashforthIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "class_", make_descriptor(AdamsBashforthIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegrator::wrap_Object(AdamsBashforthIntegrator(((t_AdamsBashforthIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalArgumentException::class$ = NULL;
    jmethodID *IllegalArgumentException::mids$ = NULL;
    bool IllegalArgumentException::live$ = false;

    jclass IllegalArgumentException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalArgumentException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalArgumentException::IllegalArgumentException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalArgumentException__methods_[] = {
      DECLARE_METHOD(t_IllegalArgumentException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalArgumentException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalArgumentException)[] = {
      { Py_tp_methods, t_IllegalArgumentException__methods_ },
      { Py_tp_init, (void *) t_IllegalArgumentException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalArgumentException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalArgumentException, t_IllegalArgumentException, IllegalArgumentException);

    void t_IllegalArgumentException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalArgumentException), &PY_TYPE_DEF(IllegalArgumentException), module, "IllegalArgumentException", 0);
    }

    void t_IllegalArgumentException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "class_", make_descriptor(IllegalArgumentException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "wrapfn_", make_descriptor(t_IllegalArgumentException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalArgumentException::initializeClass, 1)))
        return NULL;
      return t_IllegalArgumentException::wrap_Object(IllegalArgumentException(((t_IllegalArgumentException *) arg)->object.this$));
    }
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalArgumentException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalArgumentException object((jobject) NULL);

          INT_CALL(object = IllegalArgumentException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalArgumentException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceType::class$ = NULL;
              jmethodID *AttitudeCovarianceType::mids$ = NULL;
              bool AttitudeCovarianceType::live$ = false;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_GYROBIAS = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_GYROBIAS = NULL;

              jclass AttitudeCovarianceType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_2afa36052df4765d] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_valueOf_b71c0f666c63f1af] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_values_12aa719920ac3b3c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeCovarianceType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_2afa36052df4765d]));
              }

              AttitudeCovarianceType AttitudeCovarianceType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b71c0f666c63f1af], a0.this$));
              }

              JArray< AttitudeCovarianceType > AttitudeCovarianceType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_12aa719920ac3b3c]));
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
            namespace acm {
              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self);
              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data);
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, units),
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceType__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceType)[] = {
                { Py_tp_methods, t_AttitudeCovarianceType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceType, t_AttitudeCovarianceType, AttitudeCovarianceType);
              PyObject *t_AttitudeCovarianceType::wrap_Object(const AttitudeCovarianceType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceType), &PY_TYPE_DEF(AttitudeCovarianceType), module, "AttitudeCovarianceType", 0);
              }

              void t_AttitudeCovarianceType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "class_", make_descriptor(AttitudeCovarianceType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "wrapfn_", make_descriptor(t_AttitudeCovarianceType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_GYROBIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_GYROBIAS)));
              }

              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceType::wrap_Object(AttitudeCovarianceType(((t_AttitudeCovarianceType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::valueOf(a0));
                  return t_AttitudeCovarianceType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceType::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
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
#include "org/orekit/estimation/measurements/AbstractMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AbstractMeasurement::class$ = NULL;
        jmethodID *AbstractMeasurement::mids$ = NULL;
        bool AbstractMeasurement::live$ = false;

        jclass AbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_baf3397e6fffc21d] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_27ef5cc84ad0852b] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_60c7040667a7dc5c] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getCoordinates_d3c60b51295c1a91] = env->getStaticMethodID(cls, "getCoordinates", "(Lorg/orekit/propagation/SpacecraftState;II)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getModifiers_2afa36052df4765d] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_60c7040667a7dc5c] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_2afa36052df4765d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_b108b35ef48e27bd] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_bd04c9335fb9e4cf] = env->getMethodID(cls, "setEnabled", "(Z)V");
            mids$[mid_signalTimeOfFlight_b8a7d6bc618d5fd6] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_signalTimeOfFlight_1fa9729545cf47a9] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_addParameterDriver_01a5c4b8230d6f04] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_baf3397e6fffc21d], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement AbstractMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_27ef5cc84ad0852b], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase AbstractMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_e32883476b3d9b22], a0, a1, a2.this$));
        }

        JArray< jdouble > AbstractMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_60c7040667a7dc5c]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates AbstractMeasurement::getCoordinates(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getCoordinates_d3c60b51295c1a91], a0.this$, a1, a2));
        }

        ::org::orekit::time::AbsoluteDate AbstractMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jint AbstractMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        ::java::util::List AbstractMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_2afa36052df4765d]));
        }

        JArray< jdouble > AbstractMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_60c7040667a7dc5c]));
        }

        ::java::util::List AbstractMeasurement::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        ::java::util::List AbstractMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_2afa36052df4765d]));
        }

        JArray< jdouble > AbstractMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_60c7040667a7dc5c]));
        }

        jboolean AbstractMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_b108b35ef48e27bd]);
        }

        void AbstractMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_bd04c9335fb9e4cf], a0);
        }

        jdouble AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_signalTimeOfFlight_b8a7d6bc618d5fd6], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_signalTimeOfFlight_1fa9729545cf47a9], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data);
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data);
        static PyGetSetDef t_AbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_AbstractMeasurement, date),
          DECLARE_GET_FIELD(t_AbstractMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_AbstractMeasurement, enabled),
          DECLARE_GET_FIELD(t_AbstractMeasurement, modifiers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, observedValue),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parametersDrivers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, satellites),
          DECLARE_GET_FIELD(t_AbstractMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_AbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getCoordinates, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, setEnabled, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, signalTimeOfFlight, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurement)[] = {
          { Py_tp_methods, t_AbstractMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMeasurement, t_AbstractMeasurement, AbstractMeasurement);
        PyObject *t_AbstractMeasurement::wrap_Object(const AbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMeasurement), &PY_TYPE_DEF(AbstractMeasurement), module, "AbstractMeasurement", 0);
        }

        void t_AbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "class_", make_descriptor(AbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "wrapfn_", make_descriptor(t_AbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_AbstractMeasurement::wrap_Object(AbstractMeasurement(((t_AbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
          {
            OBJ_CALL(self->object.addModifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          jint a2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kII", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::getCoordinates(a0, a1, a2));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError(type, "getCoordinates", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kkk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "signalTimeOfFlight", args);
          return NULL;
        }
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *MultiplexedMeasurement::class$ = NULL;
        jmethodID *MultiplexedMeasurement::mids$ = NULL;
        bool MultiplexedMeasurement::live$ = false;
        ::java::lang::String *MultiplexedMeasurement::MEASUREMENT_TYPE = NULL;

        jclass MultiplexedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/MultiplexedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_getEstimatedMeasurements_2afa36052df4765d] = env->getMethodID(cls, "getEstimatedMeasurements", "()Ljava/util/List;");
            mids$[mid_getEstimatedMeasurementsWithoutDerivatives_2afa36052df4765d] = env->getMethodID(cls, "getEstimatedMeasurementsWithoutDerivatives", "()Ljava/util/List;");
            mids$[mid_getMeasurements_2afa36052df4765d] = env->getMethodID(cls, "getMeasurements", "()Ljava/util/List;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiplexedMeasurement::MultiplexedMeasurement(const ::java::util::List & a0) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurements_2afa36052df4765d]));
        }

        ::java::util::List MultiplexedMeasurement::getEstimatedMeasurementsWithoutDerivatives() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsWithoutDerivatives_2afa36052df4765d]));
        }

        ::java::util::List MultiplexedMeasurement::getMeasurements() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getMeasurements_2afa36052df4765d]));
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
        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args);
        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data);
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data);
        static PyGetSetDef t_MultiplexedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, estimatedMeasurementsWithoutDerivatives),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, measurements),
          DECLARE_GET_FIELD(t_MultiplexedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiplexedMeasurement__methods_[] = {
          DECLARE_METHOD(t_MultiplexedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiplexedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurements, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getEstimatedMeasurementsWithoutDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_MultiplexedMeasurement, getMeasurements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurement)[] = {
          { Py_tp_methods, t_MultiplexedMeasurement__methods_ },
          { Py_tp_init, (void *) t_MultiplexedMeasurement_init_ },
          { Py_tp_getset, t_MultiplexedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(MultiplexedMeasurement, t_MultiplexedMeasurement, MultiplexedMeasurement);
        PyObject *t_MultiplexedMeasurement::wrap_Object(const MultiplexedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiplexedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiplexedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiplexedMeasurement *self = (t_MultiplexedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiplexedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiplexedMeasurement), &PY_TYPE_DEF(MultiplexedMeasurement), module, "MultiplexedMeasurement", 0);
        }

        void t_MultiplexedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "class_", make_descriptor(MultiplexedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "wrapfn_", make_descriptor(t_MultiplexedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "boxfn_", make_descriptor(boxObject));
          env->getClass(MultiplexedMeasurement::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurement), "MEASUREMENT_TYPE", make_descriptor(j2p(*MultiplexedMeasurement::MEASUREMENT_TYPE)));
        }

        static PyObject *t_MultiplexedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiplexedMeasurement::initializeClass, 1)))
            return NULL;
          return t_MultiplexedMeasurement::wrap_Object(MultiplexedMeasurement(((t_MultiplexedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_MultiplexedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiplexedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiplexedMeasurement_of_(t_MultiplexedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiplexedMeasurement_init_(t_MultiplexedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          MultiplexedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = MultiplexedMeasurement(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(MultiplexedMeasurement);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getEstimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MultiplexedMeasurement_getMeasurements(t_MultiplexedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_MultiplexedMeasurement_get__parameters_(t_MultiplexedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__estimatedMeasurementsWithoutDerivatives(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsWithoutDerivatives());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_MultiplexedMeasurement_get__measurements(t_MultiplexedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurements());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractFieldOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractFieldOrbitInterpolator::mids$ = NULL;
      bool AbstractFieldOrbitInterpolator::live$ = false;

      jclass AbstractFieldOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractFieldOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2ee482a4c6f42d96] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_getOutputInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_30f8babe16e68f5b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldOrbitInterpolator::AbstractFieldOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ee482a4c6f42d96, a0, a1, a2.this$)) {}

      ::org::orekit::frames::Frame AbstractFieldOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::orbits::FieldOrbit AbstractFieldOrbitInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_30f8babe16e68f5b], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self);
      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractFieldOrbitInterpolator, t_AbstractFieldOrbitInterpolator, AbstractFieldOrbitInterpolator);
      PyObject *t_AbstractFieldOrbitInterpolator::wrap_Object(const AbstractFieldOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldOrbitInterpolator), &PY_TYPE_DEF(AbstractFieldOrbitInterpolator), module, "AbstractFieldOrbitInterpolator", 0);
      }

      void t_AbstractFieldOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "class_", make_descriptor(AbstractFieldOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldOrbitInterpolator::wrap_Object(AbstractFieldOrbitInterpolator(((t_AbstractFieldOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractFieldOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractFieldOrbitInterpolator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(AbstractFieldOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/RiddersSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RiddersSolver::class$ = NULL;
        jmethodID *RiddersSolver::mids$ = NULL;
        bool RiddersSolver::live$ = false;

        jclass RiddersSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RiddersSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RiddersSolver::RiddersSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        RiddersSolver::RiddersSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        RiddersSolver::RiddersSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}
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
        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args);
        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data);
        static PyGetSetDef t_RiddersSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RiddersSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RiddersSolver__methods_[] = {
          DECLARE_METHOD(t_RiddersSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RiddersSolver)[] = {
          { Py_tp_methods, t_RiddersSolver__methods_ },
          { Py_tp_init, (void *) t_RiddersSolver_init_ },
          { Py_tp_getset, t_RiddersSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RiddersSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(RiddersSolver, t_RiddersSolver, RiddersSolver);
        PyObject *t_RiddersSolver::wrap_Object(const RiddersSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RiddersSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RiddersSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RiddersSolver), &PY_TYPE_DEF(RiddersSolver), module, "RiddersSolver", 0);
        }

        void t_RiddersSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "class_", make_descriptor(RiddersSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "wrapfn_", make_descriptor(t_RiddersSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RiddersSolver::initializeClass, 1)))
            return NULL;
          return t_RiddersSolver::wrap_Object(RiddersSolver(((t_RiddersSolver *) arg)->object.this$));
        }
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RiddersSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RiddersSolver object((jobject) NULL);

              INT_CALL(object = RiddersSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RiddersSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RiddersSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitInternalError::class$ = NULL;
      jmethodID *OrekitInternalError::mids$ = NULL;
      bool OrekitInternalError::live$ = false;

      jclass OrekitInternalError::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitInternalError");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitInternalError::OrekitInternalError(const ::java::lang::Throwable & a0) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

      ::java::lang::String OrekitInternalError::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitInternalError::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitInternalError::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitInternalError::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable OrekitInternalError::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data);
      static PyGetSetDef t_OrekitInternalError__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitInternalError, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitInternalError, message),
        DECLARE_GET_FIELD(t_OrekitInternalError, parts),
        DECLARE_GET_FIELD(t_OrekitInternalError, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitInternalError__methods_[] = {
        DECLARE_METHOD(t_OrekitInternalError, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitInternalError, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitInternalError)[] = {
        { Py_tp_methods, t_OrekitInternalError__methods_ },
        { Py_tp_init, (void *) t_OrekitInternalError_init_ },
        { Py_tp_getset, t_OrekitInternalError__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitInternalError)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitInternalError, t_OrekitInternalError, OrekitInternalError);

      void t_OrekitInternalError::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitInternalError), &PY_TYPE_DEF(OrekitInternalError), module, "OrekitInternalError", 0);
      }

      void t_OrekitInternalError::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "class_", make_descriptor(OrekitInternalError::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "wrapfn_", make_descriptor(t_OrekitInternalError::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitInternalError::initializeClass, 1)))
          return NULL;
        return t_OrekitInternalError::wrap_Object(OrekitInternalError(((t_OrekitInternalError *) arg)->object.this$));
      }
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitInternalError::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Throwable a0((jobject) NULL);
        OrekitInternalError object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
        {
          INT_CALL(object = OrekitInternalError(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data)
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
#include "org/orekit/errors/OrekitException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitException::class$ = NULL;
      jmethodID *OrekitException::mids$ = NULL;
      bool OrekitException::live$ = false;

      jclass OrekitException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b82e021312358546] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_ff2c638d27c87622] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;Ljava/lang/Throwable;)V");
          mids$[mid_init$_6ecc3fd6067c266c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_unwrap_70dc890dae923211] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/OrekitException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitException::OrekitException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_b82e021312358546, a0.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff2c638d27c87622, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_6ecc3fd6067c266c, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String OrekitException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable OrekitException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
      }

      OrekitException OrekitException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_70dc890dae923211], a0.this$));
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
      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getParts(t_OrekitException *self);
      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self);
      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data);
      static PyGetSetDef t_OrekitException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitException, message),
        DECLARE_GET_FIELD(t_OrekitException, parts),
        DECLARE_GET_FIELD(t_OrekitException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitException__methods_[] = {
        DECLARE_METHOD(t_OrekitException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, getSpecifier, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, unwrap, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitException)[] = {
        { Py_tp_methods, t_OrekitException__methods_ },
        { Py_tp_init, (void *) t_OrekitException_init_ },
        { Py_tp_getset, t_OrekitException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(OrekitException, t_OrekitException, OrekitException);

      void t_OrekitException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitException), &PY_TYPE_DEF(OrekitException), module, "OrekitException", 0);
      }

      void t_OrekitException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "class_", make_descriptor(OrekitException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "wrapfn_", make_descriptor(t_OrekitException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitException::initializeClass, 1)))
          return NULL;
        return t_OrekitException::wrap_Object(OrekitException(((t_OrekitException *) arg)->object.this$));
      }
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = OrekitException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            ::java::lang::Throwable a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::exception::Localizable::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
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
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrekitException(a0, a1, a2));
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

      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitException_getParts(t_OrekitException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
        OrekitException result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitException::unwrap(a0));
          return t_OrekitException::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unwrap", arg);
        return NULL;
      }

      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *EphemerisOcmWriter::class$ = NULL;
              jmethodID *EphemerisOcmWriter::mids$ = NULL;
              bool EphemerisOcmWriter::live$ = false;

              jclass EphemerisOcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0eb4682c434bb56b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_2fe5901b7cb5a492] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOcmWriter::EphemerisOcmWriter(const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a3, const ::org::orekit::files::ccsds::utils::FileFormat & a4, const ::java::lang::String & a5, jdouble a6, jint a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0eb4682c434bb56b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7)) {}

              void EphemerisOcmWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_2fe5901b7cb5a492], a0.this$, a1.this$);
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
              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOcmWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOcmWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOcmWriter)[] = {
                { Py_tp_methods, t_EphemerisOcmWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOcmWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOcmWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOcmWriter, t_EphemerisOcmWriter, EphemerisOcmWriter);

              void t_EphemerisOcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOcmWriter), &PY_TYPE_DEF(EphemerisOcmWriter), module, "EphemerisOcmWriter", 0);
              }

              void t_EphemerisOcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "class_", make_descriptor(EphemerisOcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "wrapfn_", make_descriptor(t_EphemerisOcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOcmWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOcmWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOcmWriter::wrap_Object(EphemerisOcmWriter(((t_EphemerisOcmWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOcmWriter_init_(t_EphemerisOcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a3((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a4((jobject) NULL);
                PyTypeObject **p4;
                ::java::lang::String a5((jobject) NULL);
                jdouble a6;
                jint a7;
                EphemerisOcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkkKsDI", ::org::orekit::files::ccsds::ndm::odm::ocm::OcmWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmWriter::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a5, &a6, &a7))
                {
                  INT_CALL(object = EphemerisOcmWriter(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOcmWriter_write(t_EphemerisOcmWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmData::class$ = NULL;
              jmethodID *OcmData::mids$ = NULL;
              bool OcmData::live$ = false;

              jclass OcmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e317c631be917eae] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;Ljava/util/List;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                  mids$[mid_getCovarianceBlocks_2afa36052df4765d] = env->getMethodID(cls, "getCovarianceBlocks", "()Ljava/util/List;");
                  mids$[mid_getManeuverBlocks_2afa36052df4765d] = env->getMethodID(cls, "getManeuverBlocks", "()Ljava/util/List;");
                  mids$[mid_getOrbitDeterminationBlock_62ee5b6a61d49707] = env->getMethodID(cls, "getOrbitDeterminationBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;");
                  mids$[mid_getPerturbationsBlock_670bc99f50840744] = env->getMethodID(cls, "getPerturbationsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;");
                  mids$[mid_getPhysicBlock_20070d5780bf48ba] = env->getMethodID(cls, "getPhysicBlock", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;");
                  mids$[mid_getTrajectoryBlocks_2afa36052df4765d] = env->getMethodID(cls, "getTrajectoryBlocks", "()Ljava/util/List;");
                  mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmData::OcmData(const ::java::util::List & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a1, const ::java::util::List & a2, const ::java::util::List & a3, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a4, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a5, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e317c631be917eae, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              ::java::util::List OcmData::getCovarianceBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceBlocks_2afa36052df4765d]));
              }

              ::java::util::List OcmData::getManeuverBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuverBlocks_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination OcmData::getOrbitDeterminationBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination(env->callObjectMethod(this$, mids$[mid_getOrbitDeterminationBlock_62ee5b6a61d49707]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations OcmData::getPerturbationsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations(env->callObjectMethod(this$, mids$[mid_getPerturbationsBlock_670bc99f50840744]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties OcmData::getPhysicBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties(env->callObjectMethod(this$, mids$[mid_getPhysicBlock_20070d5780bf48ba]));
              }

              ::java::util::List OcmData::getTrajectoryBlocks() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTrajectoryBlocks_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OcmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483]));
              }

              void OcmData::validate(jdouble a0) const
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
            namespace ocm {
              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self);
              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self);
              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self);
              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self);
              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg);
              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data);
              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data);
              static PyGetSetDef t_OcmData__fields_[] = {
                DECLARE_GET_FIELD(t_OcmData, covarianceBlocks),
                DECLARE_GET_FIELD(t_OcmData, maneuverBlocks),
                DECLARE_GET_FIELD(t_OcmData, orbitDeterminationBlock),
                DECLARE_GET_FIELD(t_OcmData, perturbationsBlock),
                DECLARE_GET_FIELD(t_OcmData, physicBlock),
                DECLARE_GET_FIELD(t_OcmData, trajectoryBlocks),
                DECLARE_GET_FIELD(t_OcmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmData__methods_[] = {
                DECLARE_METHOD(t_OcmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmData, getCovarianceBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getManeuverBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getOrbitDeterminationBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPerturbationsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getPhysicBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getTrajectoryBlocks, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OcmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmData)[] = {
                { Py_tp_methods, t_OcmData__methods_ },
                { Py_tp_init, (void *) t_OcmData_init_ },
                { Py_tp_getset, t_OcmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmData, t_OcmData, OcmData);

              void t_OcmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmData), &PY_TYPE_DEF(OcmData), module, "OcmData", 0);
              }

              void t_OcmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "class_", make_descriptor(OcmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "wrapfn_", make_descriptor(t_OcmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmData::initializeClass, 1)))
                  return NULL;
                return t_OcmData::wrap_Object(OcmData(((t_OcmData *) arg)->object.this$));
              }
              static PyObject *t_OcmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmData_init_(t_OcmData *self, PyObject *args, PyObject *kwds)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a6((jobject) NULL);
                OcmData object((jobject) NULL);

                if (!parseArgs(args, "KkKKkkk", ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::java::util::t_List::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = OcmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmData_getCovarianceBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovarianceHistory));
              }

              static PyObject *t_OcmData_getManeuverBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuverHistory));
              }

              static PyObject *t_OcmData_getOrbitDeterminationBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPerturbationsBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations result((jobject) NULL);
                OBJ_CALL(result = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(result);
              }

              static PyObject *t_OcmData_getPhysicBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(result);
              }

              static PyObject *t_OcmData_getTrajectoryBlocks(t_OcmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmData_getUserDefinedBlock(t_OcmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OcmData_validate(t_OcmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_OcmData_get__covarianceBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__maneuverBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuverBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__orbitDeterminationBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitDeterminationBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitDetermination::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__perturbationsBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations value((jobject) NULL);
                OBJ_CALL(value = self->object.getPerturbationsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Perturbations::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__physicBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhysicBlock());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitPhysicalProperties::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__trajectoryBlocks(t_OcmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getTrajectoryBlocks());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmData_get__userDefinedBlock(t_OcmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/hipparchus/analysis/function/Ceil.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ceil::class$ = NULL;
        jmethodID *Ceil::mids$ = NULL;
        bool Ceil::live$ = false;

        jclass Ceil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ceil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ceil::Ceil() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Ceil::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Ceil::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args);

        static PyMethodDef t_Ceil__methods_[] = {
          DECLARE_METHOD(t_Ceil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ceil, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ceil)[] = {
          { Py_tp_methods, t_Ceil__methods_ },
          { Py_tp_init, (void *) t_Ceil_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ceil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ceil, t_Ceil, Ceil);

        void t_Ceil::install(PyObject *module)
        {
          installType(&PY_TYPE(Ceil), &PY_TYPE_DEF(Ceil), module, "Ceil", 0);
        }

        void t_Ceil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "class_", make_descriptor(Ceil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "wrapfn_", make_descriptor(t_Ceil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ceil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ceil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ceil::initializeClass, 1)))
            return NULL;
          return t_Ceil::wrap_Object(Ceil(((t_Ceil *) arg)->object.this$));
        }
        static PyObject *t_Ceil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ceil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ceil_init_(t_Ceil *self, PyObject *args, PyObject *kwds)
        {
          Ceil object((jobject) NULL);

          INT_CALL(object = Ceil());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ceil_value(t_Ceil *self, PyObject *args)
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
#include "org/hipparchus/analysis/function/Power.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Power::class$ = NULL;
        jmethodID *Power::mids$ = NULL;
        bool Power::live$ = false;

        jclass Power::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Power");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Power::Power(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble Power::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Power::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Power_value(t_Power *self, PyObject *args);

        static PyMethodDef t_Power__methods_[] = {
          DECLARE_METHOD(t_Power, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Power)[] = {
          { Py_tp_methods, t_Power__methods_ },
          { Py_tp_init, (void *) t_Power_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Power)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Power, t_Power, Power);

        void t_Power::install(PyObject *module)
        {
          installType(&PY_TYPE(Power), &PY_TYPE_DEF(Power), module, "Power", 0);
        }

        void t_Power::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "class_", make_descriptor(Power::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "wrapfn_", make_descriptor(t_Power::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Power::initializeClass, 1)))
            return NULL;
          return t_Power::wrap_Object(Power(((t_Power *) arg)->object.this$));
        }
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Power::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Power object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Power(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Power_value(t_Power *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *CorrectionApplied::class$ = NULL;
            jmethodID *CorrectionApplied::mids$ = NULL;
            bool CorrectionApplied::live$ = false;
            CorrectionApplied *CorrectionApplied::NO = NULL;
            CorrectionApplied *CorrectionApplied::YES = NULL;

            jclass CorrectionApplied::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/CorrectionApplied");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_fb8b722d9e09feab] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_values_9ddabfb61ea06582] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new CorrectionApplied(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                YES = new CorrectionApplied(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CorrectionApplied CorrectionApplied::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CorrectionApplied(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fb8b722d9e09feab], a0.this$));
            }

            JArray< CorrectionApplied > CorrectionApplied::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CorrectionApplied >(env->callStaticObjectMethod(cls, mids$[mid_values_9ddabfb61ea06582]));
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
          namespace tdm {
            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args);
            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CorrectionApplied_values(PyTypeObject *type);
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data);
            static PyGetSetDef t_CorrectionApplied__fields_[] = {
              DECLARE_GET_FIELD(t_CorrectionApplied, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CorrectionApplied__methods_[] = {
              DECLARE_METHOD(t_CorrectionApplied, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, of_, METH_VARARGS),
              DECLARE_METHOD(t_CorrectionApplied, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CorrectionApplied)[] = {
              { Py_tp_methods, t_CorrectionApplied__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CorrectionApplied__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CorrectionApplied)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CorrectionApplied, t_CorrectionApplied, CorrectionApplied);
            PyObject *t_CorrectionApplied::wrap_Object(const CorrectionApplied& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CorrectionApplied::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CorrectionApplied::install(PyObject *module)
            {
              installType(&PY_TYPE(CorrectionApplied), &PY_TYPE_DEF(CorrectionApplied), module, "CorrectionApplied", 0);
            }

            void t_CorrectionApplied::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "class_", make_descriptor(CorrectionApplied::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "wrapfn_", make_descriptor(t_CorrectionApplied::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "boxfn_", make_descriptor(boxObject));
              env->getClass(CorrectionApplied::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "NO", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "YES", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::YES)));
            }

            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CorrectionApplied::initializeClass, 1)))
                return NULL;
              return t_CorrectionApplied::wrap_Object(CorrectionApplied(((t_CorrectionApplied *) arg)->object.this$));
            }
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CorrectionApplied::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CorrectionApplied result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::valueOf(a0));
                return t_CorrectionApplied::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CorrectionApplied_values(PyTypeObject *type)
            {
              JArray< CorrectionApplied > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::values());
              return JArray<jobject>(result.this$).wrap(t_CorrectionApplied::wrap_jobject);
            }
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data)
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
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ClassicalRungeKuttaIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegratorBuilder::ClassicalRungeKuttaIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ClassicalRungeKuttaIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ClassicalRungeKuttaIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegratorBuilder, t_ClassicalRungeKuttaIntegratorBuilder, ClassicalRungeKuttaIntegratorBuilder);

        void t_ClassicalRungeKuttaIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaIntegratorBuilder), module, "ClassicalRungeKuttaIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegratorBuilder::wrap_Object(ClassicalRungeKuttaIntegratorBuilder(((t_ClassicalRungeKuttaIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegratorBuilder_init_(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/EstimatedEarthFrameProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedEarthFrameProvider::class$ = NULL;
        jmethodID *EstimatedEarthFrameProvider::mids$ = NULL;
        bool EstimatedEarthFrameProvider::live$ = false;
        jdouble EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY = (jdouble) 0;

        jclass EstimatedEarthFrameProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedEarthFrameProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a578b266e00b830c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_getEstimatedUT1_b384d97b3c055d24] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getPolarDriftXDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_a25ed222178aa59f] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getStaticTransform_edee248bbd22a723] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
            mids$[mid_getStaticTransform_eae0db96fe973887] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
            mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getTransform_e79c22b40d6fa7e0] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "EARTH_ANGULAR_VELOCITY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedEarthFrameProvider::EstimatedEarthFrameProvider(const ::org::orekit::time::UT1Scale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a578b266e00b830c, a0.this$)) {}

        ::org::orekit::time::UT1Scale EstimatedEarthFrameProvider::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_b384d97b3c055d24]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_a25ed222178aa59f]));
        }

        ::org::orekit::frames::StaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_edee248bbd22a723], a0.this$));
        }

        ::org::orekit::frames::FieldStaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_eae0db96fe973887], a0.this$));
        }

        ::org::orekit::frames::Transform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, jint a1, const ::java::util::Map & a2) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e79c22b40d6fa7e0], a0.this$, a1, a2.this$));
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
        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyGetSetDef t_EstimatedEarthFrameProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, estimatedUT1),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedEarthFrameProvider__methods_[] = {
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getStaticTransform, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getTransform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedEarthFrameProvider)[] = {
          { Py_tp_methods, t_EstimatedEarthFrameProvider__methods_ },
          { Py_tp_init, (void *) t_EstimatedEarthFrameProvider_init_ },
          { Py_tp_getset, t_EstimatedEarthFrameProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedEarthFrameProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedEarthFrameProvider, t_EstimatedEarthFrameProvider, EstimatedEarthFrameProvider);

        void t_EstimatedEarthFrameProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedEarthFrameProvider), &PY_TYPE_DEF(EstimatedEarthFrameProvider), module, "EstimatedEarthFrameProvider", 0);
        }

        void t_EstimatedEarthFrameProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "class_", make_descriptor(EstimatedEarthFrameProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "wrapfn_", make_descriptor(t_EstimatedEarthFrameProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedEarthFrameProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "EARTH_ANGULAR_VELOCITY", make_descriptor(EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY));
        }

        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 1)))
            return NULL;
          return t_EstimatedEarthFrameProvider::wrap_Object(EstimatedEarthFrameProvider(((t_EstimatedEarthFrameProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::UT1Scale a0((jobject) NULL);
          EstimatedEarthFrameProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
          {
            INT_CALL(object = EstimatedEarthFrameProvider(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
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

        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
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
            break;
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::java::util::Map a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "KIK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0, a1, a2));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonScheduler.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/SortedSet.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonScheduler::class$ = NULL;
          jmethodID *PythonScheduler::mids$ = NULL;
          bool PythonScheduler::live$ = false;

          jclass PythonScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_generate_e61f6829e4c9c5f5] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_63a5a16953d5c5b8] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonScheduler::PythonScheduler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonScheduler::pythonExtension(jlong a0) const
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
        namespace generation {
          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args);
          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self);
          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args);
          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data);
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data);
          static PyGetSetDef t_PythonScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonScheduler, self),
            DECLARE_GET_FIELD(t_PythonScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonScheduler)[] = {
            { Py_tp_methods, t_PythonScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonScheduler_init_ },
            { Py_tp_getset, t_PythonScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonScheduler, t_PythonScheduler, PythonScheduler);
          PyObject *t_PythonScheduler::wrap_Object(const PythonScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonScheduler), &PY_TYPE_DEF(PythonScheduler), module, "PythonScheduler", 1);
          }

          void t_PythonScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "class_", make_descriptor(PythonScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "wrapfn_", make_descriptor(t_PythonScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;", (void *) t_PythonScheduler_generate0 },
              { "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;", (void *) t_PythonScheduler_getBuilder1 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonScheduler_init2 },
              { "pythonDecRef", "()V", (void *) t_PythonScheduler_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonScheduler::wrap_Object(PythonScheduler(((t_PythonScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds)
          {
            PythonScheduler object((jobject) NULL);

            INT_CALL(object = PythonScheduler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args)
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

          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::SortedSet value((jobject) NULL);
            PyObject *o0 = ::java::util::t_Map::wrap_Object(::java::util::Map(a0));
            PyObject *result = PyObject_CallMethod(obj, "generate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::SortedSet::initializeClass, &value))
            {
              throwTypeError("generate", result);
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

          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getBuilder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, &value))
            {
              throwTypeError("getBuilder", result);
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

          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data)
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
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
