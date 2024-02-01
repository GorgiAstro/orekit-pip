#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory::class$ = NULL;
        jmethodID *FDSFactory::mids$ = NULL;
        bool FDSFactory::live$ = false;

        jclass FDSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_build_73620040306e9955] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_build_1658e30325c495f4] = env->getMethodID(cls, "build", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_b9026a046a147de2] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_ca7a13fcccfd32de] = env->getMethodID(cls, "constant", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getCompiler_cf2c785981ead135] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_66009d8e2e7d406d] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/FDSFactory$DerivativeField;");
            mids$[mid_getValueField_577649682b9910c1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_variable_59275c3828a531bd] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_variable_5dc18191805048ae] = env->getMethodID(cls, "variable", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDSFactory::FDSFactory(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_73620040306e9955], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_1658e30325c495f4], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_b9026a046a147de2], a0));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_ca7a13fcccfd32de], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler FDSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_cf2c785981ead135]));
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField FDSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_66009d8e2e7d406d]));
        }

        ::org::hipparchus::Field FDSFactory::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_577649682b9910c1]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_59275c3828a531bd], a0, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_5dc18191805048ae], a0, a1.this$));
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
        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args);
        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data);
        static PyGetSetDef t_FDSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory, compiler),
          DECLARE_GET_FIELD(t_FDSFactory, derivativeField),
          DECLARE_GET_FIELD(t_FDSFactory, valueField),
          DECLARE_GET_FIELD(t_FDSFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory__methods_[] = {
          DECLARE_METHOD(t_FDSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, build, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, constant, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory)[] = {
          { Py_tp_methods, t_FDSFactory__methods_ },
          { Py_tp_init, (void *) t_FDSFactory_init_ },
          { Py_tp_getset, t_FDSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory, t_FDSFactory, FDSFactory);
        PyObject *t_FDSFactory::wrap_Object(const FDSFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory), &PY_TYPE_DEF(FDSFactory), module, "FDSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "DerivativeField", make_descriptor(&PY_TYPE_DEF(FDSFactory$DerivativeField)));
        }

        void t_FDSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "class_", make_descriptor(FDSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "wrapfn_", make_descriptor(t_FDSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory::initializeClass, 1)))
            return NULL;
          return t_FDSFactory::wrap_Object(FDSFactory(((t_FDSFactory *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          FDSFactory object((jobject) NULL);

          if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
          {
            INT_CALL(object = FDSFactory(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "constant", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaTurnAroundRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaTurnAroundRangeModifier::mids$ = NULL;
          bool OnBoardAntennaTurnAroundRangeModifier::live$ = false;

          jclass OnBoardAntennaTurnAroundRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_30f8886dfb88a63c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaTurnAroundRangeModifier::OnBoardAntennaTurnAroundRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30f8886dfb88a63c, a0.this$)) {}

          ::java::util::List OnBoardAntennaTurnAroundRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void OnBoardAntennaTurnAroundRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaTurnAroundRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaTurnAroundRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaTurnAroundRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaTurnAroundRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaTurnAroundRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaTurnAroundRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaTurnAroundRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaTurnAroundRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaTurnAroundRangeModifier, t_OnBoardAntennaTurnAroundRangeModifier, OnBoardAntennaTurnAroundRangeModifier);

          void t_OnBoardAntennaTurnAroundRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), &PY_TYPE_DEF(OnBoardAntennaTurnAroundRangeModifier), module, "OnBoardAntennaTurnAroundRangeModifier", 0);
          }

          void t_OnBoardAntennaTurnAroundRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "class_", make_descriptor(OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaTurnAroundRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaTurnAroundRangeModifier::wrap_Object(OnBoardAntennaTurnAroundRangeModifier(((t_OnBoardAntennaTurnAroundRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            OnBoardAntennaTurnAroundRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = OnBoardAntennaTurnAroundRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data)
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
#include "org/hipparchus/optim/MaxEval.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxEval::class$ = NULL;
      jmethodID *MaxEval::mids$ = NULL;
      bool MaxEval::live$ = false;

      jclass MaxEval::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxEval");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxEval_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEval", "()I");
          mids$[mid_unlimited_defb83bcd601e076] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxEval;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxEval::MaxEval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      jint MaxEval::getMaxEval() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEval_d6ab429752e7c267]);
      }

      MaxEval MaxEval::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxEval(env->callStaticObjectMethod(cls, mids$[mid_unlimited_defb83bcd601e076]));
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
      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self);
      static PyObject *t_MaxEval_unlimited(PyTypeObject *type);
      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data);
      static PyGetSetDef t_MaxEval__fields_[] = {
        DECLARE_GET_FIELD(t_MaxEval, maxEval),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxEval__methods_[] = {
        DECLARE_METHOD(t_MaxEval, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, getMaxEval, METH_NOARGS),
        DECLARE_METHOD(t_MaxEval, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxEval)[] = {
        { Py_tp_methods, t_MaxEval__methods_ },
        { Py_tp_init, (void *) t_MaxEval_init_ },
        { Py_tp_getset, t_MaxEval__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxEval)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxEval, t_MaxEval, MaxEval);

      void t_MaxEval::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxEval), &PY_TYPE_DEF(MaxEval), module, "MaxEval", 0);
      }

      void t_MaxEval::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "class_", make_descriptor(MaxEval::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "wrapfn_", make_descriptor(t_MaxEval::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxEval::initializeClass, 1)))
          return NULL;
        return t_MaxEval::wrap_Object(MaxEval(((t_MaxEval *) arg)->object.this$));
      }
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxEval::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxEval object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxEval(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEval());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxEval_unlimited(PyTypeObject *type)
      {
        MaxEval result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxEval::unlimited());
        return t_MaxEval::wrap_Object(result);
      }

      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEval());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTSolarRadiationPressure::class$ = NULL;
            jmethodID *DSSTSolarRadiationPressure::mids$ = NULL;
            bool DSSTSolarRadiationPressure::live$ = false;

            jclass DSSTSolarRadiationPressure::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fedac73c650c8906] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_84f1dc809037d397] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_init$_02072059e9d75829] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_9f13a4da6fee365a] = env->getMethodID(cls, "<init>", "(DDDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_getEquatorialRadius_9981f74b2d109da6] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                mids$[mid_getSpacecraft_3dd1229abd19b8f5] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/radiation/RadiationSensitive;");
                mids$[mid_getLLimits_5bf18b5e9ec57652] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_15451c899b8436e1] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_d751c1a57012b438] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_fedac73c650c8906, a0.this$, a1.this$, a2.this$, a3)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, jdouble a4) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_84f1dc809037d397, a0, a1, a2.this$, a3.this$, a4)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4, jdouble a5) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_02072059e9d75829, a0, a1, a2.this$, a3.this$, a4.this$, a5)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::bodies::OneAxisEllipsoid & a5, jdouble a6) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_9f13a4da6fee365a, a0, a1, a2, a3, a4.this$, a5.this$, a6)) {}

            jdouble DSSTSolarRadiationPressure::getEquatorialRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_9981f74b2d109da6]);
            }

            ::org::orekit::forces::radiation::RadiationSensitive DSSTSolarRadiationPressure::getSpacecraft() const
            {
              return ::org::orekit::forces::radiation::RadiationSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_3dd1229abd19b8f5]));
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
            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data);
            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data);
            static PyGetSetDef t_DSSTSolarRadiationPressure__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, equatorialRadius),
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTSolarRadiationPressure__methods_[] = {
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getEquatorialRadius, METH_NOARGS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTSolarRadiationPressure)[] = {
              { Py_tp_methods, t_DSSTSolarRadiationPressure__methods_ },
              { Py_tp_init, (void *) t_DSSTSolarRadiationPressure_init_ },
              { Py_tp_getset, t_DSSTSolarRadiationPressure__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTSolarRadiationPressure)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTSolarRadiationPressure, t_DSSTSolarRadiationPressure, DSSTSolarRadiationPressure);

            void t_DSSTSolarRadiationPressure::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTSolarRadiationPressure), &PY_TYPE_DEF(DSSTSolarRadiationPressure), module, "DSSTSolarRadiationPressure", 0);
            }

            void t_DSSTSolarRadiationPressure::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "class_", make_descriptor(DSSTSolarRadiationPressure::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "wrapfn_", make_descriptor(t_DSSTSolarRadiationPressure::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 1)))
                return NULL;
              return t_DSSTSolarRadiationPressure::wrap_Object(DSSTSolarRadiationPressure(((t_DSSTSolarRadiationPressure *) arg)->object.this$));
            }
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
                  jdouble a3;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "kkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  jdouble a4;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
                  jdouble a5;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a5((jobject) NULL);
                  jdouble a6;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDDDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self)
            {
              ::org::orekit::forces::radiation::RadiationSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data)
            {
              ::org::orekit::forces::radiation::RadiationSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContributionContext::class$ = NULL;
            jmethodID *AbstractGaussianContributionContext::mids$ = NULL;
            bool AbstractGaussianContributionContext::live$ = false;

            jclass AbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCo2AB_9981f74b2d109da6] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOOA_9981f74b2d109da6] = env->getMethodID(cls, "getOOA", "()D");
                mids$[mid_getOOAB_9981f74b2d109da6] = env->getMethodID(cls, "getOOAB", "()D");
                mids$[mid_getOoBpo_9981f74b2d109da6] = env->getMethodID(cls, "getOoBpo", "()D");
                mids$[mid_getOoMU_9981f74b2d109da6] = env->getMethodID(cls, "getOoMU", "()D");
                mids$[mid_getTon2a_9981f74b2d109da6] = env->getMethodID(cls, "getTon2a", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AbstractGaussianContributionContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_9981f74b2d109da6]);
            }

            jdouble AbstractGaussianContributionContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            jdouble AbstractGaussianContributionContext::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
            }

            jdouble AbstractGaussianContributionContext::getOOA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOA_9981f74b2d109da6]);
            }

            jdouble AbstractGaussianContributionContext::getOOAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOAB_9981f74b2d109da6]);
            }

            jdouble AbstractGaussianContributionContext::getOoBpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoBpo_9981f74b2d109da6]);
            }

            jdouble AbstractGaussianContributionContext::getOoMU() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoMU_9981f74b2d109da6]);
            }

            jdouble AbstractGaussianContributionContext::getTon2a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTon2a_9981f74b2d109da6]);
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
            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_AbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ton2a),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_AbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContributionContext, t_AbstractGaussianContributionContext, AbstractGaussianContributionContext);

            void t_AbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContributionContext), &PY_TYPE_DEF(AbstractGaussianContributionContext), module, "AbstractGaussianContributionContext", 0);
            }

            void t_AbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "class_", make_descriptor(AbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_AbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContributionContext::wrap_Object(AbstractGaussianContributionContext(((t_AbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoBpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoMU());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTon2a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoBpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoMU());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTon2a());
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
#include "org/orekit/files/ccsds/utils/generation/XmlGenerator.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *XmlGenerator::class$ = NULL;
            jmethodID *XmlGenerator::mids$ = NULL;
            bool XmlGenerator::live$ = false;
            jint XmlGenerator::DEFAULT_INDENT = (jint) 0;
            ::java::lang::String *XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION = NULL;
            ::java::lang::String *XmlGenerator::UNITS = NULL;

            jclass XmlGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/XmlGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1267b62deec50ea6] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DZLjava/lang/String;)V");
                mids$[mid_endMessage_105e1eadb709d9ac] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_105e1eadb709d9ac] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_d2c8eb4129821f0e] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_04f72a78f21743a7] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_aa335fea495d60e0] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_dbec4ebd43084884] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeOneAttributeElement_e0fb351f45d43efa] = env->getMethodID(cls, "writeOneAttributeElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_writeTwoAttributesElement_799a817065a795a1] = env->getMethodID(cls, "writeTwoAttributesElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INDENT = env->getStaticIntField(cls, "DEFAULT_INDENT");
                NDM_XML_V3_SCHEMA_LOCATION = new ::java::lang::String(env->getStaticObjectField(cls, "NDM_XML_V3_SCHEMA_LOCATION", "Ljava/lang/String;"));
                UNITS = new ::java::lang::String(env->getStaticObjectField(cls, "UNITS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlGenerator::XmlGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_1267b62deec50ea6, a0.this$, a1, a2.this$, a3, a4, a5.this$)) {}

            void XmlGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_105e1eadb709d9ac], a0.this$);
            }

            void XmlGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_105e1eadb709d9ac], a0.this$);
            }

            ::java::lang::String XmlGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat XmlGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_49975b0867f6c97c]));
            }

            void XmlGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_04f72a78f21743a7], a0.this$, a1.this$, a2);
            }

            void XmlGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_aa335fea495d60e0], a0.this$);
            }

            void XmlGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_dbec4ebd43084884], a0.this$, a1.this$, a2.this$, a3);
            }

            void XmlGenerator::writeOneAttributeElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeOneAttributeElement_e0fb351f45d43efa], a0.this$, a1.this$, a2.this$, a3.this$);
            }

            void XmlGenerator::writeTwoAttributesElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
            {
              env->callVoidMethod(this$, mids$[mid_writeTwoAttributesElement_799a817065a795a1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
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
            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data);
            static PyGetSetDef t_XmlGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_XmlGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlGenerator__methods_[] = {
              DECLARE_METHOD(t_XmlGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeOneAttributeElement, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeTwoAttributesElement, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlGenerator)[] = {
              { Py_tp_methods, t_XmlGenerator__methods_ },
              { Py_tp_init, (void *) t_XmlGenerator_init_ },
              { Py_tp_getset, t_XmlGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(XmlGenerator, t_XmlGenerator, XmlGenerator);

            void t_XmlGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlGenerator), &PY_TYPE_DEF(XmlGenerator), module, "XmlGenerator", 0);
            }

            void t_XmlGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "class_", make_descriptor(XmlGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "wrapfn_", make_descriptor(t_XmlGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlGenerator::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "DEFAULT_INDENT", make_descriptor(XmlGenerator::DEFAULT_INDENT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "NDM_XML_V3_SCHEMA_LOCATION", make_descriptor(j2p(*XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "UNITS", make_descriptor(j2p(*XmlGenerator::UNITS)));
            }

            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlGenerator::initializeClass, 1)))
                return NULL;
              return t_XmlGenerator::wrap_Object(XmlGenerator(((t_XmlGenerator *) arg)->object.this$));
            }
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jboolean a4;
              ::java::lang::String a5((jobject) NULL);
              XmlGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDZs", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = XmlGenerator(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args)
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

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);

              if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.writeOneAttributeElement(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeOneAttributeElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::lang::String a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);

              if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.writeTwoAttributesElement(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeTwoAttributesElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPBasedTransformProvider::class$ = NULL;
      jmethodID *EOPBasedTransformProvider::mids$ = NULL;
      bool EOPBasedTransformProvider::live$ = false;

      jclass EOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_867110817f590882] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_9030f9dc3158fc42] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory EOPBasedTransformProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_867110817f590882]));
      }

      EOPBasedTransformProvider EOPBasedTransformProvider::getNonInterpolatingProvider() const
      {
        return EOPBasedTransformProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_9030f9dc3158fc42]));
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
      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data);
      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_EOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, eOPHistory),
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_EOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getNonInterpolatingProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_EOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::TransformProvider),
        NULL
      };

      DEFINE_TYPE(EOPBasedTransformProvider, t_EOPBasedTransformProvider, EOPBasedTransformProvider);

      void t_EOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPBasedTransformProvider), &PY_TYPE_DEF(EOPBasedTransformProvider), module, "EOPBasedTransformProvider", 0);
      }

      void t_EOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "class_", make_descriptor(EOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "wrapfn_", make_descriptor(t_EOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_EOPBasedTransformProvider::wrap_Object(EOPBasedTransformProvider(((t_EOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self)
      {
        EOPBasedTransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data)
      {
        EOPBasedTransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/HarrisPriester.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *HarrisPriester::class$ = NULL;
          jmethodID *HarrisPriester::mids$ = NULL;
          bool HarrisPriester::live$ = false;

          jclass HarrisPriester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/HarrisPriester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c1551a10d56610aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
              mids$[mid_init$_f1008dbab89482e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[D)V");
              mids$[mid_init$_9978cd126181ea09] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_init$_8b6484f97e0ed072] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;[[DD)V");
              mids$[mid_getDensity_7c8d4944669ef839] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_855cbb355cce7dd8] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDensity_0c5821935d445848] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_65e73ef68b3713d0] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMaxAlt_9981f74b2d109da6] = env->getMethodID(cls, "getMaxAlt", "()D");
              mids$[mid_getMinAlt_9981f74b2d109da6] = env->getMethodID(cls, "getMinAlt", "()D");
              mids$[mid_getTabDensity_eda3f19b8225f78f] = env->getMethodID(cls, "getTabDensity", "()[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1551a10d56610aa, a0.this$, a1.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1008dbab89482e1, a0.this$, a1.this$, a2.this$)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9978cd126181ea09, a0.this$, a1.this$, a2)) {}

          HarrisPriester::HarrisPriester(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b6484f97e0ed072, a0.this$, a1.this$, a2.this$, a3)) {}

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_7c8d4944669ef839], a0.this$, a1.this$));
          }

          jdouble HarrisPriester::getDensity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_855cbb355cce7dd8], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement HarrisPriester::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_0c5821935d445848], a0.this$, a1.this$, a2.this$));
          }

          jdouble HarrisPriester::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_65e73ef68b3713d0], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame HarrisPriester::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          jdouble HarrisPriester::getMaxAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxAlt_9981f74b2d109da6]);
          }

          jdouble HarrisPriester::getMinAlt() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinAlt_9981f74b2d109da6]);
          }

          JArray< JArray< jdouble > > HarrisPriester::getTabDensity() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getTabDensity_eda3f19b8225f78f]));
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
          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args);
          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self);
          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data);
          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data);
          static PyGetSetDef t_HarrisPriester__fields_[] = {
            DECLARE_GET_FIELD(t_HarrisPriester, frame),
            DECLARE_GET_FIELD(t_HarrisPriester, maxAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, minAlt),
            DECLARE_GET_FIELD(t_HarrisPriester, tabDensity),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HarrisPriester__methods_[] = {
            DECLARE_METHOD(t_HarrisPriester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HarrisPriester, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_HarrisPriester, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMaxAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getMinAlt, METH_NOARGS),
            DECLARE_METHOD(t_HarrisPriester, getTabDensity, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HarrisPriester)[] = {
            { Py_tp_methods, t_HarrisPriester__methods_ },
            { Py_tp_init, (void *) t_HarrisPriester_init_ },
            { Py_tp_getset, t_HarrisPriester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HarrisPriester)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HarrisPriester, t_HarrisPriester, HarrisPriester);

          void t_HarrisPriester::install(PyObject *module)
          {
            installType(&PY_TYPE(HarrisPriester), &PY_TYPE_DEF(HarrisPriester), module, "HarrisPriester", 0);
          }

          void t_HarrisPriester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "class_", make_descriptor(HarrisPriester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "wrapfn_", make_descriptor(t_HarrisPriester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HarrisPriester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HarrisPriester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HarrisPriester::initializeClass, 1)))
              return NULL;
            return t_HarrisPriester::wrap_Object(HarrisPriester(((t_HarrisPriester *) arg)->object.this$));
          }
          static PyObject *t_HarrisPriester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HarrisPriester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HarrisPriester_init_(t_HarrisPriester *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = HarrisPriester(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[D", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                jdouble a2;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                jdouble a3;
                HarrisPriester object((jobject) NULL);

                if (!parseArgs(args, "kk[[DD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = HarrisPriester(a0, a1, a2, a3));
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

          static PyObject *t_HarrisPriester_getDensity(t_HarrisPriester *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
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

          static PyObject *t_HarrisPriester_getFrame(t_HarrisPriester *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_HarrisPriester_getMaxAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getMinAlt(t_HarrisPriester *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinAlt());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HarrisPriester_getTabDensity(t_HarrisPriester *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTabDensity());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_HarrisPriester_get__frame(t_HarrisPriester *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_HarrisPriester_get__maxAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__minAlt(t_HarrisPriester *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinAlt());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_HarrisPriester_get__tabDensity(t_HarrisPriester *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTabDensity());
            return JArray<jobject>(value.this$).wrap(NULL);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderKey::class$ = NULL;
            jmethodID *CdmHeaderKey::mids$ = NULL;
            bool CdmHeaderKey::live$ = false;
            CdmHeaderKey *CdmHeaderKey::CLASSIFICATION = NULL;
            CdmHeaderKey *CdmHeaderKey::MESSAGE_FOR = NULL;

            jclass CdmHeaderKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_b09f22786ad969aa] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)Z");
                mids$[mid_valueOf_6db1f7b4835d5b97] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");
                mids$[mid_values_e2c56c9812972736] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CLASSIFICATION = new CdmHeaderKey(env->getStaticObjectField(cls, "CLASSIFICATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                MESSAGE_FOR = new CdmHeaderKey(env->getStaticObjectField(cls, "MESSAGE_FOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmHeaderKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_b09f22786ad969aa], a0.this$, a1.this$, a2.this$);
            }

            CdmHeaderKey CdmHeaderKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmHeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6db1f7b4835d5b97], a0.this$));
            }

            JArray< CdmHeaderKey > CdmHeaderKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmHeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e2c56c9812972736]));
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
            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type);
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data);
            static PyGetSetDef t_CdmHeaderKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmHeaderKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeaderKey__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderKey)[] = {
              { Py_tp_methods, t_CdmHeaderKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmHeaderKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmHeaderKey, t_CdmHeaderKey, CdmHeaderKey);
            PyObject *t_CdmHeaderKey::wrap_Object(const CdmHeaderKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmHeaderKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmHeaderKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderKey), &PY_TYPE_DEF(CdmHeaderKey), module, "CdmHeaderKey", 0);
            }

            void t_CdmHeaderKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "class_", make_descriptor(CdmHeaderKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "wrapfn_", make_descriptor(t_CdmHeaderKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmHeaderKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "CLASSIFICATION", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::CLASSIFICATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "MESSAGE_FOR", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::MESSAGE_FOR)));
            }

            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderKey::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderKey::wrap_Object(CdmHeaderKey(((t_CdmHeaderKey *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmHeaderKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::valueOf(a0));
                return t_CdmHeaderKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type)
            {
              JArray< CdmHeaderKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmHeaderKey::wrap_jobject);
            }
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data)
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
#include "org/orekit/models/earth/EarthShape.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthShape::class$ = NULL;
        jmethodID *EarthShape::mids$ = NULL;
        bool EarthShape::live$ = false;

        jclass EarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEllipsoid_cff2eba11ebd2420] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::ReferenceEllipsoid EarthShape::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_cff2eba11ebd2420]));
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
        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self);
        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data);
        static PyGetSetDef t_EarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_EarthShape, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthShape__methods_[] = {
          DECLARE_METHOD(t_EarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, getEllipsoid, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthShape)[] = {
          { Py_tp_methods, t_EarthShape__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthShape)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::BodyShape),
          NULL
        };

        DEFINE_TYPE(EarthShape, t_EarthShape, EarthShape);

        void t_EarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthShape), &PY_TYPE_DEF(EarthShape), module, "EarthShape", 0);
        }

        void t_EarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "class_", make_descriptor(EarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "wrapfn_", make_descriptor(t_EarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthShape::initializeClass, 1)))
            return NULL;
          return t_EarthShape::wrap_Object(EarthShape(((t_EarthShape *) arg)->object.this$));
        }
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data)
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
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataFilter::class$ = NULL;
      jmethodID *DataFilter::mids$ = NULL;
      bool DataFilter::live$ = false;

      jclass DataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_filter_4edc3983a04dd819] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::data::DataSource DataFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_4edc3983a04dd819], a0.this$));
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
      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg);

      static PyMethodDef t_DataFilter__methods_[] = {
        DECLARE_METHOD(t_DataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataFilter)[] = {
        { Py_tp_methods, t_DataFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataFilter, t_DataFilter, DataFilter);

      void t_DataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(DataFilter), &PY_TYPE_DEF(DataFilter), module, "DataFilter", 0);
      }

      void t_DataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "class_", make_descriptor(DataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "wrapfn_", make_descriptor(t_DataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataFilter::initializeClass, 1)))
          return NULL;
        return t_DataFilter::wrap_Object(DataFilter(((t_DataFilter *) arg)->object.this$));
      }
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttractionEpoch.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttractionEpoch::class$ = NULL;
        jmethodID *ThirdBodyAttractionEpoch::mids$ = NULL;
        bool ThirdBodyAttractionEpoch::live$ = false;

        jclass ThirdBodyAttractionEpoch::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttractionEpoch");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3892f9945e7aba0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_getDerivativesToEpoch_9712600a2eb1aa51] = env->getMethodID(cls, "getDerivativesToEpoch", "(Lorg/orekit/propagation/SpacecraftState;[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttractionEpoch::ThirdBodyAttractionEpoch(const ::org::orekit::bodies::CelestialBody & a0) : ::org::orekit::forces::gravity::ThirdBodyAttraction(env->newObject(initializeClass, &mids$, mid_init$_3892f9945e7aba0a, a0.this$)) {}

        JArray< jdouble > ThirdBodyAttractionEpoch::getDerivativesToEpoch(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDerivativesToEpoch_9712600a2eb1aa51], a0.this$, a1.this$));
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
        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args);

        static PyMethodDef t_ThirdBodyAttractionEpoch__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, getDerivativesToEpoch, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttractionEpoch)[] = {
          { Py_tp_methods, t_ThirdBodyAttractionEpoch__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttractionEpoch_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttractionEpoch)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::gravity::ThirdBodyAttraction),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttractionEpoch, t_ThirdBodyAttractionEpoch, ThirdBodyAttractionEpoch);

        void t_ThirdBodyAttractionEpoch::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttractionEpoch), &PY_TYPE_DEF(ThirdBodyAttractionEpoch), module, "ThirdBodyAttractionEpoch", 0);
        }

        void t_ThirdBodyAttractionEpoch::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "class_", make_descriptor(ThirdBodyAttractionEpoch::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "wrapfn_", make_descriptor(t_ThirdBodyAttractionEpoch::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttractionEpoch::wrap_Object(ThirdBodyAttractionEpoch(((t_ThirdBodyAttractionEpoch *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttractionEpoch object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttractionEpoch(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDerivativesToEpoch(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivativesToEpoch", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuverKey::class$ = NULL;
              jmethodID *AttitudeManeuverKey::mids$ = NULL;
              bool AttitudeManeuverKey::live$ = false;
              AttitudeManeuverKey *AttitudeManeuverKey::ACTUATOR_USED = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::COMMENT = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_BEGIN_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_DURATION = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_END_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PREV_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PURPOSE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_ATTITUDE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOMENTUM = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOM_FRAME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_SPINRATE = NULL;

              jclass AttitudeManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_aa58e862a13265bf] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver;)Z");
                  mids$[mid_valueOf_28292684dc42143c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");
                  mids$[mid_values_5c4e54476f9cfcd1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUATOR_USED = new AttitudeManeuverKey(env->getStaticObjectField(cls, "ACTUATOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  COMMENT = new AttitudeManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_BEGIN_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_BEGIN_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_DURATION = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_END_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_END_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PREV_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PURPOSE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_ATTITUDE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_ATTITUDE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOMENTUM = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOM_FRAME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOM_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_SPINRATE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_SPINRATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_aa58e862a13265bf], a0.this$, a1.this$, a2.this$);
              }

              AttitudeManeuverKey AttitudeManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_28292684dc42143c], a0.this$));
              }

              JArray< AttitudeManeuverKey > AttitudeManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5c4e54476f9cfcd1]));
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
              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data);
              static PyGetSetDef t_AttitudeManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuverKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuverKey)[] = {
                { Py_tp_methods, t_AttitudeManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuverKey, t_AttitudeManeuverKey, AttitudeManeuverKey);
              PyObject *t_AttitudeManeuverKey::wrap_Object(const AttitudeManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuverKey), &PY_TYPE_DEF(AttitudeManeuverKey), module, "AttitudeManeuverKey", 0);
              }

              void t_AttitudeManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "class_", make_descriptor(AttitudeManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "wrapfn_", make_descriptor(t_AttitudeManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "ACTUATOR_USED", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::ACTUATOR_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "COMMENT", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_BEGIN_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_BEGIN_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_DURATION", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_END_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_END_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PREV_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PURPOSE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_ATTITUDE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_ATTITUDE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOMENTUM", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOMENTUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOM_FRAME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOM_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_SPINRATE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_SPINRATE)));
              }

              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuverKey::wrap_Object(AttitudeManeuverKey(((t_AttitudeManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::valueOf(a0));
                  return t_AttitudeManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type)
              {
                JArray< AttitudeManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeManeuverKey::wrap_jobject);
              }
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data)
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
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRangeRate::class$ = NULL;
        jmethodID *BistaticRangeRate::mids$ = NULL;
        bool BistaticRangeRate::live$ = false;
        ::java::lang::String *BistaticRangeRate::MEASUREMENT_TYPE = NULL;

        jclass BistaticRangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e4f5e0763746f291] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_f8d3ef5d49da0d87] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRangeRate::BistaticRangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_e4f5e0763746f291, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_f8d3ef5d49da0d87]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_f8d3ef5d49da0d87]));
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
        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args);
        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data);
        static PyGetSetDef t_BistaticRangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRangeRate, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRangeRate__methods_[] = {
          DECLARE_METHOD(t_BistaticRangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRate)[] = {
          { Py_tp_methods, t_BistaticRangeRate__methods_ },
          { Py_tp_init, (void *) t_BistaticRangeRate_init_ },
          { Py_tp_getset, t_BistaticRangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRangeRate, t_BistaticRangeRate, BistaticRangeRate);
        PyObject *t_BistaticRangeRate::wrap_Object(const BistaticRangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRangeRate), &PY_TYPE_DEF(BistaticRangeRate), module, "BistaticRangeRate", 0);
        }

        void t_BistaticRangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "class_", make_descriptor(BistaticRangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "wrapfn_", make_descriptor(t_BistaticRangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRangeRate::initializeClass, 1)))
            return NULL;
          return t_BistaticRangeRate::wrap_Object(BistaticRangeRate(((t_BistaticRangeRate *) arg)->object.this$));
        }
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSEphemeris::class$ = NULL;
            jmethodID *GLONASSEphemeris::mids$ = NULL;
            bool GLONASSEphemeris::live$ = false;

            jclass GLONASSEphemeris::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8cd9834af575f9e0] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDD)V");
                mids$[mid_init$_c7cd1553fc7dd3c6] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDDLorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getN4_d6ab429752e7c267] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_d6ab429752e7c267] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_9981f74b2d109da6] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8cd9834af575f9e0, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7cd1553fc7dd3c6, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSEphemeris::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
            }

            jint GLONASSEphemeris::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_d6ab429752e7c267]);
            }

            jint GLONASSEphemeris::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_d6ab429752e7c267]);
            }

            jdouble GLONASSEphemeris::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_9981f74b2d109da6]);
            }

            jdouble GLONASSEphemeris::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_9981f74b2d109da6]);
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
            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data);
            static PyGetSetDef t_GLONASSEphemeris__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSEphemeris, date),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, n4),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, na),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, time),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, x),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, y),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, z),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSEphemeris__methods_[] = {
              DECLARE_METHOD(t_GLONASSEphemeris, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSEphemeris)[] = {
              { Py_tp_methods, t_GLONASSEphemeris__methods_ },
              { Py_tp_init, (void *) t_GLONASSEphemeris_init_ },
              { Py_tp_getset, t_GLONASSEphemeris__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSEphemeris)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSEphemeris, t_GLONASSEphemeris, GLONASSEphemeris);

            void t_GLONASSEphemeris::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSEphemeris), &PY_TYPE_DEF(GLONASSEphemeris), module, "GLONASSEphemeris", 0);
            }

            void t_GLONASSEphemeris::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "class_", make_descriptor(GLONASSEphemeris::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "wrapfn_", make_descriptor(t_GLONASSEphemeris::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSEphemeris::initializeClass, 1)))
                return NULL;
              return t_GLONASSEphemeris::wrap_Object(GLONASSEphemeris(((t_GLONASSEphemeris *) arg)->object.this$));
            }
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSEphemeris::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 12:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 13:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
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
              mids$[mid_process_3e6bd72398e1c72f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Header;)Z");
              mids$[mid_valueOf_f10656b9b1305ba3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/HeaderKey;");
              mids$[mid_values_6552e0e5bdf61525] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/HeaderKey;");

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
            return env->callBooleanMethod(this$, mids$[mid_process_3e6bd72398e1c72f], a0.this$, a1.this$, a2.this$);
          }

          HeaderKey HeaderKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return HeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f10656b9b1305ba3], a0.this$));
          }

          JArray< HeaderKey > HeaderKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< HeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6552e0e5bdf61525]));
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
#include "org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_cbfa9adbb41a32ed] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_e6d8cb34a3bf8c82] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_6c320cbdb8900692] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_cbfa9adbb41a32ed, a0, a1.this$)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_e6d8cb34a3bf8c82, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_b9dfc27d8c56b5de]));
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
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinatesHermiteInterpolator, t_TimeStampedPVCoordinatesHermiteInterpolator, TimeStampedPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedPVCoordinatesHermiteInterpolator), module, "TimeStampedPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedPVCoordinatesHermiteInterpolator(((t_TimeStampedPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
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

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherData::class$ = NULL;
            jmethodID *CssiSpaceWeatherData::mids$ = NULL;
            bool CssiSpaceWeatherData::live$ = false;
            ::java::lang::String *CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass CssiSpaceWeatherData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                mids$[mid_init$_023df3a7dca17c03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_b9046d0be8f2b6e0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_bb4f7a68dbb10dc1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_ab02e9635eee86ad] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_47fdbe1391664d0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_572f119b81cef4a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_init$_f3a367214324f82d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_get24HoursKp_209f08246d708042] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_9b63d19c31941c0f] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_209f08246d708042] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_209f08246d708042] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_209f08246d708042] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_209f08246d708042] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_209f08246d708042] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_023df3a7dca17c03, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_b9046d0be8f2b6e0, a0.this$, a1.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_bb4f7a68dbb10dc1, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_ab02e9635eee86ad, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_47fdbe1391664d0d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_572f119b81cef4a6, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_f3a367214324f82d, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6)) {}

            jdouble CssiSpaceWeatherData::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_209f08246d708042], a0.this$);
            }

            JArray< jdouble > CssiSpaceWeatherData::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_9b63d19c31941c0f], a0.this$));
            }

            jdouble CssiSpaceWeatherData::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_209f08246d708042], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_209f08246d708042], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_209f08246d708042], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_209f08246d708042], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_209f08246d708042], a0.this$);
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
            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args);
            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherData__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherData__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherData)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherData__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherData_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherData, t_CssiSpaceWeatherData, CssiSpaceWeatherData);
            PyObject *t_CssiSpaceWeatherData::wrap_Object(const CssiSpaceWeatherData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CssiSpaceWeatherData::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherData), &PY_TYPE_DEF(CssiSpaceWeatherData), module, "CssiSpaceWeatherData", 0);
            }

            void t_CssiSpaceWeatherData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "class_", make_descriptor(CssiSpaceWeatherData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "wrapfn_", make_descriptor(t_CssiSpaceWeatherData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "boxfn_", make_descriptor(boxObject));
              env->getClass(CssiSpaceWeatherData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherData::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherData::wrap_Object(CssiSpaceWeatherData(((t_CssiSpaceWeatherData *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::java::lang::String a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "s", &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDD", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
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

            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data)
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
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateVectorFunction::class$ = NULL;
      jmethodID *UnivariateVectorFunction::mids$ = NULL;
      bool UnivariateVectorFunction::live$ = false;

      jclass UnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_736338d28c26591e] = env->getMethodID(cls, "value", "(D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > UnivariateVectorFunction::value(jdouble a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_736338d28c26591e], a0));
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
      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunction)[] = {
        { Py_tp_methods, t_UnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateVectorFunction, t_UnivariateVectorFunction, UnivariateVectorFunction);

      void t_UnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateVectorFunction), &PY_TYPE_DEF(UnivariateVectorFunction), module, "UnivariateVectorFunction", 0);
      }

      void t_UnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "class_", make_descriptor(UnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "wrapfn_", make_descriptor(t_UnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateVectorFunction::wrap_Object(UnivariateVectorFunction(((t_UnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudesSequence$SwitchHandler::class$ = NULL;
      jmethodID *AttitudesSequence$SwitchHandler::mids$ = NULL;
      bool AttitudesSequence$SwitchHandler::live$ = false;

      jclass AttitudesSequence$SwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudesSequence$SwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_switchOccurred_fc1e5e72098d53da] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AttitudesSequence$SwitchHandler::switchOccurred(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::propagation::SpacecraftState & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_switchOccurred_fc1e5e72098d53da], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args);

      static PyMethodDef t_AttitudesSequence$SwitchHandler__methods_[] = {
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudesSequence$SwitchHandler, switchOccurred, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudesSequence$SwitchHandler)[] = {
        { Py_tp_methods, t_AttitudesSequence$SwitchHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudesSequence$SwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudesSequence$SwitchHandler, t_AttitudesSequence$SwitchHandler, AttitudesSequence$SwitchHandler);

      void t_AttitudesSequence$SwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudesSequence$SwitchHandler), &PY_TYPE_DEF(AttitudesSequence$SwitchHandler), module, "AttitudesSequence$SwitchHandler", 0);
      }

      void t_AttitudesSequence$SwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "class_", make_descriptor(AttitudesSequence$SwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "wrapfn_", make_descriptor(t_AttitudesSequence$SwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudesSequence$SwitchHandler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 1)))
          return NULL;
        return t_AttitudesSequence$SwitchHandler::wrap_Object(AttitudesSequence$SwitchHandler(((t_AttitudesSequence$SwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_AttitudesSequence$SwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudesSequence$SwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudesSequence$SwitchHandler_switchOccurred(t_AttitudesSequence$SwitchHandler *self, PyObject *args)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState a2((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.switchOccurred(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "switchOccurred", args);
        return NULL;
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
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_cc06e2b72d9584d8] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegrator::MidpointIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        JArray< JArray< jdouble > > MidpointIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > MidpointIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > MidpointIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1241::class$ = NULL;
              jmethodID *Rtcm1241::mids$ = NULL;
              bool Rtcm1241::live$ = false;

              jclass Rtcm1241::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a690f6f327f6cb67] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1241::Rtcm1241(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a690f6f327f6cb67, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args);
              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data);
              static PyGetSetDef t_Rtcm1241__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1241, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1241__methods_[] = {
                DECLARE_METHOD(t_Rtcm1241, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1241)[] = {
                { Py_tp_methods, t_Rtcm1241__methods_ },
                { Py_tp_init, (void *) t_Rtcm1241_init_ },
                { Py_tp_getset, t_Rtcm1241__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1241)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1241, t_Rtcm1241, Rtcm1241);
              PyObject *t_Rtcm1241::wrap_Object(const Rtcm1241& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1241::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1241::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1241), &PY_TYPE_DEF(Rtcm1241), module, "Rtcm1241", 0);
              }

              void t_Rtcm1241::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "class_", make_descriptor(Rtcm1241::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "wrapfn_", make_descriptor(t_Rtcm1241::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1241::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1241::wrap_Object(Rtcm1241(((t_Rtcm1241 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1241::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1241 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1241(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data)
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
#include "org/orekit/propagation/PythonFieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldEphemerisGenerator::class$ = NULL;
      jmethodID *PythonFieldEphemerisGenerator::mids$ = NULL;
      bool PythonFieldEphemerisGenerator::live$ = false;

      jclass PythonFieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_8b319b33f07bd303] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldEphemerisGenerator::PythonFieldEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldEphemerisGenerator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self);
      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonFieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, self),
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonFieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonFieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldEphemerisGenerator, t_PythonFieldEphemerisGenerator, PythonFieldEphemerisGenerator);
      PyObject *t_PythonFieldEphemerisGenerator::wrap_Object(const PythonFieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldEphemerisGenerator), &PY_TYPE_DEF(PythonFieldEphemerisGenerator), module, "PythonFieldEphemerisGenerator", 1);
      }

      void t_PythonFieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "class_", make_descriptor(PythonFieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonFieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;", (void *) t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldEphemerisGenerator::wrap_Object(PythonFieldEphemerisGenerator(((t_PythonFieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonFieldEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldBoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data)
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
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScale::class$ = NULL;
      jmethodID *TimeScale::mids$ = NULL;
      bool TimeScale::live$ = false;

      jclass TimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_209f08246d708042] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_cf010978f3c5a913] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_b16e79ba1b2830a1] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_ada3024ac7559675] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_94772beff3ac8a91] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_23ced097258e06b3] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String TimeScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_b16e79ba1b2830a1], a0.this$);
      }

      jboolean TimeScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_ada3024ac7559675], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_94772beff3ac8a91], a0.this$);
      }

      jint TimeScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_23ced097258e06b3], a0.this$);
      }

      jdouble TimeScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble TimeScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
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
      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_getName(t_TimeScale *self);
      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args);
      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data);
      static PyGetSetDef t_TimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScale__methods_[] = {
        DECLARE_METHOD(t_TimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TimeScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TimeScale, offsetToTAI, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScale)[] = {
        { Py_tp_methods, t_TimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScale)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(TimeScale, t_TimeScale, TimeScale);

      void t_TimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScale), &PY_TYPE_DEF(TimeScale), module, "TimeScale", 0);
      }

      void t_TimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "class_", make_descriptor(TimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "wrapfn_", make_descriptor(t_TimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScale::initializeClass, 1)))
          return NULL;
        return t_TimeScale::wrap_Object(TimeScale(((t_TimeScale *) arg)->object.this$));
      }
      static PyObject *t_TimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScale_getLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_getName(t_TimeScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TimeScale_insideLeap(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_TimeScale_minuteDuration(t_TimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_TimeScale_offsetFromTAI(t_TimeScale *self, PyObject *args)
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

      static PyObject *t_TimeScale_offsetToTAI(t_TimeScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_TimeScale_get__name(t_TimeScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/RegionFactory.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *RegionFactory::class$ = NULL;
        jmethodID *RegionFactory::mids$ = NULL;
        bool RegionFactory::live$ = false;

        jclass RegionFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/RegionFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildConvex_efbbe39d4ef425e3] = env->getMethodID(cls, "buildConvex", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_difference_edf74652280ab0e5] = env->getMethodID(cls, "difference", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getComplement_e69fb2865ef3e15d] = env->getMethodID(cls, "getComplement", "(Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_intersection_edf74652280ab0e5] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_union_edf74652280ab0e5] = env->getMethodID(cls, "union", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_xor_edf74652280ab0e5] = env->getMethodID(cls, "xor", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegionFactory::RegionFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::buildConvex(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_buildConvex_efbbe39d4ef425e3], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::difference(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_difference_edf74652280ab0e5], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::getComplement(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getComplement_e69fb2865ef3e15d], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::intersection(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_intersection_edf74652280ab0e5], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::union$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_union_edf74652280ab0e5], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::xor$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_xor_edf74652280ab0e5], a0.this$, a1.this$));
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
        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args);
        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data);
        static PyGetSetDef t_RegionFactory__fields_[] = {
          DECLARE_GET_FIELD(t_RegionFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegionFactory__methods_[] = {
          DECLARE_METHOD(t_RegionFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, buildConvex, METH_O),
          DECLARE_METHOD(t_RegionFactory, difference, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, getComplement, METH_O),
          DECLARE_METHOD(t_RegionFactory, intersection, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, union, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, xor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegionFactory)[] = {
          { Py_tp_methods, t_RegionFactory__methods_ },
          { Py_tp_init, (void *) t_RegionFactory_init_ },
          { Py_tp_getset, t_RegionFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegionFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegionFactory, t_RegionFactory, RegionFactory);
        PyObject *t_RegionFactory::wrap_Object(const RegionFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegionFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegionFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(RegionFactory), &PY_TYPE_DEF(RegionFactory), module, "RegionFactory", 0);
        }

        void t_RegionFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "class_", make_descriptor(RegionFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "wrapfn_", make_descriptor(t_RegionFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegionFactory::initializeClass, 1)))
            return NULL;
          return t_RegionFactory::wrap_Object(RegionFactory(((t_RegionFactory *) arg)->object.this$));
        }
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegionFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds)
        {
          RegionFactory object((jobject) NULL);

          INT_CALL(object = RegionFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "[K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.buildConvex(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildConvex", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.difference(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "difference", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.getComplement(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getComplement", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.union$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "union", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.xor$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "xor", args);
          return NULL;
        }
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$IdentityPreconditioner::live$ = false;

            jclass NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_precondition_8238c1ebef563b00] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$IdentityPreconditioner::NonLinearConjugateGradientOptimizer$IdentityPreconditioner() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            JArray< jdouble > NonLinearConjugateGradientOptimizer$IdentityPreconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_8238c1ebef563b00], a0.this$, a1.this$));
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
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, NonLinearConjugateGradientOptimizer$IdentityPreconditioner);
            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), module, "NonLinearConjugateGradientOptimizer$IdentityPreconditioner", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(NonLinearConjugateGradientOptimizer$IdentityPreconditioner(((t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds)
            {
              NonLinearConjugateGradientOptimizer$IdentityPreconditioner object((jobject) NULL);

              INT_CALL(object = NonLinearConjugateGradientOptimizer$IdentityPreconditioner());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);

              return 0;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
              return NULL;
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data)
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
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BDTScale::class$ = NULL;
      jmethodID *BDTScale::mids$ = NULL;
      bool BDTScale::live$ = false;

      jclass BDTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BDTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String BDTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble BDTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement BDTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble BDTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String BDTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_getName(t_BDTScale *self);
      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data);
      static PyGetSetDef t_BDTScale__fields_[] = {
        DECLARE_GET_FIELD(t_BDTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BDTScale__methods_[] = {
        DECLARE_METHOD(t_BDTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_BDTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BDTScale)[] = {
        { Py_tp_methods, t_BDTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BDTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BDTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BDTScale, t_BDTScale, BDTScale);

      void t_BDTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(BDTScale), &PY_TYPE_DEF(BDTScale), module, "BDTScale", 0);
      }

      void t_BDTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "class_", make_descriptor(BDTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "wrapfn_", make_descriptor(t_BDTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BDTScale::initializeClass, 1)))
          return NULL;
        return t_BDTScale::wrap_Object(BDTScale(((t_BDTScale *) arg)->object.this$));
      }
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BDTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BDTScale_getName(t_BDTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args)
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

      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BDTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Double.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayRealVector::class$ = NULL;
      jmethodID *ArrayRealVector::mids$ = NULL;
      bool ArrayRealVector::live$ = false;

      jclass ArrayRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_3d3b8362311739ce] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;)V");
          mids$[mid_init$_99bb541b0ecf3230] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_7c23bb29028e712a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_7c7f2fc5b5d9992b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;[D)V");
          mids$[mid_init$_5f105d12ef405967] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_8e6ec2c6f1e831c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_init$_c3c008407ccc44ca] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/ArrayRealVector;)V");
          mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_b235ce1aa125cb15] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayRealVector;Z)V");
          mids$[mid_init$_d202a20516e33d93] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_40b495c766d36227] = env->getMethodID(cls, "<init>", "([DII)V");
          mids$[mid_init$_0f6c3734673b0d94] = env->getMethodID(cls, "<init>", "([Ljava/lang/Double;II)V");
          mids$[mid_add_baad192f2dc523c0] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_addToEntry_4320462275d66e78] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_a5c77f958bab126d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayRealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_append_bf8d75e459632544] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_2fd46ead8ae05f47] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_f3d5e62a37a3baa7] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_combineToSelf_f3d5e62a37a3baa7] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_copy_1d9098bb44dd5bb9] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_dotProduct_510dfb60b80a1bc5] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_baad192f2dc523c0] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_ebeMultiply_baad192f2dc523c0] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_be783177b060994b] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_510dfb60b80a1bc5] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_ce4c02d583456bc9] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_510dfb60b80a1bc5] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_9981f74b2d109da6] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_510dfb60b80a1bc5] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_9981f74b2d109da6] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_b1d2e600b579c4fa] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_map_b4017d5f7c7ea190] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_mapAddToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_2fd46ead8ae05f47] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_b4017d5f7c7ea190] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_outerProduct_628dcdd789dfced9] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_set_1ad26e8c8c0cd65b] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_4320462275d66e78] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_9d367e34fba0a5ea] = env->getMethodID(cls, "setSubVector", "(I[D)V");
          mids$[mid_setSubVector_543485b1a87e5329] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_subtract_baad192f2dc523c0] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_toArray_be783177b060994b] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_8785ef13fe18157c] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5b6053a1b36387e3] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_a2c6d27191254d22] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_710a99d12629b412] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_8785ef13fe18157c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5b6053a1b36387e3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_a2c6d27191254d22] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_710a99d12629b412] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_99bb541b0ecf3230] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkVectorDimensions_8fd427ab23829bf5] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayRealVector::ArrayRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_3d3b8362311739ce, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_99bb541b0ecf3230, a0.this$)) {}

      ArrayRealVector::ArrayRealVector(jint a0) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_7c23bb29028e712a, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_7c7f2fc5b5d9992b, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_5f105d12ef405967, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, const ::org::hipparchus::linear::RealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_8e6ec2c6f1e831c9, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ::org::hipparchus::linear::RealVector & a0, const ArrayRealVector & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_c3c008407ccc44ca, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

      ArrayRealVector::ArrayRealVector(const ArrayRealVector & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_b235ce1aa125cb15, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_d202a20516e33d93, a0.this$, a1)) {}

      ArrayRealVector::ArrayRealVector(jint a0, jdouble a1) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      ArrayRealVector::ArrayRealVector(const JArray< jdouble > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_40b495c766d36227, a0.this$, a1, a2)) {}

      ArrayRealVector::ArrayRealVector(const JArray< ::java::lang::Double > & a0, jint a1, jint a2) : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0f6c3734673b0d94, a0.this$, a1, a2)) {}

      ArrayRealVector ArrayRealVector::add(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_add_baad192f2dc523c0], a0.this$));
      }

      void ArrayRealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_4320462275d66e78], a0, a1);
      }

      ArrayRealVector ArrayRealVector::append(const ArrayRealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_append_a5c77f958bab126d], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_bf8d75e459632544], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::append(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_append_2fd46ead8ae05f47], a0));
      }

      ArrayRealVector ArrayRealVector::combine(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combine_f3d5e62a37a3baa7], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::combineToSelf(jdouble a0, jdouble a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_f3d5e62a37a3baa7], a0, a1, a2.this$));
      }

      ArrayRealVector ArrayRealVector::copy() const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_copy_1d9098bb44dd5bb9]));
      }

      jdouble ArrayRealVector::dotProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_510dfb60b80a1bc5], a0.this$);
      }

      ArrayRealVector ArrayRealVector::ebeDivide(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_baad192f2dc523c0], a0.this$));
      }

      ArrayRealVector ArrayRealVector::ebeMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_baad192f2dc523c0], a0.this$));
      }

      jboolean ArrayRealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      JArray< jdouble > ArrayRealVector::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_be783177b060994b]));
      }

      jint ArrayRealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      jdouble ArrayRealVector::getDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble ArrayRealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_ce4c02d583456bc9], a0);
      }

      jdouble ArrayRealVector::getL1Distance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble ArrayRealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_9981f74b2d109da6]);
      }

      jdouble ArrayRealVector::getLInfDistance(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_510dfb60b80a1bc5], a0.this$);
      }

      jdouble ArrayRealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_9981f74b2d109da6]);
      }

      jdouble ArrayRealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_b1d2e600b579c4fa], a0, a1));
      }

      jint ArrayRealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean ArrayRealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      jboolean ArrayRealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
      }

      ArrayRealVector ArrayRealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_map_b4017d5f7c7ea190], a0.this$));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapAddToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_2fd46ead8ae05f47], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapDivideToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_2fd46ead8ae05f47], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_2fd46ead8ae05f47], a0));
      }

      ::org::hipparchus::linear::RealVector ArrayRealVector::mapSubtractToSelf(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_2fd46ead8ae05f47], a0));
      }

      ArrayRealVector ArrayRealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_b4017d5f7c7ea190], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix ArrayRealVector::outerProduct(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_628dcdd789dfced9], a0.this$));
      }

      void ArrayRealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_1ad26e8c8c0cd65b], a0);
      }

      void ArrayRealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_4320462275d66e78], a0, a1);
      }

      void ArrayRealVector::setSubVector(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_9d367e34fba0a5ea], a0, a1.this$);
      }

      void ArrayRealVector::setSubVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_543485b1a87e5329], a0, a1.this$);
      }

      ArrayRealVector ArrayRealVector::subtract(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ArrayRealVector(env->callObjectMethod(this$, mids$[mid_subtract_baad192f2dc523c0], a0.this$));
      }

      JArray< jdouble > ArrayRealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_be783177b060994b]));
      }

      ::java::lang::String ArrayRealVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_8785ef13fe18157c], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5b6053a1b36387e3], a0.this$);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_a2c6d27191254d22], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_710a99d12629b412], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_8785ef13fe18157c], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5b6053a1b36387e3], a0.this$);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_a2c6d27191254d22], a0.this$, a1, a2);
      }

      jdouble ArrayRealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_710a99d12629b412], a0.this$, a1, a2);
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
      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self);
      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args);
      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data);
      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data);
      static PyGetSetDef t_ArrayRealVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayRealVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayRealVector, dimension),
        DECLARE_GET_FIELD(t_ArrayRealVector, infinite),
        DECLARE_GET_FIELD(t_ArrayRealVector, l1Norm),
        DECLARE_GET_FIELD(t_ArrayRealVector, lInfNorm),
        DECLARE_GET_FIELD(t_ArrayRealVector, naN),
        DECLARE_GET_FIELD(t_ArrayRealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayRealVector__methods_[] = {
        DECLARE_METHOD(t_ArrayRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayRealVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, copy, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDimension, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Distance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getL1Norm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfDistance, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getLInfNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getNorm, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isInfinite, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, isNaN, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, map, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapAddToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapDivideToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapMultiplyToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapSubtractToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, mapToSelf, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toArray, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayRealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayRealVector)[] = {
        { Py_tp_methods, t_ArrayRealVector__methods_ },
        { Py_tp_init, (void *) t_ArrayRealVector_init_ },
        { Py_tp_getset, t_ArrayRealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(ArrayRealVector, t_ArrayRealVector, ArrayRealVector);

      void t_ArrayRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayRealVector), &PY_TYPE_DEF(ArrayRealVector), module, "ArrayRealVector", 0);
      }

      void t_ArrayRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "class_", make_descriptor(ArrayRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "wrapfn_", make_descriptor(t_ArrayRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayRealVector::initializeClass, 1)))
          return NULL;
        return t_ArrayRealVector::wrap_Object(ArrayRealVector(((t_ArrayRealVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ArrayRealVector_init_(t_ArrayRealVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ArrayRealVector object((jobject) NULL);

            INT_CALL(object = ArrayRealVector());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[O", ::java::lang::PY_TYPE(Double), &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ArrayRealVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "k[D", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[Dk", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ArrayRealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ArrayRealVector a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayRealVector a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "kZ", ArrayRealVector::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ArrayRealVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::java::lang::Double > a0((jobject) NULL);
            jint a1;
            jint a2;
            ArrayRealVector object((jobject) NULL);

            if (!parseArgs(args, "[OII", ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
            {
              INT_CALL(object = ArrayRealVector(a0, a1, a2));
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

      static PyObject *t_ArrayRealVector_add(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_ArrayRealVector_addToEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_append(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayRealVector a0((jobject) NULL);
            ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ArrayRealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayRealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "append", args, 2);
      }

      static PyObject *t_ArrayRealVector_combine(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combine", args, 2);
      }

      static PyObject *t_ArrayRealVector_combineToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "combineToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_copy(t_ArrayRealVector *self, PyObject *args)
      {
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_ArrayRealVector_dotProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "dotProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeDivide(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeDivide", args, 2);
      }

      static PyObject *t_ArrayRealVector_ebeMultiply(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "ebeMultiply", args, 2);
      }

      static PyObject *t_ArrayRealVector_equals(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDataRef(t_ArrayRealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_ArrayRealVector_getDimension(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDimension", args, 2);
      }

      static PyObject *t_ArrayRealVector_getDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble result;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Distance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Distance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getL1Norm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getL1Norm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getL1Norm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfDistance(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfDistance", args, 2);
      }

      static PyObject *t_ArrayRealVector_getLInfNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLInfNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getLInfNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getNorm(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getNorm", args, 2);
      }

      static PyObject *t_ArrayRealVector_getSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "getSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_hashCode(t_ArrayRealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayRealVector_isInfinite(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isInfinite());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isInfinite", args, 2);
      }

      static PyObject *t_ArrayRealVector_isNaN(t_ArrayRealVector *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.isNaN());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "isNaN", args, 2);
      }

      static PyObject *t_ArrayRealVector_map(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "map", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapAddToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapAddToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapDivideToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapDivideToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapMultiplyToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapMultiplyToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapSubtractToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapSubtractToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_mapToSelf(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "mapToSelf", args, 2);
      }

      static PyObject *t_ArrayRealVector_outerProduct(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "outerProduct", args, 2);
      }

      static PyObject *t_ArrayRealVector_set(t_ArrayRealVector *self, PyObject *args)
      {
        jdouble a0;

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "set", args, 2);
      }

      static PyObject *t_ArrayRealVector_setEntry(t_ArrayRealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_ArrayRealVector_setSubVector(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "I[D", &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setSubVector(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "setSubVector", args, 2);
      }

      static PyObject *t_ArrayRealVector_subtract(t_ArrayRealVector *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ArrayRealVector result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_ArrayRealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_ArrayRealVector_toArray(t_ArrayRealVector *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toArray());
          return result.wrap();
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toArray", args, 2);
      }

      static PyObject *t_ArrayRealVector_toString(t_ArrayRealVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInDefaultOrder(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInDefaultOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_walkInOptimizedOrder(t_ArrayRealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(ArrayRealVector), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_ArrayRealVector_get__dataRef(t_ArrayRealVector *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_ArrayRealVector_get__dimension(t_ArrayRealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayRealVector_get__infinite(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__l1Norm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__lInfNorm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ArrayRealVector_get__naN(t_ArrayRealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ArrayRealVector_get__norm(t_ArrayRealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearObjectiveFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearObjectiveFunction::class$ = NULL;
        jmethodID *LinearObjectiveFunction::mids$ = NULL;
        bool LinearObjectiveFunction::live$ = false;

        jclass LinearObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_19a01fdb4baa56b0] = env->getMethodID(cls, "<init>", "([DD)V");
            mids$[mid_init$_4ac8b22435774168] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getConstantTerm_9981f74b2d109da6] = env->getMethodID(cls, "getConstantTerm", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_value_a40ce4fdf6559ac0] = env->getMethodID(cls, "value", "([D)D");
            mids$[mid_value_510dfb60b80a1bc5] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearObjectiveFunction::LinearObjectiveFunction(const JArray< jdouble > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19a01fdb4baa56b0, a0.this$, a1)) {}

        LinearObjectiveFunction::LinearObjectiveFunction(const ::org::hipparchus::linear::RealVector & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ac8b22435774168, a0.this$, a1)) {}

        jboolean LinearObjectiveFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearObjectiveFunction::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_92d7e8d8d3f1dfcf]));
        }

        jdouble LinearObjectiveFunction::getConstantTerm() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantTerm_9981f74b2d109da6]);
        }

        jint LinearObjectiveFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        jdouble LinearObjectiveFunction::value(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_a40ce4fdf6559ac0], a0.this$);
        }

        jdouble LinearObjectiveFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_510dfb60b80a1bc5], a0.this$);
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
      namespace linear {
        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self);
        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args);
        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data);
        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data);
        static PyGetSetDef t_LinearObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, coefficients),
          DECLARE_GET_FIELD(t_LinearObjectiveFunction, constantTerm),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_LinearObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearObjectiveFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, getConstantTerm, METH_NOARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_LinearObjectiveFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearObjectiveFunction)[] = {
          { Py_tp_methods, t_LinearObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_LinearObjectiveFunction_init_ },
          { Py_tp_getset, t_LinearObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearObjectiveFunction, t_LinearObjectiveFunction, LinearObjectiveFunction);

        void t_LinearObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearObjectiveFunction), &PY_TYPE_DEF(LinearObjectiveFunction), module, "LinearObjectiveFunction", 0);
        }

        void t_LinearObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "class_", make_descriptor(LinearObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "wrapfn_", make_descriptor(t_LinearObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_LinearObjectiveFunction::wrap_Object(LinearObjectiveFunction(((t_LinearObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_LinearObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearObjectiveFunction_init_(t_LinearObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "[DD", &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              LinearObjectiveFunction object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LinearObjectiveFunction(a0, a1));
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

        static PyObject *t_LinearObjectiveFunction_equals(t_LinearObjectiveFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_getCoefficients(t_LinearObjectiveFunction *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearObjectiveFunction_getConstantTerm(t_LinearObjectiveFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearObjectiveFunction_hashCode(t_LinearObjectiveFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearObjectiveFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearObjectiveFunction_value(t_LinearObjectiveFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_LinearObjectiveFunction_get__coefficients(t_LinearObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearObjectiveFunction_get__constantTerm(t_LinearObjectiveFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantTerm());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "java/util/function/DoubleConsumer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessUnivariateStatistic::class$ = NULL;
        jmethodID *StorelessUnivariateStatistic::mids$ = NULL;
        bool StorelessUnivariateStatistic::live$ = false;

        jclass StorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_accept_1ad26e8c8c0cd65b] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_2686517d773e76c2] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_incrementAll_a71c45509eaf92d1] = env->getMethodID(cls, "incrementAll", "([D)V");
            mids$[mid_incrementAll_40b495c766d36227] = env->getMethodID(cls, "incrementAll", "([DII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessUnivariateStatistic::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_1ad26e8c8c0cd65b], a0);
        }

        void StorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        StorelessUnivariateStatistic StorelessUnivariateStatistic::copy() const
        {
          return StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_2686517d773e76c2]));
        }

        jdouble StorelessUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
        }

        jlong StorelessUnivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jdouble StorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
        }

        void StorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_a71c45509eaf92d1], a0.this$);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_40b495c766d36227], a0.this$, a1, a2);
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
        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data);
        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, accept, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, copy, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, incrementAll, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::UnivariateStatistic),
          NULL
        };

        DEFINE_TYPE(StorelessUnivariateStatistic, t_StorelessUnivariateStatistic, StorelessUnivariateStatistic);

        void t_StorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessUnivariateStatistic), &PY_TYPE_DEF(StorelessUnivariateStatistic), module, "StorelessUnivariateStatistic", 0);
        }

        void t_StorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "class_", make_descriptor(StorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_StorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessUnivariateStatistic::wrap_Object(StorelessUnivariateStatistic(((t_StorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg)
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

        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          StorelessUnivariateStatistic result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_StorelessUnivariateStatistic::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args)
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

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.incrementAll(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.incrementAll(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "incrementAll", args);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A::class$ = NULL;
          jmethodID *SubFrame4A::mids$ = NULL;
          bool SubFrame4A::live$ = false;

          jclass SubFrame4A::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_d6ab429752e7c267] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_d6ab429752e7c267] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_d6ab429752e7c267] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_d6ab429752e7c267] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_d6ab429752e7c267] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_d6ab429752e7c267] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved10_d6ab429752e7c267] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReservedA09_d6ab429752e7c267] = env->getMethodID(cls, "getReservedA09", "()I");
              mids$[mid_getReservedB09_d6ab429752e7c267] = env->getMethodID(cls, "getReservedB09", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4A::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReservedA09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA09_d6ab429752e7c267]);
          }

          jint SubFrame4A::getReservedB09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB09_d6ab429752e7c267]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data);
          static PyGetSetDef t_SubFrame4A__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4A, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedA09),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedB09),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4A__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedA09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedB09, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A)[] = {
            { Py_tp_methods, t_SubFrame4A__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4A__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4A, t_SubFrame4A, SubFrame4A);

          void t_SubFrame4A::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A), &PY_TYPE_DEF(SubFrame4A), module, "SubFrame4A", 0);
          }

          void t_SubFrame4A::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "class_", make_descriptor(SubFrame4A::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "wrapfn_", make_descriptor(t_SubFrame4A::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A::wrap_Object(SubFrame4A(((t_SubFrame4A *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB09());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeElementsType::class$ = NULL;
              jmethodID *AttitudeElementsType::mids$ = NULL;
              bool AttitudeElementsType::live$ = false;
              AttitudeElementsType *AttitudeElementsType::DCM = NULL;
              AttitudeElementsType *AttitudeElementsType::EULER_ANGLES = NULL;
              AttitudeElementsType *AttitudeElementsType::QUATERNION = NULL;

              jclass AttitudeElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_d751c1a57012b438] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toRotation_8062044b68407315] = env->getMethodID(cls, "toRotation", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;[D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_edd7011eeed97934] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_values_250af0238b41c79c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DCM = new AttitudeElementsType(env->getStaticObjectField(cls, "DCM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  EULER_ANGLES = new AttitudeElementsType(env->getStaticObjectField(cls, "EULER_ANGLES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  QUATERNION = new AttitudeElementsType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_d751c1a57012b438]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeElementsType::toRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const JArray< jdouble > & a1) const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_8062044b68407315], a0.this$, a1.this$));
              }

              ::java::lang::String AttitudeElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
              }

              AttitudeElementsType AttitudeElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_edd7011eeed97934], a0.this$));
              }

              JArray< AttitudeElementsType > AttitudeElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_250af0238b41c79c]));
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
              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self);
              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type);
              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data);
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data);
              static PyGetSetDef t_AttitudeElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeElementsType, units),
                DECLARE_GET_FIELD(t_AttitudeElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeElementsType__methods_[] = {
                DECLARE_METHOD(t_AttitudeElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toRotation, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeElementsType)[] = {
                { Py_tp_methods, t_AttitudeElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeElementsType, t_AttitudeElementsType, AttitudeElementsType);
              PyObject *t_AttitudeElementsType::wrap_Object(const AttitudeElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeElementsType), &PY_TYPE_DEF(AttitudeElementsType), module, "AttitudeElementsType", 0);
              }

              void t_AttitudeElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "class_", make_descriptor(AttitudeElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "wrapfn_", make_descriptor(t_AttitudeElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "DCM", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::DCM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "EULER_ANGLES", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::EULER_ANGLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "QUATERNION", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::QUATERNION)));
              }

              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeElementsType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeElementsType::wrap_Object(AttitudeElementsType(((t_AttitudeElementsType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

                if (!parseArgs(args, "K[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.toRotation(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toRotation", args);
                return NULL;
              }

              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(AttitudeElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::valueOf(a0));
                  return t_AttitudeElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type)
              {
                JArray< AttitudeElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeElementsType::wrap_jobject);
              }
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data)
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
