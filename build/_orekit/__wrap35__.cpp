#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Writer.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Writer::class$ = NULL;
        jmethodID *SP3Writer::mids$ = NULL;
        bool SP3Writer::live$ = false;

        jclass SP3Writer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Writer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9987626f36a783d7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_write_af44203016ae0a74] = env->getMethodID(cls, "write", "(Lorg/orekit/files/sp3/SP3;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Writer::SP3Writer(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9987626f36a783d7, a0.this$, a1.this$, a2.this$)) {}

        void SP3Writer::write(const ::org::orekit::files::sp3::SP3 & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_write_af44203016ae0a74], a0.this$);
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
      namespace sp3 {
        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg);

        static PyMethodDef t_SP3Writer__methods_[] = {
          DECLARE_METHOD(t_SP3Writer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, write, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Writer)[] = {
          { Py_tp_methods, t_SP3Writer__methods_ },
          { Py_tp_init, (void *) t_SP3Writer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Writer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Writer, t_SP3Writer, SP3Writer);

        void t_SP3Writer::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Writer), &PY_TYPE_DEF(SP3Writer), module, "SP3Writer", 0);
        }

        void t_SP3Writer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "class_", make_descriptor(SP3Writer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "wrapfn_", make_descriptor(t_SP3Writer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Writer::initializeClass, 1)))
            return NULL;
          return t_SP3Writer::wrap_Object(SP3Writer(((t_SP3Writer *) arg)->object.this$));
        }
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Writer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::TimeScales a2((jobject) NULL);
          SP3Writer object((jobject) NULL);

          if (!parseArgs(args, "ksk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3Writer(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3 a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3::initializeClass, &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *StartStopEventsTrigger::class$ = NULL;
          jmethodID *StartStopEventsTrigger::mids$ = NULL;
          bool StartStopEventsTrigger::live$ = false;

          jclass StartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getStartDetector_adbfb38205dfa1c9] = env->getMethodID(cls, "getStartDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_getStopDetector_adbfb38205dfa1c9] = env->getMethodID(cls, "getStopDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_convertStartDetector_2778b7032ad3e419] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_2778b7032ad3e419] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_isFiringOnInitialState_145801f71fbbc869] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStartDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStartDetector_adbfb38205dfa1c9]));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStopDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStopDetector_adbfb38205dfa1c9]));
          }

          void StartStopEventsTrigger::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_StartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, startDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, stopDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_StartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStartDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStopDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StartStopEventsTrigger)[] = {
            { Py_tp_methods, t_StartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(StartStopEventsTrigger, t_StartStopEventsTrigger, StartStopEventsTrigger);
          PyObject *t_StartStopEventsTrigger::wrap_Object(const StartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_StartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_StartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(StartStopEventsTrigger), &PY_TYPE_DEF(StartStopEventsTrigger), module, "StartStopEventsTrigger", 0);
          }

          void t_StartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "class_", make_descriptor(StartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "wrapfn_", make_descriptor(t_StartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_StartStopEventsTrigger::wrap_Object(StartStopEventsTrigger(((t_StartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStopDetector());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "init", args, 2);
          }
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStopDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f8017cbb24483937] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_5c8aaae5527cf802] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_815c7115fae241c1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_f8017cbb24483937, a0.this$)) {}

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_5c8aaae5527cf802, a0.this$, a1.this$)) {}

            ::java::util::SortedSet MarshallSolarActivityFutureEstimationLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_815c7115fae241c1]));
            }

            void MarshallSolarActivityFutureEstimationLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, dataSet),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimationLoader_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader, t_MarshallSolarActivityFutureEstimationLoader, MarshallSolarActivityFutureEstimationLoader);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(const MarshallSolarActivityFutureEstimationLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader), module, "MarshallSolarActivityFutureEstimationLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters)));
            }

            void t_MarshallSolarActivityFutureEstimationLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(MarshallSolarActivityFutureEstimationLoader(((t_MarshallSolarActivityFutureEstimationLoader *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "Kk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a1))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
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

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters));
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TDistribution::class$ = NULL;
        jmethodID *TDistribution::mids$ = NULL;
        bool TDistribution::live$ = false;

        jclass TDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_9981f74b2d109da6] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDistribution::TDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        TDistribution::TDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble TDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble TDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble TDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_9981f74b2d109da6]);
        }

        jdouble TDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble TDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble TDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble TDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean TDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble TDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self);
        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data);
        static PyGetSetDef t_TDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_TDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDistribution__methods_[] = {
          DECLARE_METHOD(t_TDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDistribution)[] = {
          { Py_tp_methods, t_TDistribution__methods_ },
          { Py_tp_init, (void *) t_TDistribution_init_ },
          { Py_tp_getset, t_TDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TDistribution, t_TDistribution, TDistribution);

        void t_TDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TDistribution), &PY_TYPE_DEF(TDistribution), module, "TDistribution", 0);
        }

        void t_TDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "class_", make_descriptor(TDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "wrapfn_", make_descriptor(t_TDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDistribution::initializeClass, 1)))
            return NULL;
          return t_TDistribution::wrap_Object(TDistribution(((t_TDistribution *) arg)->object.this$));
        }
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = TDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = TDistribution(a0, a1));
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

        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ScaledConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *ScaledConstantThrustPropulsionModel::mids$ = NULL;
          bool ScaledConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR = NULL;

          jclass ScaledConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ddbb1762bed80b38] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_9981f74b2d109da6] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_a40ce4fdf6559ac0] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_c04968ee695d037c] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_209f08246d708042] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_032312bdeb3f2f93] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_44a47ea31a9889e8] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5e5894038af17774] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_8b37cafaaf55a3a5] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              THRUSTX_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTX_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTY_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTY_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTZ_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTZ_SCALE_FACTOR", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaledConstantThrustPropulsionModel::ScaledConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_ddbb1762bed80b38, a0, a1, a2.this$, a3.this$)) {}

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_9981f74b2d109da6]);
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_a40ce4fdf6559ac0], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_c04968ee695d037c], a0.this$));
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_209f08246d708042], a0.this$);
          }

          ::java::util::List ScaledConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_44a47ea31a9889e8], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5e5894038af17774], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b37cafaaf55a3a5], a0.this$));
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
          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ScaledConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaledConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaledConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ScaledConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ScaledConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ScaledConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaledConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(ScaledConstantThrustPropulsionModel, t_ScaledConstantThrustPropulsionModel, ScaledConstantThrustPropulsionModel);

          void t_ScaledConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaledConstantThrustPropulsionModel), &PY_TYPE_DEF(ScaledConstantThrustPropulsionModel), module, "ScaledConstantThrustPropulsionModel", 0);
          }

          void t_ScaledConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "class_", make_descriptor(ScaledConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_ScaledConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(ScaledConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTX_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTY_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTZ_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR)));
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ScaledConstantThrustPropulsionModel::wrap_Object(ScaledConstantThrustPropulsionModel(((t_ScaledConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ScaledConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ScaledConstantThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
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
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
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
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericModel::class$ = NULL;
          jmethodID *IonosphericModel::mids$ = NULL;
          bool IonosphericModel::live$ = false;

          jclass IonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_c84aeff9124fe654] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_d2f5e0e8b7e00e80] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement IonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_c84aeff9124fe654], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble IonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_d2f5e0e8b7e00e80], a0.this$, a1.this$, a2, a3.this$);
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
        namespace ionosphere {
          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args);

          static PyMethodDef t_IonosphericModel__methods_[] = {
            DECLARE_METHOD(t_IonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericModel)[] = {
            { Py_tp_methods, t_IonosphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(IonosphericModel, t_IonosphericModel, IonosphericModel);

          void t_IonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericModel), &PY_TYPE_DEF(IonosphericModel), module, "IonosphericModel", 0);
          }

          void t_IonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "class_", make_descriptor(IonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "wrapfn_", make_descriptor(t_IonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericModel::initializeClass, 1)))
              return NULL;
            return t_IonosphericModel::wrap_Object(IonosphericModel(((t_IonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventDetector::class$ = NULL;
        jmethodID *FieldODEEventDetector::mids$ = NULL;
        bool FieldODEEventDetector::live$ = false;

        jclass FieldODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_455ff24598d85771] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_dbadd838da9b41eb] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_e0c20def93760aa5] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_015c35a97d20bc51] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldODEEventDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_455ff24598d85771], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler FieldODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_dbadd838da9b41eb]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval FieldODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_e0c20def93760aa5]));
        }

        jint FieldODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver FieldODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_015c35a97d20bc51]));
        }

        void FieldODEEventDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
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
      namespace events {
        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data);
        static PyGetSetDef t_FieldODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, solver),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventDetector)[] = {
          { Py_tp_methods, t_FieldODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventDetector, t_FieldODEEventDetector, FieldODEEventDetector);
        PyObject *t_FieldODEEventDetector::wrap_Object(const FieldODEEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventDetector), &PY_TYPE_DEF(FieldODEEventDetector), module, "FieldODEEventDetector", 0);
        }

        void t_FieldODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "class_", make_descriptor(FieldODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "wrapfn_", make_descriptor(t_FieldODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventDetector::wrap_Object(FieldODEEventDetector(((t_FieldODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateFunctionDifferentiator::mids$ = NULL;
        bool UnivariateFunctionDifferentiator::live$ = false;

        jclass UnivariateFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_734852731d7ffcb1] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction UnivariateFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_734852731d7ffcb1], a0.this$));
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
        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateFunctionDifferentiator, t_UnivariateFunctionDifferentiator, UnivariateFunctionDifferentiator);

        void t_UnivariateFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateFunctionDifferentiator), &PY_TYPE_DEF(UnivariateFunctionDifferentiator), module, "UnivariateFunctionDifferentiator", 0);
        }

        void t_UnivariateFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "class_", make_descriptor(UnivariateFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateFunctionDifferentiator::wrap_Object(UnivariateFunctionDifferentiator(((t_UnivariateFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
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
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEFixedStepHandler::class$ = NULL;
        jmethodID *FieldODEFixedStepHandler::mids$ = NULL;
        bool FieldODEFixedStepHandler::live$ = false;

        jclass FieldODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_3df55432f52021bf] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)V");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_3df55432f52021bf], a0.this$, a1);
        }

        void FieldODEFixedStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEFixedStepHandler, t_FieldODEFixedStepHandler, FieldODEFixedStepHandler);
        PyObject *t_FieldODEFixedStepHandler::wrap_Object(const FieldODEFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEFixedStepHandler), &PY_TYPE_DEF(FieldODEFixedStepHandler), module, "FieldODEFixedStepHandler", 0);
        }

        void t_FieldODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "class_", make_descriptor(FieldODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "wrapfn_", make_descriptor(t_FieldODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEFixedStepHandler::wrap_Object(FieldODEFixedStepHandler(((t_FieldODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Collection.h"
#include "java/util/Iterator.h"
#include "java/util/stream/Stream.h"
#include "java/util/Spliterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collection::class$ = NULL;
    jmethodID *Collection::mids$ = NULL;
    bool Collection::live$ = false;

    jclass Collection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_61d64368c58b84f3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_parallelStream_11e4ca8182c1933d] = env->getMethodID(cls, "parallelStream", "()Ljava/util/stream/Stream;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_61d64368c58b84f3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_61d64368c58b84f3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_stream_11e4ca8182c1933d] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toArray_2ab86268ef7a6631] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_f4767af6a3829fbc] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Collection::addAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    void Collection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    jboolean Collection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Collection::containsAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_61d64368c58b84f3], a0.this$);
    }

    jboolean Collection::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint Collection::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Collection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator Collection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    ::java::util::stream::Stream Collection::parallelStream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_parallelStream_11e4ca8182c1933d]));
    }

    jboolean Collection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Collection::removeAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_61d64368c58b84f3], a0.this$);
    }

    jboolean Collection::retainAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_61d64368c58b84f3], a0.this$);
    }

    jint Collection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::util::Spliterator Collection::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }

    ::java::util::stream::Stream Collection::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_11e4ca8182c1933d]));
    }

    JArray< ::java::lang::Object > Collection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_2ab86268ef7a6631]));
    }

    JArray< ::java::lang::Object > Collection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_f4767af6a3829fbc], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_clear(t_Collection *self);
    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_hashCode(t_Collection *self);
    static PyObject *t_Collection_isEmpty(t_Collection *self);
    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_parallelStream(t_Collection *self);
    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_size(t_Collection *self);
    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_stream(t_Collection *self);
    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_get__empty(t_Collection *self, void *data);
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data);
    static PyGetSetDef t_Collection__fields_[] = {
      DECLARE_GET_FIELD(t_Collection, empty),
      DECLARE_GET_FIELD(t_Collection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Collection__methods_[] = {
      DECLARE_METHOD(t_Collection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, of_, METH_VARARGS),
      DECLARE_METHOD(t_Collection, add, METH_O),
      DECLARE_METHOD(t_Collection, addAll, METH_O),
      DECLARE_METHOD(t_Collection, clear, METH_NOARGS),
      DECLARE_METHOD(t_Collection, contains, METH_O),
      DECLARE_METHOD(t_Collection, containsAll, METH_O),
      DECLARE_METHOD(t_Collection, equals, METH_O),
      DECLARE_METHOD(t_Collection, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Collection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Collection, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, parallelStream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, remove, METH_O),
      DECLARE_METHOD(t_Collection, removeAll, METH_O),
      DECLARE_METHOD(t_Collection, retainAll, METH_O),
      DECLARE_METHOD(t_Collection, size, METH_NOARGS),
      DECLARE_METHOD(t_Collection, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, stream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collection)[] = {
      { Py_tp_methods, t_Collection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Collection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Collection *)) get_generic_iterator< t_Collection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collection)[] = {
      &PY_TYPE_DEF(::java::lang::Iterable),
      NULL
    };

    DEFINE_TYPE(Collection, t_Collection, Collection);
    PyObject *t_Collection::wrap_Object(const Collection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Collection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Collection::install(PyObject *module)
    {
      installType(&PY_TYPE(Collection), &PY_TYPE_DEF(Collection), module, "Collection", 0);
    }

    void t_Collection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "class_", make_descriptor(Collection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "wrapfn_", make_descriptor(t_Collection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collection::initializeClass, 1)))
        return NULL;
      return t_Collection::wrap_Object(Collection(((t_Collection *) arg)->object.this$));
    }
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_clear(t_Collection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Collection_hashCode(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_isEmpty(t_Collection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Collection_parallelStream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.parallelStream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_size(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Collection_stream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.stream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Collection_get__empty(t_Collection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
                  mids$[mid_compute_9bd40bcce0b8580a] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a74d1a5b8aba9c6b] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_387945137ebab778] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_645a7d53eefd07fb] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_0110eb01e8b95b31] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d71c9b0a2a1fa7ea] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0fd9615f2c436717] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_fabda52a93cfd27a] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_cafc4c7dc2b32f50] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d29d85bd12a1fcb0] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_5f7c6ee4f69e1aee] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_95dcab374babccc7] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f8fb786438f60361] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_fde1912ff911659c] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_426d335df18e2f21] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_ZERO_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ZERO_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_9bd40bcce0b8580a], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a74d1a5b8aba9c6b], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_387945137ebab778], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_645a7d53eefd07fb], a0.this$, a1.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0110eb01e8b95b31], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d71c9b0a2a1fa7ea], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0fd9615f2c436717], a0.this$, a1, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_fabda52a93cfd27a], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_cafc4c7dc2b32f50], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d29d85bd12a1fcb0], a0.this$, a1.this$, a2.this$, a3.this$, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_5f7c6ee4f69e1aee], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7eae8d8112e983e4], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8edb355cf7d54cf6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_95dcab374babccc7], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f8fb786438f60361], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_fde1912ff911659c], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_426d335df18e2f21], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String ShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethod::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_592990a91429410c]));
              }

              jboolean ShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_eee3de00fe971136]);
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
#include "org/hipparchus/stat/descriptive/StatisticalSummaryValues.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalSummaryValues::class$ = NULL;
        jmethodID *StatisticalSummaryValues::mids$ = NULL;
        bool StatisticalSummaryValues::live$ = false;

        jclass StatisticalSummaryValues::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalSummaryValues");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4b8f26a359fa6e0c] = env->getMethodID(cls, "<init>", "(DDJDDD)V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_9981f74b2d109da6] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_9981f74b2d109da6] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_9981f74b2d109da6] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_9981f74b2d109da6] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummaryValues::StatisticalSummaryValues(jdouble a0, jdouble a1, jlong a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b8f26a359fa6e0c, a0, a1, a2, a3, a4, a5)) {}

        jboolean StatisticalSummaryValues::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        jdouble StatisticalSummaryValues::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
        }

        jdouble StatisticalSummaryValues::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_9981f74b2d109da6]);
        }

        jdouble StatisticalSummaryValues::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
        }

        jlong StatisticalSummaryValues::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        jdouble StatisticalSummaryValues::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_9981f74b2d109da6]);
        }

        jdouble StatisticalSummaryValues::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_9981f74b2d109da6]);
        }

        jdouble StatisticalSummaryValues::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_9981f74b2d109da6]);
        }

        jint StatisticalSummaryValues::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        ::java::lang::String StatisticalSummaryValues::toString() const
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
        static PyObject *t_StatisticalSummaryValues_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummaryValues_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StatisticalSummaryValues_init_(t_StatisticalSummaryValues *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StatisticalSummaryValues_equals(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_getMax(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getMean(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getMin(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getN(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getStandardDeviation(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getSum(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getVariance(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_hashCode(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_toString(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_get__max(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__mean(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__min(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__n(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__standardDeviation(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__sum(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__variance(t_StatisticalSummaryValues *self, void *data);
        static PyGetSetDef t_StatisticalSummaryValues__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, max),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, mean),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, min),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, n),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, sum),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalSummaryValues__methods_[] = {
          DECLARE_METHOD(t_StatisticalSummaryValues, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummaryValues, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummaryValues, equals, METH_VARARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalSummaryValues)[] = {
          { Py_tp_methods, t_StatisticalSummaryValues__methods_ },
          { Py_tp_init, (void *) t_StatisticalSummaryValues_init_ },
          { Py_tp_getset, t_StatisticalSummaryValues__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalSummaryValues)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalSummaryValues, t_StatisticalSummaryValues, StatisticalSummaryValues);

        void t_StatisticalSummaryValues::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalSummaryValues), &PY_TYPE_DEF(StatisticalSummaryValues), module, "StatisticalSummaryValues", 0);
        }

        void t_StatisticalSummaryValues::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "class_", make_descriptor(StatisticalSummaryValues::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "wrapfn_", make_descriptor(t_StatisticalSummaryValues::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalSummaryValues_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalSummaryValues::initializeClass, 1)))
            return NULL;
          return t_StatisticalSummaryValues::wrap_Object(StatisticalSummaryValues(((t_StatisticalSummaryValues *) arg)->object.this$));
        }
        static PyObject *t_StatisticalSummaryValues_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalSummaryValues::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StatisticalSummaryValues_init_(t_StatisticalSummaryValues *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jlong a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          StatisticalSummaryValues object((jobject) NULL);

          if (!parseArgs(args, "DDJDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = StatisticalSummaryValues(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StatisticalSummaryValues_equals(t_StatisticalSummaryValues *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_getMax(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getMean(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getMin(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getN(t_StatisticalSummaryValues *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalSummaryValues_getStandardDeviation(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getSum(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getVariance(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_hashCode(t_StatisticalSummaryValues *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_toString(t_StatisticalSummaryValues *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_get__max(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__mean(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__min(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__n(t_StatisticalSummaryValues *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__standardDeviation(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__sum(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__variance(t_StatisticalSummaryValues *self, void *data)
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
#include "org/orekit/frames/InterpolatingTransformProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *InterpolatingTransformProvider::class$ = NULL;
      jmethodID *InterpolatingTransformProvider::mids$ = NULL;
      bool InterpolatingTransformProvider::live$ = false;

      jclass InterpolatingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/InterpolatingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f96a885f66859d5c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_d6ab429752e7c267] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_fd7cd467d992431a] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStep_9981f74b2d109da6] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolatingTransformProvider::InterpolatingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f96a885f66859d5c, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint InterpolatingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_d6ab429752e7c267]);
      }

      ::org::orekit::frames::TransformProvider InterpolatingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_fd7cd467d992431a]));
      }

      jdouble InterpolatingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_9981f74b2d109da6]);
      }

      ::org::orekit::frames::Transform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform InterpolatingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
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
      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self);
      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args);
      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data);
      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data);
      static PyGetSetDef t_InterpolatingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_InterpolatingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolatingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_InterpolatingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_InterpolatingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolatingTransformProvider)[] = {
        { Py_tp_methods, t_InterpolatingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_InterpolatingTransformProvider_init_ },
        { Py_tp_getset, t_InterpolatingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolatingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolatingTransformProvider, t_InterpolatingTransformProvider, InterpolatingTransformProvider);

      void t_InterpolatingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolatingTransformProvider), &PY_TYPE_DEF(InterpolatingTransformProvider), module, "InterpolatingTransformProvider", 0);
      }

      void t_InterpolatingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "class_", make_descriptor(InterpolatingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "wrapfn_", make_descriptor(t_InterpolatingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolatingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolatingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolatingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_InterpolatingTransformProvider::wrap_Object(InterpolatingTransformProvider(((t_InterpolatingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_InterpolatingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolatingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolatingTransformProvider_init_(t_InterpolatingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        InterpolatingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = InterpolatingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InterpolatingTransformProvider_getGridPoints(t_InterpolatingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getRawProvider(t_InterpolatingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_InterpolatingTransformProvider_getStep(t_InterpolatingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InterpolatingTransformProvider_getTransform(t_InterpolatingTransformProvider *self, PyObject *args)
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
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_InterpolatingTransformProvider_get__gridPoints(t_InterpolatingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__rawProvider(t_InterpolatingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_InterpolatingTransformProvider_get__step(t_InterpolatingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventHandler::class$ = NULL;
        jmethodID *ODEEventHandler::mids$ = NULL;
        bool ODEEventHandler::live$ = false;

        jclass ODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_075ecf45286ced3d] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/events/ODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_78e9bb61d32c65ca] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;DLorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_resetState_5d6a404d6243b2bc] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action ODEEventHandler::eventOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::ODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_075ecf45286ced3d], a0.this$, a1.this$, a2));
        }

        void ODEEventHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1, const ::org::hipparchus::ode::events::ODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_78e9bb61d32c65ca], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::ode::ODEState ODEEventHandler::resetState(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_5d6a404d6243b2bc], a0.this$, a1.this$));
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
      namespace events {
        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args);

        static PyMethodDef t_ODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_ODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventHandler)[] = {
          { Py_tp_methods, t_ODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventHandler, t_ODEEventHandler, ODEEventHandler);

        void t_ODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventHandler), &PY_TYPE_DEF(ODEEventHandler), module, "ODEEventHandler", 0);
        }

        void t_ODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "class_", make_descriptor(ODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "wrapfn_", make_descriptor(t_ODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_ODEEventHandler::wrap_Object(ODEEventHandler(((t_ODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::ODEEventDetector a1((jobject) NULL);
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::ode::events::ODEEventDetector a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeIndependentLOSTransform::class$ = NULL;
        jmethodID *TimeIndependentLOSTransform::mids$ = NULL;
        bool TimeIndependentLOSTransform::live$ = false;

        jclass TimeIndependentLOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeIndependentLOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_228f1c415ce966c1] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_abcb5ae819a3f86b] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream TimeIndependentLOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_11e4ca8182c1933d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_228f1c415ce966c1], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeIndependentLOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_abcb5ae819a3f86b], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self);
        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args);
        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data);
        static PyGetSetDef t_TimeIndependentLOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_TimeIndependentLOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeIndependentLOSTransform__methods_[] = {
          DECLARE_METHOD(t_TimeIndependentLOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeIndependentLOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeIndependentLOSTransform)[] = {
          { Py_tp_methods, t_TimeIndependentLOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeIndependentLOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeIndependentLOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeIndependentLOSTransform, t_TimeIndependentLOSTransform, TimeIndependentLOSTransform);

        void t_TimeIndependentLOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeIndependentLOSTransform), &PY_TYPE_DEF(TimeIndependentLOSTransform), module, "TimeIndependentLOSTransform", 0);
        }

        void t_TimeIndependentLOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "class_", make_descriptor(TimeIndependentLOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "wrapfn_", make_descriptor(t_TimeIndependentLOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeIndependentLOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeIndependentLOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeIndependentLOSTransform::initializeClass, 1)))
            return NULL;
          return t_TimeIndependentLOSTransform::wrap_Object(TimeIndependentLOSTransform(((t_TimeIndependentLOSTransform *) arg)->object.this$));
        }
        static PyObject *t_TimeIndependentLOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeIndependentLOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeIndependentLOSTransform_getParametersDrivers(t_TimeIndependentLOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeIndependentLOSTransform_transformLOS(t_TimeIndependentLOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_TimeIndependentLOSTransform_get__parametersDrivers(t_TimeIndependentLOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream.h"
#include "java/io/ObjectOutput.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream::class$ = NULL;
    jmethodID *ObjectOutputStream::mids$ = NULL;
    bool ObjectOutputStream::live$ = false;

    jclass ObjectOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_da52d6defb468793] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultWriteObject_ff7cb6c242604316] = env->getMethodID(cls, "defaultWriteObject", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_putFields_fb97d9cec1d5cb6a] = env->getMethodID(cls, "putFields", "()Ljava/io/ObjectOutputStream$PutField;");
        mids$[mid_reset_ff7cb6c242604316] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_useProtocolVersion_8fd427ab23829bf5] = env->getMethodID(cls, "useProtocolVersion", "(I)V");
        mids$[mid_write_bba2a19638de22ff] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_e4288ba5fbf20d28] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_b35db77cae58639e] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_8fd427ab23829bf5] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_105e1eadb709d9ac] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_8fd427ab23829bf5] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_105e1eadb709d9ac] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_1ad26e8c8c0cd65b] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFields_ff7cb6c242604316] = env->getMethodID(cls, "writeFields", "()V");
        mids$[mid_writeFloat_11c95dcd1c301708] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_8fd427ab23829bf5] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_f5bbab7e97879358] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeObject_83ee235bb1e64e94] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");
        mids$[mid_writeShort_8fd427ab23829bf5] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_105e1eadb709d9ac] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");
        mids$[mid_writeUnshared_83ee235bb1e64e94] = env->getMethodID(cls, "writeUnshared", "(Ljava/lang/Object;)V");
        mids$[mid_writeObjectOverride_83ee235bb1e64e94] = env->getMethodID(cls, "writeObjectOverride", "(Ljava/lang/Object;)V");
        mids$[mid_annotateClass_52aa27780ff57435] = env->getMethodID(cls, "annotateClass", "(Ljava/lang/Class;)V");
        mids$[mid_annotateProxyClass_52aa27780ff57435] = env->getMethodID(cls, "annotateProxyClass", "(Ljava/lang/Class;)V");
        mids$[mid_replaceObject_05290476c26136d7] = env->getMethodID(cls, "replaceObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableReplaceObject_80aaf3d99b4df682] = env->getMethodID(cls, "enableReplaceObject", "(Z)Z");
        mids$[mid_writeStreamHeader_ff7cb6c242604316] = env->getMethodID(cls, "writeStreamHeader", "()V");
        mids$[mid_writeClassDescriptor_98ee7cdeee39a4e3] = env->getMethodID(cls, "writeClassDescriptor", "(Ljava/io/ObjectStreamClass;)V");
        mids$[mid_drain_ff7cb6c242604316] = env->getMethodID(cls, "drain", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream::ObjectOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_da52d6defb468793, a0.this$)) {}

    void ObjectOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void ObjectOutputStream::defaultWriteObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultWriteObject_ff7cb6c242604316]);
    }

    void ObjectOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    ::java::io::ObjectOutputStream$PutField ObjectOutputStream::putFields() const
    {
      return ::java::io::ObjectOutputStream$PutField(env->callObjectMethod(this$, mids$[mid_putFields_fb97d9cec1d5cb6a]));
    }

    void ObjectOutputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_ff7cb6c242604316]);
    }

    void ObjectOutputStream::useProtocolVersion(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_useProtocolVersion_8fd427ab23829bf5], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_bba2a19638de22ff], a0.this$);
    }

    void ObjectOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e4288ba5fbf20d28], a0.this$, a1, a2);
    }

    void ObjectOutputStream::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_b35db77cae58639e], a0);
    }

    void ObjectOutputStream::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_8fd427ab23829bf5], a0);
    }

    void ObjectOutputStream::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_105e1eadb709d9ac], a0.this$);
    }

    void ObjectOutputStream::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_8fd427ab23829bf5], a0);
    }

    void ObjectOutputStream::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_105e1eadb709d9ac], a0.this$);
    }

    void ObjectOutputStream::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_1ad26e8c8c0cd65b], a0);
    }

    void ObjectOutputStream::writeFields() const
    {
      env->callVoidMethod(this$, mids$[mid_writeFields_ff7cb6c242604316]);
    }

    void ObjectOutputStream::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_11c95dcd1c301708], a0);
    }

    void ObjectOutputStream::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_8fd427ab23829bf5], a0);
    }

    void ObjectOutputStream::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_f5bbab7e97879358], a0);
    }

    void ObjectOutputStream::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_83ee235bb1e64e94], a0.this$);
    }

    void ObjectOutputStream::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_8fd427ab23829bf5], a0);
    }

    void ObjectOutputStream::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_105e1eadb709d9ac], a0.this$);
    }

    void ObjectOutputStream::writeUnshared(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUnshared_83ee235bb1e64e94], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, defaultWriteObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, putFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, useProtocolVersion, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeBoolean, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeByte, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeBytes, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChar, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChars, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeDouble, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeFloat, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeInt, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeLong, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeObject, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeShort, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUTF, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUnshared, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream)[] = {
      { Py_tp_methods, t_ObjectOutputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream, t_ObjectOutputStream, ObjectOutputStream);

    void t_ObjectOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream), &PY_TYPE_DEF(ObjectOutputStream), module, "ObjectOutputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "PutField", make_descriptor(&PY_TYPE_DEF(ObjectOutputStream$PutField)));
    }

    void t_ObjectOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "class_", make_descriptor(ObjectOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "wrapfn_", make_descriptor(t_ObjectOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream::wrap_Object(ObjectOutputStream(((t_ObjectOutputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ObjectOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.defaultWriteObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self)
    {
      ::java::io::ObjectOutputStream$PutField result((jobject) NULL);
      OBJ_CALL(result = self->object.putFields());
      return ::java::io::t_ObjectOutputStream$PutField::wrap_Object(result);
    }

    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.useProtocolVersion(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "useProtocolVersion", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args)
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

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.writeBoolean(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBoolean", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeByte(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeByte", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBytes", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeChar(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChar", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeChars(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChars", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.writeDouble(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeDouble", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.writeFields());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg)
    {
      jfloat a0;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(self->object.writeFloat(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeFloat", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeInt(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeInt", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.writeLong(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeLong", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeObject(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeObject", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeShort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeShort", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeUTF(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUTF", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeUnshared(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUnshared", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenTesseralLinear::class$ = NULL;
              jmethodID *FieldHansenTesseralLinear::mids$ = NULL;
              bool FieldHansenTesseralLinear::live$ = false;

              jclass FieldHansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3621dda6d262ea2c] = env->getMethodID(cls, "<init>", "(IIIIILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_f9ea60a8dc2d69fb] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_b23de0cfc61f8f60] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_b23de0cfc61f8f60] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenTesseralLinear::FieldHansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3621dda6d262ea2c, a0, a1, a2, a3, a4, a5.this$)) {}

              void FieldHansenTesseralLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_f9ea60a8dc2d69fb], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_b23de0cfc61f8f60], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_b23de0cfc61f8f60], a0, a1.this$));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args);
              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data);
              static PyGetSetDef t_FieldHansenTesseralLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenTesseralLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenTesseralLinear)[] = {
                { Py_tp_methods, t_FieldHansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenTesseralLinear_init_ },
                { Py_tp_getset, t_FieldHansenTesseralLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenTesseralLinear, t_FieldHansenTesseralLinear, FieldHansenTesseralLinear);
              PyObject *t_FieldHansenTesseralLinear::wrap_Object(const FieldHansenTesseralLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenTesseralLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenTesseralLinear), &PY_TYPE_DEF(FieldHansenTesseralLinear), module, "FieldHansenTesseralLinear", 0);
              }

              void t_FieldHansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "class_", make_descriptor(FieldHansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "wrapfn_", make_descriptor(t_FieldHansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenTesseralLinear::wrap_Object(FieldHansenTesseralLinear(((t_FieldHansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                ::org::hipparchus::Field a5((jobject) NULL);
                PyTypeObject **p5;
                FieldHansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIIIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenTesseralLinear(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data)
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
#include "org/orekit/data/DataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataLoader::class$ = NULL;
      jmethodID *DataLoader::mids$ = NULL;
      bool DataLoader::live$ = false;

      jclass DataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
      }

      jboolean DataLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args);
      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self);

      static PyMethodDef t_DataLoader__methods_[] = {
        DECLARE_METHOD(t_DataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_DataLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataLoader)[] = {
        { Py_tp_methods, t_DataLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataLoader, t_DataLoader, DataLoader);

      void t_DataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(DataLoader), &PY_TYPE_DEF(DataLoader), module, "DataLoader", 0);
      }

      void t_DataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "class_", make_descriptor(DataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "wrapfn_", make_descriptor(t_DataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataLoader::initializeClass, 1)))
          return NULL;
        return t_DataLoader::wrap_Object(DataLoader(((t_DataLoader *) arg)->object.this$));
      }
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args)
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

      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmWriter::class$ = NULL;
            jmethodID *TdmWriter::mids$ = NULL;
            bool TdmWriter::live$ = false;
            jdouble TdmWriter::CCSDS_TDM_VERS = (jdouble) 0;
            jint TdmWriter::KVN_PADDING_WIDTH = (jint) 0;

            jclass TdmWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_335e456c2be37fcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
                mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CCSDS_TDM_VERS = env->getStaticDoubleField(cls, "CCSDS_TDM_VERS");
                KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmWriter::TdmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_335e456c2be37fcf, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args);
            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data);
            static PyGetSetDef t_TdmWriter__fields_[] = {
              DECLARE_GET_FIELD(t_TdmWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmWriter__methods_[] = {
              DECLARE_METHOD(t_TdmWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmWriter, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmWriter)[] = {
              { Py_tp_methods, t_TdmWriter__methods_ },
              { Py_tp_init, (void *) t_TdmWriter_init_ },
              { Py_tp_getset, t_TdmWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(TdmWriter, t_TdmWriter, TdmWriter);
            PyObject *t_TdmWriter::wrap_Object(const TdmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmWriter *self = (t_TdmWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmWriter), &PY_TYPE_DEF(TdmWriter), module, "TdmWriter", 0);
            }

            void t_TdmWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "class_", make_descriptor(TdmWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "wrapfn_", make_descriptor(t_TdmWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "CCSDS_TDM_VERS", make_descriptor(TdmWriter::CCSDS_TDM_VERS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmWriter), "KVN_PADDING_WIDTH", make_descriptor(TdmWriter::KVN_PADDING_WIDTH));
            }

            static PyObject *t_TdmWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmWriter::initializeClass, 1)))
                return NULL;
              return t_TdmWriter::wrap_Object(TdmWriter(((t_TdmWriter *) arg)->object.this$));
            }
            static PyObject *t_TdmWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmWriter_of_(t_TdmWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_TdmWriter_init_(t_TdmWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::utils::IERSConventions a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::data::DataContext a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a2((jobject) NULL);
              TdmWriter object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
              {
                INT_CALL(object = TdmWriter(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
                self->parameters[2] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Tdm);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_TdmWriter_get__parameters_(t_TdmWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularTroposphericDelayModifier::class$ = NULL;
          jmethodID *AngularTroposphericDelayModifier::mids$ = NULL;
          bool AngularTroposphericDelayModifier::live$ = false;

          jclass AngularTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1f42633debde232b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularTroposphericDelayModifier::AngularTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f42633debde232b, a0.this$)) {}

          ::java::util::List AngularTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void AngularTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self);
          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularTroposphericDelayModifier, t_AngularTroposphericDelayModifier, AngularTroposphericDelayModifier);

          void t_AngularTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularTroposphericDelayModifier), &PY_TYPE_DEF(AngularTroposphericDelayModifier), module, "AngularTroposphericDelayModifier", 0);
          }

          void t_AngularTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "class_", make_descriptor(AngularTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "wrapfn_", make_descriptor(t_AngularTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularTroposphericDelayModifier::wrap_Object(AngularTroposphericDelayModifier(((t_AngularTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            AngularTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/utils/ParameterObserver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterObserver::class$ = NULL;
      jmethodID *ParameterObserver::mids$ = NULL;
      bool ParameterObserver::live$ = false;

      jclass ParameterObserver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterObserver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_estimationTypeChanged_c75c970d260cd0dc] = env->getMethodID(cls, "estimationTypeChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_maxValueChanged_4feb01834768abb1] = env->getMethodID(cls, "maxValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_minValueChanged_4feb01834768abb1] = env->getMethodID(cls, "minValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_nameChanged_6ace1c82b9fc096f] = env->getMethodID(cls, "nameChanged", "(Ljava/lang/String;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceDateChanged_863636e2c613274c] = env->getMethodID(cls, "referenceDateChanged", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_referenceValueChanged_4feb01834768abb1] = env->getMethodID(cls, "referenceValueChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_scaleChanged_4feb01834768abb1] = env->getMethodID(cls, "scaleChanged", "(DLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_selectionChanged_c75c970d260cd0dc] = env->getMethodID(cls, "selectionChanged", "(ZLorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_valueChanged_561d325e967ec35c] = env->getMethodID(cls, "valueChanged", "(DLorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_valueSpanMapChanged_d10bdde76d08bc2c] = env->getMethodID(cls, "valueSpanMapChanged", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/ParameterDriver;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ParameterObserver::estimationTypeChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_estimationTypeChanged_c75c970d260cd0dc], a0, a1.this$);
      }

      void ParameterObserver::maxValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_maxValueChanged_4feb01834768abb1], a0, a1.this$);
      }

      void ParameterObserver::minValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_minValueChanged_4feb01834768abb1], a0, a1.this$);
      }

      void ParameterObserver::nameChanged(const ::java::lang::String & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_nameChanged_6ace1c82b9fc096f], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceDateChanged(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceDateChanged_863636e2c613274c], a0.this$, a1.this$);
      }

      void ParameterObserver::referenceValueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_referenceValueChanged_4feb01834768abb1], a0, a1.this$);
      }

      void ParameterObserver::scaleChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaleChanged_4feb01834768abb1], a0, a1.this$);
      }

      void ParameterObserver::selectionChanged(jboolean a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_selectionChanged_c75c970d260cd0dc], a0, a1.this$);
      }

      void ParameterObserver::valueChanged(jdouble a0, const ::org::orekit::utils::ParameterDriver & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_valueChanged_561d325e967ec35c], a0, a1.this$, a2.this$);
      }

      void ParameterObserver::valueSpanMapChanged(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::utils::ParameterDriver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_valueSpanMapChanged_d10bdde76d08bc2c], a0.this$, a1.this$);
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
      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args);
      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args);

      static PyMethodDef t_ParameterObserver__methods_[] = {
        DECLARE_METHOD(t_ParameterObserver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterObserver, estimationTypeChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, maxValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, minValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, nameChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceDateChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, referenceValueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, scaleChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, selectionChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueChanged, METH_VARARGS),
        DECLARE_METHOD(t_ParameterObserver, valueSpanMapChanged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterObserver)[] = {
        { Py_tp_methods, t_ParameterObserver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterObserver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterObserver, t_ParameterObserver, ParameterObserver);

      void t_ParameterObserver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterObserver), &PY_TYPE_DEF(ParameterObserver), module, "ParameterObserver", 0);
      }

      void t_ParameterObserver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "class_", make_descriptor(ParameterObserver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "wrapfn_", make_descriptor(t_ParameterObserver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterObserver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterObserver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterObserver::initializeClass, 1)))
          return NULL;
        return t_ParameterObserver::wrap_Object(ParameterObserver(((t_ParameterObserver *) arg)->object.this$));
      }
      static PyObject *t_ParameterObserver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterObserver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterObserver_estimationTypeChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.estimationTypeChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "estimationTypeChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_maxValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.maxValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "maxValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_minValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.minValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "minValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_nameChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.nameChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "nameChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceDateChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceDateChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceDateChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_referenceValueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.referenceValueChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "referenceValueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_scaleChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaleChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaleChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_selectionChanged(t_ParameterObserver *self, PyObject *args)
      {
        jboolean a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Zk", ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.selectionChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "selectionChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueChanged(t_ParameterObserver *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.valueChanged(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueChanged", args);
        return NULL;
      }

      static PyObject *t_ParameterObserver_valueSpanMapChanged(t_ParameterObserver *self, PyObject *args)
      {
        ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::ParameterDriver a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::ParameterDriver::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1))
        {
          OBJ_CALL(self->object.valueSpanMapChanged(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "valueSpanMapChanged", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *InterSatellitesPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *InterSatellitesPhaseAmbiguityModifier::mids$ = NULL;
          bool InterSatellitesPhaseAmbiguityModifier::live$ = false;

          jclass InterSatellitesPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseAmbiguityModifier::InterSatellitesPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

          ::java::util::List InterSatellitesPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void InterSatellitesPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void InterSatellitesPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseAmbiguityModifier, t_InterSatellitesPhaseAmbiguityModifier, InterSatellitesPhaseAmbiguityModifier);

          void t_InterSatellitesPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseAmbiguityModifier), &PY_TYPE_DEF(InterSatellitesPhaseAmbiguityModifier), module, "InterSatellitesPhaseAmbiguityModifier", 0);
          }

          void t_InterSatellitesPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "class_", make_descriptor(InterSatellitesPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_InterSatellitesPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseAmbiguityModifier::wrap_Object(InterSatellitesPhaseAmbiguityModifier(((t_InterSatellitesPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            InterSatellitesPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = InterSatellitesPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data)
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
#include "org/orekit/frames/CR3BPRotatingFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *CR3BPRotatingFrame::class$ = NULL;
      jmethodID *CR3BPRotatingFrame::mids$ = NULL;
      bool CR3BPRotatingFrame::live$ = false;

      jclass CR3BPRotatingFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/CR3BPRotatingFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5d0679643b2bc625] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPRotatingFrame::CR3BPRotatingFrame(jdouble a0, const ::org::orekit::bodies::CelestialBody & a1, const ::org::orekit::bodies::CelestialBody & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_5d0679643b2bc625, a0, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_CR3BPRotatingFrame__methods_[] = {
        DECLARE_METHOD(t_CR3BPRotatingFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPRotatingFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPRotatingFrame)[] = {
        { Py_tp_methods, t_CR3BPRotatingFrame__methods_ },
        { Py_tp_init, (void *) t_CR3BPRotatingFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPRotatingFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(CR3BPRotatingFrame, t_CR3BPRotatingFrame, CR3BPRotatingFrame);

      void t_CR3BPRotatingFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPRotatingFrame), &PY_TYPE_DEF(CR3BPRotatingFrame), module, "CR3BPRotatingFrame", 0);
      }

      void t_CR3BPRotatingFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "class_", make_descriptor(CR3BPRotatingFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "wrapfn_", make_descriptor(t_CR3BPRotatingFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPRotatingFrame::initializeClass, 1)))
          return NULL;
        return t_CR3BPRotatingFrame::wrap_Object(CR3BPRotatingFrame(((t_CR3BPRotatingFrame *) arg)->object.this$));
      }
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPRotatingFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
        CR3BPRotatingFrame object((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPRotatingFrame(a0, a1, a2));
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
#include "java/util/AbstractCollection.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractCollection::class$ = NULL;
    jmethodID *AbstractCollection::mids$ = NULL;
    bool AbstractCollection::live$ = false;

    jclass AbstractCollection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractCollection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_61d64368c58b84f3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_61d64368c58b84f3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_61d64368c58b84f3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toArray_2ab86268ef7a6631] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_f4767af6a3829fbc] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractCollection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    jboolean AbstractCollection::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    void AbstractCollection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    jboolean AbstractCollection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    jboolean AbstractCollection::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_61d64368c58b84f3], a0.this$);
    }

    jboolean AbstractCollection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator AbstractCollection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    jboolean AbstractCollection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jboolean AbstractCollection::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_61d64368c58b84f3], a0.this$);
    }

    jboolean AbstractCollection::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_61d64368c58b84f3], a0.this$);
    }

    jint AbstractCollection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_2ab86268ef7a6631]));
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_f4767af6a3829fbc], a0.this$));
    }

    ::java::lang::String AbstractCollection::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data);
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data);
    static PyGetSetDef t_AbstractCollection__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractCollection, empty),
      DECLARE_GET_FIELD(t_AbstractCollection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractCollection__methods_[] = {
      DECLARE_METHOD(t_AbstractCollection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, add, METH_O),
      DECLARE_METHOD(t_AbstractCollection, addAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, contains, METH_O),
      DECLARE_METHOD(t_AbstractCollection, containsAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, iterator, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, remove, METH_O),
      DECLARE_METHOD(t_AbstractCollection, removeAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, retainAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, toArray, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractCollection)[] = {
      { Py_tp_methods, t_AbstractCollection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractCollection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractCollection *)) get_generic_iterator< t_AbstractCollection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractCollection)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractCollection, t_AbstractCollection, AbstractCollection);
    PyObject *t_AbstractCollection::wrap_Object(const AbstractCollection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractCollection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractCollection::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractCollection), &PY_TYPE_DEF(AbstractCollection), module, "AbstractCollection", 0);
    }

    void t_AbstractCollection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "class_", make_descriptor(AbstractCollection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "wrapfn_", make_descriptor(t_AbstractCollection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractCollection::initializeClass, 1)))
        return NULL;
      return t_AbstractCollection::wrap_Object(AbstractCollection(((t_AbstractCollection *) arg)->object.this$));
    }
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractCollection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.iterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }

    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractCollection), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseBuilder::class$ = NULL;
          jmethodID *PhaseBuilder::mids$ = NULL;
          bool PhaseBuilder::live$ = false;

          jclass PhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f63d5f263c5b207d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_3c12e56ef0c5cddf] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/Phase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseBuilder::PhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_f63d5f263c5b207d, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::gnss::Phase PhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::Phase(env->callObjectMethod(this$, mids$[mid_build_3c12e56ef0c5cddf], a0.this$, a1.this$));
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
          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args);
          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args);
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data);
          static PyGetSetDef t_PhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_PhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseBuilder)[] = {
            { Py_tp_methods, t_PhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_PhaseBuilder_init_ },
            { Py_tp_getset, t_PhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PhaseBuilder, t_PhaseBuilder, PhaseBuilder);
          PyObject *t_PhaseBuilder::wrap_Object(const PhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseBuilder), &PY_TYPE_DEF(PhaseBuilder), module, "PhaseBuilder", 0);
          }

          void t_PhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "class_", make_descriptor(PhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "wrapfn_", make_descriptor(t_PhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_PhaseBuilder::wrap_Object(PhaseBuilder(((t_PhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            PhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::Phase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_Phase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/section/AbstractWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *AbstractWriter::class$ = NULL;
          jmethodID *AbstractWriter::mids$ = NULL;
          bool AbstractWriter::live$ = false;

          jclass AbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/AbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_enterSection_05c6d36d73082fa6] = env->getMethodID(cls, "enterSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_exitSection_05c6d36d73082fa6] = env->getMethodID(cls, "exitSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_write_05c6d36d73082fa6] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_intArrayToString_c9e8e005aec406fb] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractWriter::enterSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_enterSection_05c6d36d73082fa6], a0.this$);
          }

          void AbstractWriter::exitSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_exitSection_05c6d36d73082fa6], a0.this$);
          }

          void AbstractWriter::write(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_write_05c6d36d73082fa6], a0.this$);
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
          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg);

          static PyMethodDef t_AbstractWriter__methods_[] = {
            DECLARE_METHOD(t_AbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, enterSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, exitSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, write, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWriter)[] = {
            { Py_tp_methods, t_AbstractWriter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWriter, t_AbstractWriter, AbstractWriter);

          void t_AbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWriter), &PY_TYPE_DEF(AbstractWriter), module, "AbstractWriter", 0);
          }

          void t_AbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "class_", make_descriptor(AbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "wrapfn_", make_descriptor(t_AbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWriter::initializeClass, 1)))
              return NULL;
            return t_AbstractWriter::wrap_Object(AbstractWriter(((t_AbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.enterSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.exitSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "exitSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.write(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "write", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadataKey::class$ = NULL;
              jmethodID *AemMetadataKey::mids$ = NULL;
              bool AemMetadataKey::live$ = false;
              AemMetadataKey *AemMetadataKey::ANGVEL_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_DIR = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::EULER_ROT_SEQ = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_DEGREE = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_METHOD = NULL;
              AemMetadataKey *AemMetadataKey::QUATERNION_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::RATE_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_A = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_B = NULL;
              AemMetadataKey *AemMetadataKey::START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::STOP_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass AemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e6c30b192f52a997] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)Z");
                  mids$[mid_valueOf_a01b0e5039ad4ad8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");
                  mids$[mid_values_b2d3a76f7e5eda1b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_DIR = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_DIR", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  EULER_ROT_SEQ = new AemMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_DEGREE = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_METHOD = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  QUATERNION_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "QUATERNION_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  RATE_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_A = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_B = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e6c30b192f52a997], a0.this$, a1.this$, a2.this$);
              }

              AemMetadataKey AemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a01b0e5039ad4ad8], a0.this$));
              }

              JArray< AemMetadataKey > AemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b2d3a76f7e5eda1b]));
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
              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data);
              static PyGetSetDef t_AemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadataKey)[] = {
                { Py_tp_methods, t_AemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AemMetadataKey, t_AemMetadataKey, AemMetadataKey);
              PyObject *t_AemMetadataKey::wrap_Object(const AemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadataKey), &PY_TYPE_DEF(AemMetadataKey), module, "AemMetadataKey", 0);
              }

              void t_AemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "class_", make_descriptor(AemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "wrapfn_", make_descriptor(t_AemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ANGVEL_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_DIR", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_METHOD", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "QUATERNION_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::QUATERNION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "RATE_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_A", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_B", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AemMetadataKey::wrap_Object(AemMetadataKey(((t_AemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::valueOf(a0));
                  return t_AemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AemMetadataKey_values(PyTypeObject *type)
              {
                JArray< AemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AemMetadataKey::wrap_jobject);
              }
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *SignSemantic::class$ = NULL;
          jmethodID *SignSemantic::mids$ = NULL;
          bool SignSemantic::live$ = false;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = NULL;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE = NULL;

          jclass SignSemantic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/SignSemantic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_measurementIsFeasible_7bc657d327f0f830] = env->getMethodID(cls, "measurementIsFeasible", "(D)Z");
              mids$[mid_valueOf_30a9972c501fd004] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/generation/SignSemantic;");
              mids$[mid_values_adee68db45309fb9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/generation/SignSemantic;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              FEASIBLE_MEASUREMENT_WHEN_POSITIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SignSemantic::measurementIsFeasible(jdouble a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_7bc657d327f0f830], a0);
          }

          SignSemantic SignSemantic::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SignSemantic(env->callStaticObjectMethod(cls, mids$[mid_valueOf_30a9972c501fd004], a0.this$));
          }

          JArray< SignSemantic > SignSemantic::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SignSemantic >(env->callStaticObjectMethod(cls, mids$[mid_values_adee68db45309fb9]));
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
          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args);
          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg);
          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SignSemantic_values(PyTypeObject *type);
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data);
          static PyGetSetDef t_SignSemantic__fields_[] = {
            DECLARE_GET_FIELD(t_SignSemantic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SignSemantic__methods_[] = {
            DECLARE_METHOD(t_SignSemantic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, of_, METH_VARARGS),
            DECLARE_METHOD(t_SignSemantic, measurementIsFeasible, METH_O),
            DECLARE_METHOD(t_SignSemantic, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SignSemantic)[] = {
            { Py_tp_methods, t_SignSemantic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SignSemantic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SignSemantic)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SignSemantic, t_SignSemantic, SignSemantic);
          PyObject *t_SignSemantic::wrap_Object(const SignSemantic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SignSemantic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SignSemantic::install(PyObject *module)
          {
            installType(&PY_TYPE(SignSemantic), &PY_TYPE_DEF(SignSemantic), module, "SignSemantic", 0);
          }

          void t_SignSemantic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "class_", make_descriptor(SignSemantic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "wrapfn_", make_descriptor(t_SignSemantic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "boxfn_", make_descriptor(boxObject));
            env->getClass(SignSemantic::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE)));
          }

          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SignSemantic::initializeClass, 1)))
              return NULL;
            return t_SignSemantic::wrap_Object(SignSemantic(((t_SignSemantic *) arg)->object.this$));
          }
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SignSemantic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg)
          {
            jdouble a0;
            jboolean result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }

          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SignSemantic result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::valueOf(a0));
              return t_SignSemantic::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SignSemantic_values(PyTypeObject *type)
          {
            JArray< SignSemantic > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::values());
            return JArray<jobject>(result.this$).wrap(t_SignSemantic::wrap_jobject);
          }
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data)
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
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineSensor::class$ = NULL;
        jmethodID *LineSensor::mids$ = NULL;
        bool LineSensor::live$ = false;

        jclass LineSensor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineSensor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e083163155b5335c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/rugged/linesensor/LineDatation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/los/TimeDependentLOS;)V");
            mids$[mid_dumpRate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "dumpRate", "(D)V");
            mids$[mid_getDate_d2854c25a21df51f] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLOS_1f1ccf631d2e4b23] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOS_d085661cbb0e1601] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;I)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_2e4776f8f6c99ef4] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLOSDerivatives_fa4b109980b8e155] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;ILorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLine_209f08246d708042] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNbPixels_d6ab429752e7c267] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getPosition_032312bdeb3f2f93] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getRate_bf28ed64d6e8576b] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LineSensor::LineSensor(const ::java::lang::String & a0, const ::org::orekit::rugged::linesensor::LineDatation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::los::TimeDependentLOS & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e083163155b5335c, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void LineSensor::dumpRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_dumpRate_1ad26e8c8c0cd65b], a0);
        }

        ::org::orekit::time::AbsoluteDate LineSensor::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_d2854c25a21df51f], a0));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_1f1ccf631d2e4b23], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_d085661cbb0e1601], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_2e4776f8f6c99ef4], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_fa4b109980b8e155], a0.this$, a1, a2.this$));
        }

        jdouble LineSensor::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_209f08246d708042], a0.this$);
        }

        ::java::lang::String LineSensor::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        jint LineSensor::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_d6ab429752e7c267]);
        }

        ::java::util::stream::Stream LineSensor::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_11e4ca8182c1933d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_032312bdeb3f2f93]));
        }

        jdouble LineSensor::getRate(jdouble a0) const
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
        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getName(t_LineSensor *self);
        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self);
        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self);
        static PyObject *t_LineSensor_getPosition(t_LineSensor *self);
        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data);
        static PyGetSetDef t_LineSensor__fields_[] = {
          DECLARE_GET_FIELD(t_LineSensor, name),
          DECLARE_GET_FIELD(t_LineSensor, nbPixels),
          DECLARE_GET_FIELD(t_LineSensor, parametersDrivers),
          DECLARE_GET_FIELD(t_LineSensor, position),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LineSensor__methods_[] = {
          DECLARE_METHOD(t_LineSensor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, dumpRate, METH_O),
          DECLARE_METHOD(t_LineSensor, getDate, METH_O),
          DECLARE_METHOD(t_LineSensor, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLine, METH_O),
          DECLARE_METHOD(t_LineSensor, getName, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineSensor)[] = {
          { Py_tp_methods, t_LineSensor__methods_ },
          { Py_tp_init, (void *) t_LineSensor_init_ },
          { Py_tp_getset, t_LineSensor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineSensor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineSensor, t_LineSensor, LineSensor);

        void t_LineSensor::install(PyObject *module)
        {
          installType(&PY_TYPE(LineSensor), &PY_TYPE_DEF(LineSensor), module, "LineSensor", 0);
        }

        void t_LineSensor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "class_", make_descriptor(LineSensor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "wrapfn_", make_descriptor(t_LineSensor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineSensor::initializeClass, 1)))
            return NULL;
          return t_LineSensor::wrap_Object(LineSensor(((t_LineSensor *) arg)->object.this$));
        }
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineSensor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineDatation a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::los::TimeDependentLOS a3((jobject) NULL);
          LineSensor object((jobject) NULL);

          if (!parseArgs(args, "skkk", ::org::orekit::rugged::linesensor::LineDatation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::los::TimeDependentLOS::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = LineSensor(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.dumpRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "dumpRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg)
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

        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kIK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg)
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

        static PyObject *t_LineSensor_getName(t_LineSensor *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LineSensor_getPosition(t_LineSensor *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg)
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

        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance::class$ = NULL;
          jmethodID *SemiVariance::mids$ = NULL;
          bool SemiVariance::live$ = false;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::DOWNSIDE_VARIANCE = NULL;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::UPSIDE_VARIANCE = NULL;

          jclass SemiVariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_79c096891d3e539b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_418b8a246e0c33bd] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_copy_84a8484e1258ad28] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_evaluate_229f5c50d878b104] = env->getMethodID(cls, "evaluate", "([DLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_02811febb145516c] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_49ff84cd883d84c0] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_074b17341dec6c01] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;ZII)D");
              mids$[mid_getVarianceDirection_242f9ad1a2b84bd8] = env->getMethodID(cls, "getVarianceDirection", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_isBiasCorrected_eee3de00fe971136] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrected_494831e647e10241] = env->getMethodID(cls, "withBiasCorrected", "(Z)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_withVarianceDirection_11b511cca7fbbae2] = env->getMethodID(cls, "withVarianceDirection", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance::SemiVariance() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          SemiVariance::SemiVariance(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_79c096891d3e539b, a0.this$)) {}

          SemiVariance::SemiVariance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

          SemiVariance::SemiVariance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_418b8a246e0c33bd, a0, a1.this$)) {}

          SemiVariance SemiVariance::copy() const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_copy_84a8484e1258ad28]));
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_229f5c50d878b104], a0.this$, a1.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_02811febb145516c], a0.this$, a1);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_49ff84cd883d84c0], a0.this$, a1, a2.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2, jboolean a3, jint a4, jint a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_074b17341dec6c01], a0.this$, a1, a2.this$, a3, a4, a5);
          }

          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction SemiVariance::getVarianceDirection() const
          {
            return ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->callObjectMethod(this$, mids$[mid_getVarianceDirection_242f9ad1a2b84bd8]));
          }

          jboolean SemiVariance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_eee3de00fe971136]);
          }

          SemiVariance SemiVariance::withBiasCorrected(jboolean a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withBiasCorrected_494831e647e10241], a0));
          }

          SemiVariance SemiVariance::withVarianceDirection(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withVarianceDirection_11b511cca7fbbae2], a0.this$));
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
          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self);
          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self);
          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data);
          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data);
          static PyGetSetDef t_SemiVariance__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance, biasCorrected),
            DECLARE_GET_FIELD(t_SemiVariance, varianceDirection),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance__methods_[] = {
            DECLARE_METHOD(t_SemiVariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, copy, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, getVarianceDirection, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, withBiasCorrected, METH_O),
            DECLARE_METHOD(t_SemiVariance, withVarianceDirection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance)[] = {
            { Py_tp_methods, t_SemiVariance__methods_ },
            { Py_tp_init, (void *) t_SemiVariance_init_ },
            { Py_tp_getset, t_SemiVariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SemiVariance, t_SemiVariance, SemiVariance);

          void t_SemiVariance::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance), &PY_TYPE_DEF(SemiVariance), module, "SemiVariance", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "Direction", make_descriptor(&PY_TYPE_DEF(SemiVariance$Direction)));
          }

          void t_SemiVariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "class_", make_descriptor(SemiVariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "wrapfn_", make_descriptor(t_SemiVariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "DOWNSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::DOWNSIDE_VARIANCE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "UPSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::UPSIDE_VARIANCE)));
          }

          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance::initializeClass, 1)))
              return NULL;
            return t_SemiVariance::wrap_Object(SemiVariance(((t_SemiVariance *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SemiVariance object((jobject) NULL);

                INT_CALL(object = SemiVariance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
                PyTypeObject **p0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "ZK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0, a1));
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

          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args)
          {
            SemiVariance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SemiVariance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble result;

                if (!parseArgs(args, "[DK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
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
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble result;

                if (!parseArgs(args, "[DDK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
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
             case 6:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jboolean a3;
                jint a4;
                jint a5;
                jdouble result;

                if (!parseArgs(args, "[DDKZII", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction result((jobject) NULL);
            OBJ_CALL(result = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(result);
          }

          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg)
          {
            jboolean a0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrected(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrected", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
            PyTypeObject **p0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
            {
              OBJ_CALL(result = self->object.withVarianceDirection(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withVarianceDirection", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction value((jobject) NULL);
            OBJ_CALL(value = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NtripClient::class$ = NULL;
          jmethodID *NtripClient::mids$ = NULL;
          bool NtripClient::live$ = false;
          jint NtripClient::DEFAULT_MAX_RECONNECT = (jint) 0;
          jint NtripClient::DEFAULT_PORT = (jint) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY = (jdouble) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR = (jdouble) 0;
          jint NtripClient::DEFAULT_TIMEOUT = (jint) 0;

          jclass NtripClient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NtripClient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_409747bddf859341] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
              mids$[mid_addObserver_4cc5c5cdb5b5be2f] = env->getMethodID(cls, "addObserver", "(ILjava/lang/String;Lorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_checkException_ff7cb6c242604316] = env->getMethodID(cls, "checkException", "()V");
              mids$[mid_getHost_d2c8eb4129821f0e] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
              mids$[mid_getPort_d6ab429752e7c267] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getSourceTable_3ac901a526a53433] = env->getMethodID(cls, "getSourceTable", "()Lorg/orekit/gnss/metric/ntrip/SourceTable;");
              mids$[mid_setFix_a1f752ef84c10e69] = env->getMethodID(cls, "setFix", "(IIDDDDD)V");
              mids$[mid_setReconnectParameters_905e65280a4e6722] = env->getMethodID(cls, "setReconnectParameters", "(DDI)V");
              mids$[mid_setTimeout_8fd427ab23829bf5] = env->getMethodID(cls, "setTimeout", "(I)V");
              mids$[mid_startStreaming_f037fdaad5f5f57b] = env->getMethodID(cls, "startStreaming", "(Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZ)V");
              mids$[mid_stopStreaming_8fd427ab23829bf5] = env->getMethodID(cls, "stopStreaming", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_MAX_RECONNECT = env->getStaticIntField(cls, "DEFAULT_MAX_RECONNECT");
              DEFAULT_PORT = env->getStaticIntField(cls, "DEFAULT_PORT");
              DEFAULT_RECONNECT_DELAY = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY");
              DEFAULT_RECONNECT_DELAY_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY_FACTOR");
              DEFAULT_TIMEOUT = env->getStaticIntField(cls, "DEFAULT_TIMEOUT");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NtripClient::NtripClient(const ::java::lang::String & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_409747bddf859341, a0.this$, a1)) {}

          void NtripClient::addObserver(jint a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_4cc5c5cdb5b5be2f], a0, a1.this$, a2.this$);
          }

          void NtripClient::checkException() const
          {
            env->callVoidMethod(this$, mids$[mid_checkException_ff7cb6c242604316]);
          }

          ::java::lang::String NtripClient::getHost() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_d2c8eb4129821f0e]));
          }

          jint NtripClient::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_d6ab429752e7c267]);
          }

          ::org::orekit::gnss::metric::ntrip::SourceTable NtripClient::getSourceTable() const
          {
            return ::org::orekit::gnss::metric::ntrip::SourceTable(env->callObjectMethod(this$, mids$[mid_getSourceTable_3ac901a526a53433]));
          }

          void NtripClient::setFix(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) const
          {
            env->callVoidMethod(this$, mids$[mid_setFix_a1f752ef84c10e69], a0, a1, a2, a3, a4, a5, a6);
          }

          void NtripClient::setReconnectParameters(jdouble a0, jdouble a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setReconnectParameters_905e65280a4e6722], a0, a1, a2);
          }

          void NtripClient::setTimeout(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeout_8fd427ab23829bf5], a0);
          }

          void NtripClient::startStreaming(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::ntrip::Type & a1, jboolean a2, jboolean a3) const
          {
            env->callVoidMethod(this$, mids$[mid_startStreaming_f037fdaad5f5f57b], a0.this$, a1.this$, a2, a3);
          }

          void NtripClient::stopStreaming(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_stopStreaming_8fd427ab23829bf5], a0);
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
        namespace ntrip {
          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_checkException(t_NtripClient *self);
          static PyObject *t_NtripClient_getHost(t_NtripClient *self);
          static PyObject *t_NtripClient_getPort(t_NtripClient *self);
          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self);
          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data);
          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data);
          static PyGetSetDef t_NtripClient__fields_[] = {
            DECLARE_GET_FIELD(t_NtripClient, host),
            DECLARE_GET_FIELD(t_NtripClient, port),
            DECLARE_GET_FIELD(t_NtripClient, sourceTable),
            DECLARE_SET_FIELD(t_NtripClient, timeout),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NtripClient__methods_[] = {
            DECLARE_METHOD(t_NtripClient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, checkException, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getHost, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getPort, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getSourceTable, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, setFix, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setReconnectParameters, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setTimeout, METH_O),
            DECLARE_METHOD(t_NtripClient, startStreaming, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, stopStreaming, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NtripClient)[] = {
            { Py_tp_methods, t_NtripClient__methods_ },
            { Py_tp_init, (void *) t_NtripClient_init_ },
            { Py_tp_getset, t_NtripClient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NtripClient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NtripClient, t_NtripClient, NtripClient);

          void t_NtripClient::install(PyObject *module)
          {
            installType(&PY_TYPE(NtripClient), &PY_TYPE_DEF(NtripClient), module, "NtripClient", 0);
          }

          void t_NtripClient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "class_", make_descriptor(NtripClient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "wrapfn_", make_descriptor(t_NtripClient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "boxfn_", make_descriptor(boxObject));
            env->getClass(NtripClient::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_MAX_RECONNECT", make_descriptor(NtripClient::DEFAULT_MAX_RECONNECT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_PORT", make_descriptor(NtripClient::DEFAULT_PORT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY_FACTOR", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_TIMEOUT", make_descriptor(NtripClient::DEFAULT_TIMEOUT));
          }

          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NtripClient::initializeClass, 1)))
              return NULL;
            return t_NtripClient::wrap_Object(NtripClient(((t_NtripClient *) arg)->object.this$));
          }
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NtripClient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            NtripClient object((jobject) NULL);

            if (!parseArgs(args, "sI", &a0, &a1))
            {
              INT_CALL(object = NtripClient(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::MessageObserver a2((jobject) NULL);

            if (!parseArgs(args, "Isk", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addObserver(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_NtripClient_checkException(t_NtripClient *self)
          {
            OBJ_CALL(self->object.checkException());
            Py_RETURN_NONE;
          }

          static PyObject *t_NtripClient_getHost(t_NtripClient *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHost());
            return j2p(result);
          }

          static PyObject *t_NtripClient_getPort(t_NtripClient *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(result);
          }

          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;

            if (!parseArgs(args, "IIDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(self->object.setFix(a0, a1, a2, a3, a4, a5, a6));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFix", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jint a2;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.setReconnectParameters(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReconnectParameters", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setTimeout(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;

            if (!parseArgs(args, "sKZZ", ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.startStreaming(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "startStreaming", args);
            return NULL;
          }

          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.stopStreaming(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "stopStreaming", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHost());
            return j2p(value);
          }

          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(value);
          }

          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setTimeout(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeout", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDParser.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDParser::class$ = NULL;
        jmethodID *CRDParser::mids$ = NULL;
        bool CRDParser::live$ = false;
        ::java::lang::String *CRDParser::DEFAULT_CRD_SUPPORTED_NAMES = NULL;

        jclass CRDParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_7cb2659f4799e4d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
            mids$[mid_getTimeScale_5e2cac12ab8da943] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_parse_1826a80a322e280c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CRD;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CRD_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_CRD_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDParser::CRDParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        CRDParser::CRDParser(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cb2659f4799e4d2, a0.this$)) {}

        ::org::orekit::time::TimeScale CRDParser::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_5e2cac12ab8da943]));
        }

        ::org::orekit::files::ilrs::CRD CRDParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CRD(env->callObjectMethod(this$, mids$[mid_parse_1826a80a322e280c], a0.this$));
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
        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self);
        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg);
        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data);
        static PyGetSetDef t_CRDParser__fields_[] = {
          DECLARE_GET_FIELD(t_CRDParser, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDParser__methods_[] = {
          DECLARE_METHOD(t_CRDParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDParser)[] = {
          { Py_tp_methods, t_CRDParser__methods_ },
          { Py_tp_init, (void *) t_CRDParser_init_ },
          { Py_tp_getset, t_CRDParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDParser, t_CRDParser, CRDParser);

        void t_CRDParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDParser), &PY_TYPE_DEF(CRDParser), module, "CRDParser", 0);
        }

        void t_CRDParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "class_", make_descriptor(CRDParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "wrapfn_", make_descriptor(t_CRDParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDParser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "DEFAULT_CRD_SUPPORTED_NAMES", make_descriptor(j2p(*CRDParser::DEFAULT_CRD_SUPPORTED_NAMES)));
        }

        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDParser::initializeClass, 1)))
            return NULL;
          return t_CRDParser::wrap_Object(CRDParser(((t_CRDParser *) arg)->object.this$));
        }
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CRDParser object((jobject) NULL);

              INT_CALL(object = CRDParser());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CRDParser object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CRDParser(a0));
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

        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CRD::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }

        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
      }
    }
  }
}
