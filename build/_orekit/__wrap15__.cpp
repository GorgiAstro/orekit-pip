#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessagesParser::class$ = NULL;
          jmethodID *MessagesParser::mids$ = NULL;
          bool MessagesParser::live$ = false;

          jclass MessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_parse_dfaea3b414bdfea5] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;Z)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_getMessageType_40b3eb4c621c5237] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_997e1716ef46e2d3] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MessagesParser::MessagesParser(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

          ::org::orekit::gnss::metric::messages::ParsedMessage MessagesParser::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jboolean a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_dfaea3b414bdfea5], a0.this$, a1));
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
          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args);

          static PyMethodDef t_MessagesParser__methods_[] = {
            DECLARE_METHOD(t_MessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessagesParser)[] = {
            { Py_tp_methods, t_MessagesParser__methods_ },
            { Py_tp_init, (void *) t_MessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessagesParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessagesParser, t_MessagesParser, MessagesParser);

          void t_MessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(MessagesParser), &PY_TYPE_DEF(MessagesParser), module, "MessagesParser", 0);
          }

          void t_MessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "class_", make_descriptor(MessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "wrapfn_", make_descriptor(t_MessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessagesParser::initializeClass, 1)))
              return NULL;
            return t_MessagesParser::wrap_Object(MessagesParser(((t_MessagesParser *) arg)->object.this$));
          }
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MessagesParser(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationDataSet::class$ = NULL;
          jmethodID *ObservationDataSet::mids$ = NULL;
          bool ObservationDataSet::live$ = false;

          jclass ObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_125cb626199f9e9a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/time/AbsoluteDate;IDLjava/util/List;)V");
              mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEventFlag_d6ab429752e7c267] = env->getMethodID(cls, "getEventFlag", "()I");
              mids$[mid_getObservationData_d751c1a57012b438] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getRcvrClkOffset_9981f74b2d109da6] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatellite_25eb770be3a2890a] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationDataSet::ObservationDataSet(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_125cb626199f9e9a, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate ObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
          }

          jint ObservationDataSet::getEventFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getEventFlag_d6ab429752e7c267]);
          }

          ::java::util::List ObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_d751c1a57012b438]));
          }

          jdouble ObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_9981f74b2d109da6]);
          }

          ::org::orekit::gnss::SatInSystem ObservationDataSet::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_25eb770be3a2890a]));
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
          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self);
          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data);
          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data);
          static PyGetSetDef t_ObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationDataSet, date),
            DECLARE_GET_FIELD(t_ObservationDataSet, eventFlag),
            DECLARE_GET_FIELD(t_ObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_ObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_ObservationDataSet, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_ObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getEventFlag, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_ObservationDataSet, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationDataSet)[] = {
            { Py_tp_methods, t_ObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_ObservationDataSet_init_ },
            { Py_tp_getset, t_ObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationDataSet, t_ObservationDataSet, ObservationDataSet);

          void t_ObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationDataSet), &PY_TYPE_DEF(ObservationDataSet), module, "ObservationDataSet", 0);
          }

          void t_ObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "class_", make_descriptor(ObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "wrapfn_", make_descriptor(t_ObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_ObservationDataSet::wrap_Object(ObservationDataSet(((t_ObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_ObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationDataSet_init_(t_ObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jint a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            ObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "kkIDK", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationDataSet_getDate(t_ObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_getEventFlag(t_ObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEventFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationDataSet_getObservationData(t_ObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_ObservationDataSet_getRcvrClkOffset(t_ObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationDataSet_getSatellite(t_ObservationDataSet *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_ObservationDataSet_get__date(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__eventFlag(t_ObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEventFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationDataSet_get__observationData(t_ObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ObservationDataSet_get__rcvrClkOffset(t_ObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ObservationDataSet_get__satellite(t_ObservationDataSet *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldElevationExtremumDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationExtremumDetector::class$ = NULL;
        jmethodID *FieldElevationExtremumDetector::mids$ = NULL;
        bool FieldElevationExtremumDetector::live$ = false;

        jclass FieldElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_436068c1e3731f99] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_81061941a46d050d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevation_ac6fccc69d1b2d9e] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTopocentricFrame_d0e5c3c9d5578806] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_b0e426ca52aff9f3] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_436068c1e3731f99, a0.this$, a1.this$)) {}

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_81061941a46d050d, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::getElevation(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_d0e5c3c9d5578806]));
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
        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args);
        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self);
        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data);
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_FieldElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationExtremumDetector)[] = {
          { Py_tp_methods, t_FieldElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationExtremumDetector_init_ },
          { Py_tp_getset, t_FieldElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationExtremumDetector, t_FieldElevationExtremumDetector, FieldElevationExtremumDetector);
        PyObject *t_FieldElevationExtremumDetector::wrap_Object(const FieldElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationExtremumDetector), &PY_TYPE_DEF(FieldElevationExtremumDetector), module, "FieldElevationExtremumDetector", 0);
        }

        void t_FieldElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "class_", make_descriptor(FieldElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "wrapfn_", make_descriptor(t_FieldElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationExtremumDetector::wrap_Object(FieldElevationExtremumDetector(((t_FieldElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSatelliteEphemeris::class$ = NULL;
              jmethodID *AemSatelliteEphemeris::mids$ = NULL;
              bool AemSatelliteEphemeris::live$ = false;

              jclass AemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d6d7b1002c69c04a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSatelliteEphemeris::AemSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6d7b1002c69c04a, a0.this$, a1.this$)) {}

              ::java::lang::String AemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
              }

              ::java::util::List AemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AemSatelliteEphemeris::getStop() const
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
          namespace adm {
            namespace aem {
              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self);
              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data);
              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AemSatelliteEphemeris, t_AemSatelliteEphemeris, AemSatelliteEphemeris);

              void t_AemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSatelliteEphemeris), &PY_TYPE_DEF(AemSatelliteEphemeris), module, "AemSatelliteEphemeris", 0);
              }

              void t_AemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "class_", make_descriptor(AemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "wrapfn_", make_descriptor(t_AemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AemSatelliteEphemeris::wrap_Object(AemSatelliteEphemeris(((t_AemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemSatelliteEphemeris_init_(t_AemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AemSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSatelliteEphemeris_getId(t_AemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getSegments(t_AemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment));
              }

              static PyObject *t_AemSatelliteEphemeris_getStart(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_getStop(t_AemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSatelliteEphemeris_get__id(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__segments(t_AemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__start(t_AemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSatelliteEphemeris_get__stop(t_AemSatelliteEphemeris *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/PythonHatchFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonHatchFilter::class$ = NULL;
          jmethodID *PythonHatchFilter::mids$ = NULL;
          bool PythonHatchFilter::live$ = false;

          jclass PythonHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonHatchFilter");

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
        namespace filtering {
          static PyObject *t_PythonHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonHatchFilter_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PythonHatchFilter__methods_[] = {
            DECLARE_METHOD(t_PythonHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonHatchFilter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonHatchFilter)[] = {
            { Py_tp_methods, t_PythonHatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(PythonHatchFilter, t_PythonHatchFilter, PythonHatchFilter);

          void t_PythonHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonHatchFilter), &PY_TYPE_DEF(PythonHatchFilter), module, "PythonHatchFilter", 0);
          }

          void t_PythonHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "class_", make_descriptor(PythonHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "wrapfn_", make_descriptor(t_PythonHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PythonHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonHatchFilter::initializeClass, 1)))
              return NULL;
            return t_PythonHatchFilter::wrap_Object(PythonHatchFilter(((t_PythonHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonHatchFilter::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
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
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalizeMetadata_1564c35f88556e3e] = env->getMethodID(cls, "finalizeMetadata", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getCenter_540df4afb4ddb1b4] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getFrameEpoch_80e11148db499dda] = env->getMethodID(cls, "getFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLaunchNumber_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_d2c8eb4129821f0e] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_d2c8eb4129821f0e] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCenter_9fc8078d81282211] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setFrameEpoch_8497861b879c83f7] = env->getMethodID(cls, "setFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setFrameEpochString_105e1eadb709d9ac] = env->getMethodID(cls, "setFrameEpochString", "(Ljava/lang/String;)V");
                mids$[mid_setObjectID_105e1eadb709d9ac] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmCommonMetadata::OdmCommonMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void OdmCommonMetadata::finalizeMetadata(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_finalizeMetadata_1564c35f88556e3e], a0.this$);
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade OdmCommonMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_540df4afb4ddb1b4]));
            }

            ::org::orekit::frames::Frame OdmCommonMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
            }

            ::org::orekit::time::AbsoluteDate OdmCommonMetadata::getFrameEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFrameEpoch_80e11148db499dda]));
            }

            jint OdmCommonMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_d6ab429752e7c267]);
            }

            ::java::lang::String OdmCommonMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_d2c8eb4129821f0e]));
            }

            jint OdmCommonMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_d6ab429752e7c267]);
            }

            ::java::lang::String OdmCommonMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade OdmCommonMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_0fc1562b68204151]));
            }

            void OdmCommonMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_9fc8078d81282211], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpoch_8497861b879c83f7], a0.this$);
            }

            void OdmCommonMetadata::setFrameEpochString(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameEpochString_105e1eadb709d9ac], a0.this$);
            }

            void OdmCommonMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_105e1eadb709d9ac], a0.this$);
            }

            void OdmCommonMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_2c8b859a72c0094e], a0.this$);
            }

            void OdmCommonMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
#include "org/hipparchus/linear/FieldLUDecomposer.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposer::class$ = NULL;
      jmethodID *FieldLUDecomposer::mids$ = NULL;
      bool FieldLUDecomposer::live$ = false;

      jclass FieldLUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_eea5b130cde95d83] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_eea5b130cde95d83], a0.this$));
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
      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args);
      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data);
      static PyGetSetDef t_FieldLUDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposer)[] = {
        { Py_tp_methods, t_FieldLUDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldLUDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposer, t_FieldLUDecomposer, FieldLUDecomposer);
      PyObject *t_FieldLUDecomposer::wrap_Object(const FieldLUDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposer), &PY_TYPE_DEF(FieldLUDecomposer), module, "FieldLUDecomposer", 0);
      }

      void t_FieldLUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "class_", make_descriptor(FieldLUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "wrapfn_", make_descriptor(t_FieldLUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposer::wrap_Object(FieldLUDecomposer(((t_FieldLUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SphericalCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphericalCoordinates::class$ = NULL;
          jmethodID *SphericalCoordinates::mids$ = NULL;
          bool SphericalCoordinates::live$ = false;

          jclass SphericalCoordinates::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphericalCoordinates");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_30f8886dfb88a63c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getCartesian_032312bdeb3f2f93] = env->getMethodID(cls, "getCartesian", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPhi_9981f74b2d109da6] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getR_9981f74b2d109da6] = env->getMethodID(cls, "getR", "()D");
              mids$[mid_getTheta_9981f74b2d109da6] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_toCartesianGradient_51f624c89851da7e] = env->getMethodID(cls, "toCartesianGradient", "([D)[D");
              mids$[mid_toCartesianHessian_d97bb40bc481bc0d] = env->getMethodID(cls, "toCartesianHessian", "([[D[D)[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalCoordinates::SphericalCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30f8886dfb88a63c, a0.this$)) {}

          SphericalCoordinates::SphericalCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SphericalCoordinates::getCartesian() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesian_032312bdeb3f2f93]));
          }

          jdouble SphericalCoordinates::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_9981f74b2d109da6]);
          }

          jdouble SphericalCoordinates::getR() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getR_9981f74b2d109da6]);
          }

          jdouble SphericalCoordinates::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_9981f74b2d109da6]);
          }

          JArray< jdouble > SphericalCoordinates::toCartesianGradient(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toCartesianGradient_51f624c89851da7e], a0.this$));
          }

          JArray< JArray< jdouble > > SphericalCoordinates::toCartesianHessian(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_toCartesianHessian_d97bb40bc481bc0d], a0.this$, a1.this$));
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
        namespace threed {
          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self);
          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg);
          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args);
          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data);
          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data);
          static PyGetSetDef t_SphericalCoordinates__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalCoordinates, cartesian),
            DECLARE_GET_FIELD(t_SphericalCoordinates, phi),
            DECLARE_GET_FIELD(t_SphericalCoordinates, r),
            DECLARE_GET_FIELD(t_SphericalCoordinates, theta),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalCoordinates__methods_[] = {
            DECLARE_METHOD(t_SphericalCoordinates, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalCoordinates, getCartesian, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getR, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianGradient, METH_O),
            DECLARE_METHOD(t_SphericalCoordinates, toCartesianHessian, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalCoordinates)[] = {
            { Py_tp_methods, t_SphericalCoordinates__methods_ },
            { Py_tp_init, (void *) t_SphericalCoordinates_init_ },
            { Py_tp_getset, t_SphericalCoordinates__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalCoordinates)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphericalCoordinates, t_SphericalCoordinates, SphericalCoordinates);

          void t_SphericalCoordinates::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalCoordinates), &PY_TYPE_DEF(SphericalCoordinates), module, "SphericalCoordinates", 0);
          }

          void t_SphericalCoordinates::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "class_", make_descriptor(SphericalCoordinates::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "wrapfn_", make_descriptor(t_SphericalCoordinates::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalCoordinates), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalCoordinates_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalCoordinates::initializeClass, 1)))
              return NULL;
            return t_SphericalCoordinates::wrap_Object(SphericalCoordinates(((t_SphericalCoordinates *) arg)->object.this$));
          }
          static PyObject *t_SphericalCoordinates_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalCoordinates::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphericalCoordinates_init_(t_SphericalCoordinates *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = SphericalCoordinates(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                SphericalCoordinates object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SphericalCoordinates(a0, a1, a2));
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

          static PyObject *t_SphericalCoordinates_getCartesian(t_SphericalCoordinates *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_SphericalCoordinates_getPhi(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getR(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getR());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_getTheta(t_SphericalCoordinates *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalCoordinates_toCartesianGradient(t_SphericalCoordinates *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.toCartesianGradient(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianGradient", arg);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_toCartesianHessian(t_SphericalCoordinates *self, PyObject *args)
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "[[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toCartesianHessian(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError((PyObject *) self, "toCartesianHessian", args);
            return NULL;
          }

          static PyObject *t_SphericalCoordinates_get__cartesian(t_SphericalCoordinates *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCartesian());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_SphericalCoordinates_get__phi(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__r(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getR());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalCoordinates_get__theta(t_SphericalCoordinates *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractAlmanac::class$ = NULL;
            jmethodID *AbstractAlmanac::mids$ = NULL;
            bool AbstractAlmanac::live$ = false;

            jclass AbstractAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_9981f74b2d109da6] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_9981f74b2d109da6] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_9981f74b2d109da6] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_9981f74b2d109da6] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_9981f74b2d109da6] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_9981f74b2d109da6] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_9981f74b2d109da6] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractAlmanac::AbstractAlmanac(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

            jdouble AbstractAlmanac::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
            }

            jdouble AbstractAlmanac::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
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
            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data);
            static PyGetSetDef t_AbstractAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractAlmanac, af2),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cic),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cis),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crs),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cuc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cus),
              DECLARE_GET_FIELD(t_AbstractAlmanac, iDot),
              DECLARE_GET_FIELD(t_AbstractAlmanac, meanMotion),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractAlmanac__methods_[] = {
              DECLARE_METHOD(t_AbstractAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getMeanMotion, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractAlmanac)[] = {
              { Py_tp_methods, t_AbstractAlmanac__methods_ },
              { Py_tp_init, (void *) t_AbstractAlmanac_init_ },
              { Py_tp_getset, t_AbstractAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractAlmanac, t_AbstractAlmanac, AbstractAlmanac);

            void t_AbstractAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractAlmanac), &PY_TYPE_DEF(AbstractAlmanac), module, "AbstractAlmanac", 0);
            }

            void t_AbstractAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "class_", make_descriptor(AbstractAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "wrapfn_", make_descriptor(t_AbstractAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractAlmanac::initializeClass, 1)))
                return NULL;
              return t_AbstractAlmanac::wrap_Object(AbstractAlmanac(((t_AbstractAlmanac *) arg)->object.this$));
            }
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractAlmanac object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractAlmanac(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
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
#include "org/orekit/rugged/raster/PythonUpdatableTile.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *PythonUpdatableTile::class$ = NULL;
        jmethodID *PythonUpdatableTile::mids$ = NULL;
        bool PythonUpdatableTile::live$ = false;

        jclass PythonUpdatableTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/PythonUpdatableTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setElevation_e98d7b3e971b6087] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_d690bb44b994cfa6] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonUpdatableTile::PythonUpdatableTile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonUpdatableTile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonUpdatableTile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonUpdatableTile::pythonExtension(jlong a0) const
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
    namespace rugged {
      namespace raster {
        static PyObject *t_PythonUpdatableTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonUpdatableTile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonUpdatableTile_init_(t_PythonUpdatableTile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonUpdatableTile_finalize(t_PythonUpdatableTile *self);
        static PyObject *t_PythonUpdatableTile_pythonExtension(t_PythonUpdatableTile *self, PyObject *args);
        static void JNICALL t_PythonUpdatableTile_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonUpdatableTile_setElevation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jdouble a2);
        static void JNICALL t_PythonUpdatableTile_setGeometry2(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5);
        static PyObject *t_PythonUpdatableTile_get__self(t_PythonUpdatableTile *self, void *data);
        static PyGetSetDef t_PythonUpdatableTile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonUpdatableTile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonUpdatableTile__methods_[] = {
          DECLARE_METHOD(t_PythonUpdatableTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonUpdatableTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonUpdatableTile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonUpdatableTile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonUpdatableTile)[] = {
          { Py_tp_methods, t_PythonUpdatableTile__methods_ },
          { Py_tp_init, (void *) t_PythonUpdatableTile_init_ },
          { Py_tp_getset, t_PythonUpdatableTile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonUpdatableTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonUpdatableTile, t_PythonUpdatableTile, PythonUpdatableTile);

        void t_PythonUpdatableTile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonUpdatableTile), &PY_TYPE_DEF(PythonUpdatableTile), module, "PythonUpdatableTile", 1);
        }

        void t_PythonUpdatableTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUpdatableTile), "class_", make_descriptor(PythonUpdatableTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUpdatableTile), "wrapfn_", make_descriptor(t_PythonUpdatableTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUpdatableTile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonUpdatableTile::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonUpdatableTile_pythonDecRef0 },
            { "setElevation", "(IID)V", (void *) t_PythonUpdatableTile_setElevation1 },
            { "setGeometry", "(DDDDII)V", (void *) t_PythonUpdatableTile_setGeometry2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonUpdatableTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonUpdatableTile::initializeClass, 1)))
            return NULL;
          return t_PythonUpdatableTile::wrap_Object(PythonUpdatableTile(((t_PythonUpdatableTile *) arg)->object.this$));
        }
        static PyObject *t_PythonUpdatableTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonUpdatableTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonUpdatableTile_init_(t_PythonUpdatableTile *self, PyObject *args, PyObject *kwds)
        {
          PythonUpdatableTile object((jobject) NULL);

          INT_CALL(object = PythonUpdatableTile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonUpdatableTile_finalize(t_PythonUpdatableTile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonUpdatableTile_pythonExtension(t_PythonUpdatableTile *self, PyObject *args)
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

        static void JNICALL t_PythonUpdatableTile_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonUpdatableTile::mids$[PythonUpdatableTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonUpdatableTile::mids$[PythonUpdatableTile::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonUpdatableTile_setElevation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonUpdatableTile::mids$[PythonUpdatableTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "setElevation", "iid", (int) a0, (int) a1, (double) a2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonUpdatableTile_setGeometry2(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonUpdatableTile::mids$[PythonUpdatableTile::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "setGeometry", "ddddii", (double) a0, (double) a1, (double) a2, (double) a3, (int) a4, (int) a5);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonUpdatableTile_get__self(t_PythonUpdatableTile *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustDirectionProvider::class$ = NULL;
          jmethodID *ThrustDirectionProvider::mids$ = NULL;
          bool ThrustDirectionProvider::live$ = false;

          jclass ThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeThrustDirection_f778d81301c7076a] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_f778d81301c7076a], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ThrustDirectionProvider, t_ThrustDirectionProvider, ThrustDirectionProvider);

          void t_ThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustDirectionProvider), &PY_TYPE_DEF(ThrustDirectionProvider), module, "ThrustDirectionProvider", 0);
          }

          void t_ThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "class_", make_descriptor(ThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "wrapfn_", make_descriptor(t_ThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ThrustDirectionProvider::wrap_Object(ThrustDirectionProvider(((t_ThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustDirectionProvider_computeThrustDirection(t_ThrustDirectionProvider *self, PyObject *args)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.computeThrustDirection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeThrustDirection", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/HashSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Dcb::class$ = NULL;
        jmethodID *Dcb::mids$ = NULL;
        bool Dcb::live$ = false;

        jclass Dcb::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Dcb");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDcbLine_fa57b3bfb6279c6a] = env->getMethodID(cls, "addDcbLine", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_getAvailableObservationPairs_1998857fa494dab0] = env->getMethodID(cls, "getAvailableObservationPairs", "()Ljava/util/HashSet;");
            mids$[mid_getDcb_3fd9035881e68d06] = env->getMethodID(cls, "getDcb", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getDcb_59fef3f2ed009dbd] = env->getMethodID(cls, "getDcb", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMaximumValidDateForObservationPair_a436120993303ce2] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMaximumValidDateForObservationPair_8b64bfed1fcdfdd9] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_a436120993303ce2] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_8b64bfed1fcdfdd9] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Dcb::Dcb() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void Dcb::addDcbLine(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcbLine_fa57b3bfb6279c6a], a0.this$, a1.this$, a2.this$, a3.this$, a4);
        }

        ::java::util::HashSet Dcb::getAvailableObservationPairs() const
        {
          return ::java::util::HashSet(env->callObjectMethod(this$, mids$[mid_getAvailableObservationPairs_1998857fa494dab0]));
        }

        jdouble Dcb::getDcb(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_3fd9035881e68d06], a0.this$, a1.this$, a2.this$);
        }

        jdouble Dcb::getDcb(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_59fef3f2ed009dbd], a0.this$, a1.this$, a2.this$);
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_a436120993303ce2], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_8b64bfed1fcdfdd9], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_a436120993303ce2], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_8b64bfed1fcdfdd9], a0.this$, a1.this$));
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
      namespace sinex {
        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self);
        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data);
        static PyGetSetDef t_Dcb__fields_[] = {
          DECLARE_GET_FIELD(t_Dcb, availableObservationPairs),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Dcb__methods_[] = {
          DECLARE_METHOD(t_Dcb, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, addDcbLine, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getAvailableObservationPairs, METH_NOARGS),
          DECLARE_METHOD(t_Dcb, getDcb, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMaximumValidDateForObservationPair, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMinimumValidDateForObservationPair, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Dcb)[] = {
          { Py_tp_methods, t_Dcb__methods_ },
          { Py_tp_init, (void *) t_Dcb_init_ },
          { Py_tp_getset, t_Dcb__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Dcb)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Dcb, t_Dcb, Dcb);

        void t_Dcb::install(PyObject *module)
        {
          installType(&PY_TYPE(Dcb), &PY_TYPE_DEF(Dcb), module, "Dcb", 0);
        }

        void t_Dcb::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "class_", make_descriptor(Dcb::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "wrapfn_", make_descriptor(t_Dcb::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Dcb::initializeClass, 1)))
            return NULL;
          return t_Dcb::wrap_Object(Dcb(((t_Dcb *) arg)->object.this$));
        }
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Dcb::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds)
        {
          Dcb object((jobject) NULL);

          INT_CALL(object = Dcb());
          self->object = object;

          return 0;
        }

        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;

          if (!parseArgs(args, "sskkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(self->object.addDcbLine(a0, a1, a2, a3, a4));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcbLine", args);
          return NULL;
        }

        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self)
        {
          ::java::util::HashSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(result);
        }

        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "KKk", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "ssk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDcb", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMaximumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMinimumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data)
        {
          ::java::util::HashSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/EigenDecompositionSymmetric.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionSymmetric::mids$ = NULL;
      bool EigenDecompositionSymmetric::live$ = false;
      jdouble EigenDecompositionSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_455de456d5a20abb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DZ)V");
          mids$[mid_init$_fe8c5fa26b068f3f] = env->getMethodID(cls, "<init>", "([D[DDZ)V");
          mids$[mid_getD_4fb5d9750db49b3f] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_getDeterminant_9981f74b2d109da6] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalue_ce4c02d583456bc9] = env->getMethodID(cls, "getEigenvalue", "(I)D");
          mids$[mid_getEigenvalues_be783177b060994b] = env->getMethodID(cls, "getEigenvalues", "()[D");
          mids$[mid_getEigenvector_2ea477ed14744e74] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getEpsilon_9981f74b2d109da6] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getSolver_ac3e6aafa2c6c596] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getSquareRoot_b2eebabce70526d8] = env->getMethodID(cls, "getSquareRoot", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_b2eebabce70526d8] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_b2eebabce70526d8] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_455de456d5a20abb, a0.this$, a1, a2)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe8c5fa26b068f3f, a0.this$, a1.this$, a2, a3)) {}

      ::org::hipparchus::linear::DiagonalMatrix EigenDecompositionSymmetric::getD() const
      {
        return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getD_4fb5d9750db49b3f]));
      }

      jdouble EigenDecompositionSymmetric::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_9981f74b2d109da6]);
      }

      jdouble EigenDecompositionSymmetric::getEigenvalue(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEigenvalue_ce4c02d583456bc9], a0);
      }

      JArray< jdouble > EigenDecompositionSymmetric::getEigenvalues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_be783177b060994b]));
      }

      ::org::hipparchus::linear::RealVector EigenDecompositionSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_2ea477ed14744e74], a0));
      }

      jdouble EigenDecompositionSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::DecompositionSolver EigenDecompositionSymmetric::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ac3e6aafa2c6c596]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getSquareRoot() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSquareRoot_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_b2eebabce70526d8]));
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
      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, solver),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, squareRoot),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSquareRoot, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionSymmetric, t_EigenDecompositionSymmetric, EigenDecompositionSymmetric);

      void t_EigenDecompositionSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionSymmetric), &PY_TYPE_DEF(EigenDecompositionSymmetric), module, "EigenDecompositionSymmetric", 0);
      }

      void t_EigenDecompositionSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "class_", make_descriptor(EigenDecompositionSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionSymmetric::wrap_Object(EigenDecompositionSymmetric(((t_EigenDecompositionSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble a2;
            jboolean a3;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[DDZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2, a3));
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

      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return result.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return value.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SchurTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SchurTransformer::class$ = NULL;
      jmethodID *SchurTransformer::mids$ = NULL;
      bool SchurTransformer::live$ = false;

      jclass SchurTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SchurTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_dc02fdb8767f32bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getP_b2eebabce70526d8] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_b2eebabce70526d8] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getT_b2eebabce70526d8] = env->getMethodID(cls, "getT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      SchurTransformer::SchurTransformer(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc02fdb8767f32bc, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix SchurTransformer::getT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getT_b2eebabce70526d8]));
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
      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self);
      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data);
      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data);
      static PyGetSetDef t_SchurTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_SchurTransformer, p),
        DECLARE_GET_FIELD(t_SchurTransformer, pT),
        DECLARE_GET_FIELD(t_SchurTransformer, t),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SchurTransformer__methods_[] = {
        DECLARE_METHOD(t_SchurTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SchurTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getPT, METH_NOARGS),
        DECLARE_METHOD(t_SchurTransformer, getT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SchurTransformer)[] = {
        { Py_tp_methods, t_SchurTransformer__methods_ },
        { Py_tp_init, (void *) t_SchurTransformer_init_ },
        { Py_tp_getset, t_SchurTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SchurTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SchurTransformer, t_SchurTransformer, SchurTransformer);

      void t_SchurTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(SchurTransformer), &PY_TYPE_DEF(SchurTransformer), module, "SchurTransformer", 0);
      }

      void t_SchurTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "class_", make_descriptor(SchurTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "wrapfn_", make_descriptor(t_SchurTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SchurTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SchurTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SchurTransformer::initializeClass, 1)))
          return NULL;
        return t_SchurTransformer::wrap_Object(SchurTransformer(((t_SchurTransformer *) arg)->object.this$));
      }
      static PyObject *t_SchurTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SchurTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SchurTransformer_init_(t_SchurTransformer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = SchurTransformer(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            SchurTransformer object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SchurTransformer(a0, a1));
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

      static PyObject *t_SchurTransformer_getP(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getPT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_getT(t_SchurTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SchurTransformer_get__p(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__pT(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SchurTransformer_get__t(t_SchurTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationClassicalConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationClassicalConvention::class$ = NULL;
        jmethodID *IsotropicRadiationClassicalConvention::mids$ = NULL;
        bool IsotropicRadiationClassicalConvention::live$ = false;

        jclass IsotropicRadiationClassicalConvention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationClassicalConvention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationClassicalConvention::IsotropicRadiationClassicalConvention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationClassicalConvention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_d751c1a57012b438]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_8ba97ba2fcb659fc], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_b5d2cc91db5ad4cb], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self);
        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationClassicalConvention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationClassicalConvention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationClassicalConvention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationClassicalConvention)[] = {
          { Py_tp_methods, t_IsotropicRadiationClassicalConvention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationClassicalConvention_init_ },
          { Py_tp_getset, t_IsotropicRadiationClassicalConvention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationClassicalConvention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationClassicalConvention, t_IsotropicRadiationClassicalConvention, IsotropicRadiationClassicalConvention);

        void t_IsotropicRadiationClassicalConvention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationClassicalConvention), &PY_TYPE_DEF(IsotropicRadiationClassicalConvention), module, "IsotropicRadiationClassicalConvention", 0);
        }

        void t_IsotropicRadiationClassicalConvention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "class_", make_descriptor(IsotropicRadiationClassicalConvention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "wrapfn_", make_descriptor(t_IsotropicRadiationClassicalConvention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationClassicalConvention::wrap_Object(IsotropicRadiationClassicalConvention(((t_IsotropicRadiationClassicalConvention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationClassicalConvention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationClassicalConvention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SphericalHarmonicsProvider::class$ = NULL;
          jmethodID *SphericalHarmonicsProvider::mids$ = NULL;
          bool SphericalHarmonicsProvider::live$ = false;

          jclass SphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAe_9981f74b2d109da6] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_9981f74b2d109da6]);
          }

          jint SphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_d6ab429752e7c267]);
          }

          jint SphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_d6ab429752e7c267]);
          }

          jdouble SphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
          }

          ::org::orekit::time::AbsoluteDate SphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
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
          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_SphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, referenceDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_SphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_SphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::TideSystemProvider),
            NULL
          };

          DEFINE_TYPE(SphericalHarmonicsProvider, t_SphericalHarmonicsProvider, SphericalHarmonicsProvider);

          void t_SphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalHarmonicsProvider), &PY_TYPE_DEF(SphericalHarmonicsProvider), module, "SphericalHarmonicsProvider", 0);
          }

          void t_SphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "class_", make_descriptor(SphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_SphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_SphericalHarmonicsProvider::wrap_Object(SphericalHarmonicsProvider(((t_SphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser$Unit::class$ = NULL;
      jmethodID *PolynomialParser$Unit::mids$ = NULL;
      bool PolynomialParser$Unit::live$ = false;
      PolynomialParser$Unit *PolynomialParser$Unit::ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::DEGREES = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MICRO_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MILLI_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::NO_UNITS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::RADIANS = NULL;

      jclass PolynomialParser$Unit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser$Unit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toSI_bf28ed64d6e8576b] = env->getMethodID(cls, "toSI", "(D)D");
          mids$[mid_valueOf_8540cb4de7aca7c8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/data/PolynomialParser$Unit;");
          mids$[mid_values_99f1912d38a28826] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/data/PolynomialParser$Unit;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          DEGREES = new PolynomialParser$Unit(env->getStaticObjectField(cls, "DEGREES", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MICRO_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MICRO_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MILLI_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          NO_UNITS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "NO_UNITS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          RADIANS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "RADIANS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble PolynomialParser$Unit::toSI(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_toSI_bf28ed64d6e8576b], a0);
      }

      PolynomialParser$Unit PolynomialParser$Unit::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialParser$Unit(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8540cb4de7aca7c8], a0.this$));
      }

      JArray< PolynomialParser$Unit > PolynomialParser$Unit::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PolynomialParser$Unit >(env->callStaticObjectMethod(cls, mids$[mid_values_99f1912d38a28826]));
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
      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type);
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data);
      static PyGetSetDef t_PolynomialParser$Unit__fields_[] = {
        DECLARE_GET_FIELD(t_PolynomialParser$Unit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PolynomialParser$Unit__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser$Unit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, of_, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialParser$Unit, toSI, METH_O),
        DECLARE_METHOD(t_PolynomialParser$Unit, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser$Unit)[] = {
        { Py_tp_methods, t_PolynomialParser$Unit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PolynomialParser$Unit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser$Unit)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PolynomialParser$Unit, t_PolynomialParser$Unit, PolynomialParser$Unit);
      PyObject *t_PolynomialParser$Unit::wrap_Object(const PolynomialParser$Unit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PolynomialParser$Unit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PolynomialParser$Unit::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser$Unit), &PY_TYPE_DEF(PolynomialParser$Unit), module, "PolynomialParser$Unit", 0);
      }

      void t_PolynomialParser$Unit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "class_", make_descriptor(PolynomialParser$Unit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "wrapfn_", make_descriptor(t_PolynomialParser$Unit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "boxfn_", make_descriptor(boxObject));
        env->getClass(PolynomialParser$Unit::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "DEGREES", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::DEGREES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MICRO_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MICRO_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MILLI_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MILLI_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "NO_UNITS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::NO_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "RADIANS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::RADIANS)));
      }

      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser$Unit::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser$Unit::wrap_Object(PolynomialParser$Unit(((t_PolynomialParser$Unit *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser$Unit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.toSI(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSI", arg);
        return NULL;
      }

      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PolynomialParser$Unit result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::valueOf(a0));
          return t_PolynomialParser$Unit::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type)
      {
        JArray< PolynomialParser$Unit > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::values());
        return JArray<jobject>(result.this$).wrap(t_PolynomialParser$Unit::wrap_jobject);
      }
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractMessageWriter::class$ = NULL;
            jmethodID *PythonAbstractMessageWriter::mids$ = NULL;
            bool PythonAbstractMessageWriter::live$ = false;

            jclass PythonAbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3026836a952fe988] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractMessageWriter::PythonAbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_3026836a952fe988, a0.this$, a1.this$, a2, a3.this$)) {}

            void PythonAbstractMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAbstractMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAbstractMessageWriter::pythonExtension(jlong a0) const
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
          namespace generation {
            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args);
            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self);
            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args);
            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data);
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageWriter)[] = {
              { Py_tp_methods, t_PythonAbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractMessageWriter_init_ },
              { Py_tp_getset, t_PythonAbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageWriter, t_PythonAbstractMessageWriter, PythonAbstractMessageWriter);
            PyObject *t_PythonAbstractMessageWriter::wrap_Object(const PythonAbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageWriter), &PY_TYPE_DEF(PythonAbstractMessageWriter), module, "PythonAbstractMessageWriter", 1);
            }

            void t_PythonAbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "class_", make_descriptor(PythonAbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "wrapfn_", make_descriptor(t_PythonAbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageWriter_pythonDecRef0 },
                { "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonAbstractMessageWriter_writeSegmentContent1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageWriter::wrap_Object(PythonAbstractMessageWriter(((t_PythonAbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              PythonAbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractMessageWriter(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o2 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a2));
              PyObject *result = PyObject_CallMethod(obj, "writeSegmentContent", "OdO", o0, (double) a1, o2);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data)
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
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TrivariateGridInterpolator::class$ = NULL;
        jmethodID *TrivariateGridInterpolator::mids$ = NULL;
        bool TrivariateGridInterpolator::live$ = false;

        jclass TrivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TrivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_3a2509784f614ecf] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/TrivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::TrivariateFunction TrivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::TrivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3a2509784f614ecf], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_TrivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_TrivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrivariateGridInterpolator)[] = {
          { Py_tp_methods, t_TrivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TrivariateGridInterpolator, t_TrivariateGridInterpolator, TrivariateGridInterpolator);

        void t_TrivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrivariateGridInterpolator), &PY_TYPE_DEF(TrivariateGridInterpolator), module, "TrivariateGridInterpolator", 0);
        }

        void t_TrivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "class_", make_descriptor(TrivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "wrapfn_", make_descriptor(t_TrivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_TrivariateGridInterpolator::wrap_Object(TrivariateGridInterpolator(((t_TrivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::TrivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::t_TrivariateFunction::wrap_Object(result);
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
#include "org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonPropulsionModel::class$ = NULL;
          jmethodID *PythonPropulsionModel::mids$ = NULL;
          bool PythonPropulsionModel::live$ = false;

          jclass PythonPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAcceleration_95da8f0fa460fb9b] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcceleration_04b081b8909cb072] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getMassDerivatives_4222abdadde032f5] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_6c8e6cd5d59063ae] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPropulsionModel::PythonPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonPropulsionModel::pythonExtension(jlong a0) const
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
        namespace propulsion {
          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self);
          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPropulsionModel)[] = {
            { Py_tp_methods, t_PythonPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonPropulsionModel_init_ },
            { Py_tp_getset, t_PythonPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonPropulsionModel, t_PythonPropulsionModel, PythonPropulsionModel);

          void t_PythonPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPropulsionModel), &PY_TYPE_DEF(PythonPropulsionModel), module, "PythonPropulsionModel", 1);
          }

          void t_PythonPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "class_", make_descriptor(PythonPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "wrapfn_", make_descriptor(t_PythonPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonPropulsionModel_getAcceleration0 },
              { "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonPropulsionModel_getAcceleration1 },
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonPropulsionModel_getControl3DVectorCostType2 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonPropulsionModel_getMassDerivatives3 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonPropulsionModel_getMassDerivatives4 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonPropulsionModel_getName5 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonPropulsionModel_getParametersDrivers6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonPropulsionModel::wrap_Object(PythonPropulsionModel(((t_PythonPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(::org::orekit::attitudes::FieldAttitude(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_Attitude::wrap_Object(::org::orekit::attitudes::Attitude(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getMassDerivatives", result);
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

          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMassDerivatives", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data)
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
#include "org/orekit/estimation/measurements/PythonGroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonGroundReceiverMeasurement::class$ = NULL;
        jmethodID *PythonGroundReceiverMeasurement::mids$ = NULL;
        bool PythonGroundReceiverMeasurement::live$ = false;

        jclass PythonGroundReceiverMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonGroundReceiverMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c2b759d1b43bb582] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGroundReceiverMeasurement::PythonGroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_c2b759d1b43bb582, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        void PythonGroundReceiverMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonGroundReceiverMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonGroundReceiverMeasurement::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self);
        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyGetSetDef t_PythonGroundReceiverMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, self),
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGroundReceiverMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGroundReceiverMeasurement)[] = {
          { Py_tp_methods, t_PythonGroundReceiverMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonGroundReceiverMeasurement_init_ },
          { Py_tp_getset, t_PythonGroundReceiverMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGroundReceiverMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonGroundReceiverMeasurement, t_PythonGroundReceiverMeasurement, PythonGroundReceiverMeasurement);
        PyObject *t_PythonGroundReceiverMeasurement::wrap_Object(const PythonGroundReceiverMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonGroundReceiverMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonGroundReceiverMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGroundReceiverMeasurement), &PY_TYPE_DEF(PythonGroundReceiverMeasurement), module, "PythonGroundReceiverMeasurement", 1);
        }

        void t_PythonGroundReceiverMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "class_", make_descriptor(PythonGroundReceiverMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "wrapfn_", make_descriptor(t_PythonGroundReceiverMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGroundReceiverMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonGroundReceiverMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonGroundReceiverMeasurement::wrap_Object(PythonGroundReceiverMeasurement(((t_PythonGroundReceiverMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          PythonGroundReceiverMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = PythonGroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data)
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
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderProcessingState::class$ = NULL;
            jmethodID *CdmHeaderProcessingState::mids$ = NULL;
            bool CdmHeaderProcessingState::live$ = false;

            jclass CdmHeaderProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_77422ddc3ebc2295] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)V");
                mids$[mid_processToken_48865e799ebb0b92] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeaderProcessingState::CdmHeaderProcessingState(const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77422ddc3ebc2295, a0.this$)) {}

            jboolean CdmHeaderProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_48865e799ebb0b92], a0.this$);
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
            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg);

            static PyMethodDef t_CdmHeaderProcessingState__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderProcessingState)[] = {
              { Py_tp_methods, t_CdmHeaderProcessingState__methods_ },
              { Py_tp_init, (void *) t_CdmHeaderProcessingState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmHeaderProcessingState, t_CdmHeaderProcessingState, CdmHeaderProcessingState);

            void t_CdmHeaderProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderProcessingState), &PY_TYPE_DEF(CdmHeaderProcessingState), module, "CdmHeaderProcessingState", 0);
            }

            void t_CdmHeaderProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "class_", make_descriptor(CdmHeaderProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "wrapfn_", make_descriptor(t_CdmHeaderProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeaderProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderProcessingState::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderProcessingState::wrap_Object(CdmHeaderProcessingState(((t_CdmHeaderProcessingState *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeaderProcessingState_init_(t_CdmHeaderProcessingState *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a0((jobject) NULL);
              PyTypeObject **p0;
              CdmHeaderProcessingState object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                INT_CALL(object = CdmHeaderProcessingState(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmHeaderProcessingState_processToken(t_CdmHeaderProcessingState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
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
#include "org/orekit/time/PythonUTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonUTCTAIOffsetsLoader::class$ = NULL;
      jmethodID *PythonUTCTAIOffsetsLoader::mids$ = NULL;
      bool PythonUTCTAIOffsetsLoader::live$ = false;

      jclass PythonUTCTAIOffsetsLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonUTCTAIOffsetsLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadOffsets_d751c1a57012b438] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUTCTAIOffsetsLoader::PythonUTCTAIOffsetsLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonUTCTAIOffsetsLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonUTCTAIOffsetsLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonUTCTAIOffsetsLoader::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self);
      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args);
      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data);
      static PyGetSetDef t_PythonUTCTAIOffsetsLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUTCTAIOffsetsLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUTCTAIOffsetsLoader__methods_[] = {
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUTCTAIOffsetsLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUTCTAIOffsetsLoader)[] = {
        { Py_tp_methods, t_PythonUTCTAIOffsetsLoader__methods_ },
        { Py_tp_init, (void *) t_PythonUTCTAIOffsetsLoader_init_ },
        { Py_tp_getset, t_PythonUTCTAIOffsetsLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUTCTAIOffsetsLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUTCTAIOffsetsLoader, t_PythonUTCTAIOffsetsLoader, PythonUTCTAIOffsetsLoader);

      void t_PythonUTCTAIOffsetsLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUTCTAIOffsetsLoader), &PY_TYPE_DEF(PythonUTCTAIOffsetsLoader), module, "PythonUTCTAIOffsetsLoader", 1);
      }

      void t_PythonUTCTAIOffsetsLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "class_", make_descriptor(PythonUTCTAIOffsetsLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "wrapfn_", make_descriptor(t_PythonUTCTAIOffsetsLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUTCTAIOffsetsLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUTCTAIOffsetsLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadOffsets", "()Ljava/util/List;", (void *) t_PythonUTCTAIOffsetsLoader_loadOffsets0 },
          { "pythonDecRef", "()V", (void *) t_PythonUTCTAIOffsetsLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 1)))
          return NULL;
        return t_PythonUTCTAIOffsetsLoader::wrap_Object(PythonUTCTAIOffsetsLoader(((t_PythonUTCTAIOffsetsLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonUTCTAIOffsetsLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUTCTAIOffsetsLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUTCTAIOffsetsLoader_init_(t_PythonUTCTAIOffsetsLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonUTCTAIOffsetsLoader object((jobject) NULL);

        INT_CALL(object = PythonUTCTAIOffsetsLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_finalize(t_PythonUTCTAIOffsetsLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_pythonExtension(t_PythonUTCTAIOffsetsLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonUTCTAIOffsetsLoader_loadOffsets0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "loadOffsets", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("loadOffsets", result);
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

      static void JNICALL t_PythonUTCTAIOffsetsLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUTCTAIOffsetsLoader::mids$[PythonUTCTAIOffsetsLoader::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonUTCTAIOffsetsLoader_get__self(t_PythonUTCTAIOffsetsLoader *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory::class$ = NULL;
        jmethodID *SmoothStepFactory::mids$ = NULL;
        bool SmoothStepFactory::live$ = false;

        jclass SmoothStepFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_checkBetweenZeroAndOneIncluded_1ad26e8c8c0cd65b] = env->getStaticMethodID(cls, "checkBetweenZeroAndOneIncluded", "(D)V");
            mids$[mid_getClamp_1290f283fe267abb] = env->getStaticMethodID(cls, "getClamp", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getClamp_802dd99c8beaa14e] = env->getStaticMethodID(cls, "getClamp", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getCubic_1290f283fe267abb] = env->getStaticMethodID(cls, "getCubic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getCubic_802dd99c8beaa14e] = env->getStaticMethodID(cls, "getCubic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getFieldGeneralOrder_96427c0eff98a2ae] = env->getStaticMethodID(cls, "getFieldGeneralOrder", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getGeneralOrder_f55e3a9b179d965a] = env->getStaticMethodID(cls, "getGeneralOrder", "(I)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_1290f283fe267abb] = env->getStaticMethodID(cls, "getQuadratic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuadratic_802dd99c8beaa14e] = env->getStaticMethodID(cls, "getQuadratic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");
            mids$[mid_getQuintic_1290f283fe267abb] = env->getStaticMethodID(cls, "getQuintic", "()Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;");
            mids$[mid_getQuintic_802dd99c8beaa14e] = env->getStaticMethodID(cls, "getQuintic", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SmoothStepFactory::checkBetweenZeroAndOneIncluded(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkBetweenZeroAndOneIncluded_1ad26e8c8c0cd65b], a0);
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getClamp()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_1290f283fe267abb]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getClamp(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getClamp_802dd99c8beaa14e], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getCubic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_1290f283fe267abb]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getCubic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getCubic_802dd99c8beaa14e], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getFieldGeneralOrder(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getFieldGeneralOrder_96427c0eff98a2ae], a0.this$, a1));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getGeneralOrder(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getGeneralOrder_f55e3a9b179d965a], a0));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuadratic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_1290f283fe267abb]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuadratic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuadratic_802dd99c8beaa14e], a0.this$));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction SmoothStepFactory::getQuintic()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_1290f283fe267abb]));
        }

        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction SmoothStepFactory::getQuintic(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction(env->callStaticObjectMethod(cls, mids$[mid_getQuintic_802dd99c8beaa14e], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args);
        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data);
        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data);
        static PyGetSetDef t_SmoothStepFactory__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory, clamp),
          DECLARE_GET_FIELD(t_SmoothStepFactory, cubic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quadratic),
          DECLARE_GET_FIELD(t_SmoothStepFactory, quintic),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, checkBetweenZeroAndOneIncluded, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getClamp, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getCubic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getFieldGeneralOrder, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getGeneralOrder, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuadratic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory, getQuintic, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory)[] = {
          { Py_tp_methods, t_SmoothStepFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory, t_SmoothStepFactory, SmoothStepFactory);

        void t_SmoothStepFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory), &PY_TYPE_DEF(SmoothStepFactory), module, "SmoothStepFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "FieldSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "QuadraticSmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "SmoothStepFunction", make_descriptor(&PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction)));
        }

        void t_SmoothStepFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "class_", make_descriptor(SmoothStepFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "wrapfn_", make_descriptor(t_SmoothStepFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory::wrap_Object(SmoothStepFactory(((t_SmoothStepFactory *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory_checkBetweenZeroAndOneIncluded(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(::org::hipparchus::analysis::polynomials::SmoothStepFactory::checkBetweenZeroAndOneIncluded(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkBetweenZeroAndOneIncluded", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getClamp(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getClamp(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getClamp", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getCubic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getCubic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getCubic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getFieldGeneralOrder(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getFieldGeneralOrder(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getFieldGeneralOrder", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getGeneralOrder(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getGeneralOrder(a0));
            return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGeneralOrder", arg);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuadratic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuadratic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuadratic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_getQuintic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic());
              return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::SmoothStepFactory::getQuintic(a0));
                return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "getQuintic", args);
          return NULL;
        }

        static PyObject *t_SmoothStepFactory_get__clamp(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getClamp());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__cubic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getCubic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quadratic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuadratic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }

        static PyObject *t_SmoothStepFactory_get__quintic(t_SmoothStepFactory *self, void *data)
        {
          ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuintic());
          return ::org::hipparchus::analysis::polynomials::t_SmoothStepFactory$SmoothStepFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian::class$ = NULL;
        jmethodID *Gaussian::mids$ = NULL;
        bool Gaussian::live$ = false;

        jclass Gaussian::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian::Gaussian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble Gaussian::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Gaussian::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args);

        static PyMethodDef t_Gaussian__methods_[] = {
          DECLARE_METHOD(t_Gaussian, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian)[] = {
          { Py_tp_methods, t_Gaussian__methods_ },
          { Py_tp_init, (void *) t_Gaussian_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian, t_Gaussian, Gaussian);

        void t_Gaussian::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian), &PY_TYPE_DEF(Gaussian), module, "Gaussian", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "Parametric", make_descriptor(&PY_TYPE_DEF(Gaussian$Parametric)));
        }

        void t_Gaussian::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "class_", make_descriptor(Gaussian::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "wrapfn_", make_descriptor(t_Gaussian::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian::initializeClass, 1)))
            return NULL;
          return t_Gaussian::wrap_Object(Gaussian(((t_Gaussian *) arg)->object.this$));
        }
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Gaussian object((jobject) NULL);

              INT_CALL(object = Gaussian());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Gaussian(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = Gaussian(a0, a1, a2));
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

        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *HatchFilter::class$ = NULL;
          jmethodID *HatchFilter::mids$ = NULL;
          bool HatchFilter::live$ = false;

          jclass HatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/HatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addToCodeHistory_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addToCodeHistory", "(D)V");
              mids$[mid_addToSmoothedCodeHistory_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addToSmoothedCodeHistory", "(D)V");
              mids$[mid_getCodeHistory_4aaa6fa02985280c] = env->getMethodID(cls, "getCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSmoothedCodeHistory_4aaa6fa02985280c] = env->getMethodID(cls, "getSmoothedCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getThreshold", "()D");
              mids$[mid_resetFilterNext_1ad26e8c8c0cd65b] = env->getMethodID(cls, "resetFilterNext", "(D)V");
              mids$[mid_updatePreviousSmoothedCode_1ad26e8c8c0cd65b] = env->getMethodID(cls, "updatePreviousSmoothedCode", "(D)V");
              mids$[mid_updatePreviousSmoothingValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "updatePreviousSmoothingValue", "(D)V");
              mids$[mid_resetNextBoolean_ff7cb6c242604316] = env->getMethodID(cls, "resetNextBoolean", "()V");
              mids$[mid_smoothedCode_82f92590f4247da1] = env->getMethodID(cls, "smoothedCode", "(DD)D");
              mids$[mid_resetK_ff7cb6c242604316] = env->getMethodID(cls, "resetK", "()V");
              mids$[mid_checkValidData_5f5ef38887023464] = env->getMethodID(cls, "checkValidData", "(DDZ)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void HatchFilter::addToCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToCodeHistory_1ad26e8c8c0cd65b], a0);
          }

          void HatchFilter::addToSmoothedCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToSmoothedCodeHistory_1ad26e8c8c0cd65b], a0);
          }

          ::java::util::ArrayList HatchFilter::getCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getCodeHistory_4aaa6fa02985280c]));
          }

          ::java::util::ArrayList HatchFilter::getSmoothedCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSmoothedCodeHistory_4aaa6fa02985280c]));
          }

          jdouble HatchFilter::getThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreshold_9981f74b2d109da6]);
          }

          void HatchFilter::resetFilterNext(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetFilterNext_1ad26e8c8c0cd65b], a0);
          }

          void HatchFilter::updatePreviousSmoothedCode(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothedCode_1ad26e8c8c0cd65b], a0);
          }

          void HatchFilter::updatePreviousSmoothingValue(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothingValue_1ad26e8c8c0cd65b], a0);
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
          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self);
          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data);
          static PyGetSetDef t_HatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_HatchFilter, codeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, smoothedCodeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, threshold),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HatchFilter__methods_[] = {
            DECLARE_METHOD(t_HatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, addToCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, addToSmoothedCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, getCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getSmoothedCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getThreshold, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, resetFilterNext, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothedCode, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothingValue, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HatchFilter)[] = {
            { Py_tp_methods, t_HatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HatchFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HatchFilter, t_HatchFilter, HatchFilter);

          void t_HatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(HatchFilter), &PY_TYPE_DEF(HatchFilter), module, "HatchFilter", 0);
          }

          void t_HatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "class_", make_descriptor(HatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "wrapfn_", make_descriptor(t_HatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HatchFilter::initializeClass, 1)))
              return NULL;
            return t_HatchFilter::wrap_Object(HatchFilter(((t_HatchFilter *) arg)->object.this$));
          }
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToSmoothedCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToSmoothedCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.resetFilterNext(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "resetFilterNext", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothedCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothedCode", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothingValue(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothingValue", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThreshold());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileParser::class$ = NULL;
        jmethodID *EphemerisFileParser::mids$ = NULL;
        bool EphemerisFileParser::live$ = false;

        jclass EphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_6c877fbfda00edef] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/EphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::EphemerisFile EphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::EphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_6c877fbfda00edef], a0.this$));
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
        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args);
        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg);
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data);
        static PyGetSetDef t_EphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileParser)[] = {
          { Py_tp_methods, t_EphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileParser, t_EphemerisFileParser, EphemerisFileParser);
        PyObject *t_EphemerisFileParser::wrap_Object(const EphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFileParser *self = (t_EphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileParser), &PY_TYPE_DEF(EphemerisFileParser), module, "EphemerisFileParser", 0);
        }

        void t_EphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "class_", make_descriptor(EphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "wrapfn_", make_descriptor(t_EphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileParser::wrap_Object(EphemerisFileParser(((t_EphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileParser_of_(t_EphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFileParser_parse(t_EphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_EphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_EphemerisFileParser_get__parameters_(t_EphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateTimeComponents::class$ = NULL;
      jmethodID *DateTimeComponents::mids$ = NULL;
      bool DateTimeComponents::live$ = false;
      DateTimeComponents *DateTimeComponents::JULIAN_EPOCH = NULL;

      jclass DateTimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateTimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_408842433aa637da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)V");
          mids$[mid_init$_364448e3d432e55c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;D)V");
          mids$[mid_init$_1a20c824be86d0cc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_48ca1125d4856a74] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_init$_d4484dbea0a74f40] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIID)V");
          mids$[mid_init$_bd1b5b9b8a9ca435] = env->getMethodID(cls, "<init>", "(IIIIID)V");
          mids$[mid_compareTo_4ce484ce2d47b705] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateTimeComponents;)I");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDate_70bc100457881a79] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getTime_89ad8c5e8df19e40] = env->getMethodID(cls, "getTime", "()Lorg/orekit/time/TimeComponents;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_offsetFrom_479207b71ea7b88f] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/DateTimeComponents;)D");
          mids$[mid_parseDateTime_c7836527d5fdb45c] = env->getStaticMethodID(cls, "parseDateTime", "(Ljava/lang/String;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_roundIfNeeded_5a9d1878c9abb114] = env->getMethodID(cls, "roundIfNeeded", "(II)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_c81987d6b0e2977a] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_43e3765e4d074a90] = env->getMethodID(cls, "toString", "(II)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_d2c8eb4129821f0e] = env->getMethodID(cls, "toStringRfc3339", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_d2c8eb4129821f0e] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_43e3765e4d074a90] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(II)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          JULIAN_EPOCH = new DateTimeComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateTimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateTimeComponents::DateTimeComponents(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_408842433aa637da, a0.this$, a1.this$)) {}

      DateTimeComponents::DateTimeComponents(const DateTimeComponents & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_364448e3d432e55c, a0.this$, a1)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a20c824be86d0cc, a0, a1.this$, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48ca1125d4856a74, a0, a1, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d4484dbea0a74f40, a0, a1.this$, a2, a3, a4, a5)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd1b5b9b8a9ca435, a0, a1, a2, a3, a4, a5)) {}

      jint DateTimeComponents::compareTo(const DateTimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_4ce484ce2d47b705], a0.this$);
      }

      jboolean DateTimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ::org::orekit::time::DateComponents DateTimeComponents::getDate() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getDate_70bc100457881a79]));
      }

      ::org::orekit::time::TimeComponents DateTimeComponents::getTime() const
      {
        return ::org::orekit::time::TimeComponents(env->callObjectMethod(this$, mids$[mid_getTime_89ad8c5e8df19e40]));
      }

      jint DateTimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jdouble DateTimeComponents::offsetFrom(const DateTimeComponents & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_479207b71ea7b88f], a0.this$);
      }

      DateTimeComponents DateTimeComponents::parseDateTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateTimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDateTime_c7836527d5fdb45c], a0.this$));
      }

      DateTimeComponents DateTimeComponents::roundIfNeeded(jint a0, jint a1) const
      {
        return DateTimeComponents(env->callObjectMethod(this$, mids$[mid_roundIfNeeded_5a9d1878c9abb114], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_c81987d6b0e2977a], a0));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_43e3765e4d074a90], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toStringRfc3339() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_d2c8eb4129821f0e]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_d2c8eb4129821f0e]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_43e3765e4d074a90], a0, a1));
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
      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data);
      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data);
      static PyGetSetDef t_DateTimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateTimeComponents, date),
        DECLARE_GET_FIELD(t_DateTimeComponents, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateTimeComponents__methods_[] = {
        DECLARE_METHOD(t_DateTimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, getTime, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, offsetFrom, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, parseDateTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, roundIfNeeded, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringRfc3339, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateTimeComponents)[] = {
        { Py_tp_methods, t_DateTimeComponents__methods_ },
        { Py_tp_init, (void *) t_DateTimeComponents_init_ },
        { Py_tp_getset, t_DateTimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateTimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateTimeComponents, t_DateTimeComponents, DateTimeComponents);

      void t_DateTimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateTimeComponents), &PY_TYPE_DEF(DateTimeComponents), module, "DateTimeComponents", 0);
      }

      void t_DateTimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "class_", make_descriptor(DateTimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "wrapfn_", make_descriptor(t_DateTimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateTimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "JULIAN_EPOCH", make_descriptor(t_DateTimeComponents::wrap_Object(*DateTimeComponents::JULIAN_EPOCH)));
      }

      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateTimeComponents::initializeClass, 1)))
          return NULL;
        return t_DateTimeComponents::wrap_Object(DateTimeComponents(((t_DateTimeComponents *) arg)->object.this$));
      }
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateTimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            DateTimeComponents a0((jobject) NULL);
            jdouble a1;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kD", DateTimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKIIID", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self)
      {
        ::org::orekit::time::TimeComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateTimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateTimeComponents::parseDateTime(a0));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDateTime", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args)
      {
        jint a0;
        jint a1;
        DateTimeComponents result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.roundIfNeeded(a0, a1));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "roundIfNeeded", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args)
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
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringRfc3339());
        return j2p(result);
      }

      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
            return j2p(result);
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }

      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::TimeComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *FieldOrdinaryDifferentialEquation::mids$ = NULL;
      bool FieldOrdinaryDifferentialEquation::live$ = false;

      jclass FieldOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_31586897e81be81c] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_5691aa5b67fecd70] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldOrdinaryDifferentialEquation::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_31586897e81be81c], a0.this$, a1.this$));
      }

      jint FieldOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      void FieldOrdinaryDifferentialEquation::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_5691aa5b67fecd70], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self);
      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_FieldOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, dimension),
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_FieldOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrdinaryDifferentialEquation, t_FieldOrdinaryDifferentialEquation, FieldOrdinaryDifferentialEquation);
      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_Object(const FieldOrdinaryDifferentialEquation& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrdinaryDifferentialEquation), &PY_TYPE_DEF(FieldOrdinaryDifferentialEquation), module, "FieldOrdinaryDifferentialEquation", 0);
      }

      void t_FieldOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "class_", make_descriptor(FieldOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_FieldOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_FieldOrdinaryDifferentialEquation::wrap_Object(FieldOrdinaryDifferentialEquation(((t_FieldOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractWindUp.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractWindUp::class$ = NULL;
          jmethodID *PythonAbstractWindUp::mids$ = NULL;
          bool PythonAbstractWindUp::live$ = false;

          jclass PythonAbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9fe7365dd1a516af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/estimation/measurements/gnss/Dipole;)V");
              mids$[mid_emitterToInert_f462106a6ca97aca] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_receiverToInert_f462106a6ca97aca] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWindUp::PythonAbstractWindUp(const ::org::orekit::estimation::measurements::gnss::Dipole & a0, const ::org::orekit::estimation::measurements::gnss::Dipole & a1) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(env->newObject(initializeClass, &mids$, mid_init$_9fe7365dd1a516af, a0.this$, a1.this$)) {}

          void PythonAbstractWindUp::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractWindUp::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractWindUp::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args);
          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self);
          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data);
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data);
          static PyGetSetDef t_PythonAbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, self),
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWindUp)[] = {
            { Py_tp_methods, t_PythonAbstractWindUp__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWindUp_init_ },
            { Py_tp_getset, t_PythonAbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWindUp, t_PythonAbstractWindUp, PythonAbstractWindUp);
          PyObject *t_PythonAbstractWindUp::wrap_Object(const PythonAbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWindUp), &PY_TYPE_DEF(PythonAbstractWindUp), module, "PythonAbstractWindUp", 1);
          }

          void t_PythonAbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "class_", make_descriptor(PythonAbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "wrapfn_", make_descriptor(t_PythonAbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWindUp::initializeClass);
            JNINativeMethod methods[] = {
              { "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_emitterToInert0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWindUp_pythonDecRef1 },
              { "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_receiverToInert2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWindUp::wrap_Object(PythonAbstractWindUp(((t_PythonAbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::Dipole a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::Dipole a1((jobject) NULL);
            PythonAbstractWindUp object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWindUp(a0, a1));
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

          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "emitterToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("emitterToInert", result);
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

          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "receiverToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("receiverToInert", result);
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

          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data)
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
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data)
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
#include "org/orekit/utils/PythonTimeStampedGenerator.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedGenerator::class$ = NULL;
      jmethodID *PythonTimeStampedGenerator::mids$ = NULL;
      bool PythonTimeStampedGenerator::live$ = false;

      jclass PythonTimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_generate_0499dac7e83b853d] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedGenerator::PythonTimeStampedGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeStampedGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeStampedGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeStampedGenerator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args);
      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self);
      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data);
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data);
      static PyGetSetDef t_PythonTimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedGenerator)[] = {
        { Py_tp_methods, t_PythonTimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedGenerator_init_ },
        { Py_tp_getset, t_PythonTimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedGenerator, t_PythonTimeStampedGenerator, PythonTimeStampedGenerator);
      PyObject *t_PythonTimeStampedGenerator::wrap_Object(const PythonTimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedGenerator), &PY_TYPE_DEF(PythonTimeStampedGenerator), module, "PythonTimeStampedGenerator", 1);
      }

      void t_PythonTimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "class_", make_descriptor(PythonTimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "wrapfn_", make_descriptor(t_PythonTimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonTimeStampedGenerator_generate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedGenerator::wrap_Object(PythonTimeStampedGenerator(((t_PythonTimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedGenerator object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
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

      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data)
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
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/Parser.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Parser::class$ = NULL;
        jmethodID *Parser::mids$ = NULL;
        bool Parser::live$ = false;

        jclass Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildTermsList_7a823e7285fdf3d6] = env->getStaticMethodID(cls, "buildTermsList", "(Ljava/lang/String;)Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List Parser::buildTermsList(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildTermsList_7a823e7285fdf3d6], a0.this$));
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
    namespace utils {
      namespace units {
        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_Parser__methods_[] = {
          DECLARE_METHOD(t_Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, buildTermsList, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Parser)[] = {
          { Py_tp_methods, t_Parser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Parser, t_Parser, Parser);

        void t_Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(Parser), &PY_TYPE_DEF(Parser), module, "Parser", 0);
        }

        void t_Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "class_", make_descriptor(Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "wrapfn_", make_descriptor(t_Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Parser::initializeClass, 1)))
            return NULL;
          return t_Parser::wrap_Object(Parser(((t_Parser *) arg)->object.this$));
        }
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Parser::buildTermsList(a0));
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(PowerTerm));
          }

          PyErr_SetArgsError(type, "buildTermsList", arg);
          return NULL;
        }
      }
    }
  }
}
