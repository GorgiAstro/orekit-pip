#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesPhaseModifier::RelativisticJ2ClockInterSatellitesPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticJ2ClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier, t_RelativisticJ2ClockInterSatellitesPhaseModifier, RelativisticJ2ClockInterSatellitesPhaseModifier);

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesPhaseModifier), module, "RelativisticJ2ClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_Object(RelativisticJ2ClockInterSatellitesPhaseModifier(((t_RelativisticJ2ClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
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
                mids$[mid_process_d68f29b6625dfb3d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)Z");
                mids$[mid_valueOf_76e52a4fe1b52773] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");
                mids$[mid_values_81cb1bda75735010] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");

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
              return env->callBooleanMethod(this$, mids$[mid_process_d68f29b6625dfb3d], a0.this$, a1.this$, a2.this$);
            }

            CdmHeaderKey CdmHeaderKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmHeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_76e52a4fe1b52773], a0.this$));
            }

            JArray< CdmHeaderKey > CdmHeaderKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmHeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_81cb1bda75735010]));
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction::class$ = NULL;
        jmethodID *PolynomialFunction::mids$ = NULL;
        bool PolynomialFunction::live$ = false;

        jclass PolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_add_942e79ad6d1932aa] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_antiDerivative_bab59708eca91047] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_degree_570ce0828f81a2c1] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_60c7040667a7dc5c] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_integrate_86ffecc08a63eff0] = env->getMethodID(cls, "integrate", "(DD)D");
            mids$[mid_multiply_942e79ad6d1932aa] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_negate_bab59708eca91047] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_polynomialDerivative_bab59708eca91047] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_subtract_942e79ad6d1932aa] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_evaluate_1c41301ff6e224e7] = env->getStaticMethodID(cls, "evaluate", "([DD)D");
            mids$[mid_differentiate_ac3d742ccc742f22] = env->getStaticMethodID(cls, "differentiate", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction::PolynomialFunction(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

        PolynomialFunction PolynomialFunction::add(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_942e79ad6d1932aa], a0.this$));
        }

        PolynomialFunction PolynomialFunction::antiDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_bab59708eca91047]));
        }

        jint PolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_570ce0828f81a2c1]);
        }

        jboolean PolynomialFunction::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        JArray< jdouble > PolynomialFunction::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_60c7040667a7dc5c]));
        }

        jint PolynomialFunction::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        jdouble PolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_86ffecc08a63eff0], a0, a1);
        }

        PolynomialFunction PolynomialFunction::multiply(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_942e79ad6d1932aa], a0.this$));
        }

        PolynomialFunction PolynomialFunction::negate() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_bab59708eca91047]));
        }

        PolynomialFunction PolynomialFunction::polynomialDerivative() const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_bab59708eca91047]));
        }

        PolynomialFunction PolynomialFunction::subtract(const PolynomialFunction & a0) const
        {
          return PolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_942e79ad6d1932aa], a0.this$));
        }

        ::java::lang::String PolynomialFunction::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
        }

        jdouble PolynomialFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self);
        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg);
        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args);
        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data);
        static PyGetSetDef t_PolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunction, coefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, equals, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_PolynomialFunction, toString, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction)[] = {
          { Py_tp_methods, t_PolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction_init_ },
          { Py_tp_getset, t_PolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction, t_PolynomialFunction, PolynomialFunction);

        void t_PolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction), &PY_TYPE_DEF(PolynomialFunction), module, "PolynomialFunction", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "Parametric", make_descriptor(&PY_TYPE_DEF(PolynomialFunction$Parametric)));
        }

        void t_PolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "class_", make_descriptor(PolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "wrapfn_", make_descriptor(t_PolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction::wrap_Object(PolynomialFunction(((t_PolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction_init_(t_PolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          PolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            INT_CALL(object = PolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunction_add(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_antiDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_degree(t_PolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunction_equals(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_PolynomialFunction_getCoefficients(t_PolynomialFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunction_hashCode(t_PolynomialFunction *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_PolynomialFunction_integrate(t_PolynomialFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_multiply(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_negate(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_polynomialDerivative(t_PolynomialFunction *self)
        {
          PolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_PolynomialFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialFunction_subtract(t_PolynomialFunction *self, PyObject *arg)
        {
          PolynomialFunction a0((jobject) NULL);
          PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "k", PolynomialFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunction_toString(t_PolynomialFunction *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(PolynomialFunction), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_PolynomialFunction_value(t_PolynomialFunction *self, PyObject *args)
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
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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

        static PyObject *t_PolynomialFunction_get__coefficients(t_PolynomialFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarN::class$ = NULL;
          jmethodID *CopolarN::mids$ = NULL;
          bool CopolarN::live$ = false;

          jclass CopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_dff5885c2c873297] = env->getMethodID(cls, "cn", "()D");
              mids$[mid_dn_dff5885c2c873297] = env->getMethodID(cls, "dn", "()D");
              mids$[mid_sn_dff5885c2c873297] = env->getMethodID(cls, "sn", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarN::cn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cn_dff5885c2c873297]);
          }

          jdouble CopolarN::dn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dn_dff5885c2c873297]);
          }

          jdouble CopolarN::sn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sn_dff5885c2c873297]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_cn(t_CopolarN *self);
          static PyObject *t_CopolarN_dn(t_CopolarN *self);
          static PyObject *t_CopolarN_sn(t_CopolarN *self);

          static PyMethodDef t_CopolarN__methods_[] = {
            DECLARE_METHOD(t_CopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarN)[] = {
            { Py_tp_methods, t_CopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarN, t_CopolarN, CopolarN);

          void t_CopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarN), &PY_TYPE_DEF(CopolarN), module, "CopolarN", 0);
          }

          void t_CopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "class_", make_descriptor(CopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "wrapfn_", make_descriptor(t_CopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarN::initializeClass, 1)))
              return NULL;
            return t_CopolarN::wrap_Object(CopolarN(((t_CopolarN *) arg)->object.this$));
          }
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarN_cn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_dn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_sn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sn());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Multiply.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Multiply::class$ = NULL;
        jmethodID *Multiply::mids$ = NULL;
        bool Multiply::live$ = false;

        jclass Multiply::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Multiply");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Multiply::Multiply() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Multiply::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args);

        static PyMethodDef t_Multiply__methods_[] = {
          DECLARE_METHOD(t_Multiply, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Multiply, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Multiply)[] = {
          { Py_tp_methods, t_Multiply__methods_ },
          { Py_tp_init, (void *) t_Multiply_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Multiply)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Multiply, t_Multiply, Multiply);

        void t_Multiply::install(PyObject *module)
        {
          installType(&PY_TYPE(Multiply), &PY_TYPE_DEF(Multiply), module, "Multiply", 0);
        }

        void t_Multiply::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "class_", make_descriptor(Multiply::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "wrapfn_", make_descriptor(t_Multiply::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Multiply), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Multiply_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Multiply::initializeClass, 1)))
            return NULL;
          return t_Multiply::wrap_Object(Multiply(((t_Multiply *) arg)->object.this$));
        }
        static PyObject *t_Multiply_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Multiply::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Multiply_init_(t_Multiply *self, PyObject *args, PyObject *kwds)
        {
          Multiply object((jobject) NULL);

          INT_CALL(object = Multiply());
          self->object = object;

          return 0;
        }

        static PyObject *t_Multiply_value(t_Multiply *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
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
#include "org/orekit/rugged/errors/RuggedExceptionWrapper.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedExceptionWrapper::class$ = NULL;
        jmethodID *RuggedExceptionWrapper::mids$ = NULL;
        bool RuggedExceptionWrapper::live$ = false;

        jclass RuggedExceptionWrapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedExceptionWrapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c1afc86299db90c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/errors/RuggedException;)V");
            mids$[mid_getException_72bb208273c044fd] = env->getMethodID(cls, "getException", "()Lorg/orekit/rugged/errors/RuggedException;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedExceptionWrapper::RuggedExceptionWrapper(const ::org::orekit::rugged::errors::RuggedException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c1afc86299db90c8, a0.this$)) {}

        ::org::orekit::rugged::errors::RuggedException RuggedExceptionWrapper::getException() const
        {
          return ::org::orekit::rugged::errors::RuggedException(env->callObjectMethod(this$, mids$[mid_getException_72bb208273c044fd]));
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
      namespace errors {
        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self);
        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data);
        static PyGetSetDef t_RuggedExceptionWrapper__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedExceptionWrapper, exception),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedExceptionWrapper__methods_[] = {
          DECLARE_METHOD(t_RuggedExceptionWrapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, getException, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedExceptionWrapper)[] = {
          { Py_tp_methods, t_RuggedExceptionWrapper__methods_ },
          { Py_tp_init, (void *) t_RuggedExceptionWrapper_init_ },
          { Py_tp_getset, t_RuggedExceptionWrapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedExceptionWrapper)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedExceptionWrapper, t_RuggedExceptionWrapper, RuggedExceptionWrapper);

        void t_RuggedExceptionWrapper::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedExceptionWrapper), &PY_TYPE_DEF(RuggedExceptionWrapper), module, "RuggedExceptionWrapper", 0);
        }

        void t_RuggedExceptionWrapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "class_", make_descriptor(RuggedExceptionWrapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "wrapfn_", make_descriptor(t_RuggedExceptionWrapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedExceptionWrapper::initializeClass, 1)))
            return NULL;
          return t_RuggedExceptionWrapper::wrap_Object(RuggedExceptionWrapper(((t_RuggedExceptionWrapper *) arg)->object.this$));
        }
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedExceptionWrapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::errors::RuggedException a0((jobject) NULL);
          RuggedExceptionWrapper object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::rugged::errors::RuggedException::initializeClass, &a0))
          {
            INT_CALL(object = RuggedExceptionWrapper(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self)
        {
          ::org::orekit::rugged::errors::RuggedException result((jobject) NULL);
          OBJ_CALL(result = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(result);
        }

        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data)
        {
          ::org::orekit::rugged::errors::RuggedException value((jobject) NULL);
          OBJ_CALL(value = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/AbstractOptimizationProblem.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
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
          mids$[mid_getConvergenceChecker_c0e8b85b3220641b] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluationCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getIterationCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker AbstractOptimizationProblem::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_c0e8b85b3220641b]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getEvaluationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_b6dd60d8c3af0cf7]));
      }

      ::org::hipparchus::util::Incrementor AbstractOptimizationProblem::getIterationCounter() const
      {
        return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_b6dd60d8c3af0cf7]));
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
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzer::class$ = NULL;
            jmethodID *LexicalAnalyzer::mids$ = NULL;
            bool LexicalAnalyzer::live$ = false;

            jclass LexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_94f8bc3acabdf0ba] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object LexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_94f8bc3acabdf0ba], a0.this$));
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
            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzer)[] = {
              { Py_tp_methods, t_LexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzer, t_LexicalAnalyzer, LexicalAnalyzer);

            void t_LexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzer), &PY_TYPE_DEF(LexicalAnalyzer), module, "LexicalAnalyzer", 0);
            }

            void t_LexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "class_", make_descriptor(LexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "wrapfn_", make_descriptor(t_LexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzer::wrap_Object(LexicalAnalyzer(((t_LexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzer_accept(t_LexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
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
#include "org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreGaussIntegrator::live$ = false;

        jclass IterativeLegendreGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_07bf81310115068c] = env->getMethodID(cls, "<init>", "(IDD)V");
            mids$[mid_init$_8336200ef3dde36b] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_init$_361130b948656372] = env->getMethodID(cls, "<init>", "(IDDII)V");
            mids$[mid_doIntegrate_dff5885c2c873297] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_07bf81310115068c, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8336200ef3dde36b, a0, a1, a2)) {}

        IterativeLegendreGaussIntegrator::IterativeLegendreGaussIntegrator(jint a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_361130b948656372, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_IterativeLegendreGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreGaussIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreGaussIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreGaussIntegrator, t_IterativeLegendreGaussIntegrator, IterativeLegendreGaussIntegrator);

        void t_IterativeLegendreGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreGaussIntegrator), module, "IterativeLegendreGaussIntegrator", 0);
        }

        void t_IterativeLegendreGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "class_", make_descriptor(IterativeLegendreGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreGaussIntegrator::wrap_Object(IterativeLegendreGaussIntegrator(((t_IterativeLegendreGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IterativeLegendreGaussIntegrator_init_(t_IterativeLegendreGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jint a1;
              jint a2;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              IterativeLegendreGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDII", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = IterativeLegendreGaussIntegrator(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/analysis/function/Log.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log::class$ = NULL;
        jmethodID *Log::mids$ = NULL;
        bool Log::live$ = false;

        jclass Log::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log::Log() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Log::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log_value(t_Log *self, PyObject *args);

        static PyMethodDef t_Log__methods_[] = {
          DECLARE_METHOD(t_Log, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log)[] = {
          { Py_tp_methods, t_Log__methods_ },
          { Py_tp_init, (void *) t_Log_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log, t_Log, Log);

        void t_Log::install(PyObject *module)
        {
          installType(&PY_TYPE(Log), &PY_TYPE_DEF(Log), module, "Log", 0);
        }

        void t_Log::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "class_", make_descriptor(Log::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "wrapfn_", make_descriptor(t_Log::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log::initializeClass, 1)))
            return NULL;
          return t_Log::wrap_Object(Log(((t_Log *) arg)->object.this$));
        }
        static PyObject *t_Log_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log_init_(t_Log *self, PyObject *args, PyObject *kwds)
        {
          Log object((jobject) NULL);

          INT_CALL(object = Log());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log_value(t_Log *self, PyObject *args)
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
#include "org/hipparchus/optim/InitialGuess.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *InitialGuess::class$ = NULL;
      jmethodID *InitialGuess::mids$ = NULL;
      bool InitialGuess::live$ = false;

      jclass InitialGuess::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/InitialGuess");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_getInitialGuess_60c7040667a7dc5c] = env->getMethodID(cls, "getInitialGuess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InitialGuess::InitialGuess(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      JArray< jdouble > InitialGuess::getInitialGuess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialGuess_60c7040667a7dc5c]));
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
      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self);
      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data);
      static PyGetSetDef t_InitialGuess__fields_[] = {
        DECLARE_GET_FIELD(t_InitialGuess, initialGuess),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InitialGuess__methods_[] = {
        DECLARE_METHOD(t_InitialGuess, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, getInitialGuess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InitialGuess)[] = {
        { Py_tp_methods, t_InitialGuess__methods_ },
        { Py_tp_init, (void *) t_InitialGuess_init_ },
        { Py_tp_getset, t_InitialGuess__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InitialGuess)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InitialGuess, t_InitialGuess, InitialGuess);

      void t_InitialGuess::install(PyObject *module)
      {
        installType(&PY_TYPE(InitialGuess), &PY_TYPE_DEF(InitialGuess), module, "InitialGuess", 0);
      }

      void t_InitialGuess::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "class_", make_descriptor(InitialGuess::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "wrapfn_", make_descriptor(t_InitialGuess::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InitialGuess::initializeClass, 1)))
          return NULL;
        return t_InitialGuess::wrap_Object(InitialGuess(((t_InitialGuess *) arg)->object.this$));
      }
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InitialGuess::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        InitialGuess object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = InitialGuess(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialGuess());
        return result.wrap();
      }

      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialGuess());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/BigReal.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigReal::class$ = NULL;
      jmethodID *BigReal::mids$ = NULL;
      bool BigReal::live$ = false;
      BigReal *BigReal::ONE = NULL;
      BigReal *BigReal::ZERO = NULL;

      jclass BigReal::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigReal");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3534e8e092c162a5] = env->getMethodID(cls, "<init>", "([C)V");
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_44aecef33af91018] = env->getMethodID(cls, "<init>", "([CII)V");
          mids$[mid_add_2d1826a69b67e3b0] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_compareTo_1ce8cbfef64aaf0d] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/BigReal;)I");
          mids$[mid_divide_2d1826a69b67e3b0] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_doubleValue_dff5885c2c873297] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getScale_570ce0828f81a2c1] = env->getMethodID(cls, "getScale", "()I");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_multiply_2d1826a69b67e3b0] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_multiply_cd8e4f68673673f2] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/BigReal;");
          mids$[mid_negate_fd9d6080c6f729de] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_reciprocal_fd9d6080c6f729de] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_setScale_99803b0791f320ff] = env->getMethodID(cls, "setScale", "(I)V");
          mids$[mid_subtract_2d1826a69b67e3b0] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ONE = new BigReal(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/BigReal;"));
          ZERO = new BigReal(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/BigReal;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigReal::BigReal(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3534e8e092c162a5, a0.this$)) {}

      BigReal::BigReal(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      BigReal::BigReal(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      BigReal::BigReal(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      BigReal::BigReal(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      BigReal::BigReal(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44aecef33af91018, a0.this$, a1, a2)) {}

      BigReal BigReal::add(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_add_2d1826a69b67e3b0], a0.this$));
      }

      jint BigReal::compareTo(const BigReal & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_1ce8cbfef64aaf0d], a0.this$);
      }

      BigReal BigReal::divide(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_divide_2d1826a69b67e3b0], a0.this$));
      }

      jdouble BigReal::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_dff5885c2c873297]);
      }

      jboolean BigReal::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      ::org::hipparchus::Field BigReal::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      jdouble BigReal::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      jint BigReal::getScale() const
      {
        return env->callIntMethod(this$, mids$[mid_getScale_570ce0828f81a2c1]);
      }

      jint BigReal::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      BigReal BigReal::multiply(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_2d1826a69b67e3b0], a0.this$));
      }

      BigReal BigReal::multiply(jint a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_cd8e4f68673673f2], a0));
      }

      BigReal BigReal::negate() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_negate_fd9d6080c6f729de]));
      }

      BigReal BigReal::reciprocal() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_reciprocal_fd9d6080c6f729de]));
      }

      void BigReal::setScale(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_99803b0791f320ff], a0);
      }

      BigReal BigReal::subtract(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_subtract_2d1826a69b67e3b0], a0.this$));
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
      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_doubleValue(t_BigReal *self);
      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_getField(t_BigReal *self);
      static PyObject *t_BigReal_getReal(t_BigReal *self);
      static PyObject *t_BigReal_getScale(t_BigReal *self);
      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_negate(t_BigReal *self);
      static PyObject *t_BigReal_reciprocal(t_BigReal *self);
      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data);
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data);
      static PyGetSetDef t_BigReal__fields_[] = {
        DECLARE_GET_FIELD(t_BigReal, field),
        DECLARE_GET_FIELD(t_BigReal, real),
        DECLARE_GETSET_FIELD(t_BigReal, scale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigReal__methods_[] = {
        DECLARE_METHOD(t_BigReal, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, add, METH_O),
        DECLARE_METHOD(t_BigReal, compareTo, METH_O),
        DECLARE_METHOD(t_BigReal, divide, METH_O),
        DECLARE_METHOD(t_BigReal, doubleValue, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getScale, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, setScale, METH_O),
        DECLARE_METHOD(t_BigReal, subtract, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigReal)[] = {
        { Py_tp_methods, t_BigReal__methods_ },
        { Py_tp_init, (void *) t_BigReal_init_ },
        { Py_tp_getset, t_BigReal__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigReal)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigReal, t_BigReal, BigReal);

      void t_BigReal::install(PyObject *module)
      {
        installType(&PY_TYPE(BigReal), &PY_TYPE_DEF(BigReal), module, "BigReal", 0);
      }

      void t_BigReal::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "class_", make_descriptor(BigReal::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "wrapfn_", make_descriptor(t_BigReal::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigReal::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ONE", make_descriptor(t_BigReal::wrap_Object(*BigReal::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ZERO", make_descriptor(t_BigReal::wrap_Object(*BigReal::ZERO)));
      }

      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigReal::initializeClass, 1)))
          return NULL;
        return t_BigReal::wrap_Object(BigReal(((t_BigReal *) arg)->object.this$));
      }
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigReal::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jchar > a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[C", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jchar > a0((jobject) NULL);
            jint a1;
            jint a2;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[CII", &a0, &a1, &a2))
            {
              INT_CALL(object = BigReal(a0, a1, a2));
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

      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.divide(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "divide", arg);
        return NULL;
      }

      static PyObject *t_BigReal_doubleValue(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigReal_getField(t_BigReal *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigReal_getReal(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_getScale(t_BigReal *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getScale());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigReal a0((jobject) NULL);
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "k", BigReal::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigReal_negate(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_reciprocal(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getScale());
        return PyLong_FromLong((long) value);
      }
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_6638e756ca12feb3] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_7affef18db7eac0d] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_30c302776f14885b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6638e756ca12feb3, a0, a1.this$)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7affef18db7eac0d, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_3d53ef1ca7ad5f8c]));
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
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator, t_TimeStampedAngularCoordinatesHermiteInterpolator, TimeStampedAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedAngularCoordinatesHermiteInterpolator), module, "TimeStampedAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedAngularCoordinatesHermiteInterpolator(((t_TimeStampedAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
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

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SmoothedObservationDataSet::class$ = NULL;
          jmethodID *SmoothedObservationDataSet::mids$ = NULL;
          bool SmoothedObservationDataSet::live$ = false;

          jclass SmoothedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_486b2cad7a6de1a0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getDataSet_34eee2d151204867] = env->getMethodID(cls, "getDataSet", "()Lorg/orekit/files/rinex/observation/ObservationDataSet;");
              mids$[mid_getSmoothedData_46645d31b9bde460] = env->getMethodID(cls, "getSmoothedData", "()Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SmoothedObservationDataSet::SmoothedObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationDataSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_486b2cad7a6de1a0, a0.this$, a1.this$)) {}

          ::org::orekit::files::rinex::observation::ObservationDataSet SmoothedObservationDataSet::getDataSet() const
          {
            return ::org::orekit::files::rinex::observation::ObservationDataSet(env->callObjectMethod(this$, mids$[mid_getDataSet_34eee2d151204867]));
          }

          ::org::orekit::files::rinex::observation::ObservationData SmoothedObservationDataSet::getSmoothedData() const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_getSmoothedData_46645d31b9bde460]));
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
        namespace filtering {
          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self);
          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data);
          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data);
          static PyGetSetDef t_SmoothedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, dataSet),
            DECLARE_GET_FIELD(t_SmoothedObservationDataSet, smoothedData),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SmoothedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_SmoothedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getDataSet, METH_NOARGS),
            DECLARE_METHOD(t_SmoothedObservationDataSet, getSmoothedData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SmoothedObservationDataSet)[] = {
            { Py_tp_methods, t_SmoothedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_SmoothedObservationDataSet_init_ },
            { Py_tp_getset, t_SmoothedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SmoothedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SmoothedObservationDataSet, t_SmoothedObservationDataSet, SmoothedObservationDataSet);

          void t_SmoothedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SmoothedObservationDataSet), &PY_TYPE_DEF(SmoothedObservationDataSet), module, "SmoothedObservationDataSet", 0);
          }

          void t_SmoothedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "class_", make_descriptor(SmoothedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "wrapfn_", make_descriptor(t_SmoothedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SmoothedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SmoothedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_SmoothedObservationDataSet::wrap_Object(SmoothedObservationDataSet(((t_SmoothedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_SmoothedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SmoothedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SmoothedObservationDataSet_init_(t_SmoothedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationDataSet a1((jobject) NULL);
            SmoothedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SmoothedObservationDataSet(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SmoothedObservationDataSet_getDataSet(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_getSmoothedData(t_SmoothedObservationDataSet *self)
          {
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
          }

          static PyObject *t_SmoothedObservationDataSet_get__dataSet(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataSet());
            return ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(value);
          }

          static PyObject *t_SmoothedObservationDataSet_get__smoothedData(t_SmoothedObservationDataSet *self, void *data)
          {
            ::org::orekit::files::rinex::observation::ObservationData value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedData());
            return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonBatchLSObserver.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonBatchLSObserver::class$ = NULL;
        jmethodID *PythonBatchLSObserver::mids$ = NULL;
        bool PythonBatchLSObserver::live$ = false;

        jclass PythonBatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonBatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_1c346acaad15e94a] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonBatchLSObserver::PythonBatchLSObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonBatchLSObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonBatchLSObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonBatchLSObserver::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace leastsquares {
        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self);
        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args);
        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7);
        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data);
        static PyGetSetDef t_PythonBatchLSObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonBatchLSObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonBatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_PythonBatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonBatchLSObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonBatchLSObserver)[] = {
          { Py_tp_methods, t_PythonBatchLSObserver__methods_ },
          { Py_tp_init, (void *) t_PythonBatchLSObserver_init_ },
          { Py_tp_getset, t_PythonBatchLSObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonBatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonBatchLSObserver, t_PythonBatchLSObserver, PythonBatchLSObserver);

        void t_PythonBatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonBatchLSObserver), &PY_TYPE_DEF(PythonBatchLSObserver), module, "PythonBatchLSObserver", 1);
        }

        void t_PythonBatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "class_", make_descriptor(PythonBatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "wrapfn_", make_descriptor(t_PythonBatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonBatchLSObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V", (void *) t_PythonBatchLSObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonBatchLSObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonBatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_PythonBatchLSObserver::wrap_Object(PythonBatchLSObserver(((t_PythonBatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonBatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonBatchLSObserver object((jobject) NULL);

          INT_CALL(object = PythonBatchLSObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args)
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

        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::orbits::t_Orbit::wrap_jobject);
          PyObject *o3 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a3));
          PyObject *o4 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a4));
          PyObject *o5 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a5));
          PyObject *o6 = ::org::orekit::estimation::measurements::t_EstimationsProvider::wrap_Object(::org::orekit::estimation::measurements::EstimationsProvider(a6));
          PyObject *o7 = ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(a7));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "iiOOOOOO", (int) a0, (int) a1, o2, o3, o4, o5, o6, o7);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          Py_DECREF(o6);
          Py_DECREF(o7);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data)
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
          mids$[mid_init$_0613af62f2ba5dba] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DirectoryCrawler::DirectoryCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0613af62f2ba5dba, a0.this$)) {}
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
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory::class$ = NULL;
        jmethodID *DSFactory::mids$ = NULL;
        bool DSFactory::live$ = false;

        jclass DSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_build_b45548a69087af0a] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_constant_b3ed376bfd09e93b] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getCompiler_ae6f9f9cc48aac48] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_6a64b248da400b8f] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/DSFactory$DSField;");
            mids$[mid_variable_b75c7fa4df018e3b] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSFactory::DSFactory(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_b45548a69087af0a], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_b3ed376bfd09e93b], a0));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler DSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_ae6f9f9cc48aac48]));
        }

        ::org::hipparchus::analysis::differentiation::DSFactory$DSField DSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory$DSField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_6a64b248da400b8f]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_b75c7fa4df018e3b], a0, a1));
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
        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg);
        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self);
        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self);
        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args);
        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data);
        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data);
        static PyGetSetDef t_DSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory, compiler),
          DECLARE_GET_FIELD(t_DSFactory, derivativeField),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory__methods_[] = {
          DECLARE_METHOD(t_DSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory, build, METH_O),
          DECLARE_METHOD(t_DSFactory, constant, METH_O),
          DECLARE_METHOD(t_DSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory)[] = {
          { Py_tp_methods, t_DSFactory__methods_ },
          { Py_tp_init, (void *) t_DSFactory_init_ },
          { Py_tp_getset, t_DSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory, t_DSFactory, DSFactory);

        void t_DSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory), &PY_TYPE_DEF(DSFactory), module, "DSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "DSField", make_descriptor(&PY_TYPE_DEF(DSFactory$DSField)));
        }

        void t_DSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "class_", make_descriptor(DSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "wrapfn_", make_descriptor(t_DSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory::initializeClass, 1)))
            return NULL;
          return t_DSFactory::wrap_Object(DSFactory(((t_DSFactory *) arg)->object.this$));
        }
        static PyObject *t_DSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSFactory_init_(t_DSFactory *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          DSFactory object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = DSFactory(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DSFactory_build(t_DSFactory *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.build(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "build", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_constant(t_DSFactory *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DSFactory_getCompiler(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_DSFactory_getDerivativeField(t_DSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(result);
        }

        static PyObject *t_DSFactory_variable(t_DSFactory *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.variable(a0, a1));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }

        static PyObject *t_DSFactory_get__compiler(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_DSFactory_get__derivativeField(t_DSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory$DSField::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmCommonMetadata::class$ = NULL;
            jmethodID *OdmCommonMetadata::mids$ = NULL;
            bool OdmCommonMetadata::live$ = false;

            jclass OdmCommonMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalizeMetadata_279465702b09ae7f] = env->getMethodID(cls, "finalizeMetadata", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getCenter_23d31d5db0bee8e9] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getFrameEpoch_85703d13e302437e] = env->getMethodID(cls, "getFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLaunchNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_11b109bd155ca898] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_11b109bd155ca898] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCenter_32e120c3a0353f27] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setFrameEpoch_600a2a61652bc473] = env->getMethodID(cls, "setFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setFrameEpochString_d0bc48d5b00dc40c] = env->getMethodID(cls, "setFrameEpochString", "(Ljava/lang/String;)V");
                mids$[mid_setObjectID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmCommonMetadata::OdmCommonMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void OdmCommonMetadata::finalizeMetadata(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_finalizeMetadata_279465702b09ae7f], a0.this$);
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade OdmCommonMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_23d31d5db0bee8e9]));
            }

            ::org::orekit::frames::Frame OdmCommonMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
            }

            ::org::orekit::time::AbsoluteDate OdmCommonMetadata::getFrameEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFrameEpoch_85703d13e302437e]));
            }

            jint OdmCommonMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_570ce0828f81a2c1]);
            }

            ::java::lang::String OdmCommonMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_11b109bd155ca898]));
            }

            jint OdmCommonMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_570ce0828f81a2c1]);
            }

            ::java::lang::String OdmCommonMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade OdmCommonMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_5d5dd95b04037824]));
            }

            void OdmCommonMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_32e120c3a0353f27], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpoch_600a2a61652bc473], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpochString(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpochString_d0bc48d5b00dc40c], a0.this$);
            }

            void OdmCommonMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_d0bc48d5b00dc40c], a0.this$);
            }

            void OdmCommonMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_849bc9e3b38b9bcb], a0.this$);
            }

            void OdmCommonMetadata::validate(jdouble a0) const
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
          namespace odm {
            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self);
            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg);
            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args);
            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data);
            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data);
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_OdmCommonMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, center),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, frame),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, frameEpoch),
              DECLARE_SET_FIELD(t_OdmCommonMetadata, frameEpochString),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchNumber),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchPiece),
              DECLARE_GET_FIELD(t_OdmCommonMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, objectID),
              DECLARE_GETSET_FIELD(t_OdmCommonMetadata, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmCommonMetadata__methods_[] = {
              DECLARE_METHOD(t_OdmCommonMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmCommonMetadata, finalizeMetadata, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getFrameEpoch, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_OdmCommonMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpoch, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setFrameEpochString, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_OdmCommonMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmCommonMetadata)[] = {
              { Py_tp_methods, t_OdmCommonMetadata__methods_ },
              { Py_tp_init, (void *) t_OdmCommonMetadata_init_ },
              { Py_tp_getset, t_OdmCommonMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmCommonMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmMetadata),
              NULL
            };

            DEFINE_TYPE(OdmCommonMetadata, t_OdmCommonMetadata, OdmCommonMetadata);

            void t_OdmCommonMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmCommonMetadata), &PY_TYPE_DEF(OdmCommonMetadata), module, "OdmCommonMetadata", 0);
            }

            void t_OdmCommonMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "class_", make_descriptor(OdmCommonMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "wrapfn_", make_descriptor(t_OdmCommonMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmCommonMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmCommonMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmCommonMetadata::initializeClass, 1)))
                return NULL;
              return t_OdmCommonMetadata::wrap_Object(OdmCommonMetadata(((t_OdmCommonMetadata *) arg)->object.this$));
            }
            static PyObject *t_OdmCommonMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmCommonMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmCommonMetadata_init_(t_OdmCommonMetadata *self, PyObject *args, PyObject *kwds)
            {
              OdmCommonMetadata object((jobject) NULL);

              INT_CALL(object = OdmCommonMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_OdmCommonMetadata_finalizeMetadata(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.finalizeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "finalizeMetadata", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_getCenter(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getFrameEpoch(t_OdmCommonMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchNumber(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchPiece(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getLaunchYear(t_OdmCommonMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_OdmCommonMetadata_getObjectID(t_OdmCommonMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_OdmCommonMetadata_getReferenceFrame(t_OdmCommonMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_OdmCommonMetadata_setCenter(t_OdmCommonMetadata *self, PyObject *arg)
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

            static PyObject *t_OdmCommonMetadata_setFrameEpoch(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpoch", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setFrameEpochString(t_OdmCommonMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setFrameEpochString(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameEpochString", arg);
              return NULL;
            }

            static PyObject *t_OdmCommonMetadata_setObjectID(t_OdmCommonMetadata *self, PyObject *arg)
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

            static PyObject *t_OdmCommonMetadata_setReferenceFrame(t_OdmCommonMetadata *self, PyObject *arg)
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

            static PyObject *t_OdmCommonMetadata_validate(t_OdmCommonMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(OdmCommonMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_OdmCommonMetadata_get__center(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__center(t_OdmCommonMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_OdmCommonMetadata_get__frame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_OdmCommonMetadata_get__frameEpoch(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__frameEpoch(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpoch", arg);
              return -1;
            }

            static int t_OdmCommonMetadata_set__frameEpochString(t_OdmCommonMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setFrameEpochString(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameEpochString", arg);
              return -1;
            }

            static PyObject *t_OdmCommonMetadata_get__launchNumber(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchPiece(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_OdmCommonMetadata_get__launchYear(t_OdmCommonMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_OdmCommonMetadata_get__objectID(t_OdmCommonMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_OdmCommonMetadata_set__objectID(t_OdmCommonMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_OdmCommonMetadata_get__referenceFrame(t_OdmCommonMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_OdmCommonMetadata_set__referenceFrame(t_OdmCommonMetadata *self, PyObject *arg, void *data)
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
#include "org/orekit/propagation/events/DateDetector.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *DateDetector::class$ = NULL;
        jmethodID *DateDetector::mids$ = NULL;
        bool DateDetector::live$ = false;
        jdouble DateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble DateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble DateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass DateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/DateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ed188f35a6b77a71] = env->getMethodID(cls, "<init>", "([Lorg/orekit/time/TimeStamped;)V");
            mids$[mid_addEventDate_600a2a61652bc473] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDates_2afa36052df4765d] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_b17263d5227b3c7a] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/DateDetector;");
            mids$[mid_create_b894a60d70854e2d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/DateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DateDetector::DateDetector(const JArray< ::org::orekit::time::TimeStamped > & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ed188f35a6b77a71, a0.this$)) {}

        void DateDetector::addEventDate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_600a2a61652bc473], a0.this$);
        }

        jdouble DateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate DateDetector::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        ::java::util::List DateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_2afa36052df4765d]));
        }

        DateDetector DateDetector::withMinGap(jdouble a0) const
        {
          return DateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_b17263d5227b3c7a], a0));
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
        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args);
        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args);
        static PyObject *t_DateDetector_getDate(t_DateDetector *self);
        static PyObject *t_DateDetector_getDates(t_DateDetector *self);
        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg);
        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data);
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data);
        static PyGetSetDef t_DateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_DateDetector, date),
          DECLARE_GET_FIELD(t_DateDetector, dates),
          DECLARE_GET_FIELD(t_DateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DateDetector__methods_[] = {
          DECLARE_METHOD(t_DateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_DateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_DateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_DateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DateDetector)[] = {
          { Py_tp_methods, t_DateDetector__methods_ },
          { Py_tp_init, (void *) t_DateDetector_init_ },
          { Py_tp_getset, t_DateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(DateDetector, t_DateDetector, DateDetector);
        PyObject *t_DateDetector::wrap_Object(const DateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DateDetector *self = (t_DateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(DateDetector), &PY_TYPE_DEF(DateDetector), module, "DateDetector", 0);
        }

        void t_DateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "class_", make_descriptor(DateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "wrapfn_", make_descriptor(t_DateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(DateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MAX_CHECK", make_descriptor(DateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_MIN_GAP", make_descriptor(DateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DateDetector), "DEFAULT_THRESHOLD", make_descriptor(DateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_DateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DateDetector::initializeClass, 1)))
            return NULL;
          return t_DateDetector::wrap_Object(DateDetector(((t_DateDetector *) arg)->object.this$));
        }
        static PyObject *t_DateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DateDetector_of_(t_DateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DateDetector_init_(t_DateDetector *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::time::TimeStamped > a0((jobject) NULL);
          DateDetector object((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
          {
            INT_CALL(object = DateDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(DateDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DateDetector_addEventDate(t_DateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_DateDetector_g(t_DateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(DateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_DateDetector_getDate(t_DateDetector *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_DateDetector_getDates(t_DateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(TimeStamped));
        }

        static PyObject *t_DateDetector_withMinGap(t_DateDetector *self, PyObject *arg)
        {
          jdouble a0;
          DateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_DateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_DateDetector_get__parameters_(t_DateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DateDetector_get__date(t_DateDetector *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_DateDetector_get__dates(t_DateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplex::class$ = NULL;
      jmethodID *FieldComplex::mids$ = NULL;
      bool FieldComplex::live$ = false;

      jclass FieldComplex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_eee0c82b0b9e16e9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_ded2d2c0c0e6239b] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acos_ded2d2c0c0e6239b] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acosh_ded2d2c0c0e6239b] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_324fe1e1d007a3ed] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_a8926203d14b7285] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_0fdc8273a3ea131a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asin_ded2d2c0c0e6239b] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asinh_ded2d2c0c0e6239b] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan_ded2d2c0c0e6239b] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan2_324fe1e1d007a3ed] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atanh_ded2d2c0c0e6239b] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cbrt_ded2d2c0c0e6239b] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_ceil_ded2d2c0c0e6239b] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_conjugate_ded2d2c0c0e6239b] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_324fe1e1d007a3ed] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_a8926203d14b7285] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cos_ded2d2c0c0e6239b] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cosh_ded2d2c0c0e6239b] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_324fe1e1d007a3ed] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_a8926203d14b7285] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_0fdc8273a3ea131a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_c16a8a172db0f73a] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Z");
          mids$[mid_equals_8abeff55a0e6dbc9] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_equals_3e7de8f12a60d0ee] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_8abeff55a0e6dbc9] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_exp_ded2d2c0c0e6239b] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_expm1_ded2d2c0c0e6239b] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_floor_ded2d2c0c0e6239b] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getArgument_eba8e72a22c984ac] = env->getMethodID(cls, "getArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getField_1049802935714576] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getI_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getImaginary_eba8e72a22c984ac] = env->getMethodID(cls, "getImaginary", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getImaginaryPart_eba8e72a22c984ac] = env->getMethodID(cls, "getImaginaryPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInf_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getInf", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusI_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusOne_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getMinusOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getNaN_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getOne_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPartsField_5b28be2d3632a5dc] = env->getMethodID(cls, "getPartsField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_ded2d2c0c0e6239b] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPi_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getPi", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_eba8e72a22c984ac] = env->getMethodID(cls, "getRealPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_955e8640c0b9aae1] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_324fe1e1d007a3ed] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_b108b35ef48e27bd] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_b108b35ef48e27bd] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_b108b35ef48e27bd] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_1a8b1694a8402932] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_8ee5dcdb698c9396] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_1d93f54300c6f636] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_1f034019e958281e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_458635edd0acc93d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_3aab3d9e49980110] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_d98a8f9cc79cd55c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_76a8958b43b68094] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log_ded2d2c0c0e6239b] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log10_ded2d2c0c0e6239b] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log1p_ded2d2c0c0e6239b] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_324fe1e1d007a3ed] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_a8926203d14b7285] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_4bf8b68306ca9f59] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_0fdc8273a3ea131a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyMinusI_ded2d2c0c0e6239b] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyPlusI_ded2d2c0c0e6239b] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_negate_ded2d2c0c0e6239b] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_newInstance_a8926203d14b7285] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_nthRoot_9c3e1c79a080a476] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_324fe1e1d007a3ed] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_a8926203d14b7285] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_4bf8b68306ca9f59] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_0fdc8273a3ea131a] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_reciprocal_ded2d2c0c0e6239b] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_324fe1e1d007a3ed] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_a8926203d14b7285] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rint_ded2d2c0c0e6239b] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rootN_4bf8b68306ca9f59] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_scalb_4bf8b68306ca9f59] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sign_ded2d2c0c0e6239b] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sin_ded2d2c0c0e6239b] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_ded2d2c0c0e6239b] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_ded2d2c0c0e6239b] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sqrt1z_ded2d2c0c0e6239b] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_324fe1e1d007a3ed] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_a8926203d14b7285] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_0fdc8273a3ea131a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tan_ded2d2c0c0e6239b] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tanh_ded2d2c0c0e6239b] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toDegrees_ded2d2c0c0e6239b] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toRadians_ded2d2c0c0e6239b] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_ded2d2c0c0e6239b] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_0fdc8273a3ea131a] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_7eb6ea04df70146c] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_createComplex_7eb6ea04df70146c] = env->getMethodID(cls, "createComplex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eee0c82b0b9e16e9, a0.this$, a1.this$)) {}

      FieldComplex FieldComplex::abs() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_abs_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::acos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acos_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::acosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acosh_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::add(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::add(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_a8926203d14b7285], a0));
      }

      FieldComplex FieldComplex::add(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_0fdc8273a3ea131a], a0.this$));
      }

      FieldComplex FieldComplex::asin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asin_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::asinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asinh_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::atan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::atan2(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan2_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::atanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atanh_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::cbrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cbrt_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::ceil() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ceil_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::conjugate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_conjugate_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::copySign(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::copySign(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_a8926203d14b7285], a0));
      }

      FieldComplex FieldComplex::cos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cos_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::cosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cosh_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::divide(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::divide(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_a8926203d14b7285], a0));
      }

      FieldComplex FieldComplex::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_0fdc8273a3ea131a], a0.this$));
      }

      jboolean FieldComplex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_c16a8a172db0f73a], a0.this$, a1.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_8abeff55a0e6dbc9], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3e7de8f12a60d0ee], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equalsWithRelativeTolerance(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_8abeff55a0e6dbc9], a0.this$, a1.this$, a2);
      }

      FieldComplex FieldComplex::exp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_exp_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::expm1() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_expm1_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::floor() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_floor_ded2d2c0c0e6239b]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getArgument_eba8e72a22c984ac]));
      }

      ::org::hipparchus::complex::FieldComplexField FieldComplex::getField() const
      {
        return ::org::hipparchus::complex::FieldComplexField(env->callObjectMethod(this$, mids$[mid_getField_1049802935714576]));
      }

      FieldComplex FieldComplex::getI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getI_955e8640c0b9aae1], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginary() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginary_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginaryPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginaryPart_eba8e72a22c984ac]));
      }

      FieldComplex FieldComplex::getInf(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getInf_955e8640c0b9aae1], a0.this$));
      }

      FieldComplex FieldComplex::getMinusI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_955e8640c0b9aae1], a0.this$));
      }

      FieldComplex FieldComplex::getMinusOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusOne_955e8640c0b9aae1], a0.this$));
      }

      FieldComplex FieldComplex::getNaN(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getNaN_955e8640c0b9aae1], a0.this$));
      }

      FieldComplex FieldComplex::getOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getOne_955e8640c0b9aae1], a0.this$));
      }

      ::org::hipparchus::Field FieldComplex::getPartsField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getPartsField_5b28be2d3632a5dc]));
      }

      FieldComplex FieldComplex::getPi() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_getPi_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::getPi(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getPi_955e8640c0b9aae1], a0.this$));
      }

      jdouble FieldComplex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getRealPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRealPart_eba8e72a22c984ac]));
      }

      FieldComplex FieldComplex::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getZero_955e8640c0b9aae1], a0.this$));
      }

      jint FieldComplex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      FieldComplex FieldComplex::hypot(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_hypot_324fe1e1d007a3ed], a0.this$));
      }

      jboolean FieldComplex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      jboolean FieldComplex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_b108b35ef48e27bd]);
      }

      jboolean FieldComplex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
      }

      jboolean FieldComplex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_b108b35ef48e27bd]);
      }

      jboolean FieldComplex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_b108b35ef48e27bd]);
      }

      FieldComplex FieldComplex::linearCombination(const JArray< jdouble > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_1a8b1694a8402932], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const JArray< FieldComplex > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_8ee5dcdb698c9396], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_1d93f54300c6f636], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_1f034019e958281e], a0, a1.this$, a2, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_458635edd0acc93d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_3aab3d9e49980110], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5, const FieldComplex & a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_d98a8f9cc79cd55c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5, jdouble a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_76a8958b43b68094], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldComplex FieldComplex::log() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::log10() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log10_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::log1p() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log1p_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::multiply(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::multiply(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_a8926203d14b7285], a0));
      }

      FieldComplex FieldComplex::multiply(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_4bf8b68306ca9f59], a0));
      }

      FieldComplex FieldComplex::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_0fdc8273a3ea131a], a0.this$));
      }

      FieldComplex FieldComplex::multiplyMinusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::multiplyPlusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::negate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_negate_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::newInstance(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_newInstance_a8926203d14b7285], a0));
      }

      ::java::util::List FieldComplex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_9c3e1c79a080a476], a0));
      }

      FieldComplex FieldComplex::pow(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::pow(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_a8926203d14b7285], a0));
      }

      FieldComplex FieldComplex::pow(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_4bf8b68306ca9f59], a0));
      }

      FieldComplex FieldComplex::pow(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_0fdc8273a3ea131a], a0.this$));
      }

      FieldComplex FieldComplex::reciprocal() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_reciprocal_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::remainder(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::remainder(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_a8926203d14b7285], a0));
      }

      FieldComplex FieldComplex::rint() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rint_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::rootN(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rootN_4bf8b68306ca9f59], a0));
      }

      FieldComplex FieldComplex::scalb(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_scalb_4bf8b68306ca9f59], a0));
      }

      FieldComplex FieldComplex::sign() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sign_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::sin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sin_ded2d2c0c0e6239b]));
      }

      ::org::hipparchus::util::FieldSinCos FieldComplex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
      }

      FieldComplex FieldComplex::sinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sinh_ded2d2c0c0e6239b]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldComplex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
      }

      FieldComplex FieldComplex::sqrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::sqrt1z() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt1z_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::subtract(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_324fe1e1d007a3ed], a0.this$));
      }

      FieldComplex FieldComplex::subtract(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_a8926203d14b7285], a0));
      }

      FieldComplex FieldComplex::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_0fdc8273a3ea131a], a0.this$));
      }

      FieldComplex FieldComplex::tan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tan_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::tanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tanh_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::toDegrees() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toDegrees_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::toRadians() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toRadians_ded2d2c0c0e6239b]));
      }

      ::java::lang::String FieldComplex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      FieldComplex FieldComplex::ulp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ulp_ded2d2c0c0e6239b]));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0fdc8273a3ea131a], a0.this$));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7eb6ea04df70146c], a0.this$, a1.this$));
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
      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args);
      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplex_abs(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_asin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self);
      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_cos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_exp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self);
      static PyObject *t_FieldComplex_floor(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self);
      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_log(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log10(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_negate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_rint(t_FieldComplex *self);
      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_sign(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self);
      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_tan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data);
      static PyGetSetDef t_FieldComplex__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplex, argument),
        DECLARE_GET_FIELD(t_FieldComplex, field),
        DECLARE_GET_FIELD(t_FieldComplex, imaginary),
        DECLARE_GET_FIELD(t_FieldComplex, imaginaryPart),
        DECLARE_GET_FIELD(t_FieldComplex, infinite),
        DECLARE_GET_FIELD(t_FieldComplex, mathematicalInteger),
        DECLARE_GET_FIELD(t_FieldComplex, naN),
        DECLARE_GET_FIELD(t_FieldComplex, partsField),
        DECLARE_GET_FIELD(t_FieldComplex, pi),
        DECLARE_GET_FIELD(t_FieldComplex, real),
        DECLARE_GET_FIELD(t_FieldComplex, realPart),
        DECLARE_GET_FIELD(t_FieldComplex, zero),
        DECLARE_GET_FIELD(t_FieldComplex, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplex__methods_[] = {
        DECLARE_METHOD(t_FieldComplex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan2, METH_O),
        DECLARE_METHOD(t_FieldComplex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getInf, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getPartsField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, hypot, METH_O),
        DECLARE_METHOD(t_FieldComplex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, newInstance, METH_O),
        DECLARE_METHOD(t_FieldComplex, nthRoot, METH_O),
        DECLARE_METHOD(t_FieldComplex, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, rootN, METH_O),
        DECLARE_METHOD(t_FieldComplex, scalb, METH_O),
        DECLARE_METHOD(t_FieldComplex, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplex)[] = {
        { Py_tp_methods, t_FieldComplex__methods_ },
        { Py_tp_init, (void *) t_FieldComplex_init_ },
        { Py_tp_getset, t_FieldComplex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplex, t_FieldComplex, FieldComplex);
      PyObject *t_FieldComplex::wrap_Object(const FieldComplex& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplex::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplex::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplex), &PY_TYPE_DEF(FieldComplex), module, "FieldComplex", 0);
      }

      void t_FieldComplex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "class_", make_descriptor(FieldComplex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "wrapfn_", make_descriptor(t_FieldComplex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplex::initializeClass, 1)))
          return NULL;
        return t_FieldComplex::wrap_Object(FieldComplex(((t_FieldComplex *) arg)->object.this$));
      }
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0, a1));
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

      static PyObject *t_FieldComplex_abs(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_asin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_cos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "KK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "KKI", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_exp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_floor(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getField(t_FieldComplex *self)
      {
        ::org::hipparchus::complex::FieldComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginary());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getInf(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getInf", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getNaN(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getNaN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getPi(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPi_", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getZero(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldComplex > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex a6((jobject) NULL);
            PyTypeObject **p6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_, &a6, &p6, t_FieldComplex::parameters_, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_, &a6, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_log(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log10(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_negate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg)
      {
        jdouble a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_rint(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_sign(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_tan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0));
              return t_FieldComplex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0, a1));
              return t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginary());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data)
      {
        FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeStamped::class$ = NULL;
      jmethodID *PythonTimeStamped::mids$ = NULL;
      bool PythonTimeStamped::live$ = false;

      jclass PythonTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStamped::PythonTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeStamped::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self);
      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data);
      static PyGetSetDef t_PythonTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStamped, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStamped)[] = {
        { Py_tp_methods, t_PythonTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStamped_init_ },
        { Py_tp_getset, t_PythonTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStamped, t_PythonTimeStamped, PythonTimeStamped);

      void t_PythonTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStamped), &PY_TYPE_DEF(PythonTimeStamped), module, "PythonTimeStamped", 1);
      }

      void t_PythonTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "class_", make_descriptor(PythonTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "wrapfn_", make_descriptor(t_PythonTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStamped::wrap_Object(PythonTimeStamped(((t_PythonTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data)
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
#include "org/orekit/rugged/linesensor/SensorPixelCrossing.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixelCrossing::class$ = NULL;
        jmethodID *SensorPixelCrossing::mids$ = NULL;
        bool SensorPixelCrossing::live$ = false;

        jclass SensorPixelCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixelCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c85520b8b5986ef0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ID)V");
            mids$[mid_locatePixel_bf1d7732f1acb697] = env->getMethodID(cls, "locatePixel", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixelCrossing::SensorPixelCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c85520b8b5986ef0, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        jdouble SensorPixelCrossing::locatePixel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_locatePixel_bf1d7732f1acb697], a0.this$);
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
        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg);

        static PyMethodDef t_SensorPixelCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorPixelCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, locatePixel, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixelCrossing)[] = {
          { Py_tp_methods, t_SensorPixelCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorPixelCrossing_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixelCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixelCrossing, t_SensorPixelCrossing, SensorPixelCrossing);

        void t_SensorPixelCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixelCrossing), &PY_TYPE_DEF(SensorPixelCrossing), module, "SensorPixelCrossing", 0);
        }

        void t_SensorPixelCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "class_", make_descriptor(SensorPixelCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "wrapfn_", make_descriptor(t_SensorPixelCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixelCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorPixelCrossing::wrap_Object(SensorPixelCrossing(((t_SensorPixelCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixelCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jint a3;
          jdouble a4;
          SensorPixelCrossing object((jobject) NULL);

          if (!parseArgs(args, "kkkID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorPixelCrossing(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.locatePixel(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "locatePixel", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalProperties::class$ = NULL;
              jmethodID *OrbitPhysicalProperties::mids$ = NULL;
              bool OrbitPhysicalProperties::live$ = false;

              jclass OrbitPhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_600a2a61652bc473] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getAttitudeActuatorType_11b109bd155ca898] = env->getMethodID(cls, "getAttitudeActuatorType", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeControlAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAttitudeControlAccuracy", "()D");
                  mids$[mid_getAttitudeControlMode_11b109bd155ca898] = env->getMethodID(cls, "getAttitudeControlMode", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeKnowledgeAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAttitudeKnowledgeAccuracy", "()D");
                  mids$[mid_getAttitudePointingAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAttitudePointingAccuracy", "()D");
                  mids$[mid_getBolDv_dff5885c2c873297] = env->getMethodID(cls, "getBolDv", "()D");
                  mids$[mid_getBusModel_11b109bd155ca898] = env->getMethodID(cls, "getBusModel", "()Ljava/lang/String;");
                  mids$[mid_getDockedWith_2afa36052df4765d] = env->getMethodID(cls, "getDockedWith", "()Ljava/util/List;");
                  mids$[mid_getDragCoefficient_dff5885c2c873297] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDragConstantArea_dff5885c2c873297] = env->getMethodID(cls, "getDragConstantArea", "()D");
                  mids$[mid_getDragUncertainty_dff5885c2c873297] = env->getMethodID(cls, "getDragUncertainty", "()D");
                  mids$[mid_getDryMass_dff5885c2c873297] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_688b496048ff947b] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInitialWetMass_dff5885c2c873297] = env->getMethodID(cls, "getInitialWetMass", "()D");
                  mids$[mid_getManeuversFrequency_dff5885c2c873297] = env->getMethodID(cls, "getManeuversFrequency", "()D");
                  mids$[mid_getManeuversPerYear_dff5885c2c873297] = env->getMethodID(cls, "getManeuversPerYear", "()D");
                  mids$[mid_getManufacturer_11b109bd155ca898] = env->getMethodID(cls, "getManufacturer", "()Ljava/lang/String;");
                  mids$[mid_getMaxAreaForCollisionProbability_dff5885c2c873297] = env->getMethodID(cls, "getMaxAreaForCollisionProbability", "()D");
                  mids$[mid_getMaxThrust_dff5885c2c873297] = env->getMethodID(cls, "getMaxThrust", "()D");
                  mids$[mid_getMinAreaForCollisionProbability_dff5885c2c873297] = env->getMethodID(cls, "getMinAreaForCollisionProbability", "()D");
                  mids$[mid_getRemainingDv_dff5885c2c873297] = env->getMethodID(cls, "getRemainingDv", "()D");
                  mids$[mid_getSrpCoefficient_dff5885c2c873297] = env->getMethodID(cls, "getSrpCoefficient", "()D");
                  mids$[mid_getSrpConstantArea_dff5885c2c873297] = env->getMethodID(cls, "getSrpConstantArea", "()D");
                  mids$[mid_getSrpUncertainty_dff5885c2c873297] = env->getMethodID(cls, "getSrpUncertainty", "()D");
                  mids$[mid_getTypAreaForCollisionProbability_dff5885c2c873297] = env->getMethodID(cls, "getTypAreaForCollisionProbability", "()D");
                  mids$[mid_getWetMass_dff5885c2c873297] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setAttitudeActuatorType_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAttitudeActuatorType", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeControlAccuracy_17db3a65980d3441] = env->getMethodID(cls, "setAttitudeControlAccuracy", "(D)V");
                  mids$[mid_setAttitudeControlMode_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAttitudeControlMode", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeKnowledgeAccuracy_17db3a65980d3441] = env->getMethodID(cls, "setAttitudeKnowledgeAccuracy", "(D)V");
                  mids$[mid_setAttitudePointingAccuracy_17db3a65980d3441] = env->getMethodID(cls, "setAttitudePointingAccuracy", "(D)V");
                  mids$[mid_setBolDv_17db3a65980d3441] = env->getMethodID(cls, "setBolDv", "(D)V");
                  mids$[mid_setBusModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setBusModel", "(Ljava/lang/String;)V");
                  mids$[mid_setDockedWith_de3e021e7266b71e] = env->getMethodID(cls, "setDockedWith", "(Ljava/util/List;)V");
                  mids$[mid_setDragCoefficient_17db3a65980d3441] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDragConstantArea_17db3a65980d3441] = env->getMethodID(cls, "setDragConstantArea", "(D)V");
                  mids$[mid_setDragUncertainty_17db3a65980d3441] = env->getMethodID(cls, "setDragUncertainty", "(D)V");
                  mids$[mid_setDryMass_17db3a65980d3441] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_1506189166690b5e] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInitialWetMass_17db3a65980d3441] = env->getMethodID(cls, "setInitialWetMass", "(D)V");
                  mids$[mid_setManeuversFrequency_17db3a65980d3441] = env->getMethodID(cls, "setManeuversFrequency", "(D)V");
                  mids$[mid_setManufacturer_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManufacturer", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxAreaForCollisionProbability_17db3a65980d3441] = env->getMethodID(cls, "setMaxAreaForCollisionProbability", "(D)V");
                  mids$[mid_setMaxThrust_17db3a65980d3441] = env->getMethodID(cls, "setMaxThrust", "(D)V");
                  mids$[mid_setMinAreaForCollisionProbability_17db3a65980d3441] = env->getMethodID(cls, "setMinAreaForCollisionProbability", "(D)V");
                  mids$[mid_setRemainingDv_17db3a65980d3441] = env->getMethodID(cls, "setRemainingDv", "(D)V");
                  mids$[mid_setSrpCoefficient_17db3a65980d3441] = env->getMethodID(cls, "setSrpCoefficient", "(D)V");
                  mids$[mid_setSrpConstantArea_17db3a65980d3441] = env->getMethodID(cls, "setSrpConstantArea", "(D)V");
                  mids$[mid_setSrpUncertainty_17db3a65980d3441] = env->getMethodID(cls, "setSrpUncertainty", "(D)V");
                  mids$[mid_setTypAreaForCollisionProbability_17db3a65980d3441] = env->getMethodID(cls, "setTypAreaForCollisionProbability", "(D)V");
                  mids$[mid_setWetMass_17db3a65980d3441] = env->getMethodID(cls, "setWetMass", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitPhysicalProperties::OrbitPhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_600a2a61652bc473, a0.this$)) {}

              ::java::lang::String OrbitPhysicalProperties::getAttitudeActuatorType() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeActuatorType_11b109bd155ca898]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeControlAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeControlAccuracy_dff5885c2c873297]);
              }

              ::java::lang::String OrbitPhysicalProperties::getAttitudeControlMode() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeControlMode_11b109bd155ca898]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeKnowledgeAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeKnowledgeAccuracy_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getAttitudePointingAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudePointingAccuracy_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getBolDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBolDv_dff5885c2c873297]);
              }

              ::java::lang::String OrbitPhysicalProperties::getBusModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBusModel_11b109bd155ca898]));
              }

              ::java::util::List OrbitPhysicalProperties::getDockedWith() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDockedWith_2afa36052df4765d]));
              }

              jdouble OrbitPhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getDragConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragConstantArea_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getDragUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragUncertainty_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_dff5885c2c873297]);
              }

              ::org::hipparchus::linear::RealMatrix OrbitPhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_688b496048ff947b]));
              }

              jdouble OrbitPhysicalProperties::getInitialWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getInitialWetMass_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getManeuversFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversFrequency_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getManeuversPerYear() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversPerYear_dff5885c2c873297]);
              }

              ::java::lang::String OrbitPhysicalProperties::getManufacturer() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManufacturer_11b109bd155ca898]));
              }

              jdouble OrbitPhysicalProperties::getMaxAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxAreaForCollisionProbability_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getMaxThrust() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxThrust_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getMinAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinAreaForCollisionProbability_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getRemainingDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRemainingDv_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getSrpCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpCoefficient_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getSrpConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpConstantArea_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getSrpUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpUncertainty_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getTypAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTypAreaForCollisionProbability_dff5885c2c873297]);
              }

              jdouble OrbitPhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_dff5885c2c873297]);
              }

              void OrbitPhysicalProperties::setAttitudeActuatorType(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeActuatorType_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeControlAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlAccuracy_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setAttitudeControlMode(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlMode_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeKnowledgeAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeKnowledgeAccuracy_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setAttitudePointingAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudePointingAccuracy_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setBolDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBolDv_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setBusModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBusModel_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitPhysicalProperties::setDockedWith(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDockedWith_de3e021e7266b71e], a0.this$);
              }

              void OrbitPhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setDragConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragConstantArea_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setDragUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragUncertainty_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_1506189166690b5e], a0, a1, a2);
              }

              void OrbitPhysicalProperties::setInitialWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInitialWetMass_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setManeuversFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManeuversFrequency_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setManufacturer(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManufacturer_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitPhysicalProperties::setMaxAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxAreaForCollisionProbability_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setMaxThrust(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxThrust_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setMinAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinAreaForCollisionProbability_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setRemainingDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRemainingDv_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setSrpCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpCoefficient_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setSrpConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpConstantArea_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setSrpUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpUncertainty_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setTypAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTypAreaForCollisionProbability_17db3a65980d3441], a0);
              }

              void OrbitPhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_17db3a65980d3441], a0);
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
              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args);
              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitPhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeActuatorType),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlMode),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeKnowledgeAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudePointingAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, bolDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, busModel),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dockedWith),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, initialWetMass),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maneuversFrequency),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, maneuversPerYear),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, manufacturer),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxThrust),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, minAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, remainingDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, typAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeActuatorType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlMode, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeKnowledgeAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudePointingAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBolDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBusModel, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDockedWith, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInitialWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversFrequency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversPerYear, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManufacturer, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMinAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getRemainingDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getTypAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeActuatorType, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlMode, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeKnowledgeAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudePointingAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBolDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBusModel, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDockedWith, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInitialWetMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManeuversFrequency, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManufacturer, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxThrust, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMinAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setRemainingDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setTypAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setWetMass, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalProperties)[] = {
                { Py_tp_methods, t_OrbitPhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_OrbitPhysicalProperties_init_ },
                { Py_tp_getset, t_OrbitPhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalProperties, t_OrbitPhysicalProperties, OrbitPhysicalProperties);

              void t_OrbitPhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalProperties), &PY_TYPE_DEF(OrbitPhysicalProperties), module, "OrbitPhysicalProperties", 0);
              }

              void t_OrbitPhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "class_", make_descriptor(OrbitPhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "wrapfn_", make_descriptor(t_OrbitPhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalProperties::wrap_Object(OrbitPhysicalProperties(((t_OrbitPhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitPhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitPhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeActuatorType());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeControlMode());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBolDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getBusModel());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManufacturer());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeActuatorType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeActuatorType", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlMode(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlMode", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeKnowledgeAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeKnowledgeAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudePointingAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudePointingAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBolDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBolDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setBusModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBusModel", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDockedWith(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDockedWith", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setInitialWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInitialWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setManeuversFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManeuversFrequency", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManufacturer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManufacturer", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxThrust(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxThrust", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRemainingDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRemainingDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTypAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTypAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeActuatorType());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeActuatorType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeActuatorType", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeControlMode());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlMode(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlMode", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeKnowledgeAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeKnowledgeAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudePointingAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudePointingAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBolDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBolDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bolDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getBusModel());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setBusModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "busModel", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDockedWith(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dockedWith", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setInitialWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "initialWetMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setManeuversFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maneuversFrequency", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManufacturer());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManufacturer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manufacturer", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxThrust(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxThrust", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRemainingDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "remainingDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTypAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "typAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "java/util/AbstractMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractMap::class$ = NULL;
    jmethodID *AbstractMap::mids$ = NULL;
    bool AbstractMap::live$ = false;

    jclass AbstractMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_65c7d273e80d497a] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_65c7d273e80d497a] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_015730311a5bacdc] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_9facd1449e0950d3] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_015730311a5bacdc] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_af8aa32ee9c1f184] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_db8de8bc54857165] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_remove_9facd1449e0950d3] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_37528d110cff6b74] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AbstractMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    jboolean AbstractMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_65c7d273e80d497a], a0.this$);
    }

    jboolean AbstractMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_65c7d273e80d497a], a0.this$);
    }

    ::java::util::Set AbstractMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_015730311a5bacdc]));
    }

    jboolean AbstractMap::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object AbstractMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_9facd1449e0950d3], a0.this$));
    }

    jint AbstractMap::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean AbstractMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Set AbstractMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_015730311a5bacdc]));
    }

    ::java::lang::Object AbstractMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_af8aa32ee9c1f184], a0.this$, a1.this$));
    }

    void AbstractMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_db8de8bc54857165], a0.this$);
    }

    ::java::lang::Object AbstractMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_9facd1449e0950d3], a0.this$));
    }

    jint AbstractMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::lang::String AbstractMap::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::util::Collection AbstractMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_37528d110cff6b74]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_clear(t_AbstractMap *self);
    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self);
    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_size(t_AbstractMap *self);
    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_values(t_AbstractMap *self);
    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data);
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data);
    static PyGetSetDef t_AbstractMap__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractMap, empty),
      DECLARE_GET_FIELD(t_AbstractMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractMap__methods_[] = {
      DECLARE_METHOD(t_AbstractMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, containsKey, METH_O),
      DECLARE_METHOD(t_AbstractMap, containsValue, METH_O),
      DECLARE_METHOD(t_AbstractMap, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, get, METH_O),
      DECLARE_METHOD(t_AbstractMap, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, keySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, put, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, putAll, METH_O),
      DECLARE_METHOD(t_AbstractMap, remove, METH_O),
      DECLARE_METHOD(t_AbstractMap, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, toString, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractMap)[] = {
      { Py_tp_methods, t_AbstractMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractMap)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractMap, t_AbstractMap, AbstractMap);
    PyObject *t_AbstractMap::wrap_Object(const AbstractMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_AbstractMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_AbstractMap::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractMap), &PY_TYPE_DEF(AbstractMap), module, "AbstractMap", 0);
    }

    void t_AbstractMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "class_", make_descriptor(AbstractMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "wrapfn_", make_descriptor(t_AbstractMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractMap::initializeClass, 1)))
        return NULL;
      return t_AbstractMap::wrap_Object(AbstractMap(((t_AbstractMap *) arg)->object.this$));
    }
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractMap_clear(t_AbstractMap *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_size(t_AbstractMap *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_AbstractMap_values(t_AbstractMap *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *AbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *AbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool AbstractConstantThrustPropulsionModel::live$ = false;

          jclass AbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_06e1ed88b8b36bf6] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_bd301e65f74781e6] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getDirection_d52645e0d4c07563] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getDirection_24461752d0eea1e3] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_dff5885c2c873297] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_f2dc4f0d2f87d390] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_432f3d328c15ec82] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_bf1d7732f1acb697] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getFlowRate_0b7191d207b9680f] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_8bdf60d5551eceaf] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getIsp_dff5885c2c873297] = env->getMethodID(cls, "getIsp", "()D");
              mids$[mid_getIsp_bf1d7732f1acb697] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getThrustMagnitude_dff5885c2c873297] = env->getMethodID(cls, "getThrustMagnitude", "()D");
              mids$[mid_getThrustMagnitude_bf1d7732f1acb697] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getThrustVector_d52645e0d4c07563] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_36619a55dd67cb97] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_3cf6594f36d3d60d] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_abc43395638fd218] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_24461752d0eea1e3] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b42ac4b5bfb80fab] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_8954761face5e1a7] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialThrustVector_d52645e0d4c07563] = env->getMethodID(cls, "getInitialThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialFlowRate_dff5885c2c873297] = env->getMethodID(cls, "getInitialFlowRate", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06e1ed88b8b36bf6, a0, a1, a2.this$, a3.this$)) {}

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd301e65f74781e6, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType AbstractConstantThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_67739b20d9566a8c]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_24461752d0eea1e3], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_dff5885c2c873297]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_9dc1ec0bcc0a9a29], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_f2dc4f0d2f87d390], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_432f3d328c15ec82], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_bf1d7732f1acb697], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_0b7191d207b9680f], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_8bdf60d5551eceaf], a0.this$, a1.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_dff5885c2c873297]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_bf1d7732f1acb697], a0.this$);
          }

          ::java::lang::String AbstractConstantThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_dff5885c2c873297]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_bf1d7732f1acb697], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_36619a55dd67cb97], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3cf6594f36d3d60d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_abc43395638fd218], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_24461752d0eea1e3], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b42ac4b5bfb80fab], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8954761face5e1a7], a0.this$, a1.this$));
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
          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_AbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, direction),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, isp),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustMagnitude),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getDirection, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getIsp, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustMagnitude, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_AbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_AbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_AbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractConstantThrustPropulsionModel, t_AbstractConstantThrustPropulsionModel, AbstractConstantThrustPropulsionModel);

          void t_AbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(AbstractConstantThrustPropulsionModel), module, "AbstractConstantThrustPropulsionModel", 0);
          }

          void t_AbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "class_", make_descriptor(AbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_AbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_AbstractConstantThrustPropulsionModel::wrap_Object(AbstractConstantThrustPropulsionModel(((t_AbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDirection());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getDirection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
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
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getIsp());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getIsp(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitude());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
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
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIsp());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThrustMagnitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenType::class$ = NULL;
            jmethodID *ScreenType::mids$ = NULL;
            bool ScreenType::live$ = false;
            ScreenType *ScreenType::PC = NULL;
            ScreenType *ScreenType::PC_MAX = NULL;
            ScreenType *ScreenType::SHAPE = NULL;

            jclass ScreenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_8e9e4edd6495544e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_values_b1f991fd6caf4d18] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                PC = new ScreenType(env->getStaticObjectField(cls, "PC", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                PC_MAX = new ScreenType(env->getStaticObjectField(cls, "PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                SHAPE = new ScreenType(env->getStaticObjectField(cls, "SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenType ScreenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8e9e4edd6495544e], a0.this$));
            }

            JArray< ScreenType > ScreenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenType >(env->callStaticObjectMethod(cls, mids$[mid_values_b1f991fd6caf4d18]));
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
            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args);
            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenType_values(PyTypeObject *type);
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data);
            static PyGetSetDef t_ScreenType__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenType__methods_[] = {
              DECLARE_METHOD(t_ScreenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenType)[] = {
              { Py_tp_methods, t_ScreenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenType, t_ScreenType, ScreenType);
            PyObject *t_ScreenType::wrap_Object(const ScreenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenType::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenType), &PY_TYPE_DEF(ScreenType), module, "ScreenType", 0);
            }

            void t_ScreenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "class_", make_descriptor(ScreenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "wrapfn_", make_descriptor(t_ScreenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC_MAX", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "SHAPE", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::SHAPE)));
            }

            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenType::initializeClass, 1)))
                return NULL;
              return t_ScreenType::wrap_Object(ScreenType(((t_ScreenType *) arg)->object.this$));
            }
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::valueOf(a0));
                return t_ScreenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenType_values(PyTypeObject *type)
            {
              JArray< ScreenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenType::wrap_jobject);
            }
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data)
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
#include "org/hipparchus/random/IntRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *IntRandomGenerator::class$ = NULL;
      jmethodID *IntRandomGenerator::mids$ = NULL;
      bool IntRandomGenerator::live$ = false;

      jclass IntRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/IntRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_20012b3010a39c05] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_d7af9aedcdd3845b] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_5adccb493ada08e8] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextLong_492808a339bfa35f] = env->getMethodID(cls, "nextLong", "()J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean IntRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_b108b35ef48e27bd]);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_20012b3010a39c05], a0.this$);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d7af9aedcdd3845b], a0.this$, a1, a2);
      }

      jdouble IntRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
      }

      jfloat IntRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_5adccb493ada08e8]);
      }

      jint IntRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      jlong IntRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_492808a339bfa35f]);
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
      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args);

      static PyMethodDef t_IntRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_IntRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextLong, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntRandomGenerator)[] = {
        { Py_tp_methods, t_IntRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::BaseRandomGenerator),
        NULL
      };

      DEFINE_TYPE(IntRandomGenerator, t_IntRandomGenerator, IntRandomGenerator);

      void t_IntRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(IntRandomGenerator), &PY_TYPE_DEF(IntRandomGenerator), module, "IntRandomGenerator", 0);
      }

      void t_IntRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "class_", make_descriptor(IntRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "wrapfn_", make_descriptor(t_IntRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_IntRandomGenerator::wrap_Object(IntRandomGenerator(((t_IntRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *RuleFactory::class$ = NULL;
          jmethodID *RuleFactory::mids$ = NULL;
          bool RuleFactory::live$ = false;

          jclass RuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/RuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_e670405dd33862ee] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair RuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_e670405dd33862ee], a0));
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
          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg);

          static PyMethodDef t_RuleFactory__methods_[] = {
            DECLARE_METHOD(t_RuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RuleFactory)[] = {
            { Py_tp_methods, t_RuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RuleFactory, t_RuleFactory, RuleFactory);

          void t_RuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(RuleFactory), &PY_TYPE_DEF(RuleFactory), module, "RuleFactory", 0);
          }

          void t_RuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "class_", make_descriptor(RuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "wrapfn_", make_descriptor(t_RuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RuleFactory::initializeClass, 1)))
              return NULL;
            return t_RuleFactory::wrap_Object(RuleFactory(((t_RuleFactory *) arg)->object.this$));
          }
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldInterpolationGrid::class$ = NULL;
            jmethodID *FieldInterpolationGrid::mids$ = NULL;
            bool FieldInterpolationGrid::live$ = false;

            jclass FieldInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_04b33bd8d7b2bde1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_04b33bd8d7b2bde1], a0.this$, a1.this$));
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
            static PyObject *t_FieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldInterpolationGrid_of_(t_FieldInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldInterpolationGrid_getGridPoints(t_FieldInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldInterpolationGrid_get__parameters_(t_FieldInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldInterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldInterpolationGrid, t_FieldInterpolationGrid, FieldInterpolationGrid);
            PyObject *t_FieldInterpolationGrid::wrap_Object(const FieldInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldInterpolationGrid *self = (t_FieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldInterpolationGrid *self = (t_FieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldInterpolationGrid), &PY_TYPE_DEF(FieldInterpolationGrid), module, "FieldInterpolationGrid", 0);
            }

            void t_FieldInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "class_", make_descriptor(FieldInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "wrapfn_", make_descriptor(t_FieldInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldInterpolationGrid::wrap_Object(FieldInterpolationGrid(((t_FieldInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldInterpolationGrid_of_(t_FieldInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldInterpolationGrid_getGridPoints(t_FieldInterpolationGrid *self, PyObject *args)
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
            static PyObject *t_FieldInterpolationGrid_get__parameters_(t_FieldInterpolationGrid *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
