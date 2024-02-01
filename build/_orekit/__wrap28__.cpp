#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldMaxGapInterpolationGrid::class$ = NULL;
            jmethodID *FieldMaxGapInterpolationGrid::mids$ = NULL;
            bool FieldMaxGapInterpolationGrid::live$ = false;

            jclass FieldMaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_88bffd71fb0313dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGridPoints_0fb3037dbc9bf797] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldMaxGapInterpolationGrid::FieldMaxGapInterpolationGrid(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88bffd71fb0313dc, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldMaxGapInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_0fb3037dbc9bf797], a0.this$, a1.this$));
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
          namespace utilities {
            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldMaxGapInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldMaxGapInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldMaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldMaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldMaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldMaxGapInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldMaxGapInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldMaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldMaxGapInterpolationGrid, t_FieldMaxGapInterpolationGrid, FieldMaxGapInterpolationGrid);
            PyObject *t_FieldMaxGapInterpolationGrid::wrap_Object(const FieldMaxGapInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldMaxGapInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldMaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldMaxGapInterpolationGrid), &PY_TYPE_DEF(FieldMaxGapInterpolationGrid), module, "FieldMaxGapInterpolationGrid", 0);
            }

            void t_FieldMaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "class_", make_descriptor(FieldMaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_FieldMaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldMaxGapInterpolationGrid::wrap_Object(FieldMaxGapInterpolationGrid(((t_FieldMaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldMaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldMaxGapInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data)
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
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LocalizedStatFormats::class$ = NULL;
      jmethodID *LocalizedStatFormats::mids$ = NULL;
      bool LocalizedStatFormats::live$ = false;
      LocalizedStatFormats *LocalizedStatFormats::COVARIANCE_MATRIX = NULL;
      LocalizedStatFormats *LocalizedStatFormats::ILLEGAL_STATE_PCA = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NO_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TIES_ARE_NOT_ALLOWED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TOO_MANY_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = NULL;

      jclass LocalizedStatFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LocalizedStatFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_98729243dcbccff7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/LocalizedStatFormats;");
          mids$[mid_values_9e86d2103b1ec6a8] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/LocalizedStatFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COVARIANCE_MATRIX = new LocalizedStatFormats(env->getStaticObjectField(cls, "COVARIANCE_MATRIX", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          ILLEGAL_STATE_PCA = new LocalizedStatFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE_PCA", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INSUFFICIENT_DATA_FOR_T_STATISTIC = new LocalizedStatFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA_FOR_T_STATISTIC", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INVALID_REGRESSION_OBSERVATION = new LocalizedStatFormats(env->getStaticObjectField(cls, "INVALID_REGRESSION_OBSERVATION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_REGRESSION = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_REGRESSION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_SUPPORTED_NAN_STRATEGY = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_NAN_STRATEGY", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NO_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NO_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_CONFIDENCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_QUANTILE_VALUE = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_QUANTILE_VALUE", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUND_SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TIES_ARE_NOT_ALLOWED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TIES_ARE_NOT_ALLOWED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TOO_MANY_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "TOO_MANY_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_CATEGORIES_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_CATEGORIES_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedStatFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String LocalizedStatFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }

      LocalizedStatFormats LocalizedStatFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedStatFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_98729243dcbccff7], a0.this$));
      }

      JArray< LocalizedStatFormats > LocalizedStatFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedStatFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_9e86d2103b1ec6a8]));
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
      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args);
      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self);
      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data);
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data);
      static PyGetSetDef t_LocalizedStatFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedStatFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedStatFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedStatFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedStatFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedStatFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedStatFormats)[] = {
        { Py_tp_methods, t_LocalizedStatFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedStatFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedStatFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedStatFormats, t_LocalizedStatFormats, LocalizedStatFormats);
      PyObject *t_LocalizedStatFormats::wrap_Object(const LocalizedStatFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedStatFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedStatFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedStatFormats), &PY_TYPE_DEF(LocalizedStatFormats), module, "LocalizedStatFormats", 0);
      }

      void t_LocalizedStatFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "class_", make_descriptor(LocalizedStatFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "wrapfn_", make_descriptor(t_LocalizedStatFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedStatFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "COVARIANCE_MATRIX", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::COVARIANCE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "ILLEGAL_STATE_PCA", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::ILLEGAL_STATE_PCA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INSUFFICIENT_DATA_FOR_T_STATISTIC", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INVALID_REGRESSION_OBSERVATION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_REGRESSION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_SUPPORTED_NAN_STRATEGY", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NO_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NO_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_QUANTILE_VALUE", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TIES_ARE_NOT_ALLOWED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TIES_ARE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TOO_MANY_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TOO_MANY_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_CATEGORIES_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED)));
      }

      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedStatFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedStatFormats::wrap_Object(LocalizedStatFormats(((t_LocalizedStatFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedStatFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedStatFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::valueOf(a0));
          return t_LocalizedStatFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedStatFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedStatFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data)
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
            mids$[mid_getDate_d2854c25a21df51f] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_209f08246d708042] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_bf28ed64d6e8576b] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate LineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_d2854c25a21df51f], a0));
        }

        jdouble LineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_209f08246d708042], a0.this$);
        }

        jdouble LineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_bf28ed64d6e8576b], a0);
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
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *TLEPropagatorBuilder::class$ = NULL;
        jmethodID *TLEPropagatorBuilder::mids$ = NULL;
        bool TLEPropagatorBuilder::live$ = false;

        jclass TLEPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/TLEPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_edb8bfbb9c94d0c5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_init$_d8ddb83f6cdc6ad6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/data/DataContext;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_f71c7f606859fe78] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
            mids$[mid_copy_359c84901857d78a] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/TLEPropagatorBuilder;");
            mids$[mid_getTemplateTLE_dacb215ad36dee42] = env->getMethodID(cls, "getTemplateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_edb8bfbb9c94d0c5, a0.this$, a1.this$, a2, a3.this$)) {}

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d8ddb83f6cdc6ad6, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel TLEPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::tle::TLEPropagator TLEPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::tle::TLEPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_f71c7f606859fe78], a0.this$));
        }

        TLEPropagatorBuilder TLEPropagatorBuilder::copy() const
        {
          return TLEPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_359c84901857d78a]));
        }

        ::org::orekit::propagation::analytical::tle::TLE TLEPropagatorBuilder::getTemplateTLE() const
        {
          return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTemplateTLE_dacb215ad36dee42]));
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
        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self);
        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data);
        static PyGetSetDef t_TLEPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_TLEPropagatorBuilder, templateTLE),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TLEPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_TLEPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, getTemplateTLE, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TLEPropagatorBuilder)[] = {
          { Py_tp_methods, t_TLEPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_TLEPropagatorBuilder_init_ },
          { Py_tp_getset, t_TLEPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TLEPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(TLEPropagatorBuilder, t_TLEPropagatorBuilder, TLEPropagatorBuilder);

        void t_TLEPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(TLEPropagatorBuilder), &PY_TYPE_DEF(TLEPropagatorBuilder), module, "TLEPropagatorBuilder", 0);
        }

        void t_TLEPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "class_", make_descriptor(TLEPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "wrapfn_", make_descriptor(t_TLEPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TLEPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_TLEPropagatorBuilder::wrap_Object(TLEPropagatorBuilder(((t_TLEPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TLEPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a3((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a4((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDkk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3, &a4))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::tle::TLEPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::tle::t_TLEPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          TLEPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_TLEPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self)
        {
          ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
          OBJ_CALL(result = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
        }

        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
          OBJ_CALL(value = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeBuilder::class$ = NULL;
          jmethodID *RangeBuilder::mids$ = NULL;
          bool RangeBuilder::live$ = false;

          jclass RangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a92f6cc352efc8e1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_84313b4973a77461] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Range;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeBuilder::RangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_a92f6cc352efc8e1, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::Range RangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Range(env->callObjectMethod(this$, mids$[mid_build_84313b4973a77461], a0.this$, a1.this$));
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
          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args);
          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args);
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data);
          static PyGetSetDef t_RangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeBuilder)[] = {
            { Py_tp_methods, t_RangeBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeBuilder_init_ },
            { Py_tp_getset, t_RangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeBuilder, t_RangeBuilder, RangeBuilder);
          PyObject *t_RangeBuilder::wrap_Object(const RangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeBuilder), &PY_TYPE_DEF(RangeBuilder), module, "RangeBuilder", 0);
          }

          void t_RangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "class_", make_descriptor(RangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "wrapfn_", make_descriptor(t_RangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeBuilder::wrap_Object(RangeBuilder(((t_RangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Range result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Range::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data)
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
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEStateAndDerivative::class$ = NULL;
      jmethodID *ODEStateAndDerivative::mids$ = NULL;
      bool ODEStateAndDerivative::live$ = false;

      jclass ODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9c6ff9f1a737a356] = env->getMethodID(cls, "<init>", "(D[D[D)V");
          mids$[mid_init$_41446fcbc8dbe575] = env->getMethodID(cls, "<init>", "(D[D[D[[D[[D)V");
          mids$[mid_getCompleteDerivative_be783177b060994b] = env->getMethodID(cls, "getCompleteDerivative", "()[D");
          mids$[mid_getPrimaryDerivative_be783177b060994b] = env->getMethodID(cls, "getPrimaryDerivative", "()[D");
          mids$[mid_getSecondaryDerivative_81add9fc9d78d5b9] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_9c6ff9f1a737a356, a0, a1.this$, a2.this$)) {}

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_41446fcbc8dbe575, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< jdouble > ODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_be783177b060994b]));
      }

      JArray< jdouble > ODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_be783177b060994b]));
      }

      JArray< jdouble > ODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_81add9fc9d78d5b9], a0));
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
      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ODEState),
        NULL
      };

      DEFINE_TYPE(ODEStateAndDerivative, t_ODEStateAndDerivative, ODEStateAndDerivative);

      void t_ODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEStateAndDerivative), &PY_TYPE_DEF(ODEStateAndDerivative), module, "ODEStateAndDerivative", 0);
      }

      void t_ODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "class_", make_descriptor(ODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "wrapfn_", make_descriptor(t_ODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ODEStateAndDerivative::wrap_Object(ODEStateAndDerivative(((t_ODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D[[D[[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return value.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonAbstractAnalyticalPropagator::live$ = false;

        jclass PythonAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fddd0a7d9f33bafa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalPropagator::PythonAbstractAnalyticalPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_fddd0a7d9f33bafa, a0.this$)) {}

        void PythonAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
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
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args);
        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalPropagator, t_PythonAbstractAnalyticalPropagator, PythonAbstractAnalyticalPropagator);

        void t_PythonAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonAbstractAnalyticalPropagator), module, "PythonAbstractAnalyticalPropagator", 1);
        }

        void t_PythonAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "class_", make_descriptor(PythonAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractAnalyticalPropagator_getMass0 },
            { "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractAnalyticalPropagator_propagateOrbit1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalPropagator_pythonDecRef2 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V", (void *) t_PythonAbstractAnalyticalPropagator_resetIntermediateState3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalPropagator::wrap_Object(PythonAbstractAnalyticalPropagator(((t_PythonAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          PythonAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractAnalyticalPropagator(a0));
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

        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMass", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data)
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
#include "org/hipparchus/linear/SymmLQ.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SymmLQ::class$ = NULL;
      jmethodID *SymmLQ::mids$ = NULL;
      bool SymmLQ::live$ = false;

      jclass SymmLQ::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SymmLQ");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c5b1307f8763947a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_50acb8bcbb80a276] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_eee3de00fe971136] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solve_0cdb2b64c2fd2ee5] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_0299ee26edcac320] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_9820092a50d54355] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_35226d9fdc897ac0] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_0729d74880ac1f87] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_e0e56b5e51a70a3d] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_0299ee26edcac320] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_35226d9fdc897ac0] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_d1dc9ac8657eea32] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;ZD)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SymmLQ::SymmLQ(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_c5b1307f8763947a, a0.this$, a1, a2)) {}

      SymmLQ::SymmLQ(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_50acb8bcbb80a276, a0, a1, a2)) {}

      jboolean SymmLQ::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_eee3de00fe971136]);
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0cdb2b64c2fd2ee5], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0299ee26edcac320], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_9820092a50d54355], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_35226d9fdc897ac0], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, jboolean a2, jdouble a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0729d74880ac1f87], a0.this$, a1.this$, a2, a3));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, jboolean a3, jdouble a4) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_e0e56b5e51a70a3d], a0.this$, a1.this$, a2.this$, a3, a4));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_0299ee26edcac320], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_35226d9fdc897ac0], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector SymmLQ::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jboolean a4, jdouble a5) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_d1dc9ac8657eea32], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
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
      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self);
      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args);
      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args);

      static PyMethodDef t_SymmLQ__methods_[] = {
        DECLARE_METHOD(t_SymmLQ, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SymmLQ, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_SymmLQ, solve, METH_VARARGS),
        DECLARE_METHOD(t_SymmLQ, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SymmLQ)[] = {
        { Py_tp_methods, t_SymmLQ__methods_ },
        { Py_tp_init, (void *) t_SymmLQ_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SymmLQ)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(SymmLQ, t_SymmLQ, SymmLQ);

      void t_SymmLQ::install(PyObject *module)
      {
        installType(&PY_TYPE(SymmLQ), &PY_TYPE_DEF(SymmLQ), module, "SymmLQ", 0);
      }

      void t_SymmLQ::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "class_", make_descriptor(SymmLQ::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "wrapfn_", make_descriptor(t_SymmLQ::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SymmLQ), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SymmLQ_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SymmLQ::initializeClass, 1)))
          return NULL;
        return t_SymmLQ::wrap_Object(SymmLQ(((t_SymmLQ *) arg)->object.this$));
      }
      static PyObject *t_SymmLQ_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SymmLQ::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SymmLQ_init_(t_SymmLQ *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            SymmLQ object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = SymmLQ(a0, a1, a2));
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

      static PyObject *t_SymmLQ_shouldCheck(t_SymmLQ *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SymmLQ_solve(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_SymmLQ_solveInPlace(t_SymmLQ *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jboolean a4;
            jdouble a5;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkkZD", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SymmLQ), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/UserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *UserRangeAccuracy::class$ = NULL;
            jmethodID *UserRangeAccuracy::mids$ = NULL;
            bool UserRangeAccuracy::live$ = false;

            jclass UserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/UserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserRangeAccuracy::UserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            jdouble UserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_9981f74b2d109da6]);
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
            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self);
            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data);
            static PyGetSetDef t_UserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_UserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_UserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserRangeAccuracy)[] = {
              { Py_tp_methods, t_UserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_UserRangeAccuracy_init_ },
              { Py_tp_getset, t_UserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserRangeAccuracy, t_UserRangeAccuracy, UserRangeAccuracy);

            void t_UserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(UserRangeAccuracy), &PY_TYPE_DEF(UserRangeAccuracy), module, "UserRangeAccuracy", 0);
            }

            void t_UserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "class_", make_descriptor(UserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "wrapfn_", make_descriptor(t_UserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_UserRangeAccuracy::wrap_Object(UserRangeAccuracy(((t_UserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              UserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = UserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame$LOFBuilderVector::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame$LOFBuilderVector::mids$ = NULL;
      bool LocalMagneticFieldFrame$LOFBuilderVector::live$ = false;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY = NULL;

      jclass LocalMagneticFieldFrame$LOFBuilderVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_706cc013fa5f46ac] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");
          mids$[mid_values_b34dc436fa10625b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MINUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame$LOFBuilderVector LocalMagneticFieldFrame$LOFBuilderVector::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalMagneticFieldFrame$LOFBuilderVector(env->callStaticObjectMethod(cls, mids$[mid_valueOf_706cc013fa5f46ac], a0.this$));
      }

      JArray< LocalMagneticFieldFrame$LOFBuilderVector > LocalMagneticFieldFrame$LOFBuilderVector::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalMagneticFieldFrame$LOFBuilderVector >(env->callStaticObjectMethod(cls, mids$[mid_values_b34dc436fa10625b]));
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
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame$LOFBuilderVector__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame$LOFBuilderVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame$LOFBuilderVector__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame$LOFBuilderVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalMagneticFieldFrame$LOFBuilderVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame$LOFBuilderVector, t_LocalMagneticFieldFrame$LOFBuilderVector, LocalMagneticFieldFrame$LOFBuilderVector);
      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(const LocalMagneticFieldFrame$LOFBuilderVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), &PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector), module, "LocalMagneticFieldFrame$LOFBuilderVector", 0);
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "class_", make_descriptor(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY)));
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(LocalMagneticFieldFrame$LOFBuilderVector(((t_LocalMagneticFieldFrame$LOFBuilderVector *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalMagneticFieldFrame$LOFBuilderVector result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::valueOf(a0));
          return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type)
      {
        JArray< LocalMagneticFieldFrame$LOFBuilderVector > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::values());
        return JArray<jobject>(result.this$).wrap(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject);
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *AccelerationModel::class$ = NULL;
        jmethodID *AccelerationModel::mids$ = NULL;
        bool AccelerationModel::live$ = false;

        jclass AccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/AccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_6c8e6cd5d59063ae] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_4222abdadde032f5] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement AccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_6c8e6cd5d59063ae], a0.this$, a1.this$));
        }

        jdouble AccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_4222abdadde032f5], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args);
        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args);

        static PyMethodDef t_AccelerationModel__methods_[] = {
          DECLARE_METHOD(t_AccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_AccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AccelerationModel)[] = {
          { Py_tp_methods, t_AccelerationModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AccelerationModel)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(AccelerationModel, t_AccelerationModel, AccelerationModel);

        void t_AccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AccelerationModel), &PY_TYPE_DEF(AccelerationModel), module, "AccelerationModel", 0);
        }

        void t_AccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "class_", make_descriptor(AccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "wrapfn_", make_descriptor(t_AccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AccelerationModel::initializeClass, 1)))
            return NULL;
          return t_AccelerationModel::wrap_Object(AccelerationModel(((t_AccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args)
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

        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/PythonAbstractBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonAbstractBuilder::class$ = NULL;
          jmethodID *PythonAbstractBuilder::mids$ = NULL;
          bool PythonAbstractBuilder::live$ = false;

          jclass PythonAbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonAbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_46bd2dc5f5ed7d55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
              mids$[mid_create_8db1476e15353061] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractBuilder::PythonAbstractBuilder(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a5) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_46bd2dc5f5ed7d55, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          void PythonAbstractBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args);
          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self);
          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5);
          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data);
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractBuilder, t_PythonAbstractBuilder, PythonAbstractBuilder);
          PyObject *t_PythonAbstractBuilder::wrap_Object(const PythonAbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractBuilder), &PY_TYPE_DEF(PythonAbstractBuilder), module, "PythonAbstractBuilder", 1);
          }

          void t_PythonAbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "class_", make_descriptor(PythonAbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "wrapfn_", make_descriptor(t_PythonAbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;", (void *) t_PythonAbstractBuilder_create0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractBuilder::wrap_Object(PythonAbstractBuilder(((t_PythonAbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a5((jobject) NULL);
            PythonAbstractBuilder object((jobject) NULL);

            if (!parseArgs(args, "KDDkkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PythonAbstractBuilder(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::ndm::AbstractBuilder value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
            PyObject *o3 = ::org::orekit::data::t_DataContext::wrap_Object(::org::orekit::data::DataContext(a3));
            PyObject *o4 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a4));
            PyObject *o5 = ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(a5));
            PyObject *result = PyObject_CallMethod(obj, "create", "OddOOO", o0, (double) a1, (double) a2, o3, o4, o5);
            Py_DECREF(o0);
            Py_DECREF(o3);
            Py_DECREF(o4);
            Py_DECREF(o5);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::AbstractBuilder::initializeClass, &value))
            {
              throwTypeError("create", result);
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

          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data)
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
#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateSolver::class$ = NULL;
        jmethodID *AbstractUnivariateSolver::mids$ = NULL;
        bool AbstractUnivariateSolver::live$ = false;

        jclass AbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateSolver");

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
        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateSolver, t_AbstractUnivariateSolver, AbstractUnivariateSolver);
        PyObject *t_AbstractUnivariateSolver::wrap_Object(const AbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateSolver), &PY_TYPE_DEF(AbstractUnivariateSolver), module, "AbstractUnivariateSolver", 0);
        }

        void t_AbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "class_", make_descriptor(AbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateSolver::wrap_Object(AbstractUnivariateSolver(((t_AbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/OceanTides.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *OceanTides::class$ = NULL;
        jmethodID *OceanTides::mids$ = NULL;
        bool OceanTides::live$ = false;
        jint OceanTides::DEFAULT_POINTS = (jint) 0;
        jdouble OceanTides::DEFAULT_STEP = (jdouble) 0;

        jclass OceanTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/OceanTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ec4d79c3f1a5fea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_4b789182888c9d81] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_88d634625dc0aa67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;Lorg/orekit/forces/gravity/potential/GravityFields;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jint a3, jint a4, const ::org::orekit::utils::IERSConventions & a5, const ::org::orekit::time::UT1Scale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ec4d79c3f1a5fea, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b789182888c9d81, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9, const ::org::orekit::forces::gravity::potential::GravityFields & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88d634625dc0aa67, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$, a10.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OceanTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean OceanTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::stream::Stream OceanTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream OceanTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::java::util::List OceanTides::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args);
        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self);
        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self);
        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg);
        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self);
        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data);
        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data);
        static PyGetSetDef t_OceanTides__fields_[] = {
          DECLARE_GET_FIELD(t_OceanTides, eventDetectors),
          DECLARE_GET_FIELD(t_OceanTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OceanTides__methods_[] = {
          DECLARE_METHOD(t_OceanTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_OceanTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_OceanTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OceanTides)[] = {
          { Py_tp_methods, t_OceanTides__methods_ },
          { Py_tp_init, (void *) t_OceanTides_init_ },
          { Py_tp_getset, t_OceanTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OceanTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OceanTides, t_OceanTides, OceanTides);

        void t_OceanTides::install(PyObject *module)
        {
          installType(&PY_TYPE(OceanTides), &PY_TYPE_DEF(OceanTides), module, "OceanTides", 0);
        }

        void t_OceanTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "class_", make_descriptor(OceanTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "wrapfn_", make_descriptor(t_OceanTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(OceanTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_POINTS", make_descriptor(OceanTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_STEP", make_descriptor(OceanTides::DEFAULT_STEP));
        }

        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OceanTides::initializeClass, 1)))
            return NULL;
          return t_OceanTides::wrap_Object(OceanTides(((t_OceanTides *) arg)->object.this$));
        }
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OceanTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::utils::IERSConventions a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::orekit::time::UT1Scale a6((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              ::org::orekit::forces::gravity::potential::GravityFields a10((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9, &a10))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
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

        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args)
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

        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data)
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
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinates::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinates::live$ = false;

      jclass TimeStampedFieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d09f2d0faf56c24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_676022eb1673e53e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_87a6951a5af3d263] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_69ea71c8c9a32ba2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_4abaeb2757df3c22] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_init$_92038f93efa6e128] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_b876eda6b0934506] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_revert_3c739ea1aa8f99e1] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_3e397c1726400ba8] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_356565215fd243d9] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_subtractOffset_b876eda6b0934506] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_7d09f2d0faf56c24, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_676022eb1673e53e, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_87a6951a5af3d263, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_69ea71c8c9a32ba2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4abaeb2757df3c22, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_92038f93efa6e128, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::addOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_b876eda6b0934506], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::revert() const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_3c739ea1aa8f99e1]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_3e397c1726400ba8], a0));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_356565215fd243d9], a0.this$));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::subtractOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_b876eda6b0934506], a0.this$));
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
      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self);
      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldAngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinates, t_TimeStampedFieldAngularCoordinates, TimeStampedFieldAngularCoordinates);
      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_Object(const TimeStampedFieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinates), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinates), module, "TimeStampedFieldAngularCoordinates", 0);
      }

      void t_TimeStampedFieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "class_", make_descriptor(TimeStampedFieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinates::wrap_Object(TimeStampedFieldAngularCoordinates(((t_TimeStampedFieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKD", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Variance::class$ = NULL;
          jmethodID *Variance::mids$ = NULL;
          bool Variance::live$ = false;

          jclass Variance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Variance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_4f0cd4b99215b675] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_afd6aa27b7bb12b4] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_aggregate_abcc7517bb8f628c] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Variance;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_9cbdf2d14557145a] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Variance;");
              mids$[mid_evaluate_02811febb145516c] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_65d620e9532c2371] = env->getMethodID(cls, "evaluate", "([D[DD)D");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0b039b932db219bf] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_evaluate_be090b022ea8e24a] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_evaluate_0e12714d9e3d21fe] = env->getMethodID(cls, "evaluate", "([D[DDII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_eee3de00fe971136] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_d81660c5fa3f9ace] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/Variance;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Variance::Variance() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          Variance::Variance(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_4f0cd4b99215b675, a0.this$)) {}

          Variance::Variance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

          Variance::Variance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_afd6aa27b7bb12b4, a0, a1.this$)) {}

          void Variance::aggregate(const Variance & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_abcc7517bb8f628c], a0.this$);
          }

          void Variance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Variance Variance::copy() const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_copy_9cbdf2d14557145a]));
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_02811febb145516c], a0.this$, a1);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_65d620e9532c2371], a0.this$, a1.this$, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0b039b932db219bf], a0.this$, a1.this$, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_be090b022ea8e24a], a0.this$, a1, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jint a3, jint a4) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0e12714d9e3d21fe], a0.this$, a1.this$, a2, a3, a4);
          }

          jlong Variance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Variance::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Variance::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
          }

          jboolean Variance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_eee3de00fe971136]);
          }

          Variance Variance::withBiasCorrection(jboolean a0) const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_d81660c5fa3f9ace], a0));
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
          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_isBiasCorrected(t_Variance *self);
          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data);
          static PyObject *t_Variance_get__n(t_Variance *self, void *data);
          static PyObject *t_Variance_get__result(t_Variance *self, void *data);
          static PyGetSetDef t_Variance__fields_[] = {
            DECLARE_GET_FIELD(t_Variance, biasCorrected),
            DECLARE_GET_FIELD(t_Variance, n),
            DECLARE_GET_FIELD(t_Variance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Variance__methods_[] = {
            DECLARE_METHOD(t_Variance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, aggregate, METH_O),
            DECLARE_METHOD(t_Variance, clear, METH_VARARGS),
            DECLARE_METHOD(t_Variance, copy, METH_VARARGS),
            DECLARE_METHOD(t_Variance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getN, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Variance, increment, METH_VARARGS),
            DECLARE_METHOD(t_Variance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_Variance, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Variance)[] = {
            { Py_tp_methods, t_Variance__methods_ },
            { Py_tp_init, (void *) t_Variance_init_ },
            { Py_tp_getset, t_Variance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Variance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Variance, t_Variance, Variance);

          void t_Variance::install(PyObject *module)
          {
            installType(&PY_TYPE(Variance), &PY_TYPE_DEF(Variance), module, "Variance", 0);
          }

          void t_Variance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "class_", make_descriptor(Variance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "wrapfn_", make_descriptor(t_Variance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Variance::initializeClass, 1)))
              return NULL;
            return t_Variance::wrap_Object(Variance(((t_Variance *) arg)->object.this$));
          }
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Variance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Variance object((jobject) NULL);

                INT_CALL(object = Variance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Variance(a0, a1));
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

          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg)
          {
            Variance a0((jobject) NULL);

            if (!parseArg(arg, "k", Variance::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args)
          {
            Variance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Variance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
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
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
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
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 5:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jint a4;
                jdouble result;

                if (!parseArgs(args, "[D[DDII", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Variance_isBiasCorrected(t_Variance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg)
          {
            jboolean a0;
            Variance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_Variance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Variance_get__n(t_Variance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Variance_get__result(t_Variance *self, void *data)
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
#include "org/orekit/forces/gravity/potential/GRGSFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GRGSFormatReader::class$ = NULL;
          jmethodID *GRGSFormatReader::mids$ = NULL;
          bool GRGSFormatReader::live$ = false;

          jclass GRGSFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GRGSFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c5d48f261709aa3e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_13b6194a2a01ad07] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_0c94c2344ee8a0fa] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_c5d48f261709aa3e, a0.this$, a1)) {}

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_13b6194a2a01ad07, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider GRGSFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_0c94c2344ee8a0fa], a0, a1, a2));
          }

          void GRGSFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args);
          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args);

          static PyMethodDef t_GRGSFormatReader__methods_[] = {
            DECLARE_METHOD(t_GRGSFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_GRGSFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRGSFormatReader)[] = {
            { Py_tp_methods, t_GRGSFormatReader__methods_ },
            { Py_tp_init, (void *) t_GRGSFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRGSFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(GRGSFormatReader, t_GRGSFormatReader, GRGSFormatReader);

          void t_GRGSFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(GRGSFormatReader), &PY_TYPE_DEF(GRGSFormatReader), module, "GRGSFormatReader", 0);
          }

          void t_GRGSFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "class_", make_descriptor(GRGSFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "wrapfn_", make_descriptor(t_GRGSFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRGSFormatReader::initializeClass, 1)))
              return NULL;
            return t_GRGSFormatReader::wrap_Object(GRGSFormatReader(((t_GRGSFormatReader *) arg)->object.this$));
          }
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRGSFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1, a2));
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

          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *SupportBallGenerator::class$ = NULL;
        jmethodID *SupportBallGenerator::mids$ = NULL;
        bool SupportBallGenerator::live$ = false;

        jclass SupportBallGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/SupportBallGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_ballOnSupport_6deb4972134b40de] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall SupportBallGenerator::ballOnSupport(const ::java::util::List & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_6deb4972134b40de], a0.this$));
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
      namespace enclosing {
        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args);
        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg);
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data);
        static PyGetSetDef t_SupportBallGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_SupportBallGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SupportBallGenerator__methods_[] = {
          DECLARE_METHOD(t_SupportBallGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_SupportBallGenerator, ballOnSupport, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SupportBallGenerator)[] = {
          { Py_tp_methods, t_SupportBallGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SupportBallGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SupportBallGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SupportBallGenerator, t_SupportBallGenerator, SupportBallGenerator);
        PyObject *t_SupportBallGenerator::wrap_Object(const SupportBallGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_SupportBallGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_SupportBallGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(SupportBallGenerator), &PY_TYPE_DEF(SupportBallGenerator), module, "SupportBallGenerator", 0);
        }

        void t_SupportBallGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "class_", make_descriptor(SupportBallGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "wrapfn_", make_descriptor(t_SupportBallGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SupportBallGenerator::initializeClass, 1)))
            return NULL;
          return t_SupportBallGenerator::wrap_Object(SupportBallGenerator(((t_SupportBallGenerator *) arg)->object.this$));
        }
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SupportBallGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.ballOnSupport(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
          return NULL;
        }
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonTideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonTideSystemProvider::class$ = NULL;
          jmethodID *PythonTideSystemProvider::mids$ = NULL;
          bool PythonTideSystemProvider::live$ = false;

          jclass PythonTideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonTideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTideSystemProvider::PythonTideSystemProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonTideSystemProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonTideSystemProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonTideSystemProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self);
          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args);
          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data);
          static PyGetSetDef t_PythonTideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTideSystemProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_PythonTideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTideSystemProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTideSystemProvider)[] = {
            { Py_tp_methods, t_PythonTideSystemProvider__methods_ },
            { Py_tp_init, (void *) t_PythonTideSystemProvider_init_ },
            { Py_tp_getset, t_PythonTideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTideSystemProvider, t_PythonTideSystemProvider, PythonTideSystemProvider);

          void t_PythonTideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTideSystemProvider), &PY_TYPE_DEF(PythonTideSystemProvider), module, "PythonTideSystemProvider", 1);
          }

          void t_PythonTideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "class_", make_descriptor(PythonTideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "wrapfn_", make_descriptor(t_PythonTideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTideSystemProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonTideSystemProvider_getTideSystem0 },
              { "pythonDecRef", "()V", (void *) t_PythonTideSystemProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_PythonTideSystemProvider::wrap_Object(PythonTideSystemProvider(((t_PythonTideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonTideSystemProvider object((jobject) NULL);

            INT_CALL(object = PythonTideSystemProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data)
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
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatFixedStepHandler::class$ = NULL;
        jmethodID *MultiSatFixedStepHandler::mids$ = NULL;
        bool MultiSatFixedStepHandler::live$ = false;

        jclass MultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_aa335fea495d60e0] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_aa335fea495d60e0] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_1dffd31e5a3fd8a1] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatFixedStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_aa335fea495d60e0], a0.this$);
        }

        void MultiSatFixedStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_aa335fea495d60e0], a0.this$);
        }

        void MultiSatFixedStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_1dffd31e5a3fd8a1], a0.this$, a1.this$, a2);
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
        static PyObject *t_MultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_finish(t_MultiSatFixedStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_handleStep(t_MultiSatFixedStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_init(t_MultiSatFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_MultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatFixedStepHandler, t_MultiSatFixedStepHandler, MultiSatFixedStepHandler);

        void t_MultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatFixedStepHandler), &PY_TYPE_DEF(MultiSatFixedStepHandler), module, "MultiSatFixedStepHandler", 0);
        }

        void t_MultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "class_", make_descriptor(MultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_MultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatFixedStepHandler::wrap_Object(MultiSatFixedStepHandler(((t_MultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatFixedStepHandler_finish(t_MultiSatFixedStepHandler *self, PyObject *arg)
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

        static PyObject *t_MultiSatFixedStepHandler_handleStep(t_MultiSatFixedStepHandler *self, PyObject *arg)
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

        static PyObject *t_MultiSatFixedStepHandler_init(t_MultiSatFixedStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;

          if (!parseArgs(args, "KkD", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/MidPointIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *MidPointIntegrator::class$ = NULL;
        jmethodID *MidPointIntegrator::mids$ = NULL;
        bool MidPointIntegrator::live$ = false;
        jint MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass MidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/MidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_eb6adaa8ce308c89] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_9981f74b2d109da6] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidPointIntegrator::MidPointIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        MidPointIntegrator::MidPointIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

        MidPointIntegrator::MidPointIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_eb6adaa8ce308c89, a0, a1, a2, a3)) {}
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
        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_MidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidPointIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidPointIntegrator)[] = {
          { Py_tp_methods, t_MidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidPointIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(MidPointIntegrator, t_MidPointIntegrator, MidPointIntegrator);

        void t_MidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidPointIntegrator), &PY_TYPE_DEF(MidPointIntegrator), module, "MidPointIntegrator", 0);
        }

        void t_MidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "class_", make_descriptor(MidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "wrapfn_", make_descriptor(t_MidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(MidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidPointIntegrator::wrap_Object(MidPointIntegrator(((t_MidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MidPointIntegrator object((jobject) NULL);

              INT_CALL(object = MidPointIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1));
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
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1, a2, a3));
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
#include "org/hipparchus/analysis/interpolation/BicubicInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolator::class$ = NULL;
        jmethodID *BicubicInterpolator::mids$ = NULL;
        bool BicubicInterpolator::live$ = false;

        jclass BicubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_a396d3da739c6d24] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BicubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolator::BicubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction BicubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_a396d3da739c6d24], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolator)[] = {
          { Py_tp_methods, t_BicubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolator, t_BicubicInterpolator, BicubicInterpolator);

        void t_BicubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolator), &PY_TYPE_DEF(BicubicInterpolator), module, "BicubicInterpolator", 0);
        }

        void t_BicubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "class_", make_descriptor(BicubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "wrapfn_", make_descriptor(t_BicubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolator::wrap_Object(BicubicInterpolator(((t_BicubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BicubicInterpolator object((jobject) NULL);

          INT_CALL(object = BicubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BicubicInterpolatingFunction::wrap_Object(result);
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
#include "org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *PythonTleGenerationAlgorithm::class$ = NULL;
            jmethodID *PythonTleGenerationAlgorithm::mids$ = NULL;
            bool PythonTleGenerationAlgorithm::live$ = false;

            jclass PythonTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_generate_166cccd89c387fd5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_f8078c645a12d356] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonTleGenerationAlgorithm::PythonTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonTleGenerationAlgorithm::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonTleGenerationAlgorithm::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonTleGenerationAlgorithm::pythonExtension(jlong a0) const
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
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self);
            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_PythonTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_PythonTleGenerationAlgorithm, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_PythonTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_PythonTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_PythonTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonTleGenerationAlgorithm, t_PythonTleGenerationAlgorithm, PythonTleGenerationAlgorithm);

            void t_PythonTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonTleGenerationAlgorithm), &PY_TYPE_DEF(PythonTleGenerationAlgorithm), module, "PythonTleGenerationAlgorithm", 1);
            }

            void t_PythonTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "class_", make_descriptor(PythonTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_PythonTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonTleGenerationAlgorithm::initializeClass);
              JNINativeMethod methods[] = {
                { "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;", (void *) t_PythonTleGenerationAlgorithm_generate0 },
                { "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;", (void *) t_PythonTleGenerationAlgorithm_generate1 },
                { "pythonDecRef", "()V", (void *) t_PythonTleGenerationAlgorithm_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_PythonTleGenerationAlgorithm::wrap_Object(PythonTleGenerationAlgorithm(((t_PythonTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              PythonTleGenerationAlgorithm object((jobject) NULL);

              INT_CALL(object = PythonTleGenerationAlgorithm());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args)
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(::org::orekit::propagation::analytical::tle::FieldTLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &value))
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(::org::orekit::propagation::analytical::tle::TLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &value))
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

            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data)
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
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/Frequency.h"
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
          mids$[mid_getMHzFrequency_9981f74b2d109da6] = env->getMethodID(cls, "getMHzFrequency", "()D");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getRatio_9981f74b2d109da6] = env->getMethodID(cls, "getRatio", "()D");
          mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getWavelength_9981f74b2d109da6] = env->getMethodID(cls, "getWavelength", "()D");
          mids$[mid_valueOf_5887df6a755c8fc7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_values_03bf6276482ee6a8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/Frequency;");

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
        return env->callDoubleMethod(this$, mids$[mid_getMHzFrequency_9981f74b2d109da6]);
      }

      ::java::lang::String Frequency::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble Frequency::getRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRatio_9981f74b2d109da6]);
      }

      ::org::orekit::gnss::SatelliteSystem Frequency::getSatelliteSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
      }

      jdouble Frequency::getWavelength() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWavelength_9981f74b2d109da6]);
      }

      Frequency Frequency::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Frequency(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5887df6a755c8fc7], a0.this$));
      }

      JArray< Frequency > Frequency::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Frequency >(env->callStaticObjectMethod(cls, mids$[mid_values_03bf6276482ee6a8]));
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
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomGenerator::class$ = NULL;
      jmethodID *RandomGenerator::mids$ = NULL;
      bool RandomGenerator::live$ = false;

      jclass RandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_eee3de00fe971136] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_bba2a19638de22ff] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_e4288ba5fbf20d28] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_0e3b995f823d65ff] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_9981f74b2d109da6] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_d938fc64e8c6df2d] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_42c72b98e3c2e08a] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_1eaf6eb0a3f3163f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_8fd427ab23829bf5] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_f5bbab7e97879358] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean RandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_eee3de00fe971136]);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_bba2a19638de22ff], a0.this$);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_e4288ba5fbf20d28], a0.this$, a1, a2);
      }

      jdouble RandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_9981f74b2d109da6]);
      }

      jfloat RandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_0e3b995f823d65ff]);
      }

      jdouble RandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_9981f74b2d109da6]);
      }

      jint RandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
      }

      jint RandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d938fc64e8c6df2d], a0);
      }

      jlong RandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_42c72b98e3c2e08a]);
      }

      jlong RandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_1eaf6eb0a3f3163f], a0);
      }

      void RandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
      }

      void RandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_8fd427ab23829bf5], a0);
      }

      void RandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_f5bbab7e97879358], a0);
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
      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args);
      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_RandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomGenerator)[] = {
        { Py_tp_methods, t_RandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomGenerator, t_RandomGenerator, RandomGenerator);

      void t_RandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomGenerator), &PY_TYPE_DEF(RandomGenerator), module, "RandomGenerator", 0);
      }

      void t_RandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "class_", make_descriptor(RandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "wrapfn_", make_descriptor(t_RandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomGenerator::wrap_Object(RandomGenerator(((t_RandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args)
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

      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args)
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

      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args)
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

      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args)
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

      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmSatelliteEphemeris::class$ = NULL;
              jmethodID *OcmSatelliteEphemeris::mids$ = NULL;
              bool OcmSatelliteEphemeris::live$ = false;

              jclass OcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_efa13fade9859f0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmSatelliteEphemeris::OcmSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efa13fade9859f0d, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
              }

              jdouble OcmSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
              }

              ::java::util::List OcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmSatelliteEphemeris, t_OcmSatelliteEphemeris, OcmSatelliteEphemeris);

              void t_OcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmSatelliteEphemeris), &PY_TYPE_DEF(OcmSatelliteEphemeris), module, "OcmSatelliteEphemeris", 0);
              }

              void t_OcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "class_", make_descriptor(OcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_OcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OcmSatelliteEphemeris::wrap_Object(OcmSatelliteEphemeris(((t_OcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OcmSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data)
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
#include "org/orekit/utils/PythonPVCoordinatesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPVCoordinatesProvider::PythonPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPVCoordinatesProvider::mids$[PythonPVCoordinatesProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/python/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *ComplexOrdinaryDifferentialEquation::mids$ = NULL;
      bool ComplexOrdinaryDifferentialEquation::live$ = false;

      jclass ComplexOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_0e21df0ad523deab] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_b89188ee519deab4] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexOrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_0e21df0ad523deab], a0, a1.this$));
      }

      jint ComplexOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      void ComplexOrdinaryDifferentialEquation::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_b89188ee519deab4], a0, a1.this$, a2);
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
      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_ComplexOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexOrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_ComplexOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexOrdinaryDifferentialEquation, t_ComplexOrdinaryDifferentialEquation, ComplexOrdinaryDifferentialEquation);

      void t_ComplexOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexOrdinaryDifferentialEquation), &PY_TYPE_DEF(ComplexOrdinaryDifferentialEquation), module, "ComplexOrdinaryDifferentialEquation", 0);
      }

      void t_ComplexOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "class_", make_descriptor(ComplexOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_ComplexOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_ComplexOrdinaryDifferentialEquation::wrap_Object(ComplexOrdinaryDifferentialEquation(((t_ComplexOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[kD", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$FieldSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$FieldSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$FieldSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$FieldSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_e3d0ff3c0584eadf] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_516a8e64a1c9fe68] = env->getMethodID(cls, "value", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkInputEdges_13edac039e8cc967] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_516a8e64a1c9fe68] = env->getMethodID(cls, "clampInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_normalizeInput_516a8e64a1c9fe68] = env->getMethodID(cls, "normalizeInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_e3d0ff3c0584eadf], a0));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_516a8e64a1c9fe68], a0, a1, a2.this$));
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data);
        static PyGetSetDef t_SmoothStepFactory$FieldSmoothStepFunction__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory$FieldSmoothStepFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory$FieldSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$FieldSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory$FieldSmoothStepFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::FieldPolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$FieldSmoothStepFunction, t_SmoothStepFactory$FieldSmoothStepFunction, SmoothStepFactory$FieldSmoothStepFunction);
        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(const SmoothStepFactory$FieldSmoothStepFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction), module, "SmoothStepFactory$FieldSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(SmoothStepFactory$FieldSmoothStepFunction(((t_SmoothStepFactory$FieldSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *ConvertingRuleFactory::class$ = NULL;
          jmethodID *ConvertingRuleFactory::mids$ = NULL;
          bool ConvertingRuleFactory::live$ = false;

          jclass ConvertingRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2acb91622ebd2832] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/gauss/FieldRuleFactory;)V");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConvertingRuleFactory::ConvertingRuleFactory(const ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory & a0) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_2acb91622ebd2832, a0.this$)) {}
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
          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args);
          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data);
          static PyGetSetDef t_ConvertingRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_ConvertingRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConvertingRuleFactory__methods_[] = {
            DECLARE_METHOD(t_ConvertingRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConvertingRuleFactory)[] = {
            { Py_tp_methods, t_ConvertingRuleFactory__methods_ },
            { Py_tp_init, (void *) t_ConvertingRuleFactory_init_ },
            { Py_tp_getset, t_ConvertingRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConvertingRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(ConvertingRuleFactory, t_ConvertingRuleFactory, ConvertingRuleFactory);
          PyObject *t_ConvertingRuleFactory::wrap_Object(const ConvertingRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ConvertingRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ConvertingRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(ConvertingRuleFactory), &PY_TYPE_DEF(ConvertingRuleFactory), module, "ConvertingRuleFactory", 0);
          }

          void t_ConvertingRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "class_", make_descriptor(ConvertingRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "wrapfn_", make_descriptor(t_ConvertingRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConvertingRuleFactory::initializeClass, 1)))
              return NULL;
            return t_ConvertingRuleFactory::wrap_Object(ConvertingRuleFactory(((t_ConvertingRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConvertingRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory a0((jobject) NULL);
            PyTypeObject **p0;
            ConvertingRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::gauss::t_FieldRuleFactory::parameters_))
            {
              INT_CALL(object = ConvertingRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data)
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
#include "org/orekit/gnss/metric/parser/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::MM = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NS = NULL;
          ::org::orekit::utils::units::Unit *Units::SEMI_CIRCLE = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              MM = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NS", "Lorg/orekit/utils/units/Unit;"));
              SEMI_CIRCLE = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SEMI_CIRCLE", "Lorg/orekit/utils/units/Unit;"));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "SEMI_CIRCLE", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::SEMI_CIRCLE)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
