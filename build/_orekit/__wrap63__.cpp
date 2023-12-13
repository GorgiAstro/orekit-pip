#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonFieldIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegrator::mids$ = NULL;
        bool AdamsMoultonFieldIntegrator::live$ = false;

        jclass AdamsMoultonFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e901ecf0331569ba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_b37354c6de25af2c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_f9ae7f7ac73655c8] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_b4c879a61b350879] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e901ecf0331569ba, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsMoultonFieldIntegrator::AdamsMoultonFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b37354c6de25af2c, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegrator, t_AdamsMoultonFieldIntegrator, AdamsMoultonFieldIntegrator);
        PyObject *t_AdamsMoultonFieldIntegrator::wrap_Object(const AdamsMoultonFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegrator *self = (t_AdamsMoultonFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegrator), &PY_TYPE_DEF(AdamsMoultonFieldIntegrator), module, "AdamsMoultonFieldIntegrator", 0);
        }

        void t_AdamsMoultonFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "class_", make_descriptor(AdamsMoultonFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegrator::wrap_Object(AdamsMoultonFieldIntegrator(((t_AdamsMoultonFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegrator_of_(t_AdamsMoultonFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegrator_init_(t_AdamsMoultonFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsMoultonFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsMoultonFieldIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_AdamsMoultonFieldIntegrator_get__parameters_(t_AdamsMoultonFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader$DataType::class$ = NULL;
        jmethodID *CRDHeader$DataType::mids$ = NULL;
        bool CRDHeader$DataType::live$ = false;
        CRDHeader$DataType *CRDHeader$DataType::FULL_RATE = NULL;
        CRDHeader$DataType *CRDHeader$DataType::NORMAL_POINT = NULL;
        CRDHeader$DataType *CRDHeader$DataType::SAMPLED_ENGIEERING = NULL;

        jclass CRDHeader$DataType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader$DataType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDataType_760aede2540c8113] = env->getStaticMethodID(cls, "getDataType", "(I)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_getIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_valueOf_9787639d97d9adb7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_values_ea424191ab942128] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$DataType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FULL_RATE = new CRDHeader$DataType(env->getStaticObjectField(cls, "FULL_RATE", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            NORMAL_POINT = new CRDHeader$DataType(env->getStaticObjectField(cls, "NORMAL_POINT", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            SAMPLED_ENGIEERING = new CRDHeader$DataType(env->getStaticObjectField(cls, "SAMPLED_ENGIEERING", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader$DataType CRDHeader$DataType::getDataType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_getDataType_760aede2540c8113], a0));
        }

        jint CRDHeader$DataType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_55546ef6a647f39b]);
        }

        CRDHeader$DataType CRDHeader$DataType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9787639d97d9adb7], a0.this$));
        }

        JArray< CRDHeader$DataType > CRDHeader$DataType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_ea424191ab942128]));
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
        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args);
        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self);
        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type);
        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data);
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data);
        static PyGetSetDef t_CRDHeader$DataType__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader$DataType, indicator),
          DECLARE_GET_FIELD(t_CRDHeader$DataType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader$DataType__methods_[] = {
          DECLARE_METHOD(t_CRDHeader$DataType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, of_, METH_VARARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, getDataType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, getIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader$DataType)[] = {
          { Py_tp_methods, t_CRDHeader$DataType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_CRDHeader$DataType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader$DataType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(CRDHeader$DataType, t_CRDHeader$DataType, CRDHeader$DataType);
        PyObject *t_CRDHeader$DataType::wrap_Object(const CRDHeader$DataType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_CRDHeader$DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_CRDHeader$DataType::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader$DataType), &PY_TYPE_DEF(CRDHeader$DataType), module, "CRDHeader$DataType", 0);
        }

        void t_CRDHeader$DataType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "class_", make_descriptor(CRDHeader$DataType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "wrapfn_", make_descriptor(t_CRDHeader$DataType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDHeader$DataType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "FULL_RATE", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::FULL_RATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "NORMAL_POINT", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::NORMAL_POINT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "SAMPLED_ENGIEERING", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::SAMPLED_ENGIEERING)));
        }

        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader$DataType::initializeClass, 1)))
            return NULL;
          return t_CRDHeader$DataType::wrap_Object(CRDHeader$DataType(((t_CRDHeader$DataType *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader$DataType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::getDataType(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getDataType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::valueOf(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type)
        {
          JArray< CRDHeader$DataType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::values());
          return JArray<jobject>(result.this$).wrap(t_CRDHeader$DataType::wrap_jobject);
        }
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_516bd20115aa9d9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeTroposphericDelayModifier::BistaticRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_516bd20115aa9d9d, a0.this$)) {}

          void BistaticRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void BistaticRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeTroposphericDelayModifier, t_BistaticRangeTroposphericDelayModifier, BistaticRangeTroposphericDelayModifier);

          void t_BistaticRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeTroposphericDelayModifier), module, "BistaticRangeTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeTroposphericDelayModifier::wrap_Object(BistaticRangeTroposphericDelayModifier(((t_BistaticRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
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
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/String.h"
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
          mids$[mid_init$_018f438eb74dd0e8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/orekit/bodies/GeodeticPoint;Ljava/lang/String;)V");
          mids$[mid_computeLimitVisibilityPoint_df31fb81cb65757b] = env->getMethodID(cls, "computeLimitVisibilityPoint", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getAzimuth_2342fcde92b13419] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAzimuth_f039e0e7c3af3187] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getCartesianPoint_8b724f8b4fdad1a2] = env->getMethodID(cls, "getCartesianPoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getEast_8b724f8b4fdad1a2] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getElevation_2342fcde92b13419] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getElevation_f039e0e7c3af3187] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getNadir_8b724f8b4fdad1a2] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_8b724f8b4fdad1a2] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getParentShape_95d324082d4f411b] = env->getMethodID(cls, "getParentShape", "()Lorg/orekit/bodies/BodyShape;");
          mids$[mid_getPoint_963915d358b1e63a] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPoint_93fb10f989dbc484] = env->getMethodID(cls, "getPoint", "(Lorg/hipparchus/Field;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getPosition_42ef2ff6aede2782] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRange_f039e0e7c3af3187] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRange_2342fcde92b13419] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRangeRate_dd88e7bf2f4356ab] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRangeRate_eeb1fd384390b5cb] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSouth_8b724f8b4fdad1a2] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTrackingCoordinates_ff66135290f6515b] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TrackingCoordinates;");
          mids$[mid_getTrackingCoordinates_55136a7ee658aa9b] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldTrackingCoordinates;");
          mids$[mid_getWest_8b724f8b4fdad1a2] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_8b724f8b4fdad1a2] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAtDistance_df31fb81cb65757b] = env->getMethodID(cls, "pointAtDistance", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TopocentricFrame::TopocentricFrame(const ::org::orekit::bodies::BodyShape & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_018f438eb74dd0e8, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::computeLimitVisibilityPoint(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_computeLimitVisibilityPoint_df31fb81cb65757b], a0, a1, a2));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_2342fcde92b13419], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_f039e0e7c3af3187], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getCartesianPoint() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianPoint_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_2342fcde92b13419], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_f039e0e7c3af3187], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_8b724f8b4fdad1a2]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TopocentricFrame::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::BodyShape TopocentricFrame::getParentShape() const
      {
        return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getParentShape_95d324082d4f411b]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_963915d358b1e63a]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint TopocentricFrame::getPoint(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_93fb10f989dbc484], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_42ef2ff6aede2782], a0.this$, a1.this$));
      }

      jdouble TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_f039e0e7c3af3187], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_2342fcde92b13419], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getRangeRate(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRangeRate_dd88e7bf2f4356ab], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRangeRate(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRangeRate_eeb1fd384390b5cb], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_8b724f8b4fdad1a2]));
      }

      ::org::orekit::utils::TrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_ff66135290f6515b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::FieldTrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::utils::FieldTrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_55136a7ee658aa9b], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_8b724f8b4fdad1a2]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::pointAtDistance(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_df31fb81cb65757b], a0, a1, a2));
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
#include "org/orekit/estimation/sequential/ConstantProcessNoise.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *ConstantProcessNoise::class$ = NULL;
        jmethodID *ConstantProcessNoise::mids$ = NULL;
        bool ConstantProcessNoise::live$ = false;

        jclass ConstantProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/ConstantProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_7c7f5ea440781413] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getProcessNoiseMatrix_18b28191c1378912] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

        ConstantProcessNoise::ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_7c7f5ea440781413, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix ConstantProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_18b28191c1378912], a0.this$, a1.this$));
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
        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args);

        static PyMethodDef t_ConstantProcessNoise__methods_[] = {
          DECLARE_METHOD(t_ConstantProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantProcessNoise)[] = {
          { Py_tp_methods, t_ConstantProcessNoise__methods_ },
          { Py_tp_init, (void *) t_ConstantProcessNoise_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(ConstantProcessNoise, t_ConstantProcessNoise, ConstantProcessNoise);

        void t_ConstantProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantProcessNoise), &PY_TYPE_DEF(ConstantProcessNoise), module, "ConstantProcessNoise", 0);
        }

        void t_ConstantProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "class_", make_descriptor(ConstantProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "wrapfn_", make_descriptor(t_ConstantProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantProcessNoise::initializeClass, 1)))
            return NULL;
          return t_ConstantProcessNoise::wrap_Object(ConstantProcessNoise(((t_ConstantProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_ConstantProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantProcessNoise_init_(t_ConstantProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = ConstantProcessNoise(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ConstantProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConstantProcessNoise(a0, a1));
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

        static PyObject *t_ConstantProcessNoise_getProcessNoiseMatrix(t_ConstantProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(ConstantProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *RangeTroposphericDelayModifier::mids$ = NULL;
          bool RangeTroposphericDelayModifier::live$ = false;

          jclass RangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_516bd20115aa9d9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeTroposphericDelayModifier::RangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_516bd20115aa9d9d, a0.this$)) {}

          void RangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void RangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeTroposphericDelayModifier, t_RangeTroposphericDelayModifier, RangeTroposphericDelayModifier);

          void t_RangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeTroposphericDelayModifier), &PY_TYPE_DEF(RangeTroposphericDelayModifier), module, "RangeTroposphericDelayModifier", 0);
          }

          void t_RangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "class_", make_descriptor(RangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_RangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeTroposphericDelayModifier::wrap_Object(RangeTroposphericDelayModifier(((t_RangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeTroposphericDelayModifier_init_(t_RangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            RangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = RangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeTroposphericDelayModifier_modify(t_RangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeTroposphericDelayModifier_modifyWithoutDerivatives(t_RangeTroposphericDelayModifier *self, PyObject *arg)
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
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
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
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_b62632bf7f12bf63] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_87203da900040693] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_9e4d5abe567c03fa] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_init$_3e524dedce3a0db6] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;DLorg/hipparchus/geometry/euclidean/oned/Vector1D;)V");
              mids$[mid_add_b1d2ab531c8e2a03] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_add_26e53c497cdf67ce] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_distance_f0dd8cb59ea09794] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_5b45e835420176cf] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distance1_2f915fa9762130df] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_2f915fa9762130df] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_5b45e835420176cf] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_distanceSq_2f915fa9762130df] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_5b45e835420176cf] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;Lorg/hipparchus/geometry/euclidean/oned/Vector1D;)D");
              mids$[mid_dotProduct_2f915fa9762130df] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_460c5e2d9d51c6cc] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_b74f83833fdad017] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_b74f83833fdad017] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_b74f83833fdad017] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getZero_62608abb8b57a58e] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_62608abb8b57a58e] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_scalarMultiply_eb2d794943b6c0f5] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_b1d2ab531c8e2a03] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_subtract_26e53c497cdf67ce] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_a9120cb5e83d0986] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

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

          Vector1D::Vector1D(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b62632bf7f12bf63, a0, a1.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87203da900040693, a0, a1.this$, a2, a3.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e4d5abe567c03fa, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector1D::Vector1D(jdouble a0, const Vector1D & a1, jdouble a2, const Vector1D & a3, jdouble a4, const Vector1D & a5, jdouble a6, const Vector1D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e524dedce3a0db6, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector1D Vector1D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_b1d2ab531c8e2a03], a0.this$));
          }

          Vector1D Vector1D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_add_26e53c497cdf67ce], a0, a1.this$));
          }

          jdouble Vector1D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f0dd8cb59ea09794], a0.this$);
          }

          jdouble Vector1D::distance(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_5b45e835420176cf], a0.this$, a1.this$);
          }

          jdouble Vector1D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_2f915fa9762130df], a0.this$);
          }

          jdouble Vector1D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_2f915fa9762130df], a0.this$);
          }

          jdouble Vector1D::distanceInf(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_5b45e835420176cf], a0.this$, a1.this$);
          }

          jdouble Vector1D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_2f915fa9762130df], a0.this$);
          }

          jdouble Vector1D::distanceSq(const Vector1D & a0, const Vector1D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_5b45e835420176cf], a0.this$, a1.this$);
          }

          jdouble Vector1D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_2f915fa9762130df], a0.this$);
          }

          jboolean Vector1D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jboolean Vector1D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_460c5e2d9d51c6cc], a0.this$);
          }

          jdouble Vector1D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
          }

          jdouble Vector1D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_b74f83833fdad017]);
          }

          jdouble Vector1D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_b74f83833fdad017]);
          }

          jdouble Vector1D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::Space Vector1D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_9afbccb68c8e9ef8]));
          }

          jdouble Vector1D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
          }

          Vector1D Vector1D::getZero() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_getZero_62608abb8b57a58e]));
          }

          jint Vector1D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean Vector1D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
          }

          jboolean Vector1D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
          }

          Vector1D Vector1D::negate() const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_negate_62608abb8b57a58e]));
          }

          Vector1D Vector1D::scalarMultiply(jdouble a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_eb2d794943b6c0f5], a0));
          }

          Vector1D Vector1D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_b1d2ab531c8e2a03], a0.this$));
          }

          Vector1D Vector1D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector1D(env->callObjectMethod(this$, mids$[mid_subtract_26e53c497cdf67ce], a0, a1.this$));
          }

          ::java::lang::String Vector1D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String Vector1D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_a9120cb5e83d0986], a0.this$));
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
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldBivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldBivariateFunction::mids$ = NULL;
      bool CalculusFieldBivariateFunction::live$ = false;

      jclass CalculusFieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_c6408fdce2cc6c1a] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_c6408fdce2cc6c1a], a0.this$, a1.this$));
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
      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldBivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldBivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldBivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldBivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldBivariateFunction, t_CalculusFieldBivariateFunction, CalculusFieldBivariateFunction);
      PyObject *t_CalculusFieldBivariateFunction::wrap_Object(const CalculusFieldBivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldBivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldBivariateFunction), &PY_TYPE_DEF(CalculusFieldBivariateFunction), module, "CalculusFieldBivariateFunction", 0);
      }

      void t_CalculusFieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "class_", make_descriptor(CalculusFieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldBivariateFunction::wrap_Object(CalculusFieldBivariateFunction(((t_CalculusFieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1063::class$ = NULL;
              jmethodID *Rtcm1063::mids$ = NULL;
              bool Rtcm1063::live$ = false;

              jclass Rtcm1063::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_868237effc362640] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1063::Rtcm1063(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_868237effc362640, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args);
              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data);
              static PyGetSetDef t_Rtcm1063__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1063, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1063__methods_[] = {
                DECLARE_METHOD(t_Rtcm1063, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1063)[] = {
                { Py_tp_methods, t_Rtcm1063__methods_ },
                { Py_tp_init, (void *) t_Rtcm1063_init_ },
                { Py_tp_getset, t_Rtcm1063__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1063)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1063, t_Rtcm1063, Rtcm1063);
              PyObject *t_Rtcm1063::wrap_Object(const Rtcm1063& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1063::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1063::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1063), &PY_TYPE_DEF(Rtcm1063), module, "Rtcm1063", 0);
              }

              void t_Rtcm1063::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "class_", make_descriptor(Rtcm1063::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "wrapfn_", make_descriptor(t_Rtcm1063::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1063::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1063::wrap_Object(Rtcm1063(((t_Rtcm1063 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1063::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1063 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1063(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data)
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
#include "org/orekit/rugged/intersection/ConstantElevationAlgorithm.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *ConstantElevationAlgorithm::class$ = NULL;
        jmethodID *ConstantElevationAlgorithm::mids$ = NULL;
        bool ConstantElevationAlgorithm::live$ = false;

        jclass ConstantElevationAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/ConstantElevationAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getAlgorithmId_d67e2fdbea04a3ee] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_99e3200dafc19573] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_7819c980b8c560ad] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_882cf21796738f1c] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantElevationAlgorithm::ConstantElevationAlgorithm(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::orekit::rugged::api::AlgorithmId ConstantElevationAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_d67e2fdbea04a3ee]));
        }

        jdouble ConstantElevationAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_99e3200dafc19573], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_7819c980b8c560ad], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_882cf21796738f1c], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self);
        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data);
        static PyGetSetDef t_ConstantElevationAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantElevationAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantElevationAlgorithm__methods_[] = {
          DECLARE_METHOD(t_ConstantElevationAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantElevationAlgorithm)[] = {
          { Py_tp_methods, t_ConstantElevationAlgorithm__methods_ },
          { Py_tp_init, (void *) t_ConstantElevationAlgorithm_init_ },
          { Py_tp_getset, t_ConstantElevationAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantElevationAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantElevationAlgorithm, t_ConstantElevationAlgorithm, ConstantElevationAlgorithm);

        void t_ConstantElevationAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantElevationAlgorithm), &PY_TYPE_DEF(ConstantElevationAlgorithm), module, "ConstantElevationAlgorithm", 0);
        }

        void t_ConstantElevationAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "class_", make_descriptor(ConstantElevationAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "wrapfn_", make_descriptor(t_ConstantElevationAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantElevationAlgorithm::initializeClass, 1)))
            return NULL;
          return t_ConstantElevationAlgorithm::wrap_Object(ConstantElevationAlgorithm(((t_ConstantElevationAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantElevationAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantElevationAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantElevationAlgorithm(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Function::class$ = NULL;
      jmethodID *MathArrays$Function::mids$ = NULL;
      bool MathArrays$Function::live$ = false;

      jclass MathArrays$Function::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Function");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_b060e4326765ccf1] = env->getMethodID(cls, "evaluate", "([D)D");
          mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_b060e4326765ccf1], a0.this$);
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
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
      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args);

      static PyMethodDef t_MathArrays$Function__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Function, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Function)[] = {
        { Py_tp_methods, t_MathArrays$Function__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Function)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays$Function, t_MathArrays$Function, MathArrays$Function);

      void t_MathArrays$Function::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Function), &PY_TYPE_DEF(MathArrays$Function), module, "MathArrays$Function", 0);
      }

      void t_MathArrays$Function::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "class_", make_descriptor(MathArrays$Function::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "wrapfn_", make_descriptor(t_MathArrays$Function::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Function::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Function::wrap_Object(MathArrays$Function(((t_MathArrays$Function *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Function::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTForceModel::class$ = NULL;
            jmethodID *DSSTForceModel::mids$ = NULL;
            bool DSSTForceModel::live$ = false;

            jclass DSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_extractParameters_5417afc1212505b6] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_extractParameters_afb90c8392ccc216] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > DSSTForceModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_5417afc1212505b6], a0.this$, a1.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_afb90c8392ccc216], a0.this$, a1.this$));
            }

            ::java::util::stream::Stream DSSTForceModel::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
            }

            ::java::util::stream::Stream DSSTForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
            }

            JArray< jdouble > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_0483a0f94731abef], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTForceModel::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_7d3eb19aa1e75a63], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
            }

            void DSSTForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTForceModel::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_3144241334d46411], a0.this$, a1.this$, a2.this$));
            }

            void DSSTForceModel::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095], a0.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_5401e749436ec3b7], a0.this$, a1.this$);
            }

            void DSSTForceModel::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276], a0.this$, a1.this$);
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
            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self);
            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg);
            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args);
            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data);
            static PyGetSetDef t_DSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTForceModel, eventDetectors),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_DSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTForceModel, extractParameters, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, getEventDetectors, METH_NOARGS),
              DECLARE_METHOD(t_DSSTForceModel, getFieldEventDetectors, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, init, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTForceModel, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTForceModel, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTForceModel)[] = {
              { Py_tp_methods, t_DSSTForceModel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTForceModel)[] = {
              &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
              NULL
            };

            DEFINE_TYPE(DSSTForceModel, t_DSSTForceModel, DSSTForceModel);

            void t_DSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTForceModel), &PY_TYPE_DEF(DSSTForceModel), module, "DSSTForceModel", 0);
            }

            void t_DSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "class_", make_descriptor(DSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "wrapfn_", make_descriptor(t_DSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTForceModel), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_DSSTForceModel::wrap_Object(DSSTForceModel(((t_DSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_DSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTForceModel_extractParameters(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return result.wrap();
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                  {
                    OBJ_CALL(result = self->object.extractParameters(a0, a1));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_getEventDetectors(t_DSSTForceModel *self)
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            static PyObject *t_DSSTForceModel_getFieldEventDetectors(t_DSSTForceModel *self, PyObject *arg)
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

            static PyObject *t_DSSTForceModel_getMeanElementRate(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_init(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
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
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_initializeShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_registerAttitudeProvider(t_DSSTForceModel *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_updateShortPeriodTerms(t_DSSTForceModel *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTForceModel_get__eventDetectors(t_DSSTForceModel *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/BinomialTest.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *BinomialTest::class$ = NULL;
        jmethodID *BinomialTest::mids$ = NULL;
        bool BinomialTest::live$ = false;

        jclass BinomialTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/BinomialTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_binomialTest_ef14050dc3cba91c] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;)D");
            mids$[mid_binomialTest_4cd1fa164d4ccb63] = env->getMethodID(cls, "binomialTest", "(IIDLorg/hipparchus/stat/inference/AlternativeHypothesis;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialTest::BinomialTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_binomialTest_ef14050dc3cba91c], a0, a1, a2, a3.this$);
        }

        jboolean BinomialTest::binomialTest(jint a0, jint a1, jdouble a2, const ::org::hipparchus::stat::inference::AlternativeHypothesis & a3, jdouble a4) const
        {
          return env->callBooleanMethod(this$, mids$[mid_binomialTest_4cd1fa164d4ccb63], a0, a1, a2, a3.this$, a4);
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
        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args);

        static PyMethodDef t_BinomialTest__methods_[] = {
          DECLARE_METHOD(t_BinomialTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialTest, binomialTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialTest)[] = {
          { Py_tp_methods, t_BinomialTest__methods_ },
          { Py_tp_init, (void *) t_BinomialTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialTest, t_BinomialTest, BinomialTest);

        void t_BinomialTest::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialTest), &PY_TYPE_DEF(BinomialTest), module, "BinomialTest", 0);
        }

        void t_BinomialTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "class_", make_descriptor(BinomialTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "wrapfn_", make_descriptor(t_BinomialTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialTest::initializeClass, 1)))
            return NULL;
          return t_BinomialTest::wrap_Object(BinomialTest(((t_BinomialTest *) arg)->object.this$));
        }
        static PyObject *t_BinomialTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialTest_init_(t_BinomialTest *self, PyObject *args, PyObject *kwds)
        {
          BinomialTest object((jobject) NULL);

          INT_CALL(object = BinomialTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_BinomialTest_binomialTest(t_BinomialTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble result;

              if (!parseArgs(args, "IIDK", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              jint a1;
              jdouble a2;
              ::org::hipparchus::stat::inference::AlternativeHypothesis a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jboolean result;

              if (!parseArgs(args, "IIDKD", ::org::hipparchus::stat::inference::AlternativeHypothesis::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::stat::inference::t_AlternativeHypothesis::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.binomialTest(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "binomialTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Floor.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Floor::class$ = NULL;
        jmethodID *Floor::mids$ = NULL;
        bool Floor::live$ = false;

        jclass Floor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Floor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Floor::Floor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Floor::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Floor::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Floor_value(t_Floor *self, PyObject *args);

        static PyMethodDef t_Floor__methods_[] = {
          DECLARE_METHOD(t_Floor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Floor, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Floor)[] = {
          { Py_tp_methods, t_Floor__methods_ },
          { Py_tp_init, (void *) t_Floor_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Floor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Floor, t_Floor, Floor);

        void t_Floor::install(PyObject *module)
        {
          installType(&PY_TYPE(Floor), &PY_TYPE_DEF(Floor), module, "Floor", 0);
        }

        void t_Floor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "class_", make_descriptor(Floor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "wrapfn_", make_descriptor(t_Floor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Floor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Floor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Floor::initializeClass, 1)))
            return NULL;
          return t_Floor::wrap_Object(Floor(((t_Floor *) arg)->object.this$));
        }
        static PyObject *t_Floor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Floor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Floor_init_(t_Floor *self, PyObject *args, PyObject *kwds)
        {
          Floor object((jobject) NULL);

          INT_CALL(object = Floor());
          self->object = object;

          return 0;
        }

        static PyObject *t_Floor_value(t_Floor *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeIonosphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeIonosphericDelayModifier::live$ = false;

          jclass TurnAroundRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3c7040adbf9e5f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeIonosphericDelayModifier::TurnAroundRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3c7040adbf9e5f8, a0.this$, a1)) {}

          ::java::util::List TurnAroundRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void TurnAroundRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void TurnAroundRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeIonosphericDelayModifier, t_TurnAroundRangeIonosphericDelayModifier, TurnAroundRangeIonosphericDelayModifier);

          void t_TurnAroundRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeIonosphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeIonosphericDelayModifier), module, "TurnAroundRangeIonosphericDelayModifier", 0);
          }

          void t_TurnAroundRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "class_", make_descriptor(TurnAroundRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeIonosphericDelayModifier::wrap_Object(TurnAroundRangeIonosphericDelayModifier(((t_TurnAroundRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TurnAroundRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TurnAroundRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeShiftable::class$ = NULL;
      jmethodID *TimeShiftable::mids$ = NULL;
      bool TimeShiftable::live$ = false;

      jclass TimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_d6d7c40512c5891a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeShiftable TimeShiftable::shiftedBy(jdouble a0) const
      {
        return TimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_d6d7c40512c5891a], a0));
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
      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args);
      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg);
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data);
      static PyGetSetDef t_TimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_TimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeShiftable__methods_[] = {
        DECLARE_METHOD(t_TimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeShiftable)[] = {
        { Py_tp_methods, t_TimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeShiftable, t_TimeShiftable, TimeShiftable);
      PyObject *t_TimeShiftable::wrap_Object(const TimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeShiftable *self = (t_TimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeShiftable), &PY_TYPE_DEF(TimeShiftable), module, "TimeShiftable", 0);
      }

      void t_TimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "class_", make_descriptor(TimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "wrapfn_", make_descriptor(t_TimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeShiftable::initializeClass, 1)))
          return NULL;
        return t_TimeShiftable::wrap_Object(TimeShiftable(((t_TimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_TimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeShiftable_of_(t_TimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeShiftable_shiftedBy(t_TimeShiftable *self, PyObject *arg)
      {
        jdouble a0;
        TimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_TimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }
      static PyObject *t_TimeShiftable_get__parameters_(t_TimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *NewcombOperators::class$ = NULL;
            jmethodID *NewcombOperators::mids$ = NULL;
            bool NewcombOperators::live$ = false;

            jclass NewcombOperators::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_fc0469d0c198ef52] = env->getStaticMethodID(cls, "getValue", "(IIII)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble NewcombOperators::getValue(jint a0, jint a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getValue_fc0469d0c198ef52], a0, a1, a2, a3);
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
            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_NewcombOperators__methods_[] = {
              DECLARE_METHOD(t_NewcombOperators, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, getValue, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NewcombOperators)[] = {
              { Py_tp_methods, t_NewcombOperators__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NewcombOperators)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NewcombOperators, t_NewcombOperators, NewcombOperators);

            void t_NewcombOperators::install(PyObject *module)
            {
              installType(&PY_TYPE(NewcombOperators), &PY_TYPE_DEF(NewcombOperators), module, "NewcombOperators", 0);
            }

            void t_NewcombOperators::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "class_", make_descriptor(NewcombOperators::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "wrapfn_", make_descriptor(t_NewcombOperators::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NewcombOperators::initializeClass, 1)))
                return NULL;
              return t_NewcombOperators::wrap_Object(NewcombOperators(((t_NewcombOperators *) arg)->object.this$));
            }
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NewcombOperators::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::NewcombOperators::getValue(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getValue", args);
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
#include "org/orekit/time/UTCTAIOffset.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffset::class$ = NULL;
      jmethodID *UTCTAIOffset::mids$ = NULL;
      bool UTCTAIOffset::live$ = false;

      jclass UTCTAIOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_b74f83833fdad017] = env->getMethodID(cls, "getLeap", "()D");
          mids$[mid_getMJD_55546ef6a647f39b] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getOffset_fd347811007a6ba3] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getOffset_140b8964300ddedf] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOffset_e7a49f02c43fd893] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_getValidityStart_c325492395d89b24] = env->getMethodID(cls, "getValidityStart", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble UTCTAIOffset::getLeap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_b74f83833fdad017]);
      }

      jint UTCTAIOffset::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_55546ef6a647f39b]);
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCTAIOffset::getOffset(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOffset_140b8964300ddedf], a0.this$));
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getValidityStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidityStart_c325492395d89b24]));
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
      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args);
      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data);
      static PyGetSetDef t_UTCTAIOffset__fields_[] = {
        DECLARE_GET_FIELD(t_UTCTAIOffset, date),
        DECLARE_GET_FIELD(t_UTCTAIOffset, leap),
        DECLARE_GET_FIELD(t_UTCTAIOffset, mJD),
        DECLARE_GET_FIELD(t_UTCTAIOffset, validityStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCTAIOffset__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, getDate, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getLeap, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getOffset, METH_VARARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getValidityStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffset)[] = {
        { Py_tp_methods, t_UTCTAIOffset__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCTAIOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffset, t_UTCTAIOffset, UTCTAIOffset);

      void t_UTCTAIOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffset), &PY_TYPE_DEF(UTCTAIOffset), module, "UTCTAIOffset", 0);
      }

      void t_UTCTAIOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "class_", make_descriptor(UTCTAIOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "wrapfn_", make_descriptor(t_UTCTAIOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffset::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffset::wrap_Object(UTCTAIOffset(((t_UTCTAIOffset *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLeap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOffset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getOffset", args);
        return NULL;
      }

      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLeap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *Generator::class$ = NULL;
            jmethodID *Generator::mids$ = NULL;
            bool Generator::live$ = false;

            jclass Generator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/Generator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_2352320e099b9531] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_2352320e099b9531] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_a97dc068e719c14c] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_11ae2994efd15504] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_734b91ac30d5f9b4] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_734b91ac30d5f9b4] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_1c1fa1e935d6cdcf] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_a1fa5dae97ea5ed2] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_6f0f3576df9f75ee] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_03ff9b80a9f63d81] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_ec48f6b9c20c08b3] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_0e7c3032c7c93ed3] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_20c2e4ef4663dfc7] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_f61f520115d82ef0] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_68be04607557ff44] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_06b2ed40d0cea8dd] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_09a7fd998b7aed89] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_bae21004607fffc6] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_6c986fa8f6aabe22] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_7b1b43161792cef8] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_df95ad02f5b4acd9] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_902d69c788edaf18] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void Generator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
            }

            ::java::lang::String Generator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_2352320e099b9531], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_2352320e099b9531], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_a97dc068e719c14c], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String Generator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_11ae2994efd15504], a0));
            }

            void Generator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_734b91ac30d5f9b4], a0.this$);
            }

            void Generator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_734b91ac30d5f9b4], a0.this$);
            }

            ::java::lang::String Generator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat Generator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_e4c64bde02ca34c3]));
            }

            ::java::lang::String Generator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_1c1fa1e935d6cdcf]));
            }

            void Generator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_a1fa5dae97ea5ed2]);
            }

            ::java::lang::String Generator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_6f0f3576df9f75ee], a0.this$));
            }

            void Generator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_03ff9b80a9f63d81], a0.this$, a1.this$, a2);
            }

            ::java::lang::String Generator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_ec48f6b9c20c08b3], a0.this$));
            }

            void Generator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_0e7c3032c7c93ed3], a0.this$);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_20c2e4ef4663dfc7], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_f61f520115d82ef0], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_68be04607557ff44], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_06b2ed40d0cea8dd], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_09a7fd998b7aed89], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_bae21004607fffc6], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_6c986fa8f6aabe22], a0.this$, a1, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_7b1b43161792cef8], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void Generator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_df95ad02f5b4acd9], a0);
            }

            void Generator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_902d69c788edaf18], a0.this$);
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
            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_close(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_exitSection(t_Generator *self);
            static PyObject *t_Generator_getFormat(t_Generator *self);
            static PyObject *t_Generator_getOutputName(t_Generator *self);
            static PyObject *t_Generator_newLine(t_Generator *self);
            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_get__format(t_Generator *self, void *data);
            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data);
            static PyGetSetDef t_Generator__fields_[] = {
              DECLARE_GET_FIELD(t_Generator, format),
              DECLARE_GET_FIELD(t_Generator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Generator__methods_[] = {
              DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, close, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, doubleToString, METH_O),
              DECLARE_METHOD(t_Generator, endMessage, METH_O),
              DECLARE_METHOD(t_Generator, enterSection, METH_O),
              DECLARE_METHOD(t_Generator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getFormat, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_Generator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_Generator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_Generator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_Generator, unitsListToString, METH_O),
              DECLARE_METHOD(t_Generator, writeComments, METH_O),
              DECLARE_METHOD(t_Generator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_Generator, writeRawData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
              { Py_tp_methods, t_Generator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Generator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Generator)[] = {
              &PY_TYPE_DEF(::java::lang::AutoCloseable),
              NULL
            };

            DEFINE_TYPE(Generator, t_Generator, Generator);

            void t_Generator::install(PyObject *module)
            {
              installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
            }

            void t_Generator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
                return NULL;
              return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
            }
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Generator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Generator_close(t_Generator *self, PyObject *args)
            {

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(Generator), (PyObject *) self, "close", args, 2);
            }

            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "endMessage", arg);
              return NULL;
            }

            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_Generator_exitSection(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_Generator_getFormat(t_Generator *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_Generator_getOutputName(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_Generator_newLine(t_Generator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "startMessage", args);
              return NULL;
            }

            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeComments", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_Generator_get__format(t_Generator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *FieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *FieldManeuverTriggersResetter::mids$ = NULL;
          bool FieldManeuverTriggersResetter::live$ = false;

          jclass FieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_maneuverTriggered_871885b409df9d57] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_resetState_370b1acde6244b7e] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FieldManeuverTriggersResetter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
          }

          void FieldManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::FieldSpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_871885b409df9d57], a0.this$, a1);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldManeuverTriggersResetter::resetState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_370b1acde6244b7e], a0.this$));
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
        namespace trigger {
          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_FieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_FieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_FieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldManeuverTriggersResetter, t_FieldManeuverTriggersResetter, FieldManeuverTriggersResetter);
          PyObject *t_FieldManeuverTriggersResetter::wrap_Object(const FieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldManeuverTriggersResetter), &PY_TYPE_DEF(FieldManeuverTriggersResetter), module, "FieldManeuverTriggersResetter", 0);
          }

          void t_FieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "class_", make_descriptor(FieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_FieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_FieldManeuverTriggersResetter::wrap_Object(FieldManeuverTriggersResetter(((t_FieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;

            if (!parseArgs(args, "KZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data)
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
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader$ITRFVersionConfiguration::class$ = NULL;
      jmethodID *ITRFVersionLoader$ITRFVersionConfiguration::mids$ = NULL;
      bool ITRFVersionLoader$ITRFVersionConfiguration::live$ = false;

      jclass ITRFVersionLoader$ITRFVersionConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e9ff5fabd0096151] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/frames/ITRFVersion;II)V");
          mids$[mid_appliesTo_cde6b28e15c96b75] = env->getMethodID(cls, "appliesTo", "(Ljava/lang/String;)Z");
          mids$[mid_getVersion_8bcdfad365f6d36a] = env->getMethodID(cls, "getVersion", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_isValid_96f51a3f36d3a2a7] = env->getMethodID(cls, "isValid", "(I)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader$ITRFVersionConfiguration::ITRFVersionLoader$ITRFVersionConfiguration(const ::java::lang::String & a0, const ::org::orekit::frames::ITRFVersion & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e9ff5fabd0096151, a0.this$, a1.this$, a2, a3)) {}

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::appliesTo(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_appliesTo_cde6b28e15c96b75], a0.this$);
      }

      ::org::orekit::frames::ITRFVersion ITRFVersionLoader$ITRFVersionConfiguration::getVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getVersion_8bcdfad365f6d36a]));
      }

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::isValid(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isValid_96f51a3f36d3a2a7], a0);
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
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data);
      static PyGetSetDef t_ITRFVersionLoader$ITRFVersionConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersionLoader$ITRFVersionConfiguration, version),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersionLoader$ITRFVersionConfiguration__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, appliesTo, METH_O),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, getVersion, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, isValid, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        { Py_tp_methods, t_ITRFVersionLoader$ITRFVersionConfiguration__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader$ITRFVersionConfiguration_init_ },
        { Py_tp_getset, t_ITRFVersionLoader$ITRFVersionConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader$ITRFVersionConfiguration, t_ITRFVersionLoader$ITRFVersionConfiguration, ITRFVersionLoader$ITRFVersionConfiguration);

      void t_ITRFVersionLoader$ITRFVersionConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), &PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration), module, "ITRFVersionLoader$ITRFVersionConfiguration", 0);
      }

      void t_ITRFVersionLoader$ITRFVersionConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "class_", make_descriptor(ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "wrapfn_", make_descriptor(t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(ITRFVersionLoader$ITRFVersionConfiguration(((t_ITRFVersionLoader$ITRFVersionConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
        PyTypeObject **p1;
        jint a2;
        jint a3;
        ITRFVersionLoader$ITRFVersionConfiguration object((jobject) NULL);

        if (!parseArgs(args, "sKII", ::org::orekit::frames::ITRFVersion::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2, &a3))
        {
          INT_CALL(object = ITRFVersionLoader$ITRFVersionConfiguration(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.appliesTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "appliesTo", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.isValid(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isValid", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "java/io/Serializable.h"
#include "java/lang/Double.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealVector::class$ = NULL;
      jmethodID *OpenMapRealVector::mids$ = NULL;
      bool OpenMapRealVector::live$ = false;
      jdouble OpenMapRealVector::DEFAULT_ZERO_TOLERANCE = (jdouble) 0;

      jclass OpenMapRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_c7e68cf2401062fd] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_872f190ac7ffe0f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_334f245ec9cee46b] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_86ce2862f9d7e5cc] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;D)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_94fe8d9ffeb50676] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_add_ecf73b1597383c1a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_add_d5f1d017fd25113b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_ecf73b1597383c1a] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_71c91d164d1c66d4] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_append_e63e4f21d34131ef] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_copy_03a171197d666e91] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeDivide_71c91d164d1c66d4] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_ebeMultiply_71c91d164d1c66d4] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_0c809322800ffaf2] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getDistance_532b95759e51e831] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_2afcbc21f4e57ab2] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_0c809322800ffaf2] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/OpenMapRealVector;)D");
          mids$[mid_getL1Distance_532b95759e51e831] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfDistance_532b95759e51e831] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getSparsity_b74f83833fdad017] = env->getMethodID(cls, "getSparsity", "()D");
          mids$[mid_getSubVector_b566fbb7268770e0] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_mapAdd_e63e4f21d34131ef] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_mapAddToSelf_e63e4f21d34131ef] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_set_8ba9fe7a847cecad] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_d5322b8b512aeb26] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_ecf73b1597383c1a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealVector;)Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_subtract_d5f1d017fd25113b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_25e1757a36c4dde2] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_03a171197d666e91] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/OpenMapRealVector;");
          mids$[mid_unitize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_isDefaultValue_716249baa52d209e] = env->getMethodID(cls, "isDefaultValue", "(D)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ZERO_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_ZERO_TOLERANCE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealVector::OpenMapRealVector() : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_c7e68cf2401062fd, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_872f190ac7ffe0f7, a0.this$)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_334f245ec9cee46b, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(const JArray< ::java::lang::Double > & a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_86ce2862f9d7e5cc, a0.this$, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      OpenMapRealVector::OpenMapRealVector(jint a0, jint a1, jdouble a2) : ::org::hipparchus::linear::SparseRealVector(env->newObject(initializeClass, &mids$, mid_init$_94fe8d9ffeb50676, a0, a1, a2)) {}

      OpenMapRealVector OpenMapRealVector::add(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_add_ecf73b1597383c1a], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_add_d5f1d017fd25113b], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_ecf73b1597383c1a], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_71c91d164d1c66d4], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::append(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_append_e63e4f21d34131ef], a0));
      }

      OpenMapRealVector OpenMapRealVector::copy() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_copy_03a171197d666e91]));
      }

      OpenMapRealVector OpenMapRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_71c91d164d1c66d4], a0.this$));
      }

      OpenMapRealVector OpenMapRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_71c91d164d1c66d4], a0.this$));
      }

      jboolean OpenMapRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jint OpenMapRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      jdouble OpenMapRealVector::getDistance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_0c809322800ffaf2], a0.this$);
      }

      jdouble OpenMapRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_532b95759e51e831], a0.this$);
      }

      jdouble OpenMapRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_2afcbc21f4e57ab2], a0);
      }

      jdouble OpenMapRealVector::getL1Distance(const OpenMapRealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_0c809322800ffaf2], a0.this$);
      }

      jdouble OpenMapRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_532b95759e51e831], a0.this$);
      }

      jdouble OpenMapRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_532b95759e51e831], a0.this$);
      }

      jdouble OpenMapRealVector::getSparsity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSparsity_b74f83833fdad017]);
      }

      OpenMapRealVector OpenMapRealVector::getSubVector(jint a0, jint a1) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_b566fbb7268770e0], a0, a1));
      }

      jint OpenMapRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean OpenMapRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      jboolean OpenMapRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
      }

      OpenMapRealVector OpenMapRealVector::mapAdd(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_e63e4f21d34131ef], a0));
      }

      OpenMapRealVector OpenMapRealVector::mapAddToSelf(jdouble a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_e63e4f21d34131ef], a0));
      }

      void OpenMapRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_8ba9fe7a847cecad], a0);
      }

      void OpenMapRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d5322b8b512aeb26], a0, a1);
      }

      void OpenMapRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      ::java::util::Iterator OpenMapRealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_fc7780bc5d5b73b0]));
      }

      OpenMapRealVector OpenMapRealVector::subtract(const OpenMapRealVector & a0) const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_subtract_ecf73b1597383c1a], a0.this$));
      }

      ::org::hipparchus::linear::RealVector OpenMapRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_subtract_d5f1d017fd25113b], a0.this$));
      }

      JArray< jdouble > OpenMapRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_25e1757a36c4dde2]));
      }

      OpenMapRealVector OpenMapRealVector::unitVector() const
      {
        return OpenMapRealVector(env->callObjectMethod(this$, mids$[mid_unitVector_03a171197d666e91]));
      }

      void OpenMapRealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_a1fa5dae97ea5ed2]);
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
      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self);
      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args);
      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data);
      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data);
      static PyGetSetDef t_OpenMapRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealVector, dimension),
        DECLARE_GET_FIELD(t_OpenMapRealVector, infinite),
        DECLARE_GET_FIELD(t_OpenMapRealVector, naN),
        DECLARE_GET_FIELD(t_OpenMapRealVector, sparsity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealVector__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSparsity, METH_NOARGS),
        DECLARE_METHOD(t_OpenMapRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAdd, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, sparseIterator, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitVector, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealVector, unitize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealVector)[] = {
        { Py_tp_methods, t_OpenMapRealVector__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealVector_init_ },
        { Py_tp_getset, t_OpenMapRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::SparseRealVector),
        NULL
      };

      DEFINE_TYPE(OpenMapRealVector, t_OpenMapRealVector, OpenMapRealVector);

      void t_OpenMapRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealVector), &PY_TYPE_DEF(OpenMapRealVector), module, "OpenMapRealVector", 0);
      }

      void t_OpenMapRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "class_", make_descriptor(OpenMapRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "wrapfn_", make_descriptor(t_OpenMapRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(OpenMapRealVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealVector), "DEFAULT_ZERO_TOLERANCE", make_descriptor(OpenMapRealVector::DEFAULT_ZERO_TOLERANCE));
      }

      static PyObject *t_OpenMapRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealVector::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealVector::wrap_Object(OpenMapRealVector(((t_OpenMapRealVector *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealVector_init_(t_OpenMapRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenMapRealVector object((jobject) NULL);

            INT_CALL(object = OpenMapRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenMapRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OD", ::java::lang::PY_TYPE(Double), &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            OpenMapRealVector object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = OpenMapRealVector(a0, a1, a2));
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

      static PyObject *t_OpenMapRealVector_add(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealVector_append(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_OpenMapRealVector_copy(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeDivide(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_OpenMapRealVector_ebeMultiply(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealVector_equals(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDimension(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDistance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getL1Distance(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getL1Distance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getLInfDistance(t_OpenMapRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_OpenMapRealVector_getSparsity(t_OpenMapRealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSparsity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OpenMapRealVector_getSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_hashCode(t_OpenMapRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isInfinite(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_OpenMapRealVector_isNaN(t_OpenMapRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAdd(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAdd", args, 2);
      }

      static PyObject *t_OpenMapRealVector_mapAddToSelf(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_OpenMapRealVector_set(t_OpenMapRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setEntry(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealVector_setSubVector(t_OpenMapRealVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_sparseIterator(t_OpenMapRealVector *self, PyObject *args)
      {
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.sparseIterator());
          return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "sparseIterator", args, 2);
      }

      static PyObject *t_OpenMapRealVector_subtract(t_OpenMapRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealVector a0((jobject) NULL);
            OpenMapRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealVector_toArray(t_OpenMapRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitVector(t_OpenMapRealVector *self, PyObject *args)
      {
        OpenMapRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.unitVector());
          return t_OpenMapRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitVector", args, 2);
      }

      static PyObject *t_OpenMapRealVector_unitize(t_OpenMapRealVector *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.unitize());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealVector), (PyObject *) self, "unitize", args, 2);
      }

      static PyObject *t_OpenMapRealVector_get__dimension(t_OpenMapRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealVector_get__infinite(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__naN(t_OpenMapRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_OpenMapRealVector_get__sparsity(t_OpenMapRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSparsity());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadata::class$ = NULL;
            jmethodID *AdmMetadata::mids$ = NULL;
            bool AdmMetadata::live$ = false;

            jclass AdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCenter_52253a5b5c02abfe] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getHasCreatableBody_9ab94ac1dc23b105] = env->getMethodID(cls, "getHasCreatableBody", "()Z");
                mids$[mid_getLaunchNumber_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_55546ef6a647f39b] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getObjectName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setCenter_564458ee450fa323] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setObjectID_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmMetadata::AdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::org::orekit::files::ccsds::definitions::BodyFacade AdmMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_52253a5b5c02abfe]));
            }

            jboolean AdmMetadata::getHasCreatableBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getHasCreatableBody_9ab94ac1dc23b105]);
            }

            jint AdmMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_55546ef6a647f39b]);
            }

            ::java::lang::String AdmMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_1c1fa1e935d6cdcf]));
            }

            jint AdmMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_55546ef6a647f39b]);
            }

            ::java::lang::String AdmMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String AdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_1c1fa1e935d6cdcf]));
            }

            void AdmMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_564458ee450fa323], a0.this$);
            }

            void AdmMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_734b91ac30d5f9b4], a0.this$);
            }

            void AdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_734b91ac30d5f9b4], a0.this$);
            }

            void AdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args);
            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdmMetadata, center),
              DECLARE_GET_FIELD(t_AdmMetadata, hasCreatableBody),
              DECLARE_GET_FIELD(t_AdmMetadata, launchNumber),
              DECLARE_GET_FIELD(t_AdmMetadata, launchPiece),
              DECLARE_GET_FIELD(t_AdmMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectID),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadata__methods_[] = {
              DECLARE_METHOD(t_AdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getHasCreatableBody, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_AdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadata)[] = {
              { Py_tp_methods, t_AdmMetadata__methods_ },
              { Py_tp_init, (void *) t_AdmMetadata_init_ },
              { Py_tp_getset, t_AdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(AdmMetadata, t_AdmMetadata, AdmMetadata);

            void t_AdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadata), &PY_TYPE_DEF(AdmMetadata), module, "AdmMetadata", 0);
            }

            void t_AdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "class_", make_descriptor(AdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "wrapfn_", make_descriptor(t_AdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadata::initializeClass, 1)))
                return NULL;
              return t_AdmMetadata::wrap_Object(AdmMetadata(((t_AdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdmMetadata object((jobject) NULL);

              INT_CALL(object = AdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectID(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectID", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "center", arg);
              return -1;
            }

            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectID(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectID", arg);
              return -1;
            }

            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonDSSTForceModel::class$ = NULL;
            jmethodID *PythonDSSTForceModel::mids$ = NULL;
            bool PythonDSSTForceModel::live$ = false;

            jclass PythonDSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonDSSTForceModel::PythonDSSTForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonDSSTForceModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonDSSTForceModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonDSSTForceModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self);
            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data);
            static PyGetSetDef t_PythonDSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonDSSTForceModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonDSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_PythonDSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonDSSTForceModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonDSSTForceModel)[] = {
              { Py_tp_methods, t_PythonDSSTForceModel__methods_ },
              { Py_tp_init, (void *) t_PythonDSSTForceModel_init_ },
              { Py_tp_getset, t_PythonDSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonDSSTForceModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonDSSTForceModel, t_PythonDSSTForceModel, PythonDSSTForceModel);

            void t_PythonDSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonDSSTForceModel), &PY_TYPE_DEF(PythonDSSTForceModel), module, "PythonDSSTForceModel", 1);
            }

            void t_PythonDSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "class_", make_descriptor(PythonDSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "wrapfn_", make_descriptor(t_PythonDSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonDSSTForceModel::initializeClass);
              JNINativeMethod methods[] = {
                { "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDSSTForceModel_getMeanElementRate0 },
                { "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D", (void *) t_PythonDSSTForceModel_getMeanElementRate1 },
                { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDSSTForceModel_getParametersDrivers2 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms3 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms4 },
                { "pythonDecRef", "()V", (void *) t_PythonDSSTForceModel_pythonDecRef5 },
                { "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonDSSTForceModel_registerAttitudeProvider6 },
                { "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms7 },
                { "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms8 },
              };
              env->registerNatives(cls, methods, 9);
            }

            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonDSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_PythonDSSTForceModel::wrap_Object(PythonDSSTForceModel(((t_PythonDSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonDSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds)
            {
              PythonDSSTForceModel object((jobject) NULL);

              INT_CALL(object = PythonDSSTForceModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
              PyObject *result = PyObject_CallMethod(obj, "registerAttitudeProvider", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jdouble>(a0).wrap();
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_FieldSpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data)
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
#include "org/hipparchus/analysis/function/Logistic.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic::class$ = NULL;
        jmethodID *Logistic::mids$ = NULL;
        bool Logistic::live$ = false;

        jclass Logistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5efe929945898acc] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic::Logistic(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5efe929945898acc, a0, a1, a2, a3, a4, a5)) {}

        jdouble Logistic::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logistic::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args);

        static PyMethodDef t_Logistic__methods_[] = {
          DECLARE_METHOD(t_Logistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic)[] = {
          { Py_tp_methods, t_Logistic__methods_ },
          { Py_tp_init, (void *) t_Logistic_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic, t_Logistic, Logistic);

        void t_Logistic::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic), &PY_TYPE_DEF(Logistic), module, "Logistic", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "Parametric", make_descriptor(&PY_TYPE_DEF(Logistic$Parametric)));
        }

        void t_Logistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "class_", make_descriptor(Logistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "wrapfn_", make_descriptor(t_Logistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic::initializeClass, 1)))
            return NULL;
          return t_Logistic::wrap_Object(Logistic(((t_Logistic *) arg)->object.this$));
        }
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          Logistic object((jobject) NULL);

          if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Logistic(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args)
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
#include "org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *GlonassUserRangeAccuracy::class$ = NULL;
            jmethodID *GlonassUserRangeAccuracy::mids$ = NULL;
            bool GlonassUserRangeAccuracy::live$ = false;

            jclass GlonassUserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GlonassUserRangeAccuracy::GlonassUserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            jdouble GlonassUserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_b74f83833fdad017]);
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
            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self);
            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data);
            static PyGetSetDef t_GlonassUserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_GlonassUserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GlonassUserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GlonassUserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GlonassUserRangeAccuracy)[] = {
              { Py_tp_methods, t_GlonassUserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_GlonassUserRangeAccuracy_init_ },
              { Py_tp_getset, t_GlonassUserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GlonassUserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GlonassUserRangeAccuracy, t_GlonassUserRangeAccuracy, GlonassUserRangeAccuracy);

            void t_GlonassUserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(GlonassUserRangeAccuracy), &PY_TYPE_DEF(GlonassUserRangeAccuracy), module, "GlonassUserRangeAccuracy", 0);
            }

            void t_GlonassUserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "class_", make_descriptor(GlonassUserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "wrapfn_", make_descriptor(t_GlonassUserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassUserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GlonassUserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_GlonassUserRangeAccuracy::wrap_Object(GlonassUserRangeAccuracy(((t_GlonassUserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_GlonassUserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GlonassUserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GlonassUserRangeAccuracy_init_(t_GlonassUserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              GlonassUserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = GlonassUserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GlonassUserRangeAccuracy_getAccuracy(t_GlonassUserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GlonassUserRangeAccuracy_get__accuracy(t_GlonassUserRangeAccuracy *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_getDensity_e9a4fc2340b58984] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_58866e32a1c9318b] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_2e30102aa3d53198] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getVelocity_b79629c6a3fafdaa] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement Atmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e9a4fc2340b58984], a0.this$, a1.this$, a2.this$));
          }

          jdouble Atmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_58866e32a1c9318b], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame Atmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Atmosphere::getVelocity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_2e30102aa3d53198], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Atmosphere::getVelocity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_b79629c6a3fafdaa], a0.this$, a1.this$, a2.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_d5322b8b512aeb26] = env->getMethodID(cls, "accept", "(ID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleConsumer::accept(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_d5322b8b512aeb26], a0, a1);
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
            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleConsumer, t_ParseToken$IndexedDoubleConsumer, ParseToken$IndexedDoubleConsumer);

            void t_ParseToken$IndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer), module, "ParseToken$IndexedDoubleConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleConsumer::wrap_Object(ParseToken$IndexedDoubleConsumer(((t_ParseToken$IndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleConsumer_accept(t_ParseToken$IndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
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
#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
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
            mids$[mid_getCoefficients_25e1757a36c4dde2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_setup_316b9297be8b2a08] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/polynomials/PolynomialFunction;DDD)V");

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
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/UTCScale.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UT1Scale::class$ = NULL;
      jmethodID *UT1Scale::mids$ = NULL;
      bool UT1Scale::live$ = false;

      jclass UT1Scale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UT1Scale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_f9d30be358d43685] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCScale_1e4acbbebd50858e] = env->getMethodID(cls, "getUTCScale", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory UT1Scale::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_f9d30be358d43685]));
      }

      ::java::lang::String UT1Scale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::time::UTCScale UT1Scale::getUTCScale() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTCScale_1e4acbbebd50858e]));
      }

      jdouble UT1Scale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UT1Scale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String UT1Scale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getName(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self);
      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data);
      static PyGetSetDef t_UT1Scale__fields_[] = {
        DECLARE_GET_FIELD(t_UT1Scale, eOPHistory),
        DECLARE_GET_FIELD(t_UT1Scale, name),
        DECLARE_GET_FIELD(t_UT1Scale, uTCScale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UT1Scale__methods_[] = {
        DECLARE_METHOD(t_UT1Scale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getUTCScale, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UT1Scale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UT1Scale)[] = {
        { Py_tp_methods, t_UT1Scale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UT1Scale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UT1Scale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UT1Scale, t_UT1Scale, UT1Scale);

      void t_UT1Scale::install(PyObject *module)
      {
        installType(&PY_TYPE(UT1Scale), &PY_TYPE_DEF(UT1Scale), module, "UT1Scale", 0);
      }

      void t_UT1Scale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "class_", make_descriptor(UT1Scale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "wrapfn_", make_descriptor(t_UT1Scale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UT1Scale::initializeClass, 1)))
          return NULL;
        return t_UT1Scale::wrap_Object(UT1Scale(((t_UT1Scale *) arg)->object.this$));
      }
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UT1Scale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_getName(t_UT1Scale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UT1Scale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
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
              mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_7fab758a818e0182] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_c7387344adbf63af] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessagesParser::RtcmMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}
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
#include "org/orekit/forces/gravity/NewtonianAttraction.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *NewtonianAttraction::class$ = NULL;
        jmethodID *NewtonianAttraction::mids$ = NULL;
        bool NewtonianAttraction::live$ = false;
        ::java::lang::String *NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

        jclass NewtonianAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/NewtonianAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addContribution_6aa2b69cacacea60] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_ab5e59960ebc27c2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_fd347811007a6ba3] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMu_e85ef2b890908344] = env->getMethodID(cls, "getMu", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonianAttraction::NewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_6aa2b69cacacea60], a0.this$, a1.this$);
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_ab5e59960ebc27c2], a0.this$, a1.this$);
        }

        jboolean NewtonianAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        jdouble NewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_fd347811007a6ba3], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement NewtonianAttraction::getMu(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_e85ef2b890908344], a0.this$, a1.this$));
        }

        ::java::util::List NewtonianAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data);
        static PyGetSetDef t_NewtonianAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonianAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonianAttraction__methods_[] = {
          DECLARE_METHOD(t_NewtonianAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getMu, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonianAttraction)[] = {
          { Py_tp_methods, t_NewtonianAttraction__methods_ },
          { Py_tp_init, (void *) t_NewtonianAttraction_init_ },
          { Py_tp_getset, t_NewtonianAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonianAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NewtonianAttraction, t_NewtonianAttraction, NewtonianAttraction);

        void t_NewtonianAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonianAttraction), &PY_TYPE_DEF(NewtonianAttraction), module, "NewtonianAttraction", 0);
        }

        void t_NewtonianAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "class_", make_descriptor(NewtonianAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "wrapfn_", make_descriptor(t_NewtonianAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(NewtonianAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
        }

        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonianAttraction::initializeClass, 1)))
            return NULL;
          return t_NewtonianAttraction::wrap_Object(NewtonianAttraction(((t_NewtonianAttraction *) arg)->object.this$));
        }
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonianAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          NewtonianAttraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = NewtonianAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
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
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getMu(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
