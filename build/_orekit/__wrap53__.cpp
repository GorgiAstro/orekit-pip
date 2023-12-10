#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *EstimatedTroposphericModel::class$ = NULL;
          jmethodID *EstimatedTroposphericModel::mids$ = NULL;
          bool EstimatedTroposphericModel::live$ = false;
          ::java::lang::String *EstimatedTroposphericModel::TOTAL_ZENITH_DELAY = NULL;

          jclass EstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/EstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_73d05fd29ef2005b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_init$_63fe71cad1f79f0a] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TOTAL_ZENITH_DELAY = new ::java::lang::String(env->getStaticObjectField(cls, "TOTAL_ZENITH_DELAY", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedTroposphericModel::EstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::MappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73d05fd29ef2005b, a0.this$, a1)) {}

          EstimatedTroposphericModel::EstimatedTroposphericModel(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::MappingFunction & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63fe71cad1f79f0a, a0, a1, a2.this$, a3)) {}

          ::java::util::List EstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::CalculusFieldElement EstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble EstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self);
          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_EstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_EstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_EstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedTroposphericModel, t_EstimatedTroposphericModel, EstimatedTroposphericModel);

          void t_EstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedTroposphericModel), &PY_TYPE_DEF(EstimatedTroposphericModel), module, "EstimatedTroposphericModel", 0);
          }

          void t_EstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "class_", make_descriptor(EstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "wrapfn_", make_descriptor(t_EstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "TOTAL_ZENITH_DELAY", make_descriptor(j2p(*EstimatedTroposphericModel::TOTAL_ZENITH_DELAY)));
          }

          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedTroposphericModel::wrap_Object(EstimatedTroposphericModel(((t_EstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::models::earth::troposphere::MappingFunction a0((jobject) NULL);
                jdouble a1;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::MappingFunction a2((jobject) NULL);
                jdouble a3;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "DDkD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1, a2, a3));
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

          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args)
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

          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data)
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
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalArgumentException::class$ = NULL;
      jmethodID *MathIllegalArgumentException::mids$ = NULL;
      bool MathIllegalArgumentException::live$ = false;

      jclass MathIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_6ecc3fd6067c266c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalArgumentException::MathIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      MathIllegalArgumentException::MathIllegalArgumentException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_6ecc3fd6067c266c, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalArgumentException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalArgumentException)[] = {
        { Py_tp_methods, t_MathIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalArgumentException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalArgumentException, t_MathIllegalArgumentException, MathIllegalArgumentException);

      void t_MathIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalArgumentException), &PY_TYPE_DEF(MathIllegalArgumentException), module, "MathIllegalArgumentException", 0);
      }

      void t_MathIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "class_", make_descriptor(MathIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "wrapfn_", make_descriptor(t_MathIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalArgumentException::wrap_Object(MathIllegalArgumentException(((t_MathIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1));
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
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *KthSelector::class$ = NULL;
      jmethodID *KthSelector::mids$ = NULL;
      bool KthSelector::live$ = false;

      jclass KthSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/KthSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_7ed4e51422b10f61] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/PivotingStrategy;)V");
          mids$[mid_getPivotingStrategy_d098c6797f63b37e] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_select_32766843ea06b4a3] = env->getMethodID(cls, "select", "([D[II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KthSelector::KthSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      KthSelector::KthSelector(const ::org::hipparchus::util::PivotingStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ed4e51422b10f61, a0.this$)) {}

      ::org::hipparchus::util::PivotingStrategy KthSelector::getPivotingStrategy() const
      {
        return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_d098c6797f63b37e]));
      }

      jdouble KthSelector::select(const JArray< jdouble > & a0, const JArray< jint > & a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_select_32766843ea06b4a3], a0.this$, a1.this$, a2);
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
      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self);
      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args);
      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data);
      static PyGetSetDef t_KthSelector__fields_[] = {
        DECLARE_GET_FIELD(t_KthSelector, pivotingStrategy),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KthSelector__methods_[] = {
        DECLARE_METHOD(t_KthSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KthSelector, getPivotingStrategy, METH_NOARGS),
        DECLARE_METHOD(t_KthSelector, select, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KthSelector)[] = {
        { Py_tp_methods, t_KthSelector__methods_ },
        { Py_tp_init, (void *) t_KthSelector_init_ },
        { Py_tp_getset, t_KthSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KthSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KthSelector, t_KthSelector, KthSelector);

      void t_KthSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(KthSelector), &PY_TYPE_DEF(KthSelector), module, "KthSelector", 0);
      }

      void t_KthSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "class_", make_descriptor(KthSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "wrapfn_", make_descriptor(t_KthSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KthSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KthSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KthSelector::initializeClass, 1)))
          return NULL;
        return t_KthSelector::wrap_Object(KthSelector(((t_KthSelector *) arg)->object.this$));
      }
      static PyObject *t_KthSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KthSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KthSelector_init_(t_KthSelector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            KthSelector object((jobject) NULL);

            INT_CALL(object = KthSelector());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::util::PivotingStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            KthSelector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::util::PivotingStrategy::initializeClass, &a0, &p0, ::org::hipparchus::util::t_PivotingStrategy::parameters_))
            {
              INT_CALL(object = KthSelector(a0));
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

      static PyObject *t_KthSelector_getPivotingStrategy(t_KthSelector *self)
      {
        ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
      }

      static PyObject *t_KthSelector_select(t_KthSelector *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jint > a1((jobject) NULL);
        jint a2;
        jdouble result;

        if (!parseArgs(args, "[D[II", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.select(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "select", args);
        return NULL;
      }

      static PyObject *t_KthSelector_get__pivotingStrategy(t_KthSelector *self, void *data)
      {
        ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivotingStrategy());
        return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Tuple::class$ = NULL;
      jmethodID *Tuple::mids$ = NULL;
      bool Tuple::live$ = false;

      jclass Tuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Tuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_abs_d9288005ba44d28d] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acos_d9288005ba44d28d] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_acosh_d9288005ba44d28d] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_6c06f9afb21901b2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_add_4833aa97a9d8973e] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_asin_d9288005ba44d28d] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_asinh_d9288005ba44d28d] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan_d9288005ba44d28d] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_atan2_6c06f9afb21901b2] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_atanh_d9288005ba44d28d] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cbrt_d9288005ba44d28d] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ceil_d9288005ba44d28d] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_6c06f9afb21901b2] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_copySign_4833aa97a9d8973e] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_cos_d9288005ba44d28d] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_cosh_d9288005ba44d28d] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_6c06f9afb21901b2] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_divide_4833aa97a9d8973e] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_d9288005ba44d28d] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_expm1_d9288005ba44d28d] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_floor_d9288005ba44d28d] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getComponent_46f85b53d9aedd96] = env->getMethodID(cls, "getComponent", "(I)D");
          mids$[mid_getComponents_60c7040667a7dc5c] = env->getMethodID(cls, "getComponents", "()[D");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_d9288005ba44d28d] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_6c06f9afb21901b2] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_5e69d1b114b5d0d7] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_7dd468971ce76cbc] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Tuple;[Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_34782246f40302b2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_b317b6b70a98d429] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_235c7e69b41265b5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_577a20cdb3ad4517] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_045549e2452b181f] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_linearCombination_13d8a1345cdfe462] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;DLorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_log_d9288005ba44d28d] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log10_d9288005ba44d28d] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_log1p_d9288005ba44d28d] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_6c06f9afb21901b2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_4833aa97a9d8973e] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_multiply_7676ee274236867c] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_negate_d9288005ba44d28d] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_newInstance_4833aa97a9d8973e] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_6c06f9afb21901b2] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_4833aa97a9d8973e] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_pow_7676ee274236867c] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_reciprocal_d9288005ba44d28d] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_6c06f9afb21901b2] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_remainder_4833aa97a9d8973e] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_rint_d9288005ba44d28d] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_rootN_7676ee274236867c] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_scalb_7676ee274236867c] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Tuple;");
          mids$[mid_sign_d9288005ba44d28d] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sin_d9288005ba44d28d] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_d9288005ba44d28d] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_d9288005ba44d28d] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_6c06f9afb21901b2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Tuple;)Lorg/hipparchus/util/Tuple;");
          mids$[mid_subtract_4833aa97a9d8973e] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Tuple;");
          mids$[mid_tan_d9288005ba44d28d] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_tanh_d9288005ba44d28d] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toDegrees_d9288005ba44d28d] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_toRadians_d9288005ba44d28d] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Tuple;");
          mids$[mid_ulp_d9288005ba44d28d] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Tuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Tuple::Tuple(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      Tuple Tuple::abs() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_abs_d9288005ba44d28d]));
      }

      Tuple Tuple::acos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acos_d9288005ba44d28d]));
      }

      Tuple Tuple::acosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_acosh_d9288005ba44d28d]));
      }

      Tuple Tuple::add(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::add(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_add_4833aa97a9d8973e], a0));
      }

      Tuple Tuple::asin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asin_d9288005ba44d28d]));
      }

      Tuple Tuple::asinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_asinh_d9288005ba44d28d]));
      }

      Tuple Tuple::atan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan_d9288005ba44d28d]));
      }

      Tuple Tuple::atan2(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atan2_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::atanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_atanh_d9288005ba44d28d]));
      }

      Tuple Tuple::cbrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cbrt_d9288005ba44d28d]));
      }

      Tuple Tuple::ceil() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ceil_d9288005ba44d28d]));
      }

      Tuple Tuple::copySign(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::copySign(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_copySign_4833aa97a9d8973e], a0));
      }

      Tuple Tuple::cos() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cos_d9288005ba44d28d]));
      }

      Tuple Tuple::cosh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_cosh_d9288005ba44d28d]));
      }

      Tuple Tuple::divide(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::divide(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_divide_4833aa97a9d8973e], a0));
      }

      jboolean Tuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      Tuple Tuple::exp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_exp_d9288005ba44d28d]));
      }

      Tuple Tuple::expm1() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_expm1_d9288005ba44d28d]));
      }

      Tuple Tuple::floor() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_floor_d9288005ba44d28d]));
      }

      jdouble Tuple::getComponent(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getComponent_46f85b53d9aedd96], a0);
      }

      JArray< jdouble > Tuple::getComponents() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getComponents_60c7040667a7dc5c]));
      }

      jint Tuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::Field Tuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      Tuple Tuple::getPi() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_getPi_d9288005ba44d28d]));
      }

      jdouble Tuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      jint Tuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      Tuple Tuple::hypot(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_hypot_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::linearCombination(const JArray< jdouble > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_5e69d1b114b5d0d7], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const JArray< Tuple > & a0, const JArray< Tuple > & a1) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_7dd468971ce76cbc], a0.this$, a1.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_34782246f40302b2], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_b317b6b70a98d429], a0, a1.this$, a2, a3.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_235c7e69b41265b5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_577a20cdb3ad4517], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Tuple Tuple::linearCombination(const Tuple & a0, const Tuple & a1, const Tuple & a2, const Tuple & a3, const Tuple & a4, const Tuple & a5, const Tuple & a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_045549e2452b181f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Tuple Tuple::linearCombination(jdouble a0, const Tuple & a1, jdouble a2, const Tuple & a3, jdouble a4, const Tuple & a5, jdouble a6, const Tuple & a7) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_linearCombination_13d8a1345cdfe462], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Tuple Tuple::log() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log_d9288005ba44d28d]));
      }

      Tuple Tuple::log10() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log10_d9288005ba44d28d]));
      }

      Tuple Tuple::log1p() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_log1p_d9288005ba44d28d]));
      }

      Tuple Tuple::multiply(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::multiply(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_4833aa97a9d8973e], a0));
      }

      Tuple Tuple::multiply(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_multiply_7676ee274236867c], a0));
      }

      Tuple Tuple::negate() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_negate_d9288005ba44d28d]));
      }

      Tuple Tuple::newInstance(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_newInstance_4833aa97a9d8973e], a0));
      }

      Tuple Tuple::pow(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::pow(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_4833aa97a9d8973e], a0));
      }

      Tuple Tuple::pow(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_pow_7676ee274236867c], a0));
      }

      Tuple Tuple::reciprocal() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_reciprocal_d9288005ba44d28d]));
      }

      Tuple Tuple::remainder(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::remainder(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_remainder_4833aa97a9d8973e], a0));
      }

      Tuple Tuple::rint() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rint_d9288005ba44d28d]));
      }

      Tuple Tuple::rootN(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_rootN_7676ee274236867c], a0));
      }

      Tuple Tuple::scalb(jint a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_scalb_7676ee274236867c], a0));
      }

      Tuple Tuple::sign() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sign_d9288005ba44d28d]));
      }

      Tuple Tuple::sin() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sin_d9288005ba44d28d]));
      }

      ::org::hipparchus::util::FieldSinCos Tuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
      }

      Tuple Tuple::sinh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sinh_d9288005ba44d28d]));
      }

      ::org::hipparchus::util::FieldSinhCosh Tuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
      }

      Tuple Tuple::sqrt() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_sqrt_d9288005ba44d28d]));
      }

      Tuple Tuple::subtract(const Tuple & a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_6c06f9afb21901b2], a0.this$));
      }

      Tuple Tuple::subtract(jdouble a0) const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_subtract_4833aa97a9d8973e], a0));
      }

      Tuple Tuple::tan() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tan_d9288005ba44d28d]));
      }

      Tuple Tuple::tanh() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_tanh_d9288005ba44d28d]));
      }

      Tuple Tuple::toDegrees() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toDegrees_d9288005ba44d28d]));
      }

      Tuple Tuple::toRadians() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_toRadians_d9288005ba44d28d]));
      }

      Tuple Tuple::ulp() const
      {
        return Tuple(env->callObjectMethod(this$, mids$[mid_ulp_d9288005ba44d28d]));
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
      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Tuple_abs(t_Tuple *self);
      static PyObject *t_Tuple_acos(t_Tuple *self);
      static PyObject *t_Tuple_acosh(t_Tuple *self);
      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_asin(t_Tuple *self);
      static PyObject *t_Tuple_asinh(t_Tuple *self);
      static PyObject *t_Tuple_atan(t_Tuple *self);
      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_atanh(t_Tuple *self);
      static PyObject *t_Tuple_cbrt(t_Tuple *self);
      static PyObject *t_Tuple_ceil(t_Tuple *self);
      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_cos(t_Tuple *self);
      static PyObject *t_Tuple_cosh(t_Tuple *self);
      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_exp(t_Tuple *self);
      static PyObject *t_Tuple_expm1(t_Tuple *self);
      static PyObject *t_Tuple_floor(t_Tuple *self);
      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_getComponents(t_Tuple *self);
      static PyObject *t_Tuple_getDimension(t_Tuple *self);
      static PyObject *t_Tuple_getField(t_Tuple *self);
      static PyObject *t_Tuple_getPi(t_Tuple *self);
      static PyObject *t_Tuple_getReal(t_Tuple *self);
      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_log(t_Tuple *self);
      static PyObject *t_Tuple_log10(t_Tuple *self);
      static PyObject *t_Tuple_log1p(t_Tuple *self);
      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_negate(t_Tuple *self);
      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_reciprocal(t_Tuple *self);
      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_rint(t_Tuple *self);
      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg);
      static PyObject *t_Tuple_sign(t_Tuple *self);
      static PyObject *t_Tuple_sin(t_Tuple *self);
      static PyObject *t_Tuple_sinCos(t_Tuple *self);
      static PyObject *t_Tuple_sinh(t_Tuple *self);
      static PyObject *t_Tuple_sinhCosh(t_Tuple *self);
      static PyObject *t_Tuple_sqrt(t_Tuple *self);
      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args);
      static PyObject *t_Tuple_tan(t_Tuple *self);
      static PyObject *t_Tuple_tanh(t_Tuple *self);
      static PyObject *t_Tuple_toDegrees(t_Tuple *self);
      static PyObject *t_Tuple_toRadians(t_Tuple *self);
      static PyObject *t_Tuple_ulp(t_Tuple *self);
      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data);
      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data);
      static PyGetSetDef t_Tuple__fields_[] = {
        DECLARE_GET_FIELD(t_Tuple, components),
        DECLARE_GET_FIELD(t_Tuple, dimension),
        DECLARE_GET_FIELD(t_Tuple, field),
        DECLARE_GET_FIELD(t_Tuple, pi),
        DECLARE_GET_FIELD(t_Tuple, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Tuple__methods_[] = {
        DECLARE_METHOD(t_Tuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Tuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, add, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, atan2, METH_O),
        DECLARE_METHOD(t_Tuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getComponent, METH_O),
        DECLARE_METHOD(t_Tuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, hypot, METH_O),
        DECLARE_METHOD(t_Tuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, log, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, newInstance, METH_O),
        DECLARE_METHOD(t_Tuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, rootN, METH_O),
        DECLARE_METHOD(t_Tuple, scalb, METH_O),
        DECLARE_METHOD(t_Tuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Tuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Tuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Tuple)[] = {
        { Py_tp_methods, t_Tuple__methods_ },
        { Py_tp_init, (void *) t_Tuple_init_ },
        { Py_tp_getset, t_Tuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Tuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Tuple, t_Tuple, Tuple);

      void t_Tuple::install(PyObject *module)
      {
        installType(&PY_TYPE(Tuple), &PY_TYPE_DEF(Tuple), module, "Tuple", 0);
      }

      void t_Tuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "class_", make_descriptor(Tuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "wrapfn_", make_descriptor(t_Tuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Tuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Tuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Tuple::initializeClass, 1)))
          return NULL;
        return t_Tuple::wrap_Object(Tuple(((t_Tuple *) arg)->object.this$));
      }
      static PyObject *t_Tuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Tuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Tuple_init_(t_Tuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        Tuple object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = Tuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Tuple_abs(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_acosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_add(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Tuple_asin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_asinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_atan2(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Tuple_atanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cbrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ceil(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_copySign(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Tuple_cos(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_cosh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_divide(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Tuple_equals(t_Tuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Tuple_exp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_expm1(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_floor(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getComponent(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_Tuple_getComponents(t_Tuple *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return result.wrap();
      }

      static PyObject *t_Tuple_getDimension(t_Tuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Tuple_getField(t_Tuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_getPi(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_getReal(t_Tuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Tuple_hashCode(t_Tuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Tuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Tuple_hypot(t_Tuple *self, PyObject *arg)
      {
        Tuple a0((jobject) NULL);
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "k", Tuple::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Tuple_linearCombination(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            JArray< Tuple > a0((jobject) NULL);
            JArray< Tuple > a1((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Tuple::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Tuple a0((jobject) NULL);
            Tuple a1((jobject) NULL);
            Tuple a2((jobject) NULL);
            Tuple a3((jobject) NULL);
            Tuple a4((jobject) NULL);
            Tuple a5((jobject) NULL);
            Tuple a6((jobject) NULL);
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple a1((jobject) NULL);
            jdouble a2;
            Tuple a3((jobject) NULL);
            jdouble a4;
            Tuple a5((jobject) NULL);
            jdouble a6;
            Tuple a7((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, Tuple::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Tuple_log(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log10(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_log1p(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_multiply(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Tuple_negate(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_newInstance(t_Tuple *self, PyObject *arg)
      {
        jdouble a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Tuple_pow(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jint a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Tuple_reciprocal(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_remainder(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Tuple_rint(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_rootN(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Tuple_scalb(t_Tuple *self, PyObject *arg)
      {
        jint a0;
        Tuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Tuple::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Tuple_sign(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sin(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinCos(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sinh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_sinhCosh(t_Tuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Tuple));
      }

      static PyObject *t_Tuple_sqrt(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_subtract(t_Tuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Tuple a0((jobject) NULL);
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "k", Tuple::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Tuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Tuple::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Tuple_tan(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_tanh(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toDegrees(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_toRadians(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_ulp(t_Tuple *self)
      {
        Tuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Tuple::wrap_Object(result);
      }

      static PyObject *t_Tuple_get__components(t_Tuple *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return value.wrap();
      }

      static PyObject *t_Tuple_get__dimension(t_Tuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Tuple_get__field(t_Tuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__pi(t_Tuple *self, void *data)
      {
        Tuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Tuple::wrap_Object(value);
      }

      static PyObject *t_Tuple_get__real(t_Tuple *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateFunction::class$ = NULL;
      jmethodID *UnivariateFunction::mids$ = NULL;
      bool UnivariateFunction::live$ = false;

      jclass UnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble UnivariateFunction::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
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
      static PyObject *t_UnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateFunction_value(t_UnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateFunction)[] = {
        { Py_tp_methods, t_UnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateFunction, t_UnivariateFunction, UnivariateFunction);

      void t_UnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateFunction), &PY_TYPE_DEF(UnivariateFunction), module, "UnivariateFunction", 0);
      }

      void t_UnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "class_", make_descriptor(UnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "wrapfn_", make_descriptor(t_UnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateFunction::wrap_Object(UnivariateFunction(((t_UnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateFunction_value(t_UnivariateFunction *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Arc::class$ = NULL;
          jmethodID *Arc::mids$ = NULL;
          bool Arc::live$ = false;

          jclass Arc::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Arc");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_checkPoint_b9b1c43283079b9b] = env->getMethodID(cls, "checkPoint", "(D)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_dff5885c2c873297] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_dff5885c2c873297] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getOffset_999b5f6d06de13e8] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_getOffset_dcbc7ce2902fa136] = env->getMethodID(cls, "getOffset", "(D)D");
              mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_dff5885c2c873297] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Arc::Arc(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Arc::checkPoint(jdouble a0) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_b9b1c43283079b9b], a0));
          }

          jdouble Arc::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_dff5885c2c873297]);
          }

          jdouble Arc::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_dff5885c2c873297]);
          }

          jdouble Arc::getOffset(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_999b5f6d06de13e8], a0.this$);
          }

          jdouble Arc::getOffset(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_dcbc7ce2902fa136], a0);
          }

          jdouble Arc::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
          }

          jdouble Arc::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_dff5885c2c873297]);
          }

          jdouble Arc::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
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
          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg);
          static PyObject *t_Arc_getBarycenter(t_Arc *self);
          static PyObject *t_Arc_getInf(t_Arc *self);
          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args);
          static PyObject *t_Arc_getSize(t_Arc *self);
          static PyObject *t_Arc_getSup(t_Arc *self);
          static PyObject *t_Arc_getTolerance(t_Arc *self);
          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data);
          static PyObject *t_Arc_get__inf(t_Arc *self, void *data);
          static PyObject *t_Arc_get__size(t_Arc *self, void *data);
          static PyObject *t_Arc_get__sup(t_Arc *self, void *data);
          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data);
          static PyGetSetDef t_Arc__fields_[] = {
            DECLARE_GET_FIELD(t_Arc, barycenter),
            DECLARE_GET_FIELD(t_Arc, inf),
            DECLARE_GET_FIELD(t_Arc, size),
            DECLARE_GET_FIELD(t_Arc, sup),
            DECLARE_GET_FIELD(t_Arc, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Arc__methods_[] = {
            DECLARE_METHOD(t_Arc, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, checkPoint, METH_O),
            DECLARE_METHOD(t_Arc, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Arc, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getSup, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getTolerance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Arc)[] = {
            { Py_tp_methods, t_Arc__methods_ },
            { Py_tp_init, (void *) t_Arc_init_ },
            { Py_tp_getset, t_Arc__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Arc)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Arc, t_Arc, Arc);

          void t_Arc::install(PyObject *module)
          {
            installType(&PY_TYPE(Arc), &PY_TYPE_DEF(Arc), module, "Arc", 0);
          }

          void t_Arc::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "class_", make_descriptor(Arc::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "wrapfn_", make_descriptor(t_Arc::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Arc::initializeClass, 1)))
              return NULL;
            return t_Arc::wrap_Object(Arc(((t_Arc *) arg)->object.this$));
          }
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Arc::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            Arc object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = Arc(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.checkPoint(a0));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
            return NULL;
          }

          static PyObject *t_Arc_getBarycenter(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getInf(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Arc_getSize(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getSup(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getTolerance(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__inf(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__size(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__sup(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformRealDistribution::UniformRealDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        UniformRealDistribution::UniformRealDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble UniformRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble UniformRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble UniformRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble UniformRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble UniformRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble UniformRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble UniformRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean UniformRealDistribution::isSupportConnected() const
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
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *MessageWriter::class$ = NULL;
            jmethodID *MessageWriter::mids$ = NULL;
            bool MessageWriter::live$ = false;

            jclass MessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/MessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFormatVersionKey_11b109bd155ca898] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_11b109bd155ca898] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_dff5885c2c873297] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_writeFooter_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_48090222d5fb583c] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeMessage_0998ca77618694ad] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
                mids$[mid_writeSegment_6a1f0a7164a88e0a] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String MessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_11b109bd155ca898]));
            }

            ::java::lang::String MessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_11b109bd155ca898]));
            }

            jdouble MessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_dff5885c2c873297]);
            }

            void MessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_6d745cf7b26e9f5d], a0.this$);
            }

            void MessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_48090222d5fb583c], a0.this$, a1.this$);
            }

            void MessageWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeMessage_0998ca77618694ad], a0.this$, a1.this$);
            }

            void MessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_6a1f0a7164a88e0a], a0.this$, a1.this$);
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
          namespace generation {
            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self);
            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg);
            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data);
            static PyGetSetDef t_MessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_MessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageWriter, root),
              DECLARE_GET_FIELD(t_MessageWriter, version),
              DECLARE_GET_FIELD(t_MessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageWriter__methods_[] = {
              DECLARE_METHOD(t_MessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_MessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeMessage, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageWriter)[] = {
              { Py_tp_methods, t_MessageWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageWriter, t_MessageWriter, MessageWriter);
            PyObject *t_MessageWriter::wrap_Object(const MessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_MessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_MessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageWriter), &PY_TYPE_DEF(MessageWriter), module, "MessageWriter", 0);
            }

            void t_MessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "class_", make_descriptor(MessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "wrapfn_", make_descriptor(t_MessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageWriter::initializeClass, 1)))
                return NULL;
              return t_MessageWriter::wrap_Object(MessageWriter(((t_MessageWriter *) arg)->object.this$));
            }
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
              {
                OBJ_CALL(self->object.writeMessage(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/orekit/propagation/analytical/gnss/data/GNSSConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSConstants::class$ = NULL;
            jmethodID *GNSSConstants::mids$ = NULL;
            bool GNSSConstants::live$ = false;
            jdouble GNSSConstants::BEIDOU_AV = (jdouble) 0;
            jdouble GNSSConstants::BEIDOU_MU = (jdouble) 0;
            jint GNSSConstants::BEIDOU_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GALILEO_AV = (jdouble) 0;
            jdouble GNSSConstants::GALILEO_MU = (jdouble) 0;
            jint GNSSConstants::GALILEO_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GLONASS_MU = (jdouble) 0;
            jdouble GNSSConstants::GLONASS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_WEEK_IN_SECONDS = (jdouble) 0;
            jdouble GNSSConstants::GPS_AV = (jdouble) 0;
            jdouble GNSSConstants::GPS_MU = (jdouble) 0;
            jint GNSSConstants::GPS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::IRNSS_AV = (jdouble) 0;
            jdouble GNSSConstants::IRNSS_MU = (jdouble) 0;
            jint GNSSConstants::IRNSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::QZSS_AV = (jdouble) 0;
            jdouble GNSSConstants::QZSS_MU = (jdouble) 0;
            jint GNSSConstants::QZSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::SBAS_MU = (jdouble) 0;

            jclass GNSSConstants::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSConstants");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BEIDOU_AV = env->getStaticDoubleField(cls, "BEIDOU_AV");
                BEIDOU_MU = env->getStaticDoubleField(cls, "BEIDOU_MU");
                BEIDOU_WEEK_NB = env->getStaticIntField(cls, "BEIDOU_WEEK_NB");
                GALILEO_AV = env->getStaticDoubleField(cls, "GALILEO_AV");
                GALILEO_MU = env->getStaticDoubleField(cls, "GALILEO_MU");
                GALILEO_WEEK_NB = env->getStaticIntField(cls, "GALILEO_WEEK_NB");
                GLONASS_MU = env->getStaticDoubleField(cls, "GLONASS_MU");
                GLONASS_PI = env->getStaticDoubleField(cls, "GLONASS_PI");
                GNSS_PI = env->getStaticDoubleField(cls, "GNSS_PI");
                GNSS_WEEK_IN_SECONDS = env->getStaticDoubleField(cls, "GNSS_WEEK_IN_SECONDS");
                GPS_AV = env->getStaticDoubleField(cls, "GPS_AV");
                GPS_MU = env->getStaticDoubleField(cls, "GPS_MU");
                GPS_WEEK_NB = env->getStaticIntField(cls, "GPS_WEEK_NB");
                IRNSS_AV = env->getStaticDoubleField(cls, "IRNSS_AV");
                IRNSS_MU = env->getStaticDoubleField(cls, "IRNSS_MU");
                IRNSS_WEEK_NB = env->getStaticIntField(cls, "IRNSS_WEEK_NB");
                QZSS_AV = env->getStaticDoubleField(cls, "QZSS_AV");
                QZSS_MU = env->getStaticDoubleField(cls, "QZSS_MU");
                QZSS_WEEK_NB = env->getStaticIntField(cls, "QZSS_WEEK_NB");
                SBAS_MU = env->getStaticDoubleField(cls, "SBAS_MU");
                live$ = true;
              }
              return (jclass) class$->this$;
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
            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_GNSSConstants__methods_[] = {
              DECLARE_METHOD(t_GNSSConstants, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSConstants, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSConstants)[] = {
              { Py_tp_methods, t_GNSSConstants__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSConstants)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GNSSConstants, t_GNSSConstants, GNSSConstants);

            void t_GNSSConstants::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSConstants), &PY_TYPE_DEF(GNSSConstants), module, "GNSSConstants", 0);
            }

            void t_GNSSConstants::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "class_", make_descriptor(GNSSConstants::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "wrapfn_", make_descriptor(t_GNSSConstants::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "boxfn_", make_descriptor(boxObject));
              env->getClass(GNSSConstants::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_AV", make_descriptor(GNSSConstants::BEIDOU_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_MU", make_descriptor(GNSSConstants::BEIDOU_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_WEEK_NB", make_descriptor(GNSSConstants::BEIDOU_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_AV", make_descriptor(GNSSConstants::GALILEO_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_MU", make_descriptor(GNSSConstants::GALILEO_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_WEEK_NB", make_descriptor(GNSSConstants::GALILEO_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_MU", make_descriptor(GNSSConstants::GLONASS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_PI", make_descriptor(GNSSConstants::GLONASS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_PI", make_descriptor(GNSSConstants::GNSS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_WEEK_IN_SECONDS", make_descriptor(GNSSConstants::GNSS_WEEK_IN_SECONDS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_AV", make_descriptor(GNSSConstants::GPS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_MU", make_descriptor(GNSSConstants::GPS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_WEEK_NB", make_descriptor(GNSSConstants::GPS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_AV", make_descriptor(GNSSConstants::IRNSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_MU", make_descriptor(GNSSConstants::IRNSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_WEEK_NB", make_descriptor(GNSSConstants::IRNSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_AV", make_descriptor(GNSSConstants::QZSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_MU", make_descriptor(GNSSConstants::QZSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_WEEK_NB", make_descriptor(GNSSConstants::QZSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "SBAS_MU", make_descriptor(GNSSConstants::SBAS_MU));
            }

            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSConstants::initializeClass, 1)))
                return NULL;
              return t_GNSSConstants::wrap_Object(GNSSConstants(((t_GNSSConstants *) arg)->object.this$));
            }
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSConstants::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/HatanakaCompressFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *HatanakaCompressFilter::class$ = NULL;
        jmethodID *HatanakaCompressFilter::mids$ = NULL;
        bool HatanakaCompressFilter::live$ = false;

        jclass HatanakaCompressFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/HatanakaCompressFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_filter_716adf7a6da8b4d7] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HatanakaCompressFilter::HatanakaCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::data::DataSource HatanakaCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_716adf7a6da8b4d7], a0.this$));
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
        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg);

        static PyMethodDef t_HatanakaCompressFilter__methods_[] = {
          DECLARE_METHOD(t_HatanakaCompressFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, filter, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HatanakaCompressFilter)[] = {
          { Py_tp_methods, t_HatanakaCompressFilter__methods_ },
          { Py_tp_init, (void *) t_HatanakaCompressFilter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HatanakaCompressFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HatanakaCompressFilter, t_HatanakaCompressFilter, HatanakaCompressFilter);

        void t_HatanakaCompressFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(HatanakaCompressFilter), &PY_TYPE_DEF(HatanakaCompressFilter), module, "HatanakaCompressFilter", 0);
        }

        void t_HatanakaCompressFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "class_", make_descriptor(HatanakaCompressFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "wrapfn_", make_descriptor(t_HatanakaCompressFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HatanakaCompressFilter::initializeClass, 1)))
            return NULL;
          return t_HatanakaCompressFilter::wrap_Object(HatanakaCompressFilter(((t_HatanakaCompressFilter *) arg)->object.this$));
        }
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HatanakaCompressFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds)
        {
          HatanakaCompressFilter object((jobject) NULL);

          INT_CALL(object = HatanakaCompressFilter());
          self->object = object;

          return 0;
        }

        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::data::DataSource result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.filter(a0));
            return ::org::orekit::data::t_DataSource::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TopocentricFrame::class$ = NULL;
      jmethodID *TopocentricFrame::mids$ = NULL;
      bool TopocentricFrame::live$ = false;

      jclass TopocentricFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TopocentricFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_22214b4e0a0618d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/orekit/bodies/GeodeticPoint;Ljava/lang/String;)V");
          mids$[mid_computeLimitVisibilityPoint_e0252b988abb1621] = env->getMethodID(cls, "computeLimitVisibilityPoint", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getAzimuth_8c23f60ad4db1eb6] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getAzimuth_a11434d7a0d8b70a] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCartesianPoint_d52645e0d4c07563] = env->getMethodID(cls, "getCartesianPoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getEast_d52645e0d4c07563] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getElevation_8c23f60ad4db1eb6] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getElevation_a11434d7a0d8b70a] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_d52645e0d4c07563] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_d52645e0d4c07563] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getParentShape_6f78da94fd048d9d] = env->getMethodID(cls, "getParentShape", "()Lorg/orekit/bodies/BodyShape;");
          mids$[mid_getPoint_82d0a9bcd06489bb] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPoint_2b46ad9185564a13] = env->getMethodID(cls, "getPoint", "(Lorg/hipparchus/Field;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getPosition_41a826780212dfea] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRange_a11434d7a0d8b70a] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_8c23f60ad4db1eb6] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRangeRate_79226fc2f8237988] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRangeRate_d352cafcc3467c37] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSouth_d52645e0d4c07563] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTrackingCoordinates_eaeabf0239522653] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TrackingCoordinates;");
          mids$[mid_getTrackingCoordinates_2f7baca1366109eb] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldTrackingCoordinates;");
          mids$[mid_getWest_d52645e0d4c07563] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_d52645e0d4c07563] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAtDistance_e0252b988abb1621] = env->getMethodID(cls, "pointAtDistance", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TopocentricFrame::TopocentricFrame(const ::org::orekit::bodies::BodyShape & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_22214b4e0a0618d9, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::computeLimitVisibilityPoint(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_computeLimitVisibilityPoint_e0252b988abb1621], a0, a1, a2));
      }

      jdouble TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_8c23f60ad4db1eb6], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_a11434d7a0d8b70a], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getCartesianPoint() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianPoint_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_d52645e0d4c07563]));
      }

      jdouble TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_8c23f60ad4db1eb6], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_a11434d7a0d8b70a], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_d52645e0d4c07563]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TopocentricFrame::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::BodyShape TopocentricFrame::getParentShape() const
      {
        return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getParentShape_6f78da94fd048d9d]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_82d0a9bcd06489bb]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint TopocentricFrame::getPoint(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_2b46ad9185564a13], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_41a826780212dfea], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_a11434d7a0d8b70a], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_8c23f60ad4db1eb6], a0.this$, a1.this$, a2.this$);
      }

      jdouble TopocentricFrame::getRangeRate(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRangeRate_79226fc2f8237988], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRangeRate(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRangeRate_d352cafcc3467c37], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_d52645e0d4c07563]));
      }

      ::org::orekit::utils::TrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_eaeabf0239522653], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::FieldTrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::utils::FieldTrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_2f7baca1366109eb], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_d52645e0d4c07563]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::pointAtDistance(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_e0252b988abb1621], a0, a1, a2));
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
      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data);
      static PyGetSetDef t_TopocentricFrame__fields_[] = {
        DECLARE_GET_FIELD(t_TopocentricFrame, cartesianPoint),
        DECLARE_GET_FIELD(t_TopocentricFrame, east),
        DECLARE_GET_FIELD(t_TopocentricFrame, nadir),
        DECLARE_GET_FIELD(t_TopocentricFrame, north),
        DECLARE_GET_FIELD(t_TopocentricFrame, parentShape),
        DECLARE_GET_FIELD(t_TopocentricFrame, point),
        DECLARE_GET_FIELD(t_TopocentricFrame, south),
        DECLARE_GET_FIELD(t_TopocentricFrame, west),
        DECLARE_GET_FIELD(t_TopocentricFrame, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TopocentricFrame__methods_[] = {
        DECLARE_METHOD(t_TopocentricFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, computeLimitVisibilityPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getAzimuth, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getCartesianPoint, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getEast, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getElevation, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getParentShape, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRange, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRangeRate, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getTrackingCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getWest, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, pointAtDistance, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TopocentricFrame)[] = {
        { Py_tp_methods, t_TopocentricFrame__methods_ },
        { Py_tp_init, (void *) t_TopocentricFrame_init_ },
        { Py_tp_getset, t_TopocentricFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TopocentricFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TopocentricFrame, t_TopocentricFrame, TopocentricFrame);

      void t_TopocentricFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TopocentricFrame), &PY_TYPE_DEF(TopocentricFrame), module, "TopocentricFrame", 0);
      }

      void t_TopocentricFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "class_", make_descriptor(TopocentricFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "wrapfn_", make_descriptor(t_TopocentricFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TopocentricFrame::initializeClass, 1)))
          return NULL;
        return t_TopocentricFrame::wrap_Object(TopocentricFrame(((t_TopocentricFrame *) arg)->object.this$));
      }
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TopocentricFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::BodyShape a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        TopocentricFrame object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TopocentricFrame(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeLimitVisibilityPoint(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeLimitVisibilityPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAzimuth", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self)
      {
        ::org::orekit::bodies::BodyShape result((jobject) NULL);
        OBJ_CALL(result = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getPoint());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRange", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRangeRate", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldTrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_FieldTrackingCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::TrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_TrackingCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTrackingCoordinates", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::BodyShape value((jobject) NULL);
        OBJ_CALL(value = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSObserver::class$ = NULL;
        jmethodID *BatchLSObserver::mids$ = NULL;
        bool BatchLSObserver::live$ = false;

        jclass BatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_1c346acaad15e94a] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BatchLSObserver::evaluationPerformed(jint a0, jint a1, const JArray< ::org::orekit::orbits::Orbit > & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::utils::ParameterDriversList & a4, const ::org::orekit::utils::ParameterDriversList & a5, const ::org::orekit::estimation::measurements::EstimationsProvider & a6, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a7) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_1c346acaad15e94a], a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$);
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
      namespace leastsquares {
        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args);

        static PyMethodDef t_BatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_BatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, evaluationPerformed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSObserver)[] = {
          { Py_tp_methods, t_BatchLSObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSObserver, t_BatchLSObserver, BatchLSObserver);

        void t_BatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSObserver), &PY_TYPE_DEF(BatchLSObserver), module, "BatchLSObserver", 0);
        }

        void t_BatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "class_", make_descriptor(BatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "wrapfn_", make_descriptor(t_BatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_BatchLSObserver::wrap_Object(BatchLSObserver(((t_BatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::orbits::Orbit > a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a4((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a5((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimationsProvider a6((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a7((jobject) NULL);

          if (!parseArgs(args, "II[kkkkkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::measurements::EstimationsProvider::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", args);
          return NULL;
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
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
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

        ::java::util::List AttitudeEphemerisFile$AttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_2afa36052df4765d]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$AttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_f95b60a986adb964]));
        }

        ::org::orekit::utils::AngularDerivativesFilter AttitudeEphemerisFile$AttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c]));
        }

        ::java::lang::String AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_11b109bd155ca898]));
        }

        jint AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        ::org::orekit::frames::Frame AttitudeEphemerisFile$AttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *MatricesHarvester::class$ = NULL;
      jmethodID *MatricesHarvester::mids$ = NULL;
      bool MatricesHarvester::live$ = false;

      jclass MatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/MatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_9483b2ac438718ce] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setReferenceState_0ee5c56004643a2e] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MatricesHarvester::getJacobiansColumnsNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_2afa36052df4765d]));
      }

      ::org::orekit::orbits::OrbitType MatricesHarvester::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_9483b2ac438718ce], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType MatricesHarvester::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_9483b2ac438718ce], a0.this$));
      }

      void MatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_0ee5c56004643a2e], a0.this$);
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
      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data);
      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data);
      static PyGetSetDef t_MatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_MatricesHarvester, jacobiansColumnsNames),
        DECLARE_GET_FIELD(t_MatricesHarvester, orbitType),
        DECLARE_GET_FIELD(t_MatricesHarvester, positionAngleType),
        DECLARE_SET_FIELD(t_MatricesHarvester, referenceState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_MatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, getJacobiansColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatricesHarvester)[] = {
        { Py_tp_methods, t_MatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatricesHarvester, t_MatricesHarvester, MatricesHarvester);

      void t_MatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(MatricesHarvester), &PY_TYPE_DEF(MatricesHarvester), module, "MatricesHarvester", 0);
      }

      void t_MatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "class_", make_descriptor(MatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "wrapfn_", make_descriptor(t_MatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_MatricesHarvester::wrap_Object(MatricesHarvester(((t_MatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonSphericalHarmonicsProvider::live$ = false;

          jclass PythonSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_dff5885c2c873297] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSphericalHarmonicsProvider::PythonSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self);
          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSphericalHarmonicsProvider, t_PythonSphericalHarmonicsProvider, PythonSphericalHarmonicsProvider);

          void t_PythonSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonSphericalHarmonicsProvider), module, "PythonSphericalHarmonicsProvider", 1);
          }

          void t_PythonSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "class_", make_descriptor(PythonSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonSphericalHarmonicsProvider_getTideSystem5 },
              { "pythonDecRef", "()V", (void *) t_PythonSphericalHarmonicsProvider_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonSphericalHarmonicsProvider::wrap_Object(PythonSphericalHarmonicsProvider(((t_PythonSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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

          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmData::class$ = NULL;
            jmethodID *CdmData::mids$ = NULL;
            bool CdmData::live$ = false;

            jclass CdmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_96338e7c95f1ecb0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_init$_09d1eb9223cc21d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_a288a8b537c88185] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_e02ed3ddb4a798e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_getAdditionalCovMetadataBlock_da19d9ac6b23a229] = env->getMethodID(cls, "getAdditionalCovMetadataBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;");
                mids$[mid_getAdditionalParametersBlock_80e7e980479289f4] = env->getMethodID(cls, "getAdditionalParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;");
                mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                mids$[mid_getODParametersBlock_52ab08a5e78ed036] = env->getMethodID(cls, "getODParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;");
                mids$[mid_getRTNCovarianceBlock_a08e63bb0bfcc64c] = env->getMethodID(cls, "getRTNCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;");
                mids$[mid_getSig3EigVec3CovarianceBlock_526e476bda384755] = env->getMethodID(cls, "getSig3EigVec3CovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;");
                mids$[mid_getStateVectorBlock_f4dddfef314b1d5c] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/StateVector;");
                mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                mids$[mid_getXYZCovarianceBlock_71e967b8af1dbb8f] = env->getMethodID(cls, "getXYZCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;");
                mids$[mid_setAdditionalParametersBlock_99e2aae3631b1f33] = env->getMethodID(cls, "setAdditionalParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)V");
                mids$[mid_setCovarianceMatrixBlock_e76500a05db3fda1] = env->getMethodID(cls, "setCovarianceMatrixBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_setODParametersBlock_f2b7c55da4ccf239] = env->getMethodID(cls, "setODParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)V");
                mids$[mid_setUserDefinedBlock_7679f5a5c49f05c5] = env->getMethodID(cls, "setUserDefinedBlock", "(Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96338e7c95f1ecb0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_09d1eb9223cc21d8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a288a8b537c88185, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e02ed3ddb4a798e4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata CdmData::getAdditionalCovMetadataBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata(env->callObjectMethod(this$, mids$[mid_getAdditionalCovMetadataBlock_da19d9ac6b23a229]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters CdmData::getAdditionalParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters(env->callObjectMethod(this$, mids$[mid_getAdditionalParametersBlock_80e7e980479289f4]));
            }

            ::java::util::List CdmData::getComments() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ODParameters CdmData::getODParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ODParameters(env->callObjectMethod(this$, mids$[mid_getODParametersBlock_52ab08a5e78ed036]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance CdmData::getRTNCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceBlock_a08e63bb0bfcc64c]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance CdmData::getSig3EigVec3CovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance(env->callObjectMethod(this$, mids$[mid_getSig3EigVec3CovarianceBlock_526e476bda384755]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::StateVector CdmData::getStateVectorBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_f4dddfef314b1d5c]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined CdmData::getUserDefinedBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance CdmData::getXYZCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceBlock_71e967b8af1dbb8f]));
            }

            void CdmData::setAdditionalParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdditionalParametersBlock_99e2aae3631b1f33], a0.this$);
            }

            void CdmData::setCovarianceMatrixBlock(const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixBlock_e76500a05db3fda1], a0.this$);
            }

            void CdmData::setODParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setODParametersBlock_f2b7c55da4ccf239], a0.this$);
            }

            void CdmData::setUserDefinedBlock(const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUserDefinedBlock_7679f5a5c49f05c5], a0.this$);
            }

            void CdmData::validate(jdouble a0) const
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
            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self);
            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getComments(t_CdmData *self);
            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self);
            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self);
            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data);
            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data);
            static PyGetSetDef t_CdmData__fields_[] = {
              DECLARE_GET_FIELD(t_CdmData, additionalCovMetadataBlock),
              DECLARE_GETSET_FIELD(t_CdmData, additionalParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, comments),
              DECLARE_SET_FIELD(t_CdmData, covarianceMatrixBlock),
              DECLARE_GETSET_FIELD(t_CdmData, oDParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, rTNCovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, sig3EigVec3CovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, stateVectorBlock),
              DECLARE_GETSET_FIELD(t_CdmData, userDefinedBlock),
              DECLARE_GET_FIELD(t_CdmData, xYZCovarianceBlock),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmData__methods_[] = {
              DECLARE_METHOD(t_CdmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, getAdditionalCovMetadataBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getAdditionalParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getComments, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getODParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getRTNCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getSig3EigVec3CovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getStateVectorBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getUserDefinedBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getXYZCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, setAdditionalParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setCovarianceMatrixBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setODParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setUserDefinedBlock, METH_O),
              DECLARE_METHOD(t_CdmData, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmData)[] = {
              { Py_tp_methods, t_CdmData__methods_ },
              { Py_tp_init, (void *) t_CdmData_init_ },
              { Py_tp_getset, t_CdmData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmData, t_CdmData, CdmData);

            void t_CdmData::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmData), &PY_TYPE_DEF(CdmData), module, "CdmData", 0);
            }

            void t_CdmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "class_", make_descriptor(CdmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "wrapfn_", make_descriptor(t_CdmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmData::initializeClass, 1)))
                return NULL;
              return t_CdmData::wrap_Object(CdmData(((t_CdmData *) arg)->object.this$));
            }
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a5((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getComments(t_CdmData *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComments());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(result);
            }

            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }

            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAdditionalParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdditionalParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCovarianceMatrixBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setODParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setODParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setUserDefinedBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUserDefinedBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg)
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

            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(value);
            }
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setAdditionalParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "additionalParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComments());
              return ::java::util::t_List::wrap_Object(value);
            }

            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMatrixBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMatrixBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(value);
            }
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setODParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "oDParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &value))
                {
                  INT_CALL(self->object.setUserDefinedBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "userDefinedBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ProfileThrustPropulsionModel::class$ = NULL;
          jmethodID *ProfileThrustPropulsionModel::mids$ = NULL;
          bool ProfileThrustPropulsionModel::live$ = false;

          jclass ProfileThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f818c95c4dc4720b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFlowRate_432f3d328c15ec82] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_8bdf60d5551eceaf] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_0b7191d207b9680f] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_abc43395638fd218] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_8954761face5e1a7] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b42ac4b5bfb80fab] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ProfileThrustPropulsionModel::ProfileThrustPropulsionModel(const ::org::orekit::utils::TimeSpanMap & a0, jdouble a1, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f818c95c4dc4720b, a0.this$, a1, a2.this$, a3.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType ProfileThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_67739b20d9566a8c]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_432f3d328c15ec82], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_8bdf60d5551eceaf], a0.this$, a1.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_0b7191d207b9680f], a0.this$, a1.this$);
          }

          ::java::lang::String ProfileThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          ::java::util::List ProfileThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_abc43395638fd218], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8954761face5e1a7], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b42ac4b5bfb80fab], a0.this$, a1.this$));
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
          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ProfileThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ProfileThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ProfileThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ProfileThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ProfileThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ProfileThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ProfileThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ProfileThrustPropulsionModel, t_ProfileThrustPropulsionModel, ProfileThrustPropulsionModel);

          void t_ProfileThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ProfileThrustPropulsionModel), &PY_TYPE_DEF(ProfileThrustPropulsionModel), module, "ProfileThrustPropulsionModel", 0);
          }

          void t_ProfileThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "class_", make_descriptor(ProfileThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "wrapfn_", make_descriptor(t_ProfileThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ProfileThrustPropulsionModel::wrap_Object(ProfileThrustPropulsionModel(((t_ProfileThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::lang::String a3((jobject) NULL);
            ProfileThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "KDKs", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2, &p2, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a3))
            {
              INT_CALL(object = ProfileThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg)
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

          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
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
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data)
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
#include "java/lang/IllegalStateException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalStateException::class$ = NULL;
    jmethodID *IllegalStateException::mids$ = NULL;
    bool IllegalStateException::live$ = false;

    jclass IllegalStateException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalStateException");

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

    IllegalStateException::IllegalStateException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalStateException__methods_[] = {
      DECLARE_METHOD(t_IllegalStateException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalStateException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalStateException)[] = {
      { Py_tp_methods, t_IllegalStateException__methods_ },
      { Py_tp_init, (void *) t_IllegalStateException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalStateException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalStateException, t_IllegalStateException, IllegalStateException);

    void t_IllegalStateException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalStateException), &PY_TYPE_DEF(IllegalStateException), module, "IllegalStateException", 0);
    }

    void t_IllegalStateException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "class_", make_descriptor(IllegalStateException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "wrapfn_", make_descriptor(t_IllegalStateException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalStateException::initializeClass, 1)))
        return NULL;
      return t_IllegalStateException::wrap_Object(IllegalStateException(((t_IllegalStateException *) arg)->object.this$));
    }
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalStateException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalStateException object((jobject) NULL);

          INT_CALL(object = IllegalStateException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalStateException(a0, a1));
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
#include "org/orekit/rugged/refraction/MultiLayerModel.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "java/util/List.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *MultiLayerModel::class$ = NULL;
        jmethodID *MultiLayerModel::mids$ = NULL;
        bool MultiLayerModel::live$ = false;

        jclass MultiLayerModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/MultiLayerModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_323cca21b3806954] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_init$_3e979f14515f6324] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Ljava/util/List;)V");
            mids$[mid_applyCorrection_a813ead3ffa4bffb] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_323cca21b3806954, a0.this$)) {}

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::java::util::List & a1) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_3e979f14515f6324, a0.this$, a1.this$)) {}

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint MultiLayerModel::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_a813ead3ffa4bffb], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace refraction {
        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args);

        static PyMethodDef t_MultiLayerModel__methods_[] = {
          DECLARE_METHOD(t_MultiLayerModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, applyCorrection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiLayerModel)[] = {
          { Py_tp_methods, t_MultiLayerModel__methods_ },
          { Py_tp_init, (void *) t_MultiLayerModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiLayerModel)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::refraction::AtmosphericRefraction),
          NULL
        };

        DEFINE_TYPE(MultiLayerModel, t_MultiLayerModel, MultiLayerModel);

        void t_MultiLayerModel::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiLayerModel), &PY_TYPE_DEF(MultiLayerModel), module, "MultiLayerModel", 0);
        }

        void t_MultiLayerModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "class_", make_descriptor(MultiLayerModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "wrapfn_", make_descriptor(t_MultiLayerModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiLayerModel::initializeClass, 1)))
            return NULL;
          return t_MultiLayerModel::wrap_Object(MultiLayerModel(((t_MultiLayerModel *) arg)->object.this$));
        }
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiLayerModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = MultiLayerModel(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MultiLayerModel(a0, a1));
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

        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultiLayerModel), (PyObject *) self, "applyCorrection", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldTaylorMap::class$ = NULL;
        jmethodID *FieldTaylorMap::mids$ = NULL;
        bool FieldTaylorMap::live$ = false;

        jclass FieldTaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldTaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_35cd4b0d5c456d22] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_6621086b060c801f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_compose_2186d3bfd7fd19ad] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_getFunction_5209187934217f90] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getNbFunctions_570ce0828f81a2c1] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_226a0b2040b1d2e1] = env->getMethodID(cls, "getPoint", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_invert_431a64036cd27a45] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/FieldMatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_value_a60c769d407c20d1] = env->getMethodID(cls, "value", "([D)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_401cf8a1b53fb909] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTaylorMap::FieldTaylorMap(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_35cd4b0d5c456d22, a0.this$, a1.this$)) {}

        FieldTaylorMap::FieldTaylorMap(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6621086b060c801f, a0.this$, a1, a2, a3)) {}

        FieldTaylorMap FieldTaylorMap::compose(const FieldTaylorMap & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_compose_2186d3bfd7fd19ad], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldTaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_5209187934217f90], a0));
        }

        jint FieldTaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_570ce0828f81a2c1]);
        }

        jint FieldTaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_570ce0828f81a2c1]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::getPoint() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPoint_226a0b2040b1d2e1]));
        }

        FieldTaylorMap FieldTaylorMap::invert(const ::org::hipparchus::linear::FieldMatrixDecomposer & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_invert_431a64036cd27a45], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_a60c769d407c20d1], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_401cf8a1b53fb909], a0.this$));
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
        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args);
        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args);
        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data);
        static PyGetSetDef t_FieldTaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_FieldTaylorMap, point),
          DECLARE_GET_FIELD(t_FieldTaylorMap, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTaylorMap__methods_[] = {
          DECLARE_METHOD(t_FieldTaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTaylorMap, compose, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, invert, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTaylorMap)[] = {
          { Py_tp_methods, t_FieldTaylorMap__methods_ },
          { Py_tp_init, (void *) t_FieldTaylorMap_init_ },
          { Py_tp_getset, t_FieldTaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTaylorMap, t_FieldTaylorMap, FieldTaylorMap);
        PyObject *t_FieldTaylorMap::wrap_Object(const FieldTaylorMap& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTaylorMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTaylorMap), &PY_TYPE_DEF(FieldTaylorMap), module, "FieldTaylorMap", 0);
        }

        void t_FieldTaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "class_", make_descriptor(FieldTaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "wrapfn_", make_descriptor(t_FieldTaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTaylorMap::initializeClass, 1)))
            return NULL;
          return t_FieldTaylorMap::wrap_Object(FieldTaylorMap(((t_FieldTaylorMap *) arg)->object.this$));
        }
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1, a2, a3));
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

        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg)
        {
          FieldTaylorMap a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", FieldTaylorMap::initializeClass, &a0, &p0, t_FieldTaylorMap::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::FieldMatrixDecomposer a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrixDecomposer::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixDecomposer::parameters_))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationData::class$ = NULL;
          jmethodID *ObservationData::mids$ = NULL;
          bool ObservationData::live$ = false;

          jclass ObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7c9e65e9156e2b45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/ObservationType;DII)V");
              mids$[mid_getLossOfLockIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getLossOfLockIndicator", "()I");
              mids$[mid_getObservationType_1d725002fa550800] = env->getMethodID(cls, "getObservationType", "()Lorg/orekit/gnss/ObservationType;");
              mids$[mid_getSignalStrength_570ce0828f81a2c1] = env->getMethodID(cls, "getSignalStrength", "()I");
              mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationData::ObservationData(const ::org::orekit::gnss::ObservationType & a0, jdouble a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c9e65e9156e2b45, a0.this$, a1, a2, a3)) {}

          jint ObservationData::getLossOfLockIndicator() const
          {
            return env->callIntMethod(this$, mids$[mid_getLossOfLockIndicator_570ce0828f81a2c1]);
          }

          ::org::orekit::gnss::ObservationType ObservationData::getObservationType() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getObservationType_1d725002fa550800]));
          }

          jint ObservationData::getSignalStrength() const
          {
            return env->callIntMethod(this$, mids$[mid_getSignalStrength_570ce0828f81a2c1]);
          }

          jdouble ObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
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
        namespace observation {
          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self);
          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self);
          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self);
          static PyObject *t_ObservationData_getValue(t_ObservationData *self);
          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data);
          static PyGetSetDef t_ObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationData, lossOfLockIndicator),
            DECLARE_GET_FIELD(t_ObservationData, observationType),
            DECLARE_GET_FIELD(t_ObservationData, signalStrength),
            DECLARE_GET_FIELD(t_ObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationData__methods_[] = {
            DECLARE_METHOD(t_ObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, getLossOfLockIndicator, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getObservationType, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getSignalStrength, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationData)[] = {
            { Py_tp_methods, t_ObservationData__methods_ },
            { Py_tp_init, (void *) t_ObservationData_init_ },
            { Py_tp_getset, t_ObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationData, t_ObservationData, ObservationData);

          void t_ObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationData), &PY_TYPE_DEF(ObservationData), module, "ObservationData", 0);
          }

          void t_ObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "class_", make_descriptor(ObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "wrapfn_", make_descriptor(t_ObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationData::initializeClass, 1)))
              return NULL;
            return t_ObservationData::wrap_Object(ObservationData(((t_ObservationData *) arg)->object.this$));
          }
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::ObservationType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jint a3;
            ObservationData object((jobject) NULL);

            if (!parseArgs(args, "KDII", ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = ObservationData(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSignalStrength());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getValue(t_ObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }

          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSignalStrength());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
              mids$[mid_getLabel_11b109bd155ca898] = env->getMethodID(cls, "getLabel", "()Ljava/lang/String;");
              mids$[mid_matches_7edad2c2f64f4d68] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
              mids$[mid_valueOf_e07ada233254e39e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/section/RinexLabels;");
              mids$[mid_values_68162d818eac21fb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/section/RinexLabels;");

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
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLabel_11b109bd155ca898]));
          }

          jboolean RinexLabels::matches(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_matches_7edad2c2f64f4d68], a0.this$);
          }

          RinexLabels RinexLabels::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexLabels(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e07ada233254e39e], a0.this$));
          }

          JArray< RinexLabels > RinexLabels::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexLabels >(env->callStaticObjectMethod(cls, mids$[mid_values_68162d818eac21fb]));
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
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1Field::class$ = NULL;
        jmethodID *UnivariateDerivative1Field::mids$ = NULL;
        bool UnivariateDerivative1Field::live$ = false;

        jclass UnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_4efec6a5aa4fd021] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getOne_81b5d8fdb5d06385] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_81b5d8fdb5d06385] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        UnivariateDerivative1Field UnivariateDerivative1Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_4efec6a5aa4fd021]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_81b5d8fdb5d06385]));
        }

        ::java::lang::Class UnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_81b5d8fdb5d06385]));
        }

        jint UnivariateDerivative1Field::hashCode() const
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
        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1Field, t_UnivariateDerivative1Field, UnivariateDerivative1Field);

        void t_UnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1Field), &PY_TYPE_DEF(UnivariateDerivative1Field), module, "UnivariateDerivative1Field", 0);
        }

        void t_UnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "class_", make_descriptor(UnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "wrapfn_", make_descriptor(t_UnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1Field::wrap_Object(UnivariateDerivative1Field(((t_UnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative1Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field::getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
        }

        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data)
        {
          UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethod::live$ = false;
              jdouble ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD = (jdouble) 0;

              jclass ShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_2664b980701fb17f] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_1c0b9804a37c5224] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_7ed362902ba10174] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_163599a09fd03091] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_4d249761aa92e117] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_091f0943f3979390] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0de76eb60c6db62c] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_44d723598fb6a077] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_76485a46079dea66] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_2dd8f4edd2a65fcf] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_08528402ae0ec62a] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_77dbe9f2fcda2496] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_dc121e1e9d39c98c] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_ac385b194fca344b] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_1c26d4a5b9c10569] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_ZERO_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ZERO_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_2664b980701fb17f], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_1c0b9804a37c5224], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7ed362902ba10174], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_163599a09fd03091], a0.this$, a1.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_4d249761aa92e117], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_091f0943f3979390], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0de76eb60c6db62c], a0.this$, a1, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_44d723598fb6a077], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_76485a46079dea66], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_2dd8f4edd2a65fcf], a0.this$, a1.this$, a2.this$, a3.this$, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_08528402ae0ec62a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_184c2f4ec5889c74], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0ed38e7bbee7fafc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_77dbe9f2fcda2496], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_dc121e1e9d39c98c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ac385b194fca344b], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_1c26d4a5b9c10569], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String ShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethod::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_5d7ecb27bb5e3bc3]));
              }

              jboolean ShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd]);
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
              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, name),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethod, t_ShortTermEncounter2DPOCMethod, ShortTermEncounter2DPOCMethod);

              void t_ShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethod), module, "ShortTermEncounter2DPOCMethod", 0);
              }

              void t_ShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "class_", make_descriptor(ShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "DEFAULT_ZERO_THRESHOLD", make_descriptor(ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethod::wrap_Object(ShortTermEncounter2DPOCMethod(((t_ShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 1:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "K", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 2:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
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
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "compute", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getName());
                return j2p(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableFunction::mids$ = NULL;
        bool UnivariateDifferentiableFunction::live$ = false;

        jclass UnivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative UnivariateDifferentiableFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
      namespace differentiation {
        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableFunction, t_UnivariateDifferentiableFunction, UnivariateDifferentiableFunction);

        void t_UnivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableFunction), &PY_TYPE_DEF(UnivariateDifferentiableFunction), module, "UnivariateDifferentiableFunction", 0);
        }

        void t_UnivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "class_", make_descriptor(UnivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableFunction::wrap_Object(UnivariateDifferentiableFunction(((t_UnivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *OrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *OrdinaryDifferentialEquation::mids$ = NULL;
      bool OrdinaryDifferentialEquation::live$ = false;

      jclass OrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/OrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_125ce48de7dbfde5] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_fd9e8f589aa48707] = env->getMethodID(cls, "init", "(D[DD)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > OrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_125ce48de7dbfde5], a0, a1.this$));
      }

      jint OrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      void OrdinaryDifferentialEquation::init(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_fd9e8f589aa48707], a0, a1.this$, a2);
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
      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self);
      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_OrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_OrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_OrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_OrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrdinaryDifferentialEquation, t_OrdinaryDifferentialEquation, OrdinaryDifferentialEquation);

      void t_OrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(OrdinaryDifferentialEquation), &PY_TYPE_DEF(OrdinaryDifferentialEquation), module, "OrdinaryDifferentialEquation", 0);
      }

      void t_OrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "class_", make_descriptor(OrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_OrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_OrdinaryDifferentialEquation::wrap_Object(OrdinaryDifferentialEquation(((t_OrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_OrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrdinaryDifferentialEquation_computeDerivatives(t_OrdinaryDifferentialEquation *self, PyObject *args)
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

      static PyObject *t_OrdinaryDifferentialEquation_getDimension(t_OrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OrdinaryDifferentialEquation_init(t_OrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_OrdinaryDifferentialEquation_get__dimension(t_OrdinaryDifferentialEquation *self, void *data)
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
#include "org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonAbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonAbstractGNSSAttitudeProvider::mids$ = NULL;
        bool PythonAbstractGNSSAttitudeProvider::live$ = false;

        jclass PythonAbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_be6476273154a2ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGNSSAttitudeProvider::PythonAbstractGNSSAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_be6476273154a2ce, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractGNSSAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace attitude {
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args);
        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonAbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonAbstractGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGNSSAttitudeProvider, t_PythonAbstractGNSSAttitudeProvider, PythonAbstractGNSSAttitudeProvider);

        void t_PythonAbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGNSSAttitudeProvider), &PY_TYPE_DEF(PythonAbstractGNSSAttitudeProvider), module, "PythonAbstractGNSSAttitudeProvider", 1);
        }

        void t_PythonAbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "class_", make_descriptor(PythonAbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGNSSAttitudeProvider::wrap_Object(PythonAbstractGNSSAttitudeProvider(((t_PythonAbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          PythonAbstractGNSSAttitudeProvider object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractGNSSAttitudeProvider(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data)
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
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProviderModifier::class$ = NULL;
      jmethodID *AttitudeProviderModifier::mids$ = NULL;
      bool AttitudeProviderModifier::live$ = false;

      jclass AttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::AttitudeProvider AttitudeProviderModifier::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0]));
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
      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self);
      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_AttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeProviderModifier, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_AttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProviderModifier)[] = {
        { Py_tp_methods, t_AttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(AttitudeProviderModifier, t_AttitudeProviderModifier, AttitudeProviderModifier);

      void t_AttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProviderModifier), &PY_TYPE_DEF(AttitudeProviderModifier), module, "AttitudeProviderModifier", 0);
      }

      void t_AttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "class_", make_descriptor(AttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "wrapfn_", make_descriptor(t_AttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_AttitudeProviderModifier::wrap_Object(AttitudeProviderModifier(((t_AttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/SortedSet.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *SOLFSMYDataLoader::class$ = NULL;
            jmethodID *SOLFSMYDataLoader::mids$ = NULL;
            bool SOLFSMYDataLoader::live$ = false;

            jclass SOLFSMYDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e93d77ad761aa1f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_917725130bbb61f1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SOLFSMYDataLoader::SOLFSMYDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e93d77ad761aa1f2, a0.this$)) {}

            ::java::util::SortedSet SOLFSMYDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_917725130bbb61f1]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate SOLFSMYDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
            }

            void SOLFSMYDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
            }

            jboolean SOLFSMYDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args);
            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self);
            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data);
            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data);
            static PyGetSetDef t_SOLFSMYDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, dataSet),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, maxDate),
              DECLARE_GET_FIELD(t_SOLFSMYDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SOLFSMYDataLoader__methods_[] = {
              DECLARE_METHOD(t_SOLFSMYDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_SOLFSMYDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SOLFSMYDataLoader)[] = {
              { Py_tp_methods, t_SOLFSMYDataLoader__methods_ },
              { Py_tp_init, (void *) t_SOLFSMYDataLoader_init_ },
              { Py_tp_getset, t_SOLFSMYDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SOLFSMYDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SOLFSMYDataLoader, t_SOLFSMYDataLoader, SOLFSMYDataLoader);

            void t_SOLFSMYDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(SOLFSMYDataLoader), &PY_TYPE_DEF(SOLFSMYDataLoader), module, "SOLFSMYDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(SOLFSMYDataLoader$LineParameters)));
            }

            void t_SOLFSMYDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "class_", make_descriptor(SOLFSMYDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "wrapfn_", make_descriptor(t_SOLFSMYDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SOLFSMYDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SOLFSMYDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SOLFSMYDataLoader::initializeClass, 1)))
                return NULL;
              return t_SOLFSMYDataLoader::wrap_Object(SOLFSMYDataLoader(((t_SOLFSMYDataLoader *) arg)->object.this$));
            }
            static PyObject *t_SOLFSMYDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SOLFSMYDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SOLFSMYDataLoader_init_(t_SOLFSMYDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              SOLFSMYDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = SOLFSMYDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SOLFSMYDataLoader_getDataSet(t_SOLFSMYDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(SOLFSMYDataLoader$LineParameters));
            }

            static PyObject *t_SOLFSMYDataLoader_getMaxDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_getMinDate(t_SOLFSMYDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_SOLFSMYDataLoader_loadData(t_SOLFSMYDataLoader *self, PyObject *args)
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

            static PyObject *t_SOLFSMYDataLoader_stillAcceptsData(t_SOLFSMYDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SOLFSMYDataLoader_get__dataSet(t_SOLFSMYDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__maxDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_SOLFSMYDataLoader_get__minDate(t_SOLFSMYDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
