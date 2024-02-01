#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedEvolution::class$ = NULL;
          jmethodID *UnscentedEvolution::mids$ = NULL;
          bool UnscentedEvolution::live$ = false;

          jclass UnscentedEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_da2445862b64f2d6] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentStates_20e091718f28da3c] = env->getMethodID(cls, "getCurrentStates", "()[Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_9981f74b2d109da6] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getProcessNoiseMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedEvolution::UnscentedEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da2445862b64f2d6, a0, a1.this$, a2.this$)) {}

          JArray< ::org::hipparchus::linear::RealVector > UnscentedEvolution::getCurrentStates() const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getCurrentStates_20e091718f28da3c]));
          }

          jdouble UnscentedEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_9981f74b2d109da6]);
          }

          ::org::hipparchus::linear::RealMatrix UnscentedEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_b2eebabce70526d8]));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data);
          static PyGetSetDef t_UnscentedEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentStates),
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentTime),
            DECLARE_GET_FIELD(t_UnscentedEvolution, processNoiseMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedEvolution__methods_[] = {
            DECLARE_METHOD(t_UnscentedEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentStates, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getProcessNoiseMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedEvolution)[] = {
            { Py_tp_methods, t_UnscentedEvolution__methods_ },
            { Py_tp_init, (void *) t_UnscentedEvolution_init_ },
            { Py_tp_getset, t_UnscentedEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedEvolution, t_UnscentedEvolution, UnscentedEvolution);

          void t_UnscentedEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedEvolution), &PY_TYPE_DEF(UnscentedEvolution), module, "UnscentedEvolution", 0);
          }

          void t_UnscentedEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "class_", make_descriptor(UnscentedEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "wrapfn_", make_descriptor(t_UnscentedEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedEvolution::initializeClass, 1)))
              return NULL;
            return t_UnscentedEvolution::wrap_Object(UnscentedEvolution(((t_UnscentedEvolution *) arg)->object.this$));
          }
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            UnscentedEvolution object((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UnscentedEvolution(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self)
          {
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentStates());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data)
          {
            JArray< ::org::hipparchus::linear::RealVector > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentStates());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessagesParser::class$ = NULL;
          jmethodID *IgsSsrMessagesParser::mids$ = NULL;
          bool IgsSsrMessagesParser::live$ = false;

          jclass IgsSsrMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_40b3eb4c621c5237] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_997e1716ef46e2d3] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessagesParser::IgsSsrMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}
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
          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IgsSsrMessagesParser__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessagesParser)[] = {
            { Py_tp_methods, t_IgsSsrMessagesParser__methods_ },
            { Py_tp_init, (void *) t_IgsSsrMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessagesParser, t_IgsSsrMessagesParser, IgsSsrMessagesParser);

          void t_IgsSsrMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessagesParser), &PY_TYPE_DEF(IgsSsrMessagesParser), module, "IgsSsrMessagesParser", 0);
          }

          void t_IgsSsrMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "class_", make_descriptor(IgsSsrMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "wrapfn_", make_descriptor(t_IgsSsrMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessagesParser::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessagesParser::wrap_Object(IgsSsrMessagesParser(((t_IgsSsrMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            IgsSsrMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = IgsSsrMessagesParser(a0));
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
#include "org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOAIonosphericDelayModifier::class$ = NULL;
          jmethodID *TDOAIonosphericDelayModifier::mids$ = NULL;
          bool TDOAIonosphericDelayModifier::live$ = false;

          jclass TDOAIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b73781b754e339ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOAIonosphericDelayModifier::TDOAIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b73781b754e339ce, a0.this$, a1)) {}

          ::java::util::List TDOAIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void TDOAIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void TDOAIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self);
          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOAIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOAIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOAIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOAIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOAIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOAIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOAIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOAIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOAIonosphericDelayModifier, t_TDOAIonosphericDelayModifier, TDOAIonosphericDelayModifier);

          void t_TDOAIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOAIonosphericDelayModifier), &PY_TYPE_DEF(TDOAIonosphericDelayModifier), module, "TDOAIonosphericDelayModifier", 0);
          }

          void t_TDOAIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "class_", make_descriptor(TDOAIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TDOAIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOAIonosphericDelayModifier::wrap_Object(TDOAIonosphericDelayModifier(((t_TDOAIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TDOAIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TDOAIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/linear/DefaultFieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixChangingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixChangingVisitor::live$ = false;

      jclass DefaultFieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d6f1e197c99df44f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_f6328613456309a1] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_be2f38076167f47f] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixChangingVisitor::DefaultFieldMatrixChangingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6f1e197c99df44f, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_f6328613456309a1]));
      }

      void DefaultFieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_be2f38076167f47f], a0, a1, a2.this$));
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
      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixChangingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixChangingVisitor, t_DefaultFieldMatrixChangingVisitor, DefaultFieldMatrixChangingVisitor);
      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_Object(const DefaultFieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixChangingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixChangingVisitor), module, "DefaultFieldMatrixChangingVisitor", 0);
      }

      void t_DefaultFieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "class_", make_descriptor(DefaultFieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixChangingVisitor::wrap_Object(DefaultFieldMatrixChangingVisitor(((t_DefaultFieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixChangingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixChangingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/LutherFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherFieldIntegrator::class$ = NULL;
        jmethodID *LutherFieldIntegrator::mids$ = NULL;
        bool LutherFieldIntegrator::live$ = false;

        jclass LutherFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_88bffd71fb0313dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_56b2310b3405bd85] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegrator::LutherFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_88bffd71fb0313dc, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > LutherFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
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
        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args);
        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data);
        static PyGetSetDef t_LutherFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, a),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, b),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, c),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegrator)[] = {
          { Py_tp_methods, t_LutherFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegrator_init_ },
          { Py_tp_getset, t_LutherFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegrator, t_LutherFieldIntegrator, LutherFieldIntegrator);
        PyObject *t_LutherFieldIntegrator::wrap_Object(const LutherFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegrator), &PY_TYPE_DEF(LutherFieldIntegrator), module, "LutherFieldIntegrator", 0);
        }

        void t_LutherFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "class_", make_descriptor(LutherFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "wrapfn_", make_descriptor(t_LutherFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegrator::wrap_Object(LutherFieldIntegrator(((t_LutherFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          LutherFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = LutherFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFittedModel::class$ = NULL;
      jmethodID *EOPFittedModel::mids$ = NULL;
      bool EOPFittedModel::live$ = false;

      jclass EOPFittedModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFittedModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_89d11d4da52c1877] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;)V");
          mids$[mid_getDUT1_0205d332bb159702] = env->getMethodID(cls, "getDUT1", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDx_0205d332bb159702] = env->getMethodID(cls, "getDx", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDy_0205d332bb159702] = env->getMethodID(cls, "getDy", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getXp_0205d332bb159702] = env->getMethodID(cls, "getXp", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getYp_0205d332bb159702] = env->getMethodID(cls, "getYp", "()Lorg/orekit/utils/SecularAndHarmonic;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFittedModel::EOPFittedModel(const ::org::orekit::utils::SecularAndHarmonic & a0, const ::org::orekit::utils::SecularAndHarmonic & a1, const ::org::orekit::utils::SecularAndHarmonic & a2, const ::org::orekit::utils::SecularAndHarmonic & a3, const ::org::orekit::utils::SecularAndHarmonic & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89d11d4da52c1877, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDUT1() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDUT1_0205d332bb159702]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDx() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDx_0205d332bb159702]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDy() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDy_0205d332bb159702]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getXp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getXp_0205d332bb159702]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getYp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getYp_0205d332bb159702]));
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
      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data);
      static PyGetSetDef t_EOPFittedModel__fields_[] = {
        DECLARE_GET_FIELD(t_EOPFittedModel, dUT1),
        DECLARE_GET_FIELD(t_EOPFittedModel, dx),
        DECLARE_GET_FIELD(t_EOPFittedModel, dy),
        DECLARE_GET_FIELD(t_EOPFittedModel, xp),
        DECLARE_GET_FIELD(t_EOPFittedModel, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPFittedModel__methods_[] = {
        DECLARE_METHOD(t_EOPFittedModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, getDUT1, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getXp, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFittedModel)[] = {
        { Py_tp_methods, t_EOPFittedModel__methods_ },
        { Py_tp_init, (void *) t_EOPFittedModel_init_ },
        { Py_tp_getset, t_EOPFittedModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFittedModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFittedModel, t_EOPFittedModel, EOPFittedModel);

      void t_EOPFittedModel::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFittedModel), &PY_TYPE_DEF(EOPFittedModel), module, "EOPFittedModel", 0);
      }

      void t_EOPFittedModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "class_", make_descriptor(EOPFittedModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "wrapfn_", make_descriptor(t_EOPFittedModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFittedModel::initializeClass, 1)))
          return NULL;
        return t_EOPFittedModel::wrap_Object(EOPFittedModel(((t_EOPFittedModel *) arg)->object.this$));
      }
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFittedModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::SecularAndHarmonic a0((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a1((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a2((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a3((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a4((jobject) NULL);
        EOPFittedModel object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFittedModel(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3CoordinateHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3CoordinateHermiteInterpolator::class$ = NULL;
        jmethodID *SP3CoordinateHermiteInterpolator::mids$ = NULL;
        bool SP3CoordinateHermiteInterpolator::live$ = false;

        jclass SP3CoordinateHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3CoordinateHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_50acb8bcbb80a276] = env->getMethodID(cls, "<init>", "(IDZ)V");
            mids$[mid_interpolate_23da0fe02dfc8bed] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/files/sp3/SP3Coordinate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3CoordinateHermiteInterpolator::SP3CoordinateHermiteInterpolator(jint a0, jdouble a1, jboolean a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_50acb8bcbb80a276, a0, a1, a2)) {}
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
      namespace sp3 {
        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args);
        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data);
        static PyGetSetDef t_SP3CoordinateHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_SP3CoordinateHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3CoordinateHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3CoordinateHermiteInterpolator)[] = {
          { Py_tp_methods, t_SP3CoordinateHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_SP3CoordinateHermiteInterpolator_init_ },
          { Py_tp_getset, t_SP3CoordinateHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3CoordinateHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
          NULL
        };

        DEFINE_TYPE(SP3CoordinateHermiteInterpolator, t_SP3CoordinateHermiteInterpolator, SP3CoordinateHermiteInterpolator);
        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_Object(const SP3CoordinateHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3CoordinateHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3CoordinateHermiteInterpolator), &PY_TYPE_DEF(SP3CoordinateHermiteInterpolator), module, "SP3CoordinateHermiteInterpolator", 0);
        }

        void t_SP3CoordinateHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "class_", make_descriptor(SP3CoordinateHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "wrapfn_", make_descriptor(t_SP3CoordinateHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_SP3CoordinateHermiteInterpolator::wrap_Object(SP3CoordinateHermiteInterpolator(((t_SP3CoordinateHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jboolean a2;
          SP3CoordinateHermiteInterpolator object((jobject) NULL);

          if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
          {
            INT_CALL(object = SP3CoordinateHermiteInterpolator(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSLegacyNavigationMessage::class$ = NULL;
            jmethodID *QZSSLegacyNavigationMessage::mids$ = NULL;
            bool QZSSLegacyNavigationMessage::live$ = false;

            jclass QZSSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSLegacyNavigationMessage::QZSSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSLegacyNavigationMessage, t_QZSSLegacyNavigationMessage, QZSSLegacyNavigationMessage);

            void t_QZSSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSLegacyNavigationMessage), &PY_TYPE_DEF(QZSSLegacyNavigationMessage), module, "QZSSLegacyNavigationMessage", 0);
            }

            void t_QZSSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "class_", make_descriptor(QZSSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_QZSSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSLegacyNavigationMessage::wrap_Object(QZSSLegacyNavigationMessage(((t_QZSSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSLegacyNavigationMessage_init_(t_QZSSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              QZSSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = QZSSLegacyNavigationMessage());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/String.h"
#include "java/util/function/DoubleConsumer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics::class$ = NULL;
        jmethodID *StreamingStatistics::mids$ = NULL;
        bool StreamingStatistics::live$ = false;

        jclass StreamingStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b5a4975c915c365a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_accept_1ad26e8c8c0cd65b] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_aggregate_d741cbfd11938b9c] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)V");
            mids$[mid_builder_4d17d1686c1caddb] = env->getStaticMethodID(cls, "builder", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_e8391c24b9a78230] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getGeometricMean_9981f74b2d109da6] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_9981f74b2d109da6] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMedian_9981f74b2d109da6] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_bf28ed64d6e8576b] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_9981f74b2d109da6] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_9981f74b2d109da6] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSecondMoment_9981f74b2d109da6] = env->getMethodID(cls, "getSecondMoment", "()D");
            mids$[mid_getStandardDeviation_9981f74b2d109da6] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_9981f74b2d109da6] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfLogs_9981f74b2d109da6] = env->getMethodID(cls, "getSumOfLogs", "()D");
            mids$[mid_getSumOfSquares_9981f74b2d109da6] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getSummary_ce882cfbdfe8020d] = env->getMethodID(cls, "getSummary", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getVariance_9981f74b2d109da6] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics::StreamingStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        StreamingStatistics::StreamingStatistics(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5a4975c915c365a, a0, a1.this$)) {}

        void StreamingStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_1ad26e8c8c0cd65b], a0);
        }

        void StreamingStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_1ad26e8c8c0cd65b], a0);
        }

        void StreamingStatistics::aggregate(const StreamingStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_d741cbfd11938b9c], a0.this$);
        }

        ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics::builder()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder(env->callStaticObjectMethod(cls, mids$[mid_builder_4d17d1686c1caddb]));
        }

        void StreamingStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        StreamingStatistics StreamingStatistics::copy() const
        {
          return StreamingStatistics(env->callObjectMethod(this$, mids$[mid_copy_e8391c24b9a78230]));
        }

        jboolean StreamingStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        jdouble StreamingStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
        }

        jlong StreamingStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jdouble StreamingStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_bf28ed64d6e8576b], a0);
        }

        jdouble StreamingStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getSecondMoment() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondMoment_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getSumOfLogs() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfLogs_9981f74b2d109da6]);
        }

        jdouble StreamingStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_9981f74b2d109da6]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary StreamingStatistics::getSummary() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSummary_ce882cfbdfe8020d]));
        }

        jdouble StreamingStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_9981f74b2d109da6]);
        }

        jint StreamingStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        ::java::lang::String StreamingStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type);
        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data);
        static PyGetSetDef t_StreamingStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingStatistics, geometricMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, max),
          DECLARE_GET_FIELD(t_StreamingStatistics, mean),
          DECLARE_GET_FIELD(t_StreamingStatistics, median),
          DECLARE_GET_FIELD(t_StreamingStatistics, min),
          DECLARE_GET_FIELD(t_StreamingStatistics, n),
          DECLARE_GET_FIELD(t_StreamingStatistics, populationVariance),
          DECLARE_GET_FIELD(t_StreamingStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, secondMoment),
          DECLARE_GET_FIELD(t_StreamingStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_StreamingStatistics, sum),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfLogs),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_StreamingStatistics, summary),
          DECLARE_GET_FIELD(t_StreamingStatistics, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingStatistics__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, accept, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, addValue, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, aggregate, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, builder, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSecondMoment, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfLogs, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSummary, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics)[] = {
          { Py_tp_methods, t_StreamingStatistics__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics_init_ },
          { Py_tp_getset, t_StreamingStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics, t_StreamingStatistics, StreamingStatistics);

        void t_StreamingStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics), &PY_TYPE_DEF(StreamingStatistics), module, "StreamingStatistics", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "StreamingStatisticsBuilder", make_descriptor(&PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder)));
        }

        void t_StreamingStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "class_", make_descriptor(StreamingStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "wrapfn_", make_descriptor(t_StreamingStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics::wrap_Object(StreamingStatistics(((t_StreamingStatistics *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              StreamingStatistics object((jobject) NULL);

              INT_CALL(object = StreamingStatistics());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              StreamingStatistics object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StreamingStatistics(a0, a1));
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

        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg)
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

        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg)
        {
          StreamingStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", StreamingStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.aggregate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StreamingStatistics::builder());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self)
        {
          StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ocm::class$ = NULL;
              jmethodID *Ocm::mids$ = NULL;
              bool Ocm::live$ = false;
              ::java::lang::String *Ocm::COV_LINE = NULL;
              ::java::lang::String *Ocm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Ocm::MAN_LINE = NULL;
              ::java::lang::String *Ocm::ROOT = NULL;
              ::java::lang::String *Ocm::TRAJ_LINE = NULL;
              ::java::lang::String *Ocm::UNKNOWN_OBJECT = NULL;

              jclass Ocm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ocm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f1d722872d5900a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_getData_40729bd778a88778] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmData;");
                  mids$[mid_getMetadata_322e8e3321666bbd] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  MAN_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "MAN_LINE", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  TRAJ_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "TRAJ_LINE", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ocm::Ocm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_f1d722872d5900a5, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData Ocm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData(env->callObjectMethod(this$, mids$[mid_getData_40729bd778a88778]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata Ocm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_322e8e3321666bbd]));
              }

              ::java::util::Map Ocm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
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
              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args);
              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Ocm_getData(t_Ocm *self);
              static PyObject *t_Ocm_getMetadata(t_Ocm *self);
              static PyObject *t_Ocm_getSatellites(t_Ocm *self);
              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data);
              static PyGetSetDef t_Ocm__fields_[] = {
                DECLARE_GET_FIELD(t_Ocm, data),
                DECLARE_GET_FIELD(t_Ocm, metadata),
                DECLARE_GET_FIELD(t_Ocm, satellites),
                DECLARE_GET_FIELD(t_Ocm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ocm__methods_[] = {
                DECLARE_METHOD(t_Ocm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ocm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ocm)[] = {
                { Py_tp_methods, t_Ocm__methods_ },
                { Py_tp_init, (void *) t_Ocm_init_ },
                { Py_tp_getset, t_Ocm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ocm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Ocm, t_Ocm, Ocm);
              PyObject *t_Ocm::wrap_Object(const Ocm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Ocm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Ocm::install(PyObject *module)
              {
                installType(&PY_TYPE(Ocm), &PY_TYPE_DEF(Ocm), module, "Ocm", 0);
              }

              void t_Ocm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "class_", make_descriptor(Ocm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "wrapfn_", make_descriptor(t_Ocm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ocm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "COV_LINE", make_descriptor(j2p(*Ocm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Ocm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "MAN_LINE", make_descriptor(j2p(*Ocm::MAN_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "ROOT", make_descriptor(j2p(*Ocm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "TRAJ_LINE", make_descriptor(j2p(*Ocm::TRAJ_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Ocm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ocm::initializeClass, 1)))
                  return NULL;
                return t_Ocm::wrap_Object(Ocm(((t_Ocm *) arg)->object.this$));
              }
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ocm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Ocm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Ocm(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Ocm_getData(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(result);
              }

              static PyObject *t_Ocm_getMetadata(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Ocm_getSatellites(t_Ocm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmSatelliteEphemeris));
              }
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularIonosphericDelayModifier::class$ = NULL;
          jmethodID *AngularIonosphericDelayModifier::mids$ = NULL;
          bool AngularIonosphericDelayModifier::live$ = false;

          jclass AngularIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b73781b754e339ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularIonosphericDelayModifier::AngularIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b73781b754e339ce, a0.this$, a1)) {}

          ::java::util::List AngularIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void AngularIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self);
          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularIonosphericDelayModifier, t_AngularIonosphericDelayModifier, AngularIonosphericDelayModifier);

          void t_AngularIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularIonosphericDelayModifier), &PY_TYPE_DEF(AngularIonosphericDelayModifier), module, "AngularIonosphericDelayModifier", 0);
          }

          void t_AngularIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "class_", make_descriptor(AngularIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "wrapfn_", make_descriptor(t_AngularIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularIonosphericDelayModifier::wrap_Object(AngularIonosphericDelayModifier(((t_AngularIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            AngularIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/KvnGenerator.h"
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

            ::java::lang::Class *KvnGenerator::class$ = NULL;
            jmethodID *KvnGenerator::mids$ = NULL;
            bool KvnGenerator::live$ = false;

            jclass KvnGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/KvnGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c5141c41b8e79a6b] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DI)V");
                mids$[mid_endMessage_105e1eadb709d9ac] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_105e1eadb709d9ac] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_d2c8eb4129821f0e] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_04f72a78f21743a7] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_aa335fea495d60e0] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_dbec4ebd43084884] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnGenerator::KvnGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jint a4) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_c5141c41b8e79a6b, a0.this$, a1, a2.this$, a3, a4)) {}

            void KvnGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_105e1eadb709d9ac], a0.this$);
            }

            void KvnGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_105e1eadb709d9ac], a0.this$);
            }

            ::java::lang::String KvnGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat KvnGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_49975b0867f6c97c]));
            }

            void KvnGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_04f72a78f21743a7], a0.this$, a1.this$, a2);
            }

            void KvnGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_aa335fea495d60e0], a0.this$);
            }

            void KvnGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_dbec4ebd43084884], a0.this$, a1.this$, a2.this$, a3);
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
            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data);
            static PyGetSetDef t_KvnGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_KvnGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KvnGenerator__methods_[] = {
              DECLARE_METHOD(t_KvnGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeEntry, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnGenerator)[] = {
              { Py_tp_methods, t_KvnGenerator__methods_ },
              { Py_tp_init, (void *) t_KvnGenerator_init_ },
              { Py_tp_getset, t_KvnGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(KvnGenerator, t_KvnGenerator, KvnGenerator);

            void t_KvnGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnGenerator), &PY_TYPE_DEF(KvnGenerator), module, "KvnGenerator", 0);
            }

            void t_KvnGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "class_", make_descriptor(KvnGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "wrapfn_", make_descriptor(t_KvnGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnGenerator::initializeClass, 1)))
                return NULL;
              return t_KvnGenerator::wrap_Object(KvnGenerator(((t_KvnGenerator *) arg)->object.this$));
            }
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jint a4;
              KvnGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDI", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KvnGenerator(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args)
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

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data)
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
#include "org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *AbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool AbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass AbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_b744963488fb11c5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_77d14de7cb3c9585] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_d72d0265fbc6575b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_cb151471db4570f0] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_853ab71ea613cf4d] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/AbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b744963488fb11c5, a0, a1.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_77d14de7cb3c9585, a0, a1.this$, a2.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d72d0265fbc6575b, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter AbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_b9dfc27d8c56b5de]));
      }

      ::org::orekit::frames::Frame AbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_cb151471db4570f0]));
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
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinatesHermiteInterpolator, t_AbsolutePVCoordinatesHermiteInterpolator, AbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const AbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(AbsolutePVCoordinatesHermiteInterpolator), module, "AbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(AbsolutePVCoordinatesHermiteInterpolator(((t_AbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
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

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateVectorFunction::class$ = NULL;
      jmethodID *MultivariateVectorFunction::mids$ = NULL;
      bool MultivariateVectorFunction::live$ = false;

      jclass MultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_51f624c89851da7e] = env->getMethodID(cls, "value", "([D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > MultivariateVectorFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_51f624c89851da7e], a0.this$));
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
      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateVectorFunction)[] = {
        { Py_tp_methods, t_MultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateVectorFunction, t_MultivariateVectorFunction, MultivariateVectorFunction);

      void t_MultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateVectorFunction), &PY_TYPE_DEF(MultivariateVectorFunction), module, "MultivariateVectorFunction", 0);
      }

      void t_MultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "class_", make_descriptor(MultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "wrapfn_", make_descriptor(t_MultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateVectorFunction::wrap_Object(MultivariateVectorFunction(((t_MultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
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
#include "org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonStartStopEventsTrigger::class$ = NULL;
          jmethodID *PythonStartStopEventsTrigger::mids$ = NULL;
          bool PythonStartStopEventsTrigger::live$ = false;

          jclass PythonStartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fd4c1c355b42090d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertStartDetector_2778b7032ad3e419] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_2778b7032ad3e419] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStartStopEventsTrigger::PythonStartStopEventsTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0, const ::org::orekit::propagation::events::AbstractDetector & a1) : ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger(env->newObject(initializeClass, &mids$, mid_init$_fd4c1c355b42090d, a0.this$, a1.this$)) {}

          void PythonStartStopEventsTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonStartStopEventsTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonStartStopEventsTrigger::pythonExtension(jlong a0) const
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
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self);
          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data);
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_PythonStartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, self),
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStartStopEventsTrigger)[] = {
            { Py_tp_methods, t_PythonStartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonStartStopEventsTrigger_init_ },
            { Py_tp_getset, t_PythonStartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger),
            NULL
          };

          DEFINE_TYPE(PythonStartStopEventsTrigger, t_PythonStartStopEventsTrigger, PythonStartStopEventsTrigger);
          PyObject *t_PythonStartStopEventsTrigger::wrap_Object(const PythonStartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonStartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonStartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStartStopEventsTrigger), &PY_TYPE_DEF(PythonStartStopEventsTrigger), module, "PythonStartStopEventsTrigger", 1);
          }

          void t_PythonStartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "class_", make_descriptor(PythonStartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "wrapfn_", make_descriptor(t_PythonStartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStartStopEventsTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStartDetector0 },
              { "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStopDetector1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonStartStopEventsTrigger_getParametersDrivers2 },
              { "pythonDecRef", "()V", (void *) t_PythonStartStopEventsTrigger_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonStartStopEventsTrigger::wrap_Object(PythonStartStopEventsTrigger(((t_PythonStartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::AbstractDetector a1((jobject) NULL);
            PyTypeObject **p1;
            PythonStartStopEventsTrigger object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::AbstractDetector::initializeClass, ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonStartStopEventsTrigger(a0, a1));
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

          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStartDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStartDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStopDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStopDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data)
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
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariateInterpolator::class$ = NULL;
        jmethodID *UnivariateInterpolator::mids$ = NULL;
        bool UnivariateInterpolator::live$ = false;

        jclass UnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_06c20aa5e0626867] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::UnivariateFunction UnivariateInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_06c20aa5e0626867], a0.this$, a1.this$));
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
        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateInterpolator)[] = {
          { Py_tp_methods, t_UnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateInterpolator, t_UnivariateInterpolator, UnivariateInterpolator);

        void t_UnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateInterpolator), &PY_TYPE_DEF(UnivariateInterpolator), module, "UnivariateInterpolator", 0);
        }

        void t_UnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "class_", make_descriptor(UnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "wrapfn_", make_descriptor(t_UnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariateInterpolator::wrap_Object(UnivariateInterpolator(((t_UnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args)
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
            mids$[mid_value_12ff40993688331d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > UnivariateDifferentiableVectorFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_12ff40993688331d], a0.this$));
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmWriter::class$ = NULL;
              jmethodID *ApmWriter::mids$ = NULL;
              bool ApmWriter::live$ = false;
              jdouble ApmWriter::CCSDS_APM_VERS = (jdouble) 0;
              jint ApmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass ApmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_803b88445e6f9607] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_APM_VERS = env->getStaticDoubleField(cls, "CCSDS_APM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmWriter::ApmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_803b88445e6f9607, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args);
              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data);
              static PyGetSetDef t_ApmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_ApmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmWriter__methods_[] = {
                DECLARE_METHOD(t_ApmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmWriter)[] = {
                { Py_tp_methods, t_ApmWriter__methods_ },
                { Py_tp_init, (void *) t_ApmWriter_init_ },
                { Py_tp_getset, t_ApmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(ApmWriter, t_ApmWriter, ApmWriter);
              PyObject *t_ApmWriter::wrap_Object(const ApmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_ApmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_ApmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmWriter *self = (t_ApmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_ApmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmWriter), &PY_TYPE_DEF(ApmWriter), module, "ApmWriter", 0);
              }

              void t_ApmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "class_", make_descriptor(ApmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "wrapfn_", make_descriptor(t_ApmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "CCSDS_APM_VERS", make_descriptor(ApmWriter::CCSDS_APM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmWriter), "KVN_PADDING_WIDTH", make_descriptor(ApmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_ApmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmWriter::initializeClass, 1)))
                  return NULL;
                return t_ApmWriter::wrap_Object(ApmWriter(((t_ApmWriter *) arg)->object.this$));
              }
              static PyObject *t_ApmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmWriter_of_(t_ApmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_ApmWriter_init_(t_ApmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ApmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = ApmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Apm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_ApmWriter_get__parameters_(t_ApmWriter *self, void *data)
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
#include "org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TimeSpanEstimatedTroposphericModel::class$ = NULL;
          jmethodID *TimeSpanEstimatedTroposphericModel::mids$ = NULL;
          bool TimeSpanEstimatedTroposphericModel::live$ = false;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_AFTER = NULL;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_BEFORE = NULL;

          jclass TimeSpanEstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_743dc20d16d022b9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;)V");
              mids$[mid_init$_4fab802330f7900b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addTroposphericModelValidAfter_3839ebc9b842660e] = env->getMethodID(cls, "addTroposphericModelValidAfter", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addTroposphericModelValidBefore_3839ebc9b842660e] = env->getMethodID(cls, "addTroposphericModelValidBefore", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_extractParameters_f6f6c8fcf1e496fb] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_extractParameters_f4e70a6b1a1cf5f6] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFirstSpan_ea49fa2ad441b95d] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTroposphericModel_a520c157e580b96d] = env->getMethodID(cls, "getTroposphericModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
              DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_743dc20d16d022b9, a0.this$)) {}

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fab802330f7900b, a0.this$, a1.this$)) {}

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidAfter(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidAfter_3839ebc9b842660e], a0.this$, a1.this$);
          }

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidBefore(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidBefore_3839ebc9b842660e], a0.this$, a1.this$);
          }

          JArray< jdouble > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_f6f6c8fcf1e496fb], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_f4e70a6b1a1cf5f6], a0.this$, a1.this$));
          }

          ::org::orekit::utils::TimeSpanMap$Span TimeSpanEstimatedTroposphericModel::getFirstSpan() const
          {
            return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_ea49fa2ad441b95d]));
          }

          ::java::util::List TimeSpanEstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel TimeSpanEstimatedTroposphericModel::getTroposphericModel(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel(env->callObjectMethod(this$, mids$[mid_getTroposphericModel_a520c157e580b96d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement TimeSpanEstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble TimeSpanEstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
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
          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_TimeSpanEstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, firstSpan),
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSpanEstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidAfter, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidBefore, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, extractParameters, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getFirstSpan, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getTroposphericModel, METH_O),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSpanEstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_TimeSpanEstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_TimeSpanEstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_TimeSpanEstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSpanEstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSpanEstimatedTroposphericModel, t_TimeSpanEstimatedTroposphericModel, TimeSpanEstimatedTroposphericModel);

          void t_TimeSpanEstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSpanEstimatedTroposphericModel), &PY_TYPE_DEF(TimeSpanEstimatedTroposphericModel), module, "TimeSpanEstimatedTroposphericModel", 0);
          }

          void t_TimeSpanEstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "class_", make_descriptor(TimeSpanEstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "wrapfn_", make_descriptor(t_TimeSpanEstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSpanEstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_AFTER", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_AFTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_BEFORE)));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_TimeSpanEstimatedTroposphericModel::wrap_Object(TimeSpanEstimatedTroposphericModel(((t_TimeSpanEstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, &a0))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0, a1));
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidAfter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidAfter", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidBefore(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidBefore", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::models::earth::troposphere::PY_TYPE(EstimatedTroposphericModel));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTroposphericModel(a0));
              return ::org::orekit::models::earth::troposphere::t_EstimatedTroposphericModel::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTroposphericModel", arg);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AberrationModifier.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AberrationModifier::class$ = NULL;
          jmethodID *AberrationModifier::mids$ = NULL;
          bool AberrationModifier::live$ = false;

          jclass AberrationModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AberrationModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_e28302a82adb77ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_fieldNaturalToProper_db60b87585b707cf] = env->getStaticMethodID(cls, "fieldNaturalToProper", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_fieldNaturalToProper_243bb54e25d47339] = env->getStaticMethodID(cls, "fieldNaturalToProper", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_fieldProperToNatural_db60b87585b707cf] = env->getStaticMethodID(cls, "fieldProperToNatural", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_fieldProperToNatural_243bb54e25d47339] = env->getStaticMethodID(cls, "fieldProperToNatural", "([Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)[Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_naturalToProper_817775721aeb0d8f] = env->getStaticMethodID(cls, "naturalToProper", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");
              mids$[mid_naturalToProper_0c85e773c8161eac] = env->getStaticMethodID(cls, "naturalToProper", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)[D");
              mids$[mid_properToNatural_817775721aeb0d8f] = env->getStaticMethodID(cls, "properToNatural", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)[D");
              mids$[mid_properToNatural_0c85e773c8161eac] = env->getStaticMethodID(cls, "properToNatural", "([DLorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AberrationModifier::AberrationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          AberrationModifier::AberrationModifier(const ::org::orekit::data::DataContext & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e28302a82adb77ed, a0.this$)) {}

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldNaturalToProper_db60b87585b707cf], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldNaturalToProper(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::data::DataContext & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldNaturalToProper_243bb54e25d47339], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldProperToNatural_db60b87585b707cf], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::analysis::differentiation::Gradient > AberrationModifier::fieldProperToNatural(const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a0, const ::org::orekit::frames::FieldTransform & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::data::DataContext & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ::org::hipparchus::analysis::differentiation::Gradient >(env->callStaticObjectMethod(cls, mids$[mid_fieldProperToNatural_243bb54e25d47339], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::java::util::List AberrationModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void AberrationModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void AberrationModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
          }

          JArray< jdouble > AberrationModifier::naturalToProper(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_naturalToProper_817775721aeb0d8f], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< jdouble > AberrationModifier::naturalToProper(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::data::DataContext & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_naturalToProper_0c85e773c8161eac], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          JArray< jdouble > AberrationModifier::properToNatural(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_properToNatural_817775721aeb0d8f], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< jdouble > AberrationModifier::properToNatural(const JArray< jdouble > & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::data::DataContext & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_properToNatural_0c85e773c8161eac], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self);
          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg);
          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args);
          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data);
          static PyGetSetDef t_AberrationModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AberrationModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AberrationModifier__methods_[] = {
            DECLARE_METHOD(t_AberrationModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldNaturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, fieldProperToNatural, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AberrationModifier, modify, METH_O),
            DECLARE_METHOD(t_AberrationModifier, modifyWithoutDerivatives, METH_O),
            DECLARE_METHOD(t_AberrationModifier, naturalToProper, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AberrationModifier, properToNatural, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AberrationModifier)[] = {
            { Py_tp_methods, t_AberrationModifier__methods_ },
            { Py_tp_init, (void *) t_AberrationModifier_init_ },
            { Py_tp_getset, t_AberrationModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AberrationModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AberrationModifier, t_AberrationModifier, AberrationModifier);

          void t_AberrationModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AberrationModifier), &PY_TYPE_DEF(AberrationModifier), module, "AberrationModifier", 0);
          }

          void t_AberrationModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "class_", make_descriptor(AberrationModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "wrapfn_", make_descriptor(t_AberrationModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AberrationModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AberrationModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AberrationModifier::initializeClass, 1)))
              return NULL;
            return t_AberrationModifier::wrap_Object(AberrationModifier(((t_AberrationModifier *) arg)->object.this$));
          }
          static PyObject *t_AberrationModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AberrationModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AberrationModifier_init_(t_AberrationModifier *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                AberrationModifier object((jobject) NULL);

                INT_CALL(object = AberrationModifier());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                AberrationModifier object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = AberrationModifier(a0));
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

          static PyObject *t_AberrationModifier_fieldNaturalToProper(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
                ::org::orekit::frames::FieldTransform a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

                if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldNaturalToProper(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
                }
              }
              break;
             case 4:
              {
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
                ::org::orekit::frames::FieldTransform a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::data::DataContext a3((jobject) NULL);
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

                if (!parseArgs(args, "[kKkk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldNaturalToProper(a0, a1, a2, a3));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError(type, "fieldNaturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_fieldProperToNatural(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
                ::org::orekit::frames::FieldTransform a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

                if (!parseArgs(args, "[kKk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldProperToNatural(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
                }
              }
              break;
             case 4:
              {
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > a0((jobject) NULL);
                ::org::orekit::frames::FieldTransform a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::data::DataContext a3((jobject) NULL);
                JArray< ::org::hipparchus::analysis::differentiation::Gradient > result((jobject) NULL);

                if (!parseArgs(args, "[kKkk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_FieldTransform::parameters_, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::fieldProperToNatural(a0, a1, a2, a3));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError(type, "fieldProperToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_getParametersDrivers(t_AberrationModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AberrationModifier_modify(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_modifyWithoutDerivatives(t_AberrationModifier *self, PyObject *arg)
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

          static PyObject *t_AberrationModifier_naturalToProper(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::naturalToProper(a0, a1, a2, a3));
                  return result.wrap();
                }
              }
              break;
             case 5:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ::org::orekit::frames::Frame a3((jobject) NULL);
                ::org::orekit::data::DataContext a4((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "[Dkkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::naturalToProper(a0, a1, a2, a3, a4));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError(type, "naturalToProper", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_properToNatural(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "[Dkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::properToNatural(a0, a1, a2, a3));
                  return result.wrap();
                }
              }
              break;
             case 5:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                ::org::orekit::frames::Frame a3((jobject) NULL);
                ::org::orekit::data::DataContext a4((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "[Dkkkk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::estimation::measurements::modifiers::AberrationModifier::properToNatural(a0, a1, a2, a3, a4));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError(type, "properToNatural", args);
            return NULL;
          }

          static PyObject *t_AberrationModifier_get__parametersDrivers(t_AberrationModifier *self, void *data)
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
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FactoryManagedFrame::class$ = NULL;
      jmethodID *FactoryManagedFrame::mids$ = NULL;
      bool FactoryManagedFrame::live$ = false;

      jclass FactoryManagedFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FactoryManagedFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_23a36fa90011475a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;ZLorg/orekit/frames/Predefined;)V");
          mids$[mid_getFactoryKey_8676af2d7598517d] = env->getMethodID(cls, "getFactoryKey", "()Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FactoryManagedFrame::FactoryManagedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2, const ::org::orekit::frames::Predefined & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_23a36fa90011475a, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::orekit::frames::Predefined FactoryManagedFrame::getFactoryKey() const
      {
        return ::org::orekit::frames::Predefined(env->callObjectMethod(this$, mids$[mid_getFactoryKey_8676af2d7598517d]));
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
      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self);
      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data);
      static PyGetSetDef t_FactoryManagedFrame__fields_[] = {
        DECLARE_GET_FIELD(t_FactoryManagedFrame, factoryKey),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FactoryManagedFrame__methods_[] = {
        DECLARE_METHOD(t_FactoryManagedFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, getFactoryKey, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FactoryManagedFrame)[] = {
        { Py_tp_methods, t_FactoryManagedFrame__methods_ },
        { Py_tp_init, (void *) t_FactoryManagedFrame_init_ },
        { Py_tp_getset, t_FactoryManagedFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FactoryManagedFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(FactoryManagedFrame, t_FactoryManagedFrame, FactoryManagedFrame);

      void t_FactoryManagedFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(FactoryManagedFrame), &PY_TYPE_DEF(FactoryManagedFrame), module, "FactoryManagedFrame", 0);
      }

      void t_FactoryManagedFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "class_", make_descriptor(FactoryManagedFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "wrapfn_", make_descriptor(t_FactoryManagedFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FactoryManagedFrame::initializeClass, 1)))
          return NULL;
        return t_FactoryManagedFrame::wrap_Object(FactoryManagedFrame(((t_FactoryManagedFrame *) arg)->object.this$));
      }
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FactoryManagedFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::frames::Predefined a3((jobject) NULL);
        PyTypeObject **p3;
        FactoryManagedFrame object((jobject) NULL);

        if (!parseArgs(args, "kkZK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::Predefined::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::frames::t_Predefined::parameters_))
        {
          INT_CALL(object = FactoryManagedFrame(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self)
      {
        ::org::orekit::frames::Predefined result((jobject) NULL);
        OBJ_CALL(result = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(result);
      }

      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data)
      {
        ::org::orekit::frames::Predefined value((jobject) NULL);
        OBJ_CALL(value = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularRadioRefractionModifier::class$ = NULL;
          jmethodID *AngularRadioRefractionModifier::mids$ = NULL;
          bool AngularRadioRefractionModifier::live$ = false;

          jclass AngularRadioRefractionModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70543fade56340ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/AtmosphericRefractionModel;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRadioRefractionModifier::AngularRadioRefractionModifier(const ::org::orekit::models::AtmosphericRefractionModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70543fade56340ec, a0.this$)) {}

          ::java::util::List AngularRadioRefractionModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void AngularRadioRefractionModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self);
          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data);
          static PyGetSetDef t_AngularRadioRefractionModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRadioRefractionModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRadioRefractionModifier__methods_[] = {
            DECLARE_METHOD(t_AngularRadioRefractionModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRadioRefractionModifier)[] = {
            { Py_tp_methods, t_AngularRadioRefractionModifier__methods_ },
            { Py_tp_init, (void *) t_AngularRadioRefractionModifier_init_ },
            { Py_tp_getset, t_AngularRadioRefractionModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRadioRefractionModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularRadioRefractionModifier, t_AngularRadioRefractionModifier, AngularRadioRefractionModifier);

          void t_AngularRadioRefractionModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRadioRefractionModifier), &PY_TYPE_DEF(AngularRadioRefractionModifier), module, "AngularRadioRefractionModifier", 0);
          }

          void t_AngularRadioRefractionModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "class_", make_descriptor(AngularRadioRefractionModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "wrapfn_", make_descriptor(t_AngularRadioRefractionModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRadioRefractionModifier::initializeClass, 1)))
              return NULL;
            return t_AngularRadioRefractionModifier::wrap_Object(AngularRadioRefractionModifier(((t_AngularRadioRefractionModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRadioRefractionModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
            AngularRadioRefractionModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularRadioRefractionModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg)
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

          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_DV_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_IGNITION = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1092ec6fe7bc6f07] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;)Z");
                  mids$[mid_valueOf_57c8f01e6bb99fa5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");
                  mids$[mid_values_3361ab8286d6f42e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_1", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_2", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_DV_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DV_3", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_EPOCH_IGNITION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_IGNITION", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/opm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1092ec6fe7bc6f07], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_57c8f01e6bb99fa5], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3361ab8286d6f42e]));
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
            namespace opm {
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DV_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DV_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_IGNITION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_IGNITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::opm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/FieldSGP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSGP4::class$ = NULL;
          jmethodID *FieldSGP4::mids$ = NULL;
          bool FieldSGP4::live$ = false;

          jclass FieldSGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0b9ee8d2f12ae2a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_cb79b5ee065880cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpInitialize_77e61a645c496adc] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_8556964e7b03aae6] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_0b9ee8d2f12ae2a8, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldSGP4::FieldSGP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldTLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_cb79b5ee065880cd, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args);
          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data);
          static PyGetSetDef t_FieldSGP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSGP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSGP4__methods_[] = {
            DECLARE_METHOD(t_FieldSGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSGP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSGP4)[] = {
            { Py_tp_methods, t_FieldSGP4__methods_ },
            { Py_tp_init, (void *) t_FieldSGP4_init_ },
            { Py_tp_getset, t_FieldSGP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSGP4, t_FieldSGP4, FieldSGP4);
          PyObject *t_FieldSGP4::wrap_Object(const FieldSGP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSGP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSGP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSGP4 *self = (t_FieldSGP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSGP4), &PY_TYPE_DEF(FieldSGP4), module, "FieldSGP4", 0);
          }

          void t_FieldSGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "class_", make_descriptor(FieldSGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "wrapfn_", make_descriptor(t_FieldSGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSGP4::initializeClass, 1)))
              return NULL;
            return t_FieldSGP4::wrap_Object(FieldSGP4(((t_FieldSGP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSGP4_of_(t_FieldSGP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldSGP4_init_(t_FieldSGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldSGP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldSGP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldSGP4_get__parameters_(t_FieldSGP4 *self, void *data)
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
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractConstituentParser::class$ = NULL;
            jmethodID *PythonAbstractConstituentParser::mids$ = NULL;
            bool PythonAbstractConstituentParser::live$ = false;

            jclass PythonAbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_0508018a256edbd9] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_a5bdfcd14307795f] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractConstituentParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAbstractConstituentParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAbstractConstituentParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {
            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args);
            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self);
            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data);
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data);
            static PyGetSetDef t_PythonAbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractConstituentParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstituentParser)[] = {
              { Py_tp_methods, t_PythonAbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractConstituentParser, t_PythonAbstractConstituentParser, PythonAbstractConstituentParser);
            PyObject *t_PythonAbstractConstituentParser::wrap_Object(const PythonAbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractConstituentParser *self = (t_PythonAbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractConstituentParser), &PY_TYPE_DEF(PythonAbstractConstituentParser), module, "PythonAbstractConstituentParser", 1);
            }

            void t_PythonAbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "class_", make_descriptor(PythonAbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "wrapfn_", make_descriptor(t_PythonAbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractConstituentParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAbstractConstituentParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonAbstractConstituentParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAbstractConstituentParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAbstractConstituentParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAbstractConstituentParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAbstractConstituentParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAbstractConstituentParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractConstituentParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractConstituentParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractConstituentParser::wrap_Object(PythonAbstractConstituentParser(((t_PythonAbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractConstituentParser_of_(t_PythonAbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractConstituentParser_finalize(t_PythonAbstractConstituentParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractConstituentParser_pythonExtension(t_PythonAbstractConstituentParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractConstituentParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAbstractConstituentParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAbstractConstituentParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAbstractConstituentParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAbstractConstituentParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractConstituentParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstituentParser::mids$[PythonAbstractConstituentParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static PyObject *t_PythonAbstractConstituentParser_get__self(t_PythonAbstractConstituentParser *self, void *data)
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
            static PyObject *t_PythonAbstractConstituentParser_get__parameters_(t_PythonAbstractConstituentParser *self, void *data)
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
#include "org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SemiDefinitePositiveCholeskyDecomposition::class$ = NULL;
      jmethodID *SemiDefinitePositiveCholeskyDecomposition::mids$ = NULL;
      bool SemiDefinitePositiveCholeskyDecomposition::live$ = false;
      jdouble SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD = (jdouble) 0;

      jclass SemiDefinitePositiveCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_dc02fdb8767f32bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getL_b2eebabce70526d8] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_b2eebabce70526d8] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "POSITIVITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      SemiDefinitePositiveCholeskyDecomposition::SemiDefinitePositiveCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc02fdb8767f32bc, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix SemiDefinitePositiveCholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_b2eebabce70526d8]));
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
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_SemiDefinitePositiveCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_SemiDefinitePositiveCholeskyDecomposition, lT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SemiDefinitePositiveCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_SemiDefinitePositiveCholeskyDecomposition, getLT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SemiDefinitePositiveCholeskyDecomposition)[] = {
        { Py_tp_methods, t_SemiDefinitePositiveCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_SemiDefinitePositiveCholeskyDecomposition_init_ },
        { Py_tp_getset, t_SemiDefinitePositiveCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SemiDefinitePositiveCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SemiDefinitePositiveCholeskyDecomposition, t_SemiDefinitePositiveCholeskyDecomposition, SemiDefinitePositiveCholeskyDecomposition);

      void t_SemiDefinitePositiveCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), &PY_TYPE_DEF(SemiDefinitePositiveCholeskyDecomposition), module, "SemiDefinitePositiveCholeskyDecomposition", 0);
      }

      void t_SemiDefinitePositiveCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "class_", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "wrapfn_", make_descriptor(t_SemiDefinitePositiveCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(SemiDefinitePositiveCholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SemiDefinitePositiveCholeskyDecomposition), "POSITIVITY_THRESHOLD", make_descriptor(SemiDefinitePositiveCholeskyDecomposition::POSITIVITY_THRESHOLD));
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_SemiDefinitePositiveCholeskyDecomposition::wrap_Object(SemiDefinitePositiveCholeskyDecomposition(((t_SemiDefinitePositiveCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SemiDefinitePositiveCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SemiDefinitePositiveCholeskyDecomposition_init_(t_SemiDefinitePositiveCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SemiDefinitePositiveCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SemiDefinitePositiveCholeskyDecomposition(a0, a1));
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

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getL(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_getLT(t_SemiDefinitePositiveCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__l(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SemiDefinitePositiveCholeskyDecomposition_get__lT(t_SemiDefinitePositiveCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEventDetectorsProvider.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetectorsProvider::class$ = NULL;
        jmethodID *PythonEventDetectorsProvider::mids$ = NULL;
        bool PythonEventDetectorsProvider::live$ = false;

        jclass PythonEventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetectorsProvider::PythonEventDetectorsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEventDetectorsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEventDetectorsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEventDetectorsProvider::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self);
        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data);
        static PyGetSetDef t_PythonEventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetectorsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetectorsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetectorsProvider)[] = {
          { Py_tp_methods, t_PythonEventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetectorsProvider_init_ },
          { Py_tp_getset, t_PythonEventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetectorsProvider, t_PythonEventDetectorsProvider, PythonEventDetectorsProvider);

        void t_PythonEventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetectorsProvider), &PY_TYPE_DEF(PythonEventDetectorsProvider), module, "PythonEventDetectorsProvider", 1);
        }

        void t_PythonEventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "class_", make_descriptor(PythonEventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "wrapfn_", make_descriptor(t_PythonEventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetectorsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getEventDetectors0 },
            { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonEventDetectorsProvider_getFieldEventDetectors1 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetectorsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetectorsProvider::wrap_Object(PythonEventDetectorsProvider(((t_PythonEventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetectorsProvider_init_(t_PythonEventDetectorsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetectorsProvider object((jobject) NULL);

          INT_CALL(object = PythonEventDetectorsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetectorsProvider_finalize(t_PythonEventDetectorsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetectorsProvider_pythonExtension(t_PythonEventDetectorsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getEventDetectors0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getEventDetectors", result);
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

        static jobject JNICALL t_PythonEventDetectorsProvider_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
          {
            throwTypeError("getFieldEventDetectors", result);
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

        static void JNICALL t_PythonEventDetectorsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetectorsProvider::mids$[PythonEventDetectorsProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetectorsProvider_get__self(t_PythonEventDetectorsProvider *self, void *data)
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
#include "org/hipparchus/stat/fitting/EmpiricalDistribution.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        ::java::lang::Class *EmpiricalDistribution::class$ = NULL;
        jmethodID *EmpiricalDistribution::mids$ = NULL;
        bool EmpiricalDistribution::live$ = false;
        jint EmpiricalDistribution::DEFAULT_BIN_COUNT = (jint) 0;

        jclass EmpiricalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/fitting/EmpiricalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_e24b125c6ff6cc8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_1c7be4615a4e46b1] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getBinCount_d6ab429752e7c267] = env->getMethodID(cls, "getBinCount", "()I");
            mids$[mid_getBinStats_d751c1a57012b438] = env->getMethodID(cls, "getBinStats", "()Ljava/util/List;");
            mids$[mid_getGeneratorUpperBounds_be783177b060994b] = env->getMethodID(cls, "getGeneratorUpperBounds", "()[D");
            mids$[mid_getNextValue_9981f74b2d109da6] = env->getMethodID(cls, "getNextValue", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSampleStats_ce882cfbdfe8020d] = env->getMethodID(cls, "getSampleStats", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_getUpperBounds_be783177b060994b] = env->getMethodID(cls, "getUpperBounds", "()[D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isLoaded_eee3de00fe971136] = env->getMethodID(cls, "isLoaded", "()Z");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_load_a71c45509eaf92d1] = env->getMethodID(cls, "load", "([D)V");
            mids$[mid_load_44d81342f3d8a712] = env->getMethodID(cls, "load", "(Ljava/io/File;)V");
            mids$[mid_load_9a9c801b84dad3ae] = env->getMethodID(cls, "load", "(Ljava/net/URL;)V");
            mids$[mid_reSeed_f5bbab7e97879358] = env->getMethodID(cls, "reSeed", "(J)V");
            mids$[mid_reseedRandomGenerator_f5bbab7e97879358] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_getKernel_cfe928edfab4d015] = env->getMethodID(cls, "getKernel", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)Lorg/hipparchus/distribution/RealDistribution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_BIN_COUNT = env->getStaticIntField(cls, "DEFAULT_BIN_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EmpiricalDistribution::EmpiricalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

        EmpiricalDistribution::EmpiricalDistribution(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_e24b125c6ff6cc8c, a0.this$)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1c7be4615a4e46b1, a0, a1.this$)) {}

        jdouble EmpiricalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble EmpiricalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jint EmpiricalDistribution::getBinCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getBinCount_d6ab429752e7c267]);
        }

        ::java::util::List EmpiricalDistribution::getBinStats() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBinStats_d751c1a57012b438]));
        }

        JArray< jdouble > EmpiricalDistribution::getGeneratorUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeneratorUpperBounds_be783177b060994b]));
        }

        jdouble EmpiricalDistribution::getNextValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNextValue_9981f74b2d109da6]);
        }

        jdouble EmpiricalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble EmpiricalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary EmpiricalDistribution::getSampleStats() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSampleStats_ce882cfbdfe8020d]));
        }

        jdouble EmpiricalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble EmpiricalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        JArray< jdouble > EmpiricalDistribution::getUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBounds_be783177b060994b]));
        }

        jdouble EmpiricalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean EmpiricalDistribution::isLoaded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLoaded_eee3de00fe971136]);
        }

        jboolean EmpiricalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        void EmpiricalDistribution::load(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_a71c45509eaf92d1], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_44d81342f3d8a712], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::net::URL & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_9a9c801b84dad3ae], a0.this$);
        }

        void EmpiricalDistribution::reSeed(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reSeed_f5bbab7e97879358], a0);
        }

        void EmpiricalDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_f5bbab7e97879358], a0);
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
      namespace fitting {
        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self);
        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args);
        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg);
        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data);
        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data);
        static PyGetSetDef t_EmpiricalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binCount),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, binStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, generatorUpperBounds),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, loaded),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, nextValue),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, sampleStats),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, supportUpperBound),
          DECLARE_GET_FIELD(t_EmpiricalDistribution, upperBounds),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmpiricalDistribution__methods_[] = {
          DECLARE_METHOD(t_EmpiricalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmpiricalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinCount, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getBinStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getGeneratorUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNextValue, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSampleStats, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, getUpperBounds, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isLoaded, METH_NOARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, load, METH_VARARGS),
          DECLARE_METHOD(t_EmpiricalDistribution, reSeed, METH_O),
          DECLARE_METHOD(t_EmpiricalDistribution, reseedRandomGenerator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmpiricalDistribution)[] = {
          { Py_tp_methods, t_EmpiricalDistribution__methods_ },
          { Py_tp_init, (void *) t_EmpiricalDistribution_init_ },
          { Py_tp_getset, t_EmpiricalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmpiricalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EmpiricalDistribution, t_EmpiricalDistribution, EmpiricalDistribution);

        void t_EmpiricalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EmpiricalDistribution), &PY_TYPE_DEF(EmpiricalDistribution), module, "EmpiricalDistribution", 0);
        }

        void t_EmpiricalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "class_", make_descriptor(EmpiricalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "wrapfn_", make_descriptor(t_EmpiricalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(EmpiricalDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmpiricalDistribution), "DEFAULT_BIN_COUNT", make_descriptor(EmpiricalDistribution::DEFAULT_BIN_COUNT));
        }

        static PyObject *t_EmpiricalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmpiricalDistribution::initializeClass, 1)))
            return NULL;
          return t_EmpiricalDistribution::wrap_Object(EmpiricalDistribution(((t_EmpiricalDistribution *) arg)->object.this$));
        }
        static PyObject *t_EmpiricalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmpiricalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EmpiricalDistribution_init_(t_EmpiricalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EmpiricalDistribution object((jobject) NULL);

              INT_CALL(object = EmpiricalDistribution());
              self->object = object;
              break;
            }
           case 1:
            {
              jint a0;
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = EmpiricalDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              EmpiricalDistribution object((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EmpiricalDistribution(a0, a1));
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

        static PyObject *t_EmpiricalDistribution_cumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_density(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getBinCount(t_EmpiricalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBinCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmpiricalDistribution_getBinStats(t_EmpiricalDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::stat::descriptive::PY_TYPE(StreamingStatistics));
        }

        static PyObject *t_EmpiricalDistribution_getGeneratorUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeneratorUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_getNextValue(t_EmpiricalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNextValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalMean(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getNumericalVariance(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSampleStats(t_EmpiricalDistribution *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_EmpiricalDistribution_getSupportLowerBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getSupportUpperBound(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_getUpperBounds(t_EmpiricalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUpperBounds());
          return result.wrap();
        }

        static PyObject *t_EmpiricalDistribution_inverseCumulativeProbability(t_EmpiricalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_isLoaded(t_EmpiricalDistribution *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLoaded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EmpiricalDistribution_isSupportConnected(t_EmpiricalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EmpiricalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EmpiricalDistribution_load(t_EmpiricalDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::io::File a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::net::URL a0((jobject) NULL);

              if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
              {
                OBJ_CALL(self->object.load(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "load", args);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reSeed(t_EmpiricalDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reSeed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reSeed", arg);
          return NULL;
        }

        static PyObject *t_EmpiricalDistribution_reseedRandomGenerator(t_EmpiricalDistribution *self, PyObject *arg)
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

        static PyObject *t_EmpiricalDistribution_get__binCount(t_EmpiricalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBinCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmpiricalDistribution_get__binStats(t_EmpiricalDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBinStats());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__generatorUpperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeneratorUpperBounds());
          return value.wrap();
        }

        static PyObject *t_EmpiricalDistribution_get__loaded(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLoaded());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__nextValue(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNextValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalMean(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__numericalVariance(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__sampleStats(t_EmpiricalDistribution *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSampleStats());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportConnected(t_EmpiricalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportLowerBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__supportUpperBound(t_EmpiricalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EmpiricalDistribution_get__upperBounds(t_EmpiricalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUpperBounds());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionAndAttitudeProvider::class$ = NULL;
          jmethodID *ThrustDirectionAndAttitudeProvider::mids$ = NULL;
          bool ThrustDirectionAndAttitudeProvider::live$ = false;

          jclass ThrustDirectionAndAttitudeProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_buildFromCustomAttitude_630b12cc4bbba462] = env->getStaticMethodID(cls, "buildFromCustomAttitude", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInFrame_f9da80b6cff579e4] = env->getStaticMethodID(cls, "buildFromDirectionInFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromDirectionInLOF_867467bf597b045b] = env->getStaticMethodID(cls, "buildFromDirectionInLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_buildFromFixedDirectionInSatelliteFrame_063651f4feb64ece] = env->getStaticMethodID(cls, "buildFromFixedDirectionInSatelliteFrame", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
              mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
              mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
              mids$[mid_getManeuverAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getManeuverAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
              mids$[mid_getThrusterAxisInSatelliteFrame_032312bdeb3f2f93] = env->getMethodID(cls, "getThrusterAxisInSatelliteFrame", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAttitudeFromFrame_a02177519e1b6a45] = env->getMethodID(cls, "getAttitudeFromFrame", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromCustomAttitude_630b12cc4bbba462], a0.this$, a1.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInFrame_f9da80b6cff579e4], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(const ::org::orekit::frames::LOF & a0, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromDirectionInLOF_867467bf597b045b], a0.this$, a1.this$, a2.this$));
          }

          ThrustDirectionAndAttitudeProvider ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ThrustDirectionAndAttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_buildFromFixedDirectionInSatelliteFrame_063651f4feb64ece], a0.this$));
          }

          ::org::orekit::attitudes::FieldAttitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::Attitude ThrustDirectionAndAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::attitudes::AttitudeProvider ThrustDirectionAndAttitudeProvider::getManeuverAttitudeProvider() const
          {
            return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getManeuverAttitudeProvider_2f73d1f4460b8d6c]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionAndAttitudeProvider::getThrusterAxisInSatelliteFrame() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrusterAxisInSatelliteFrame_032312bdeb3f2f93]));
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
          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data);
          static PyGetSetDef t_ThrustDirectionAndAttitudeProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, maneuverAttitudeProvider),
            DECLARE_GET_FIELD(t_ThrustDirectionAndAttitudeProvider, thrusterAxisInSatelliteFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ThrustDirectionAndAttitudeProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromCustomAttitude, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInFrame, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromDirectionInLOF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, buildFromFixedDirectionInSatelliteFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getAttitude, METH_VARARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getManeuverAttitudeProvider, METH_NOARGS),
            DECLARE_METHOD(t_ThrustDirectionAndAttitudeProvider, getThrusterAxisInSatelliteFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionAndAttitudeProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionAndAttitudeProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ThrustDirectionAndAttitudeProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionAndAttitudeProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionAndAttitudeProvider, t_ThrustDirectionAndAttitudeProvider, ThrustDirectionAndAttitudeProvider);

          void t_ThrustDirectionAndAttitudeProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionAndAttitudeProvider), &PY_TYPE_DEF(ThrustDirectionAndAttitudeProvider), module, "ThrustDirectionAndAttitudeProvider", 0);
          }

          void t_ThrustDirectionAndAttitudeProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "class_", make_descriptor(ThrustDirectionAndAttitudeProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "wrapfn_", make_descriptor(t_ThrustDirectionAndAttitudeProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionAndAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionAndAttitudeProvider::wrap_Object(ThrustDirectionAndAttitudeProvider(((t_ThrustDirectionAndAttitudeProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionAndAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionAndAttitudeProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromCustomAttitude(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromCustomAttitude(a0, a1));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromCustomAttitude", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInFrame(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInFrame(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInFrame", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromDirectionInLOF(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::frames::LOF a0((jobject) NULL);
            ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::LOF::initializeClass, ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromDirectionInLOF(a0, a1, a2));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromDirectionInLOF", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_buildFromFixedDirectionInSatelliteFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ThrustDirectionAndAttitudeProvider result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::buildFromFixedDirectionInSatelliteFrame(a0));
              return t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "buildFromFixedDirectionInSatelliteFrame", arg);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getAttitude(t_ThrustDirectionAndAttitudeProvider *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }
              }
              {
                ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
                  return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
            return NULL;
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getManeuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_getThrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__maneuverAttitudeProvider(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getManeuverAttitudeProvider());
            return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
          }

          static PyObject *t_ThrustDirectionAndAttitudeProvider_get__thrusterAxisInSatelliteFrame(t_ThrustDirectionAndAttitudeProvider *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrusterAxisInSatelliteFrame());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovariance::class$ = NULL;
              jmethodID *OrbitCovariance::mids$ = NULL;
              bool OrbitCovariance::live$ = false;

              jclass OrbitCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_07cdcdace9ceb3ee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getType_53d3e424bd18099f] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovariance::OrbitCovariance(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07cdcdace9ceb3ee, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::time::AbsoluteDate OrbitCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
              }

              ::org::hipparchus::linear::RealMatrix OrbitCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_b2eebabce70526d8]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_53d3e424bd18099f]));
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
              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data);
              static PyGetSetDef t_OrbitCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovariance, date),
                DECLARE_GET_FIELD(t_OrbitCovariance, matrix),
                DECLARE_GET_FIELD(t_OrbitCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovariance__methods_[] = {
                DECLARE_METHOD(t_OrbitCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovariance)[] = {
                { Py_tp_methods, t_OrbitCovariance__methods_ },
                { Py_tp_init, (void *) t_OrbitCovariance_init_ },
                { Py_tp_getset, t_OrbitCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovariance, t_OrbitCovariance, OrbitCovariance);

              void t_OrbitCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovariance), &PY_TYPE_DEF(OrbitCovariance), module, "OrbitCovariance", 0);
              }

              void t_OrbitCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "class_", make_descriptor(OrbitCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "wrapfn_", make_descriptor(t_OrbitCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovariance::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovariance::wrap_Object(OrbitCovariance(((t_OrbitCovariance *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< ::java::lang::String > a3((jobject) NULL);
                jint a4;
                OrbitCovariance object((jobject) NULL);

                if (!parseArgs(args, "KKk[sI", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = OrbitCovariance(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
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
#include "java/util/ArrayList.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayList::class$ = NULL;
    jmethodID *ArrayList::mids$ = NULL;
    bool ArrayList::live$ = false;

    jclass ArrayList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_600fc0bdbd049172] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_34282804c6c39090] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_ensureCapacity_8fd427ab23829bf5] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_35009debda6d2ece] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_9aa1a0d21cdeb90e] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_9aa1a0d21cdeb90e] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_7bb80a6d83d87d72] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_14737c756caa849d] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_35009debda6d2ece] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_61d64368c58b84f3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_61d64368c58b84f3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_469b6e93ddb5a642] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_bee08e6612998c92] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_4e3c0741dd4bb632] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_2ab86268ef7a6631] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_f4767af6a3829fbc] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_trimToSize_ff7cb6c242604316] = env->getMethodID(cls, "trimToSize", "()V");
        mids$[mid_removeRange_b5d23e6c0858e8ed] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayList::ArrayList() : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    ArrayList::ArrayList(jint a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

    ArrayList::ArrayList(const ::java::util::Collection & a0) : ::java::util::AbstractList(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

    jboolean ArrayList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    void ArrayList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_600fc0bdbd049172], a0, a1.this$);
    }

    jboolean ArrayList::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    jboolean ArrayList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_34282804c6c39090], a0, a1.this$);
    }

    void ArrayList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    ::java::lang::Object ArrayList::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean ArrayList::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    void ArrayList::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_8fd427ab23829bf5], a0);
    }

    jboolean ArrayList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object ArrayList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_35009debda6d2ece], a0));
    }

    jint ArrayList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint ArrayList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_9aa1a0d21cdeb90e], a0.this$);
    }

    jboolean ArrayList::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator ArrayList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    jint ArrayList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_9aa1a0d21cdeb90e], a0.this$);
    }

    ::java::util::ListIterator ArrayList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_7bb80a6d83d87d72]));
    }

    ::java::util::ListIterator ArrayList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_14737c756caa849d], a0));
    }

    ::java::lang::Object ArrayList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_35009debda6d2ece], a0));
    }

    jboolean ArrayList::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jboolean ArrayList::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_61d64368c58b84f3], a0.this$);
    }

    jboolean ArrayList::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_61d64368c58b84f3], a0.this$);
    }

    ::java::lang::Object ArrayList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_469b6e93ddb5a642], a0, a1.this$));
    }

    jint ArrayList::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    void ArrayList::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_bee08e6612998c92], a0.this$);
    }

    ::java::util::Spliterator ArrayList::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }

    ::java::util::List ArrayList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_4e3c0741dd4bb632], a0, a1));
    }

    JArray< ::java::lang::Object > ArrayList::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_2ab86268ef7a6631]));
    }

    JArray< ::java::lang::Object > ArrayList::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_f4767af6a3829fbc], a0.this$));
    }

    void ArrayList::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_ff7cb6c242604316]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args);
    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_clone(t_ArrayList *self);
    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg);
    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args);
    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self);
    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data);
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data);
    static PyGetSetDef t_ArrayList__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayList, empty),
      DECLARE_GET_FIELD(t_ArrayList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayList__methods_[] = {
      DECLARE_METHOD(t_ArrayList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayList, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayList, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, ensureCapacity, METH_O),
      DECLARE_METHOD(t_ArrayList, equals, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, get, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, set, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, sort, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, subList, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, toArray, METH_VARARGS),
      DECLARE_METHOD(t_ArrayList, trimToSize, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayList)[] = {
      { Py_tp_methods, t_ArrayList__methods_ },
      { Py_tp_init, (void *) t_ArrayList_init_ },
      { Py_tp_getset, t_ArrayList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayList *)) get_generic_iterator< t_ArrayList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractList),
      NULL
    };

    DEFINE_TYPE(ArrayList, t_ArrayList, ArrayList);
    PyObject *t_ArrayList::wrap_Object(const ArrayList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayList *self = (t_ArrayList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayList::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayList), &PY_TYPE_DEF(ArrayList), module, "ArrayList", 0);
    }

    void t_ArrayList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "class_", make_descriptor(ArrayList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "wrapfn_", make_descriptor(t_ArrayList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayList::initializeClass, 1)))
        return NULL;
      return t_ArrayList::wrap_Object(ArrayList(((t_ArrayList *) arg)->object.this$));
    }
    static PyObject *t_ArrayList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayList_of_(t_ArrayList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayList_init_(t_ArrayList *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayList object((jobject) NULL);

          INT_CALL(object = ArrayList());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayList(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayList object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayList(a0));
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

    static PyObject *t_ArrayList_add(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayList_addAll(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayList_clear(t_ArrayList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayList_clone(t_ArrayList *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayList_contains(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayList_ensureCapacity(t_ArrayList *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "ensureCapacity", arg);
      return NULL;
    }

    static PyObject *t_ArrayList_equals(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ArrayList_get(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_ArrayList_hashCode(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ArrayList_indexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_ArrayList_isEmpty(t_ArrayList *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayList_iterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayList_lastIndexOf(t_ArrayList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_ArrayList_listIterator(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "listIterator", args, 2);
    }

    static PyObject *t_ArrayList_remove(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayList_removeAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayList_retainAll(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayList_set(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "set", args, 2);
    }

    static PyObject *t_ArrayList_size(t_ArrayList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayList_sort(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "sort", args, 2);
    }

    static PyObject *t_ArrayList_spliterator(t_ArrayList *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayList_subList(t_ArrayList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "subList", args, 2);
    }

    static PyObject *t_ArrayList_toArray(t_ArrayList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayList), (PyObject *) self, "toArray", args, 2);
    }

    static PyObject *t_ArrayList_trimToSize(t_ArrayList *self)
    {
      OBJ_CALL(self->object.trimToSize());
      Py_RETURN_NONE;
    }
    static PyObject *t_ArrayList_get__parameters_(t_ArrayList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayList_get__empty(t_ArrayList *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PoleCorrection::class$ = NULL;
      jmethodID *PoleCorrection::mids$ = NULL;
      bool PoleCorrection::live$ = false;
      PoleCorrection *PoleCorrection::NULL_CORRECTION = NULL;

      jclass PoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_getXp_9981f74b2d109da6] = env->getMethodID(cls, "getXp", "()D");
          mids$[mid_getYp_9981f74b2d109da6] = env->getMethodID(cls, "getYp", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NULL_CORRECTION = new PoleCorrection(env->getStaticObjectField(cls, "NULL_CORRECTION", "Lorg/orekit/frames/PoleCorrection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoleCorrection::PoleCorrection(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

      jdouble PoleCorrection::getXp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXp_9981f74b2d109da6]);
      }

      jdouble PoleCorrection::getYp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYp_9981f74b2d109da6]);
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
      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self);
      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data);
      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data);
      static PyGetSetDef t_PoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_PoleCorrection, xp),
        DECLARE_GET_FIELD(t_PoleCorrection, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PoleCorrection__methods_[] = {
        DECLARE_METHOD(t_PoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_PoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoleCorrection)[] = {
        { Py_tp_methods, t_PoleCorrection__methods_ },
        { Py_tp_init, (void *) t_PoleCorrection_init_ },
        { Py_tp_getset, t_PoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoleCorrection, t_PoleCorrection, PoleCorrection);

      void t_PoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(PoleCorrection), &PY_TYPE_DEF(PoleCorrection), module, "PoleCorrection", 0);
      }

      void t_PoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "class_", make_descriptor(PoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "wrapfn_", make_descriptor(t_PoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "boxfn_", make_descriptor(boxObject));
        env->getClass(PoleCorrection::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoleCorrection), "NULL_CORRECTION", make_descriptor(t_PoleCorrection::wrap_Object(*PoleCorrection::NULL_CORRECTION)));
      }

      static PyObject *t_PoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoleCorrection::initializeClass, 1)))
          return NULL;
        return t_PoleCorrection::wrap_Object(PoleCorrection(((t_PoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_PoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoleCorrection_init_(t_PoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        PoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = PoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoleCorrection_getXp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_getYp(t_PoleCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYp());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_PoleCorrection_get__xp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXp());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_PoleCorrection_get__yp(t_PoleCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYp());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
