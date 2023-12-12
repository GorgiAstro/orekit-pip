#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DerivativeGenerator::class$ = NULL;
        jmethodID *DerivativeGenerator::mids$ = NULL;
        bool DerivativeGenerator::live$ = false;

        jclass DerivativeGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DerivativeGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_constant_a69b521cb0ac39a4] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getSelected_0d9551367f7ecdef] = env->getMethodID(cls, "getSelected", "()Ljava/util/List;");
            mids$[mid_variable_33a58d2029513955] = env->getMethodID(cls, "variable", "(Lorg/orekit/utils/ParameterDriver;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_constant_a69b521cb0ac39a4], a0));
        }

        ::org::hipparchus::Field DerivativeGenerator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
        }

        ::java::util::List DerivativeGenerator::getSelected() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSelected_0d9551367f7ecdef]));
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::variable(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_variable_33a58d2029513955], a0.this$));
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
      namespace utils {
        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args);
        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data);
        static PyGetSetDef t_DerivativeGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeGenerator, field),
          DECLARE_GET_FIELD(t_DerivativeGenerator, selected),
          DECLARE_GET_FIELD(t_DerivativeGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeGenerator__methods_[] = {
          DECLARE_METHOD(t_DerivativeGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeGenerator, constant, METH_O),
          DECLARE_METHOD(t_DerivativeGenerator, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, getSelected, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, variable, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeGenerator)[] = {
          { Py_tp_methods, t_DerivativeGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeGenerator, t_DerivativeGenerator, DerivativeGenerator);
        PyObject *t_DerivativeGenerator::wrap_Object(const DerivativeGenerator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DerivativeGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DerivativeGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeGenerator), &PY_TYPE_DEF(DerivativeGenerator), module, "DerivativeGenerator", 0);
        }

        void t_DerivativeGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "class_", make_descriptor(DerivativeGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "wrapfn_", make_descriptor(t_DerivativeGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeGenerator::initializeClass, 1)))
            return NULL;
          return t_DerivativeGenerator::wrap_Object(DerivativeGenerator(((t_DerivativeGenerator *) arg)->object.this$));
        }
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.variable(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", arg);
          return NULL;
        }
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroRangeModifier::class$ = NULL;
          jmethodID *ShapiroRangeModifier::mids$ = NULL;
          bool ShapiroRangeModifier::live$ = false;

          jclass ShapiroRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroRangeModifier::ShapiroRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::java::util::List ShapiroRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void ShapiroRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self);
          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroRangeModifier, t_ShapiroRangeModifier, ShapiroRangeModifier);

          void t_ShapiroRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroRangeModifier), &PY_TYPE_DEF(ShapiroRangeModifier), module, "ShapiroRangeModifier", 0);
          }

          void t_ShapiroRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "class_", make_descriptor(ShapiroRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "wrapfn_", make_descriptor(t_ShapiroRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroRangeModifier::wrap_Object(ShapiroRangeModifier(((t_ShapiroRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/IdentityConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IdentityConverter::class$ = NULL;
            jmethodID *IdentityConverter::mids$ = NULL;
            bool IdentityConverter::live$ = false;

            jclass IdentityConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IdentityConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_metersToRu_5e4513d7d070fbb0] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_5e4513d7d070fbb0] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IdentityConverter::IdentityConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble IdentityConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_5e4513d7d070fbb0], a0.this$, a1.this$, a2);
            }

            jdouble IdentityConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_5e4513d7d070fbb0], a0.this$, a1.this$, a2);
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
            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args);
            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args);

            static PyMethodDef t_IdentityConverter__methods_[] = {
              DECLARE_METHOD(t_IdentityConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_IdentityConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IdentityConverter)[] = {
              { Py_tp_methods, t_IdentityConverter__methods_ },
              { Py_tp_init, (void *) t_IdentityConverter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IdentityConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(IdentityConverter, t_IdentityConverter, IdentityConverter);

            void t_IdentityConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(IdentityConverter), &PY_TYPE_DEF(IdentityConverter), module, "IdentityConverter", 0);
            }

            void t_IdentityConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "class_", make_descriptor(IdentityConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "wrapfn_", make_descriptor(t_IdentityConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IdentityConverter::initializeClass, 1)))
                return NULL;
              return t_IdentityConverter::wrap_Object(IdentityConverter(((t_IdentityConverter *) arg)->object.this$));
            }
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IdentityConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds)
            {
              IdentityConverter object((jobject) NULL);

              INT_CALL(object = IdentityConverter());
              self->object = object;

              return 0;
            }

            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/orekit/utils/ExtendedPVCoordinatesProviderAdapter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProviderAdapter::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProviderAdapter::mids$ = NULL;
      bool ExtendedPVCoordinatesProviderAdapter::live$ = false;

      jclass ExtendedPVCoordinatesProviderAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProviderAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ffaafe31c629f87e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExtendedPVCoordinatesProviderAdapter::ExtendedPVCoordinatesProviderAdapter(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_ffaafe31c629f87e, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ExtendedPVCoordinatesProviderAdapter__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProviderAdapter)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProviderAdapter__methods_ },
        { Py_tp_init, (void *) t_ExtendedPVCoordinatesProviderAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProviderAdapter)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProviderAdapter, t_ExtendedPVCoordinatesProviderAdapter, ExtendedPVCoordinatesProviderAdapter);

      void t_ExtendedPVCoordinatesProviderAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProviderAdapter), &PY_TYPE_DEF(ExtendedPVCoordinatesProviderAdapter), module, "ExtendedPVCoordinatesProviderAdapter", 0);
      }

      void t_ExtendedPVCoordinatesProviderAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "class_", make_descriptor(ExtendedPVCoordinatesProviderAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProviderAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProviderAdapter::wrap_Object(ExtendedPVCoordinatesProviderAdapter(((t_ExtendedPVCoordinatesProviderAdapter *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ExtendedPVCoordinatesProviderAdapter object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = ExtendedPVCoordinatesProviderAdapter(a0, a1, a2));
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
#include "org/orekit/data/PythonDataFilter.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataFilter::class$ = NULL;
      jmethodID *PythonDataFilter::mids$ = NULL;
      bool PythonDataFilter::live$ = false;

      jclass PythonDataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_d33f4b0b3a1030ad] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataFilter::PythonDataFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonDataFilter::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonDataFilter::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonDataFilter::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self);
      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args);
      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data);
      static PyGetSetDef t_PythonDataFilter__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataFilter, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataFilter__methods_[] = {
        DECLARE_METHOD(t_PythonDataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataFilter, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataFilter, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataFilter)[] = {
        { Py_tp_methods, t_PythonDataFilter__methods_ },
        { Py_tp_init, (void *) t_PythonDataFilter_init_ },
        { Py_tp_getset, t_PythonDataFilter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataFilter, t_PythonDataFilter, PythonDataFilter);

      void t_PythonDataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataFilter), &PY_TYPE_DEF(PythonDataFilter), module, "PythonDataFilter", 1);
      }

      void t_PythonDataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "class_", make_descriptor(PythonDataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "wrapfn_", make_descriptor(t_PythonDataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataFilter), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataFilter::initializeClass);
        JNINativeMethod methods[] = {
          { "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;", (void *) t_PythonDataFilter_filter0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataFilter_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataFilter::initializeClass, 1)))
          return NULL;
        return t_PythonDataFilter::wrap_Object(PythonDataFilter(((t_PythonDataFilter *) arg)->object.this$));
      }
      static PyObject *t_PythonDataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataFilter_init_(t_PythonDataFilter *self, PyObject *args, PyObject *kwds)
      {
        PythonDataFilter object((jobject) NULL);

        INT_CALL(object = PythonDataFilter());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataFilter_finalize(t_PythonDataFilter *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataFilter_pythonExtension(t_PythonDataFilter *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::DataSource value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
        PyObject *result = PyObject_CallMethod(obj, "filter", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::DataSource::initializeClass, &value))
        {
          throwTypeError("filter", result);
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

      static void JNICALL t_PythonDataFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataFilter::mids$[PythonDataFilter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataFilter_get__self(t_PythonDataFilter *self, void *data)
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
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter::class$ = NULL;
      jmethodID *HarmonicCurveFitter::mids$ = NULL;
      bool HarmonicCurveFitter::live$ = false;

      jclass HarmonicCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_8d19e35e2898a9c2] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withMaxIterations_e1522e4c4402ab09] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withStartPoint_a7fb2fedd8b70f3d] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_getProblem_cf073573d4101d89] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter HarmonicCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return HarmonicCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_8d19e35e2898a9c2]));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withMaxIterations(jint a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_e1522e4c4402ab09], a0));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_a7fb2fedd8b70f3d], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type);
      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg);

      static PyMethodDef t_HarmonicCurveFitter__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_HarmonicCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter, t_HarmonicCurveFitter, HarmonicCurveFitter);

      void t_HarmonicCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter), &PY_TYPE_DEF(HarmonicCurveFitter), module, "HarmonicCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser)));
      }

      void t_HarmonicCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "class_", make_descriptor(HarmonicCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "wrapfn_", make_descriptor(t_HarmonicCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter::wrap_Object(HarmonicCurveFitter(((t_HarmonicCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type)
      {
        HarmonicCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::HarmonicCurveFitter::create());
        return t_HarmonicCurveFitter::wrap_Object(result);
      }

      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        jint a0;
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *LegacyNavigationMessage::class$ = NULL;
            jmethodID *LegacyNavigationMessage::mids$ = NULL;
            bool LegacyNavigationMessage::live$ = false;
            ::java::lang::String *LegacyNavigationMessage::LNAV = NULL;

            jclass LegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFitInterval_412668abc8d889e9] = env->getMethodID(cls, "getFitInterval", "()I");
                mids$[mid_getIODC_412668abc8d889e9] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_412668abc8d889e9] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getSvAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_412668abc8d889e9] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_557b8123390d8d0c] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_setFitInterval_a3da1a935cb37f7b] = env->getMethodID(cls, "setFitInterval", "(I)V");
                mids$[mid_setIODC_a3da1a935cb37f7b] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_10f281d777284cea] = env->getMethodID(cls, "setIODE", "(D)V");
                mids$[mid_setSvAccuracy_10f281d777284cea] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_a3da1a935cb37f7b] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_10f281d777284cea] = env->getMethodID(cls, "setTGD", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LNAV = new ::java::lang::String(env->getStaticObjectField(cls, "LNAV", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LegacyNavigationMessage::getFitInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getFitInterval_412668abc8d889e9]);
            }

            jint LegacyNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_412668abc8d889e9]);
            }

            jint LegacyNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_412668abc8d889e9]);
            }

            jdouble LegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_557b8123390d8d0c]);
            }

            jint LegacyNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_412668abc8d889e9]);
            }

            jdouble LegacyNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_557b8123390d8d0c]);
            }

            void LegacyNavigationMessage::setFitInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFitInterval_a3da1a935cb37f7b], a0);
            }

            void LegacyNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_a3da1a935cb37f7b], a0);
            }

            void LegacyNavigationMessage::setIODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_10f281d777284cea], a0);
            }

            void LegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_10f281d777284cea], a0);
            }

            void LegacyNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_a3da1a935cb37f7b], a0);
            }

            void LegacyNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_10f281d777284cea], a0);
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
            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_LegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, fitInterval),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, tGD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_LegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getFitInterval, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, setFitInterval, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setTGD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LegacyNavigationMessage)[] = {
              { Py_tp_methods, t_LegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(LegacyNavigationMessage, t_LegacyNavigationMessage, LegacyNavigationMessage);

            void t_LegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(LegacyNavigationMessage), &PY_TYPE_DEF(LegacyNavigationMessage), module, "LegacyNavigationMessage", 0);
            }

            void t_LegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "class_", make_descriptor(LegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "wrapfn_", make_descriptor(t_LegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(LegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "LNAV", make_descriptor(j2p(*LegacyNavigationMessage::LNAV)));
            }

            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_LegacyNavigationMessage::wrap_Object(LegacyNavigationMessage(((t_LegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFitInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setFitInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFitInterval", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFitInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setFitInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fitInterval", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
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
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadataKey::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadataKey::mids$ = NULL;
            bool AdditionalCovarianceMetadataKey::live$ = false;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::COMMENT = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY = NULL;
            AdditionalCovarianceMetadataKey *AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE = NULL;

            jclass AdditionalCovarianceMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_6f0c70d4889bd78e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)Z");
                mids$[mid_valueOf_7c12ad021662d2aa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");
                mids$[mid_values_c755e15f52b8dfb9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MAX = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                CSCALE_FACTOR_MIN = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "CSCALE_FACTOR_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_POSITION = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DCP_SENSITIVITY_VECTOR_VELOCITY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DCP_SENSITIVITY_VECTOR_VELOCITY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                DENSITY_FORECAST_UNCERTAINTY = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "DENSITY_FORECAST_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                SCREENING_DATA_SOURCE = new AdditionalCovarianceMetadataKey(env->getStaticObjectField(cls, "SCREENING_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalCovarianceMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_6f0c70d4889bd78e], a0.this$, a1.this$, a2.this$);
            }

            AdditionalCovarianceMetadataKey AdditionalCovarianceMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalCovarianceMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7c12ad021662d2aa], a0.this$));
            }

            JArray< AdditionalCovarianceMetadataKey > AdditionalCovarianceMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalCovarianceMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c755e15f52b8dfb9]));
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
            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalCovarianceMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadataKey)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalCovarianceMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadataKey, t_AdditionalCovarianceMetadataKey, AdditionalCovarianceMetadataKey);
            PyObject *t_AdditionalCovarianceMetadataKey::wrap_Object(const AdditionalCovarianceMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalCovarianceMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalCovarianceMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalCovarianceMetadataKey *self = (t_AdditionalCovarianceMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalCovarianceMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadataKey), &PY_TYPE_DEF(AdditionalCovarianceMetadataKey), module, "AdditionalCovarianceMetadataKey", 0);
            }

            void t_AdditionalCovarianceMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "class_", make_descriptor(AdditionalCovarianceMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalCovarianceMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "COMMENT", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MAX", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "CSCALE_FACTOR_MIN", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::CSCALE_FACTOR_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_POSITION", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DCP_SENSITIVITY_VECTOR_VELOCITY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DCP_SENSITIVITY_VECTOR_VELOCITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "DENSITY_FORECAST_UNCERTAINTY", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::DENSITY_FORECAST_UNCERTAINTY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadataKey), "SCREENING_DATA_SOURCE", make_descriptor(t_AdditionalCovarianceMetadataKey::wrap_Object(*AdditionalCovarianceMetadataKey::SCREENING_DATA_SOURCE)));
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadataKey::wrap_Object(AdditionalCovarianceMetadataKey(((t_AdditionalCovarianceMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_of_(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_process(t_AdditionalCovarianceMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalCovarianceMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::valueOf(a0));
                return t_AdditionalCovarianceMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdditionalCovarianceMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalCovarianceMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdditionalCovarianceMetadataKey_get__parameters_(t_AdditionalCovarianceMetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableVectorFunction::mids$ = NULL;
        bool UnivariateDifferentiableVectorFunction::live$ = false;

        jclass UnivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_e94dffdd58ba460f] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > UnivariateDifferentiableVectorFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_e94dffdd58ba460f], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableVectorFunction, t_UnivariateDifferentiableVectorFunction, UnivariateDifferentiableVectorFunction);

        void t_UnivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableVectorFunction), &PY_TYPE_DEF(UnivariateDifferentiableVectorFunction), module, "UnivariateDifferentiableVectorFunction", 0);
        }

        void t_UnivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "class_", make_descriptor(UnivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableVectorFunction::wrap_Object(UnivariateDifferentiableVectorFunction(((t_UnivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EnablingPredicate::class$ = NULL;
        jmethodID *EnablingPredicate::mids$ = NULL;
        bool EnablingPredicate::live$ = false;

        jclass EnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_3634c1457eedfeb6] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean EnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_3634c1457eedfeb6], a0.this$, a1.this$, a2);
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
        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args);

        static PyMethodDef t_EnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_EnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnablingPredicate)[] = {
          { Py_tp_methods, t_EnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnablingPredicate, t_EnablingPredicate, EnablingPredicate);

        void t_EnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(EnablingPredicate), &PY_TYPE_DEF(EnablingPredicate), module, "EnablingPredicate", 0);
        }

        void t_EnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "class_", make_descriptor(EnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "wrapfn_", make_descriptor(t_EnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_EnablingPredicate::wrap_Object(EnablingPredicate(((t_EnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_EnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnablingPredicate_eventIsEnabled(t_EnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "java/util/List.h"
#include "java/io/InputStream.h"
#include "java/io/Serializable.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FundamentalNutationArguments::class$ = NULL;
      jmethodID *FundamentalNutationArguments::mids$ = NULL;
      bool FundamentalNutationArguments::live$ = false;

      jclass FundamentalNutationArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FundamentalNutationArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa2598418e3fde16] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;)V");
          mids$[mid_init$_a1d61436263fee86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_init$_4bab9f8c6e6f0cd0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_c10c391be25d3cbe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_evaluateAll_51d87a2a5d743374] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/data/BodiesElements;");
          mids$[mid_evaluateAll_6ac8976527e5e845] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/data/FieldBodiesElements;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa2598418e3fde16, a0.this$, a1.this$, a2.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1d61436263fee86, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4bab9f8c6e6f0cd0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c10c391be25d3cbe, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::data::BodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::data::BodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_51d87a2a5d743374], a0.this$));
      }

      ::org::orekit::data::FieldBodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::data::FieldBodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_6ac8976527e5e845], a0.this$));
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
      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args);

      static PyMethodDef t_FundamentalNutationArguments__methods_[] = {
        DECLARE_METHOD(t_FundamentalNutationArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, evaluateAll, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FundamentalNutationArguments)[] = {
        { Py_tp_methods, t_FundamentalNutationArguments__methods_ },
        { Py_tp_init, (void *) t_FundamentalNutationArguments_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FundamentalNutationArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FundamentalNutationArguments, t_FundamentalNutationArguments, FundamentalNutationArguments);

      void t_FundamentalNutationArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FundamentalNutationArguments), &PY_TYPE_DEF(FundamentalNutationArguments), module, "FundamentalNutationArguments", 0);
      }

      void t_FundamentalNutationArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "class_", make_descriptor(FundamentalNutationArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "wrapfn_", make_descriptor(t_FundamentalNutationArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FundamentalNutationArguments::initializeClass, 1)))
          return NULL;
        return t_FundamentalNutationArguments::wrap_Object(FundamentalNutationArguments(((t_FundamentalNutationArguments *) arg)->object.this$));
      }
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FundamentalNutationArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkks", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkksk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3, a4));
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

      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::data::BodiesElements result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_BodiesElements::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::data::FieldBodiesElements result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_FieldBodiesElements::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateAll", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/AbstractWell.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *AbstractWell::class$ = NULL;
      jmethodID *AbstractWell::mids$ = NULL;
      bool AbstractWell::live$ = false;

      jclass AbstractWell::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/AbstractWell");

          mids$ = new jmethodID[max_mid];
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractWell::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
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
      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args);
      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractWell__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractWell, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractWell__methods_[] = {
        DECLARE_METHOD(t_AbstractWell, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractWell)[] = {
        { Py_tp_methods, t_AbstractWell__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractWell__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractWell)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(AbstractWell, t_AbstractWell, AbstractWell);

      void t_AbstractWell::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractWell), &PY_TYPE_DEF(AbstractWell), module, "AbstractWell", 0);
      }

      void t_AbstractWell::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "class_", make_descriptor(AbstractWell::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "wrapfn_", make_descriptor(t_AbstractWell::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractWell::initializeClass, 1)))
          return NULL;
        return t_AbstractWell::wrap_Object(AbstractWell(((t_AbstractWell *) arg)->object.this$));
      }
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractWell::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(AbstractWell), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
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
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder::class$ = NULL;
      jmethodID *WaypointPVBuilder::mids$ = NULL;
      bool WaypointPVBuilder::live$ = false;

      jclass WaypointPVBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5d5f5e9f7bcedd4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/WaypointPVBuilder$InterpolationFactory;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_addWaypoint_b6e13afcf40c54d4] = env->getMethodID(cls, "addWaypoint", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_build_dec199e86bf037eb] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_cartesianBuilder_69b7371cb686d84f] = env->getStaticMethodID(cls, "cartesianBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantAfter_402772324bc88cf0] = env->getMethodID(cls, "constantAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantBefore_402772324bc88cf0] = env->getMethodID(cls, "constantBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_greatCircleBuilder_69b7371cb686d84f] = env->getStaticMethodID(cls, "greatCircleBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidAfter_402772324bc88cf0] = env->getMethodID(cls, "invalidAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidBefore_402772324bc88cf0] = env->getMethodID(cls, "invalidBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_loxodromeBuilder_69b7371cb686d84f] = env->getStaticMethodID(cls, "loxodromeBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_createInitial_c79d877976710bc0] = env->getMethodID(cls, "createInitial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_createFinal_c79d877976710bc0] = env->getMethodID(cls, "createFinal", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WaypointPVBuilder::WaypointPVBuilder(const ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5d5f5e9f7bcedd4, a0.this$, a1.this$)) {}

      WaypointPVBuilder WaypointPVBuilder::addWaypoint(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_addWaypoint_b6e13afcf40c54d4], a0.this$, a1.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder::build() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_dec199e86bf037eb]));
      }

      WaypointPVBuilder WaypointPVBuilder::cartesianBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_cartesianBuilder_69b7371cb686d84f], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::constantAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantAfter_402772324bc88cf0]));
      }

      WaypointPVBuilder WaypointPVBuilder::constantBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantBefore_402772324bc88cf0]));
      }

      WaypointPVBuilder WaypointPVBuilder::greatCircleBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_greatCircleBuilder_69b7371cb686d84f], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidAfter_402772324bc88cf0]));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidBefore_402772324bc88cf0]));
      }

      WaypointPVBuilder WaypointPVBuilder::loxodromeBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_loxodromeBuilder_69b7371cb686d84f], a0.this$));
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
      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args);
      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_WaypointPVBuilder__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, addWaypoint, METH_VARARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, build, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, cartesianBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, greatCircleBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, loxodromeBuilder, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder)[] = {
        { Py_tp_methods, t_WaypointPVBuilder__methods_ },
        { Py_tp_init, (void *) t_WaypointPVBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder, t_WaypointPVBuilder, WaypointPVBuilder);

      void t_WaypointPVBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder), &PY_TYPE_DEF(WaypointPVBuilder), module, "WaypointPVBuilder", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "InterpolationFactory", make_descriptor(&PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory)));
      }

      void t_WaypointPVBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "class_", make_descriptor(WaypointPVBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "wrapfn_", make_descriptor(t_WaypointPVBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder::wrap_Object(WaypointPVBuilder(((t_WaypointPVBuilder *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory a0((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
        WaypointPVBuilder object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = WaypointPVBuilder(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.addWaypoint(a0, a1));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addWaypoint", args);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::cartesianBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cartesianBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::greatCircleBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "greatCircleBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::loxodromeBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "loxodromeBuilder", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory$FieldModel::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory$FieldModel::mids$ = NULL;
        bool GeoMagneticFieldFactory$FieldModel::live$ = false;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::IGRF = NULL;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::WMM = NULL;

        jclass GeoMagneticFieldFactory$FieldModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_876865b83506c75e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");
            mids$[mid_values_370185eaef43d24c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            IGRF = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "IGRF", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            WMM = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "WMM", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticFieldFactory$FieldModel GeoMagneticFieldFactory$FieldModel::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GeoMagneticFieldFactory$FieldModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_876865b83506c75e], a0.this$));
        }

        JArray< GeoMagneticFieldFactory$FieldModel > GeoMagneticFieldFactory$FieldModel::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< GeoMagneticFieldFactory$FieldModel >(env->callStaticObjectMethod(cls, mids$[mid_values_370185eaef43d24c]));
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
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory$FieldModel__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory$FieldModel, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory$FieldModel__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory$FieldModel)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory$FieldModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory$FieldModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory$FieldModel)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory$FieldModel, t_GeoMagneticFieldFactory$FieldModel, GeoMagneticFieldFactory$FieldModel);
        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_Object(const GeoMagneticFieldFactory$FieldModel& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeoMagneticFieldFactory$FieldModel::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory$FieldModel), &PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel), module, "GeoMagneticFieldFactory$FieldModel", 0);
        }

        void t_GeoMagneticFieldFactory$FieldModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "class_", make_descriptor(GeoMagneticFieldFactory$FieldModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "boxfn_", make_descriptor(boxObject));
          env->getClass(GeoMagneticFieldFactory$FieldModel::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "IGRF", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::IGRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "WMM", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::WMM)));
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(GeoMagneticFieldFactory$FieldModel(((t_GeoMagneticFieldFactory$FieldModel *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          GeoMagneticFieldFactory$FieldModel result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::valueOf(a0));
            return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type)
        {
          JArray< GeoMagneticFieldFactory$FieldModel > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::values());
          return JArray<jobject>(result.this$).wrap(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject);
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonInterpolationGrid::class$ = NULL;
            jmethodID *PythonInterpolationGrid::mids$ = NULL;
            bool PythonInterpolationGrid::live$ = false;

            jclass PythonInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_0699cadabd57760f] = env->getMethodID(cls, "getGridPoints", "(DD)[D");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonInterpolationGrid::PythonInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonInterpolationGrid::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self);
            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonInterpolationGrid, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonInterpolationGrid, t_PythonInterpolationGrid, PythonInterpolationGrid);

            void t_PythonInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonInterpolationGrid), &PY_TYPE_DEF(PythonInterpolationGrid), module, "PythonInterpolationGrid", 1);
            }

            void t_PythonInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "class_", make_descriptor(PythonInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "wrapfn_", make_descriptor(t_PythonInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(DD)[D", (void *) t_PythonInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonInterpolationGrid::wrap_Object(PythonInterpolationGrid(((t_PythonInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "dd", (double) a0, (double) a1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
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
              mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
              mids$[mid_getRule_9a5adfb225849173] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_ae382f1c633a9427] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_enforceSymmetry_5d9c9afaca2e497c] = env->getMethodID(cls, "enforceSymmetry", "([Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldAbstractRuleFactory::FieldAbstractRuleFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

          ::org::hipparchus::Field FieldAbstractRuleFactory::getField() const
          {
            return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
          }

          ::org::hipparchus::util::Pair FieldAbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_9a5adfb225849173], a0));
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
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventShifter::class$ = NULL;
        jmethodID *EventShifter::mids$ = NULL;
        bool EventShifter::live$ = false;

        jclass EventShifter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventShifter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17f90a9653775635] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;ZDD)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDecreasingTimeShift_557b8123390d8d0c] = env->getMethodID(cls, "getDecreasingTimeShift", "()D");
            mids$[mid_getDetector_0701b00b25822fff] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getIncreasingTimeShift_557b8123390d8d0c] = env->getMethodID(cls, "getIncreasingTimeShift", "()D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_32c629a69ac92dfe] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventShifter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventShifter::EventShifter(const ::org::orekit::propagation::events::EventDetector & a0, jboolean a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_17f90a9653775635, a0.this$, a1, a2, a3)) {}

        jdouble EventShifter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        jdouble EventShifter::getDecreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDecreasingTimeShift_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::events::EventDetector EventShifter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_0701b00b25822fff]));
        }

        jdouble EventShifter::getIncreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIncreasingTimeShift_557b8123390d8d0c]);
        }

        void EventShifter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args);
        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_getDetector(t_EventShifter *self);
        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data);
        static PyGetSetDef t_EventShifter__fields_[] = {
          DECLARE_GET_FIELD(t_EventShifter, decreasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, detector),
          DECLARE_GET_FIELD(t_EventShifter, increasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventShifter__methods_[] = {
          DECLARE_METHOD(t_EventShifter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, getDecreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getIncreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventShifter)[] = {
          { Py_tp_methods, t_EventShifter__methods_ },
          { Py_tp_init, (void *) t_EventShifter_init_ },
          { Py_tp_getset, t_EventShifter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventShifter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventShifter, t_EventShifter, EventShifter);
        PyObject *t_EventShifter::wrap_Object(const EventShifter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventShifter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventShifter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventShifter), &PY_TYPE_DEF(EventShifter), module, "EventShifter", 0);
        }

        void t_EventShifter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "class_", make_descriptor(EventShifter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "wrapfn_", make_descriptor(t_EventShifter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventShifter::initializeClass, 1)))
            return NULL;
          return t_EventShifter::wrap_Object(EventShifter(((t_EventShifter *) arg)->object.this$));
        }
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventShifter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          jboolean a1;
          jdouble a2;
          jdouble a3;
          EventShifter object((jobject) NULL);

          if (!parseArgs(args, "kZDD", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = EventShifter(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventShifter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_getDetector(t_EventShifter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03::class$ = NULL;
              jmethodID *SsrIgm03::mids$ = NULL;
              bool SsrIgm03::live$ = false;

              jclass SsrIgm03::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_65aca789249fcb65] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm03Data_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSsrIgm03Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03::SsrIgm03(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_65aca789249fcb65, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm03::getSsrIgm03Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm03Data_1e62c2f73fbdd1c4]));
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
              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args);
              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self);
              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data);
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data);
              static PyGetSetDef t_SsrIgm03__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm03, ssrIgm03Data),
                DECLARE_GET_FIELD(t_SsrIgm03, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm03, getSsrIgm03Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03)[] = {
                { Py_tp_methods, t_SsrIgm03__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03_init_ },
                { Py_tp_getset, t_SsrIgm03__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm03, t_SsrIgm03, SsrIgm03);
              PyObject *t_SsrIgm03::wrap_Object(const SsrIgm03& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm03::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm03::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03), &PY_TYPE_DEF(SsrIgm03), module, "SsrIgm03", 0);
              }

              void t_SsrIgm03::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "class_", make_descriptor(SsrIgm03::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "wrapfn_", make_descriptor(t_SsrIgm03::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03::wrap_Object(SsrIgm03(((t_SsrIgm03 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm03 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm03(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm03Data());
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer::class$ = NULL;
            jmethodID *LeastSquaresOptimizer::mids$ = NULL;
            bool LeastSquaresOptimizer::live$ = false;

            jclass LeastSquaresOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_optimize_07184cacaaa6a451] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquaresOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_07184cacaaa6a451], a0.this$));
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
            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresOptimizer__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, optimize, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer, t_LeastSquaresOptimizer, LeastSquaresOptimizer);

            void t_LeastSquaresOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer), &PY_TYPE_DEF(LeastSquaresOptimizer), module, "LeastSquaresOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "Optimum", make_descriptor(&PY_TYPE_DEF(LeastSquaresOptimizer$Optimum)));
            }

            void t_LeastSquaresOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "class_", make_descriptor(LeastSquaresOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer::wrap_Object(LeastSquaresOptimizer(((t_LeastSquaresOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
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
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201::class$ = NULL;
              jmethodID *SsrIm201::mids$ = NULL;
              bool SsrIm201::live$ = false;

              jclass SsrIm201::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d4f7898df41412b2] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header;Ljava/util/List;)V");
                  mids$[mid_getIonosphericModel_8a2de859f3c55f13] = env->getMethodID(cls, "getIonosphericModel", "()Lorg/orekit/models/earth/ionosphere/SsrVtecIonosphericModel;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201::SsrIm201(jint a0, const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_d4f7898df41412b2, a0, a1.this$, a2.this$)) {}

              ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel SsrIm201::getIonosphericModel() const
              {
                return ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel(env->callObjectMethod(this$, mids$[mid_getIonosphericModel_8a2de859f3c55f13]));
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
            namespace subtype {
              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args);
              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self);
              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data);
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data);
              static PyGetSetDef t_SsrIm201__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIm201, ionosphericModel),
                DECLARE_GET_FIELD(t_SsrIm201, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201__methods_[] = {
                DECLARE_METHOD(t_SsrIm201, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIm201, getIonosphericModel, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201)[] = {
                { Py_tp_methods, t_SsrIm201__methods_ },
                { Py_tp_init, (void *) t_SsrIm201_init_ },
                { Py_tp_getset, t_SsrIm201__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIm201, t_SsrIm201, SsrIm201);
              PyObject *t_SsrIm201::wrap_Object(const SsrIm201& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIm201::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIm201::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201), &PY_TYPE_DEF(SsrIm201), module, "SsrIm201", 0);
              }

              void t_SsrIm201::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "class_", make_descriptor(SsrIm201::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "wrapfn_", make_descriptor(t_SsrIm201::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201::wrap_Object(SsrIm201(((t_SsrIm201 *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                SsrIm201 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIm201(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(result);
              }
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(value);
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
#include "org/orekit/propagation/conversion/PythonPropagatorConverter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorConverter::class$ = NULL;
        jmethodID *PythonPropagatorConverter::mids$ = NULL;
        bool PythonPropagatorConverter::live$ = false;

        jclass PythonPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_convert_aca0727def0bdfc3] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_e823fa7f61b08ee5] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_45d78d4eb2e28b70] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_5aea72ca01fda79c] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorConverter::PythonPropagatorConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonPropagatorConverter::pythonExtension(jlong a0) const
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
      namespace conversion {
        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self);
        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorConverter, t_PythonPropagatorConverter, PythonPropagatorConverter);

        void t_PythonPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorConverter), &PY_TYPE_DEF(PythonPropagatorConverter), module, "PythonPropagatorConverter", 1);
        }

        void t_PythonPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "class_", make_descriptor(PythonPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "wrapfn_", make_descriptor(t_PythonPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert0 },
            { "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert1 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert2 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert3 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorConverter_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorConverter::wrap_Object(PythonPropagatorConverter(((t_PythonPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorConverter object((jobject) NULL);

          INT_CALL(object = PythonPropagatorConverter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = JArray<jstring>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = ::java::util::t_List::wrap_Object(::java::util::List(a2));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = JArray<jstring>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = ::java::util::t_List::wrap_Object(::java::util::List(a3));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data)
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
              mids$[mid_booleanValue_39cbdf35e32a2f54] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_doubleValue_49101b3b25e10784] = env->getMethodID(cls, "doubleValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)D");
              mids$[mid_intValue_568a853585242248] = env->getMethodID(cls, "intValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)I");
              mids$[mid_stringValue_f24c993303238595] = env->getMethodID(cls, "stringValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean DataField::booleanValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_booleanValue_39cbdf35e32a2f54], a0.this$);
          }

          jdouble DataField::doubleValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_doubleValue_49101b3b25e10784], a0.this$);
          }

          jint DataField::intValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_intValue_568a853585242248], a0.this$);
          }

          ::java::lang::String DataField::stringValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_stringValue_f24c993303238595], a0.this$, a1));
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
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayFieldVector::class$ = NULL;
      jmethodID *ArrayFieldVector::mids$ = NULL;
      bool ArrayFieldVector::live$ = false;

      jclass ArrayFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b21b5587abda5ee9] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_4ae1c7672d20bfa1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_7bc542994fc2f915] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_0fd9ea2bb1f66bfb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_b19b4cfb9aa4498b] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_72be9826404dd64a] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_1b9cf9fe2f8d539c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_35646f9483fed933] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayFieldVector;Z)V");
          mids$[mid_init$_d23b1b48c6bca206] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_f89bf3117923cd08] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_75116bc6ab3568ce] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_d4a6fa10f81643b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_cabe16a784b00aed] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_7f004047d24178f7] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_init$_50e98ebb6b2854f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_add_887c3a8a43dc43d5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_add_a7c6926a425759ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_887c3a8a43dc43d5] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_append_9c0263b78fe30ac4] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_a7c6926a425759ad] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_f39e0d3c1ce991ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_1073206769d7032b] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_dotProduct_3954878560819a96] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_887c3a8a43dc43d5] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeDivide_a7c6926a425759ad] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_887c3a8a43dc43d5] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeMultiply_a7c6926a425759ad] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_7a985a773168dff8] = env->getMethodID(cls, "getDataRef", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_d40ba91356b6a058] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_6244d57986a4c96a] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_9c0263b78fe30ac4] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9c0263b78fe30ac4] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_f39e0d3c1ce991ac] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_f39e0d3c1ce991ac] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9c0263b78fe30ac4] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9c0263b78fe30ac4] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9c0263b78fe30ac4] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_fddb7f739bb2af31] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_2284af949fc5e425] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_887c3a8a43dc43d5] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_projection_a7c6926a425759ad] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_b906415fb0b2ba27] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_set_db042c11dacf50d1] = env->getMethodID(cls, "set", "(ILorg/hipparchus/linear/ArrayFieldVector;)V");
          mids$[mid_setEntry_d23b1b48c6bca206] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_502f8ed205bebebd] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_887c3a8a43dc43d5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_subtract_a7c6926a425759ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_7a985a773168dff8] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_a4b00f8c7fc7e690] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_1915435d849c895c] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_3d5cadff5023e9d0] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_57525d52a5913d3a] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_a4b00f8c7fc7e690] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_1915435d849c895c] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_3d5cadff5023e9d0] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_57525d52a5913d3a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_4ae1c7672d20bfa1] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_checkVectorDimensions_a3da1a935cb37f7b] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b21b5587abda5ee9, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ae1c7672d20bfa1, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7bc542994fc2f915, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fd9ea2bb1f66bfb, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b19b4cfb9aa4498b, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72be9826404dd64a, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b9cf9fe2f8d539c, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ArrayFieldVector & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_35646f9483fed933, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(jint a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d23b1b48c6bca206, a0, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f89bf3117923cd08, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75116bc6ab3568ce, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, const JArray< ::org::hipparchus::FieldElement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d4a6fa10f81643b2, a0.this$, a1.this$, a2.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cabe16a784b00aed, a0.this$, a1.this$, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f004047d24178f7, a0.this$, a1, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50e98ebb6b2854f4, a0.this$, a1.this$, a2, a3)) {}

      ArrayFieldVector ArrayFieldVector::add(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_add_887c3a8a43dc43d5], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_a7c6926a425759ad], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::append(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_append_887c3a8a43dc43d5], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_a7c6926a425759ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_f39e0d3c1ce991ac]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_1073206769d7032b], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_3954878560819a96], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeDivide(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_887c3a8a43dc43d5], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_a7c6926a425759ad], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeMultiply(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_887c3a8a43dc43d5], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_a7c6926a425759ad], a0.this$));
      }

      jboolean ArrayFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::getDataRef() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getDataRef_7a985a773168dff8]));
      }

      jint ArrayFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d40ba91356b6a058], a0));
      }

      ::org::hipparchus::Field ArrayFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_6244d57986a4c96a], a0, a1));
      }

      jint ArrayFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_f39e0d3c1ce991ac]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_f39e0d3c1ce991ac]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9c0263b78fe30ac4], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_fddb7f739bb2af31], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_2284af949fc5e425], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::projection(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_projection_887c3a8a43dc43d5], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_a7c6926a425759ad], a0.this$));
      }

      void ArrayFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_b906415fb0b2ba27], a0.this$);
      }

      void ArrayFieldVector::set(jint a0, const ArrayFieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_set_db042c11dacf50d1], a0, a1.this$);
      }

      void ArrayFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d23b1b48c6bca206], a0, a1.this$);
      }

      void ArrayFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_502f8ed205bebebd], a0, a1.this$);
      }

      ArrayFieldVector ArrayFieldVector::subtract(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_887c3a8a43dc43d5], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_a7c6926a425759ad], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_7a985a773168dff8]));
      }

      ::java::lang::String ArrayFieldVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_a4b00f8c7fc7e690], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_1915435d849c895c], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_3d5cadff5023e9d0], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_57525d52a5913d3a], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_a4b00f8c7fc7e690], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_1915435d849c895c], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_3d5cadff5023e9d0], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_57525d52a5913d3a], a0.this$, a1, a2));
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
      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args);
      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data);
      static PyGetSetDef t_ArrayFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayFieldVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayFieldVector, dimension),
        DECLARE_GET_FIELD(t_ArrayFieldVector, field),
        DECLARE_GET_FIELD(t_ArrayFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayFieldVector__methods_[] = {
        DECLARE_METHOD(t_ArrayFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, projection, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayFieldVector)[] = {
        { Py_tp_methods, t_ArrayFieldVector__methods_ },
        { Py_tp_init, (void *) t_ArrayFieldVector_init_ },
        { Py_tp_getset, t_ArrayFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArrayFieldVector, t_ArrayFieldVector, ArrayFieldVector);
      PyObject *t_ArrayFieldVector::wrap_Object(const ArrayFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ArrayFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ArrayFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayFieldVector), &PY_TYPE_DEF(ArrayFieldVector), module, "ArrayFieldVector", 0);
      }

      void t_ArrayFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "class_", make_descriptor(ArrayFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "wrapfn_", make_descriptor(t_ArrayFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayFieldVector::initializeClass, 1)))
          return NULL;
        return t_ArrayFieldVector::wrap_Object(ArrayFieldVector(((t_ArrayFieldVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KZ", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::FieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KII", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2, a3));
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

      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg)
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

      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projection", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.set(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jint a0;
            ArrayFieldVector a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ArrayFieldVector::initializeClass, &a0, &a1, &p1, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(self->object.set(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "set", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args)
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

      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data)
      {
        JArray< ::org::hipparchus::FieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmParser::class$ = NULL;
            jmethodID *CdmParser::mids$ = NULL;
            bool CdmParser::live$ = false;

            jclass CdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_b402fdf8b50ee808] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/cdm/Cdm;");
                mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_b9986681911b0c56] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;");
                mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::cdm::Cdm CdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Cdm(env->callObjectMethod(this$, mids$[mid_build_b402fdf8b50ee808]));
            }

            jboolean CdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
            }

            jboolean CdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
            }

            jboolean CdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmHeader CdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_b9986681911b0c56]));
            }

            jboolean CdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
            }

            jboolean CdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
            }

            jboolean CdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
            }

            jboolean CdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
            }

            jboolean CdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
            }

            jboolean CdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
            }

            void CdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
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
            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data);
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data);
            static PyGetSetDef t_CdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_CdmParser, header),
              DECLARE_GET_FIELD(t_CdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmParser__methods_[] = {
              DECLARE_METHOD(t_CdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmParser)[] = {
              { Py_tp_methods, t_CdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(CdmParser, t_CdmParser, CdmParser);
            PyObject *t_CdmParser::wrap_Object(const CdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_CdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_CdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmParser), &PY_TYPE_DEF(CdmParser), module, "CdmParser", 0);
            }

            void t_CdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "class_", make_descriptor(CdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "wrapfn_", make_descriptor(t_CdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmParser::initializeClass, 1)))
                return NULL;
              return t_CdmParser::wrap_Object(CdmParser(((t_CdmParser *) arg)->object.this$));
            }
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Cdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventSlopeFilter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_01f5275106470eda] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_07d9256595c42b86] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_73f982e59ae3acff] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_01f5275106470eda, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_07d9256595c42b86]));
        }

        void FieldEventSlopeFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Cdm::class$ = NULL;
            jmethodID *Cdm::mids$ = NULL;
            bool Cdm::live$ = false;
            ::java::lang::String *Cdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Cdm::ROOT = NULL;

            jclass Cdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Cdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7a265bb956571896] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_getDataObject1_92abfe47ffd7445e] = env->getMethodID(cls, "getDataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getDataObject2_92abfe47ffd7445e] = env->getMethodID(cls, "getDataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getMetadataObject1_50968a5b019b83d2] = env->getMethodID(cls, "getMetadataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getMetadataObject2_50968a5b019b83d2] = env->getMethodID(cls, "getMetadataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getRelativeMetadata_f5a8cae6e2267df4] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getUserDefinedParameters_e8dd2483e310f990] = env->getMethodID(cls, "getUserDefinedParameters", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Cdm::Cdm(const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_7a265bb956571896, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject1_92abfe47ffd7445e]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject2_92abfe47ffd7445e]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject1_50968a5b019b83d2]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject2_50968a5b019b83d2]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata Cdm::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_f5a8cae6e2267df4]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined Cdm::getUserDefinedParameters() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedParameters_e8dd2483e310f990]));
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
            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args);
            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Cdm_getDataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getDataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self);
            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self);
            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data);
            static PyGetSetDef t_Cdm__fields_[] = {
              DECLARE_GET_FIELD(t_Cdm, dataObject1),
              DECLARE_GET_FIELD(t_Cdm, dataObject2),
              DECLARE_GET_FIELD(t_Cdm, metadataObject1),
              DECLARE_GET_FIELD(t_Cdm, metadataObject2),
              DECLARE_GET_FIELD(t_Cdm, relativeMetadata),
              DECLARE_GET_FIELD(t_Cdm, userDefinedParameters),
              DECLARE_GET_FIELD(t_Cdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Cdm__methods_[] = {
              DECLARE_METHOD(t_Cdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, of_, METH_VARARGS),
              DECLARE_METHOD(t_Cdm, getDataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getDataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getUserDefinedParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Cdm)[] = {
              { Py_tp_methods, t_Cdm__methods_ },
              { Py_tp_init, (void *) t_Cdm_init_ },
              { Py_tp_getset, t_Cdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Cdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Cdm, t_Cdm, Cdm);
            PyObject *t_Cdm::wrap_Object(const Cdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Cdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Cdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Cdm), &PY_TYPE_DEF(Cdm), module, "Cdm", 0);
            }

            void t_Cdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "class_", make_descriptor(Cdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "wrapfn_", make_descriptor(t_Cdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Cdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Cdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "ROOT", make_descriptor(j2p(*Cdm::ROOT)));
            }

            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Cdm::initializeClass, 1)))
                return NULL;
              return t_Cdm::wrap_Object(Cdm(((t_Cdm *) arg)->object.this$));
            }
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Cdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Cdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Cdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmHeader);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmSegment);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Cdm_getDataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getDataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ExceptionalDataContext.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "java/lang/Class.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ExceptionalDataContext::class$ = NULL;
      jmethodID *ExceptionalDataContext::mids$ = NULL;
      bool ExceptionalDataContext::live$ = false;

      jclass ExceptionalDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ExceptionalDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_2192d5132b3243a4] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getFrames_19dab31df3f9900d] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_f938ea66f56d3454] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_0d8a4be514230626] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_52cbe31230c76b6b] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExceptionalDataContext::ExceptionalDataContext() : ::org::orekit::data::LazyLoadedDataContext(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies ExceptionalDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_2192d5132b3243a4]));
      }

      ::org::orekit::frames::LazyLoadedFrames ExceptionalDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_19dab31df3f9900d]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields ExceptionalDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_f938ea66f56d3454]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields ExceptionalDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_0d8a4be514230626]));
      }

      ::org::orekit::time::LazyLoadedTimeScales ExceptionalDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_52cbe31230c76b6b]));
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
      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data);
      static PyGetSetDef t_ExceptionalDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_ExceptionalDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, frames),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, gravityFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExceptionalDataContext__methods_[] = {
        DECLARE_METHOD(t_ExceptionalDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, getCelestialBodies, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getFrames, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGeoMagneticFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGravityFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getTimeScales, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExceptionalDataContext)[] = {
        { Py_tp_methods, t_ExceptionalDataContext__methods_ },
        { Py_tp_init, (void *) t_ExceptionalDataContext_init_ },
        { Py_tp_getset, t_ExceptionalDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExceptionalDataContext)[] = {
        &PY_TYPE_DEF(::org::orekit::data::LazyLoadedDataContext),
        NULL
      };

      DEFINE_TYPE(ExceptionalDataContext, t_ExceptionalDataContext, ExceptionalDataContext);

      void t_ExceptionalDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(ExceptionalDataContext), &PY_TYPE_DEF(ExceptionalDataContext), module, "ExceptionalDataContext", 0);
      }

      void t_ExceptionalDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "class_", make_descriptor(ExceptionalDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "wrapfn_", make_descriptor(t_ExceptionalDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExceptionalDataContext::initializeClass, 1)))
          return NULL;
        return t_ExceptionalDataContext::wrap_Object(ExceptionalDataContext(((t_ExceptionalDataContext *) arg)->object.this$));
      }
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExceptionalDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds)
      {
        ExceptionalDataContext object((jobject) NULL);

        INT_CALL(object = ExceptionalDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getCelestialBodies());
          return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getCelestialBodies", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrames());
          return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getFrames", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGeoMagneticFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGravityFields());
          return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGravityFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTimeScales());
          return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getTimeScales", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/AbstractOptimizationProblem.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *AbstractOptimizationProblem::class$ = NULL;
      jmethodID *AbstractOptimizationProblem::mids$ = NULL;
      bool AbstractOptimizationProblem::live$ = false;

      jclass AbstractOptimizationProblem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/AbstractOptimizationProblem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_4c680323f2c08379] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_d3591c1ea177be92] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_d3591c1ea177be92] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker AbstractOptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_4c680323f2c08379]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_d3591c1ea177be92]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_d3591c1ea177be92]));
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
      static PyObject *t_AbstractOptimizationProblem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOptimizationProblem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOptimizationProblem_of_(t_AbstractOptimizationProblem *self, PyObject *args);
      static PyObject *t_AbstractOptimizationProblem_getConvergenceChecker(t_AbstractOptimizationProblem *self);
      static PyObject *t_AbstractOptimizationProblem_getEvaluationCounter(t_AbstractOptimizationProblem *self);
      static PyObject *t_AbstractOptimizationProblem_getIterationCounter(t_AbstractOptimizationProblem *self);
      static PyObject *t_AbstractOptimizationProblem_get__convergenceChecker(t_AbstractOptimizationProblem *self, void *data);
      static PyObject *t_AbstractOptimizationProblem_get__evaluationCounter(t_AbstractOptimizationProblem *self, void *data);
      static PyObject *t_AbstractOptimizationProblem_get__iterationCounter(t_AbstractOptimizationProblem *self, void *data);
      static PyObject *t_AbstractOptimizationProblem_get__parameters_(t_AbstractOptimizationProblem *self, void *data);
      static PyGetSetDef t_AbstractOptimizationProblem__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, convergenceChecker),
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, evaluationCounter),
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, iterationCounter),
        DECLARE_GET_FIELD(t_AbstractOptimizationProblem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractOptimizationProblem__methods_[] = {
        DECLARE_METHOD(t_AbstractOptimizationProblem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, getEvaluationCounter, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOptimizationProblem, getIterationCounter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractOptimizationProblem)[] = {
        { Py_tp_methods, t_AbstractOptimizationProblem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractOptimizationProblem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractOptimizationProblem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractOptimizationProblem, t_AbstractOptimizationProblem, AbstractOptimizationProblem);
      PyObject *t_AbstractOptimizationProblem::wrap_Object(const AbstractOptimizationProblem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOptimizationProblem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOptimizationProblem *self = (t_AbstractOptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractOptimizationProblem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOptimizationProblem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOptimizationProblem *self = (t_AbstractOptimizationProblem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractOptimizationProblem::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractOptimizationProblem), &PY_TYPE_DEF(AbstractOptimizationProblem), module, "AbstractOptimizationProblem", 0);
      }

      void t_AbstractOptimizationProblem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOptimizationProblem), "class_", make_descriptor(AbstractOptimizationProblem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOptimizationProblem), "wrapfn_", make_descriptor(t_AbstractOptimizationProblem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOptimizationProblem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractOptimizationProblem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractOptimizationProblem::initializeClass, 1)))
          return NULL;
        return t_AbstractOptimizationProblem::wrap_Object(AbstractOptimizationProblem(((t_AbstractOptimizationProblem *) arg)->object.this$));
      }
      static PyObject *t_AbstractOptimizationProblem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractOptimizationProblem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractOptimizationProblem_of_(t_AbstractOptimizationProblem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractOptimizationProblem_getConvergenceChecker(t_AbstractOptimizationProblem *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractOptimizationProblem_getEvaluationCounter(t_AbstractOptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }

      static PyObject *t_AbstractOptimizationProblem_getIterationCounter(t_AbstractOptimizationProblem *self)
      {
        ::org::hipparchus::util::Incrementor result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
      }
      static PyObject *t_AbstractOptimizationProblem_get__parameters_(t_AbstractOptimizationProblem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractOptimizationProblem_get__convergenceChecker(t_AbstractOptimizationProblem *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_AbstractOptimizationProblem_get__evaluationCounter(t_AbstractOptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getEvaluationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }

      static PyObject *t_AbstractOptimizationProblem_get__iterationCounter(t_AbstractOptimizationProblem *self, void *data)
      {
        ::org::hipparchus::util::Incrementor value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationCounter());
        return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *DynamicOutlierFilter::class$ = NULL;
          jmethodID *DynamicOutlierFilter::mids$ = NULL;
          bool DynamicOutlierFilter::live$ = false;

          jclass DynamicOutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getSigma_a53a7513ecedada2] = env->getMethodID(cls, "getSigma", "()[D");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_setSigma_cc18240f4a737f14] = env->getMethodID(cls, "setSigma", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DynamicOutlierFilter::DynamicOutlierFilter(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::OutlierFilter(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

          JArray< jdouble > DynamicOutlierFilter::getSigma() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_a53a7513ecedada2]));
          }

          void DynamicOutlierFilter::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void DynamicOutlierFilter::setSigma(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSigma_cc18240f4a737f14], a0.this$);
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
          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args);
          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self);
          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args);
          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data);
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data);
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data);
          static PyGetSetDef t_DynamicOutlierFilter__fields_[] = {
            DECLARE_GETSET_FIELD(t_DynamicOutlierFilter, sigma),
            DECLARE_GET_FIELD(t_DynamicOutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DynamicOutlierFilter__methods_[] = {
            DECLARE_METHOD(t_DynamicOutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, getSigma, METH_NOARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, modify, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, setSigma, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DynamicOutlierFilter)[] = {
            { Py_tp_methods, t_DynamicOutlierFilter__methods_ },
            { Py_tp_init, (void *) t_DynamicOutlierFilter_init_ },
            { Py_tp_getset, t_DynamicOutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DynamicOutlierFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::OutlierFilter),
            NULL
          };

          DEFINE_TYPE(DynamicOutlierFilter, t_DynamicOutlierFilter, DynamicOutlierFilter);
          PyObject *t_DynamicOutlierFilter::wrap_Object(const DynamicOutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DynamicOutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DynamicOutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DynamicOutlierFilter), &PY_TYPE_DEF(DynamicOutlierFilter), module, "DynamicOutlierFilter", 0);
          }

          void t_DynamicOutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "class_", make_descriptor(DynamicOutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "wrapfn_", make_descriptor(t_DynamicOutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DynamicOutlierFilter::initializeClass, 1)))
              return NULL;
            return t_DynamicOutlierFilter::wrap_Object(DynamicOutlierFilter(((t_DynamicOutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DynamicOutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            DynamicOutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = DynamicOutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSigma());
            return result.wrap();
          }

          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DynamicOutlierFilter), (PyObject *) self, "modify", args, 2);
          }

          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setSigma(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSigma", arg);
            return NULL;
          }
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSigma());
            return value.wrap();
          }
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setSigma(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sigma", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$BaseConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$BaseConfiguration::mids$ = NULL;
        bool CRDConfiguration$BaseConfiguration::live$ = false;

        jclass CRDConfiguration$BaseConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getConfigurationId_3cffd47377eca18a] = env->getMethodID(cls, "getConfigurationId", "()Ljava/lang/String;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_setConfigurationId_f5ffdf29129ef90a] = env->getMethodID(cls, "setConfigurationId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$BaseConfiguration::CRDConfiguration$BaseConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jboolean CRDConfiguration$BaseConfiguration::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::getConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConfigurationId_3cffd47377eca18a]));
        }

        jint CRDConfiguration$BaseConfiguration::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        void CRDConfiguration$BaseConfiguration::setConfigurationId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationId_f5ffdf29129ef90a], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
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
        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data);
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$BaseConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$BaseConfiguration, configurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$BaseConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, equals, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, getConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, setConfigurationId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$BaseConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$BaseConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$BaseConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$BaseConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$BaseConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$BaseConfiguration, t_CRDConfiguration$BaseConfiguration, CRDConfiguration$BaseConfiguration);

        void t_CRDConfiguration$BaseConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$BaseConfiguration), &PY_TYPE_DEF(CRDConfiguration$BaseConfiguration), module, "CRDConfiguration$BaseConfiguration", 0);
        }

        void t_CRDConfiguration$BaseConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "class_", make_descriptor(CRDConfiguration$BaseConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$BaseConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$BaseConfiguration::wrap_Object(CRDConfiguration$BaseConfiguration(((t_CRDConfiguration$BaseConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$BaseConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$BaseConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setConfigurationId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationId());
          return j2p(value);
        }
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setConfigurationId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntegerArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IntegerArrayConsumer::mids$ = NULL;
            bool ParseToken$IntegerArrayConsumer::live$ = false;

            jclass ParseToken$IntegerArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_ec63cb8a58ef5a54] = env->getMethodID(cls, "accept", "([I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntegerArrayConsumer::accept(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_ec63cb8a58ef5a54], a0.this$);
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
            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntegerArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntegerArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntegerArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntegerArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntegerArrayConsumer, t_ParseToken$IntegerArrayConsumer, ParseToken$IntegerArrayConsumer);

            void t_ParseToken$IntegerArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntegerArrayConsumer), &PY_TYPE_DEF(ParseToken$IntegerArrayConsumer), module, "ParseToken$IntegerArrayConsumer", 0);
            }

            void t_ParseToken$IntegerArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "class_", make_descriptor(ParseToken$IntegerArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntegerArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntegerArrayConsumer::wrap_Object(ParseToken$IntegerArrayConsumer(((t_ParseToken$IntegerArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
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
              mids$[mid_getReserved03_412668abc8d889e9] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_412668abc8d889e9] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_412668abc8d889e9] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_412668abc8d889e9] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_412668abc8d889e9] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_412668abc8d889e9] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved10_412668abc8d889e9] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReservedA09_412668abc8d889e9] = env->getMethodID(cls, "getReservedA09", "()I");
              mids$[mid_getReservedB09_412668abc8d889e9] = env->getMethodID(cls, "getReservedB09", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4A::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_412668abc8d889e9]);
          }

          jint SubFrame4A::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_412668abc8d889e9]);
          }

          jint SubFrame4A::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_412668abc8d889e9]);
          }

          jint SubFrame4A::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_412668abc8d889e9]);
          }

          jint SubFrame4A::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_412668abc8d889e9]);
          }

          jint SubFrame4A::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_412668abc8d889e9]);
          }

          jint SubFrame4A::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_412668abc8d889e9]);
          }

          jint SubFrame4A::getReservedA09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA09_412668abc8d889e9]);
          }

          jint SubFrame4A::getReservedB09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB09_412668abc8d889e9]);
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
